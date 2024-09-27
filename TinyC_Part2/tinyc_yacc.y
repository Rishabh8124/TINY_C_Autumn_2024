%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex();
    void yyerror(char *s);

    typedef struct tree_node {
        char * name;
        char * val;
        struct tree_node * next;
        struct tree_node * child;
    } tree;

    typedef tree * tree_pointer;

    tree_pointer init_node(char * name, char * val, tree_pointer child);
    tree_pointer add_next(tree_pointer root, tree_pointer next);
    void print_parse_tree(tree_pointer root, int depth);

%}

%union {char * val; tree_pointer node;}

%nonassoc RIGHT_PARANTHESIS
%nonassoc ELSE

%start TRANSLATIONAL_UNIT
%token <val> AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF REGISTER UNION
%token <val> IDENTIFIER STRING_LITERAL CONSTANT
%token <val> LESS_THAN LESS_THAN_EQUAL_TO GREATER_THAN GREATER_THAN_EQUAL_TO ESCAPE_OPERATOR LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_PARANTHESIS LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET DOT POINTER_ACCESS INCREMENT_OPERATOR DECREMENT_OPERATOR DIVIDE_OPERATOR REMAINDER_OPERATOR SHIFT_LEFT_OPERATOR SHIFT_RIGHT_OPERATOR EQUALITY_OPERATOR NON_EQUALITY_OPERATOR XOR_OPERATOR BITWISE_OR_OPERATOR BITWISE_AND_OPERATOR LOGICAL_AND_OPERATOR LOGICAL_OR_OPERATOR TERNARY_OPERATOR TERNARY_SEPERATOR SEMI_COLON COMMA MACRO_OPERATOR TRIPLE_DOT
%token <val> ADDITION_OPERATOR MULTIPLICATION_OPERATOR SUBTRACTION_OPERATOR NOT_OPERATOR NEGATION_OPERATOR EQUAL_OPERATOR ASSIGNMENT_OPERATORS

%type <node> ARGUMENT_EXPRESSION_LIST_OPT EXPRESSION CONSTANT_EXPRESSION PRIMARY_EXPRESSION POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST ASSIGNMENT_EXPRESSION UNARY_EXPRESSION CAST_EXPRESSION
%type <node> TYPE_NAME UNARY_OPEARATOR MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION
%type <node> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION CONDITIONAL_EXPRESSION
%type <node> ASSIGNMENT_OPERATOR

%type <node> DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST TYPE_QUALIFIER
%type <node> FUNCTION_SPECIFIER DECLARATOR DIRECT_DECLARATOR POINTER TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION IDENTIFIER_LIST 
%type <node> INITIALIZER INITIALIZER_LIST DESIGNATION DESIGNATOR_LIST DESIGNATOR

%type <node> STATEMENT LABELED_STATEMENT COMPOUND_STATEMENT BLOCK_ITEM_LIST BLOCK_ITEM EXPRESSION_STATEMENT SELECTION_STATEMENT ITERATION_STATEMENT JUMP_STATEMENT
%type <node> EXTERNAL_DECLARATION FUNCTION_DEFINITION DECLARATION_LIST DECLARATION_LIST_OPT
%type <node> INIT_DECLARATOR_LIST_OPT DECLARATION_SPECIFIERS_OPT SPECIFIER_QUALIFIER_LIST_OPT POINTER_OPT TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT
%type <node> IDENTIFIER_LIST_OPT DESIGNATION_OPT

%%

// Expressions
PRIMARY_EXPRESSION : IDENTIFIER         {}
                   | CONSTANT           {}
                   | STRING_LITERAL     {}
                   | LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS {}
                   ;

POSTFIX_EXPRESSION : PRIMARY_EXPRESSION                                  {}
                   | POSTFIX_EXPRESSION LEFT_SQUARE_BRACKET EXPRESSION RIGHT_SQUARE_BRACKET                {}
                   | POSTFIX_EXPRESSION LEFT_PARANTHESIS ARGUMENT_EXPRESSION_LIST_OPT RIGHT_PARANTHESIS {}
                   | POSTFIX_EXPRESSION DOT IDENTIFIER {}
                   | POSTFIX_EXPRESSION POINTER_ACCESS IDENTIFIER {}
                   | POSTFIX_EXPRESSION INCREMENT_OPERATOR {}
                   | POSTFIX_EXPRESSION DECREMENT_OPERATOR {}                   
                   | LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET {}
                   | LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET {}
                   ;                   

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION {}
                         | ARGUMENT_EXPRESSION_LIST COMMA ASSIGNMENT_EXPRESSION {}
                         ;

ARGUMENT_EXPRESSION_LIST_OPT : ARGUMENT_EXPRESSION_LIST {}
                             |  {}
                             ;

UNARY_EXPRESSION : POSTFIX_EXPRESSION {}
                 | INCREMENT_OPERATOR UNARY_EXPRESSION {}
                 | DECREMENT_OPERATOR UNARY_EXPRESSION {}
                 | UNARY_OPEARATOR CAST_EXPRESSION {}
                 | SIZEOF UNARY_EXPRESSION {}
                 | SIZEOF LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS {}
                 ;

UNARY_OPEARATOR : ADDITION_OPERATOR {}
                | SUBTRACTION_OPERATOR {}
                | MULTIPLICATION_OPERATOR {}
                | BITWISE_AND_OPERATOR {}
                | NEGATION_OPERATOR {}
                | NOT_OPERATOR {}
                ;

CAST_EXPRESSION : UNARY_EXPRESSION {}
                | LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS CAST_EXPRESSION {}
                ;

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION {}
                          | MULTIPLICATIVE_EXPRESSION MULTIPLICATION_OPERATOR CAST_EXPRESSION {}
                          | MULTIPLICATIVE_EXPRESSION DIVIDE_OPERATOR CAST_EXPRESSION {} 
                          | MULTIPLICATIVE_EXPRESSION REMAINDER_OPERATOR CAST_EXPRESSION {}
                          ;

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION {} 
                    | ADDITIVE_EXPRESSION ADDITION_OPERATOR MULTIPLICATIVE_EXPRESSION {} 
                    | ADDITIVE_EXPRESSION SUBTRACTION_OPERATOR MULTIPLICATIVE_EXPRESSION {} 
                    ;

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION {} 
                 | SHIFT_EXPRESSION SHIFT_LEFT_OPERATOR ADDITIVE_EXPRESSION {} 
                 | SHIFT_EXPRESSION SHIFT_RIGHT_OPERATOR ADDITIVE_EXPRESSION {} 
                 ;

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION LESS_THAN SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION GREATER_THAN SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION LESS_THAN_EQUAL_TO SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION GREATER_THAN_EQUAL_TO SHIFT_EXPRESSION {} 
                      ;

EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION {} 
                    | EQUALITY_EXPRESSION EQUALITY_OPERATOR RELATIONAL_EXPRESSION {} 
                    | EQUALITY_EXPRESSION NON_EQUALITY_OPERATOR RELATIONAL_EXPRESSION {} 
                    ;

AND_EXPRESSION : EQUALITY_EXPRESSION {} 
               | AND_EXPRESSION BITWISE_AND_OPERATOR EQUALITY_EXPRESSION {} 
               ;

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION {} 
                        | EXCLUSIVE_OR_EXPRESSION XOR_OPERATOR AND_EXPRESSION {} 
                        ;

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION {} 
                        | INCLUSIVE_OR_EXPRESSION BITWISE_OR_OPERATOR EXCLUSIVE_OR_EXPRESSION {} 
                        ;

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION {} 
                       | LOGICAL_AND_EXPRESSION LOGICAL_AND_OPERATOR INCLUSIVE_OR_EXPRESSION {} 
                       ;

LOGICAL_OR_EXPRESSION : LOGICAL_AND_EXPRESSION {} 
                      | LOGICAL_OR_EXPRESSION LOGICAL_OR_OPERATOR LOGICAL_AND_EXPRESSION {} 
                      ;

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION {} 
                       | LOGICAL_OR_EXPRESSION TERNARY_OPERATOR EXPRESSION TERNARY_SEPERATOR CONDITIONAL_EXPRESSION {}
                       ;

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION {}
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION {}
                      ;

ASSIGNMENT_OPERATOR : EQUAL_OPERATOR {}
                    | ASSIGNMENT_OPERATORS {}
                    ;

EXPRESSION : ASSIGNMENT_EXPRESSION {}
           | EXPRESSION COMMA ASSIGNMENT_EXPRESSION {}
           ;

CONSTANT_EXPRESSION : CONDITIONAL_EXPRESSION {}
                    ;

/*Declarations*/

DECLARATION             : DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST_OPT SEMI_COLON   { }
                        ;

INIT_DECLARATOR_LIST_OPT    : INIT_DECLARATOR_LIST      { }
                            |   { }
                            ;

DECLARATION_SPECIFIERS      :   STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS_OPT  { }
                            |   TYPE_SPECIFIER DECLARATION_SPECIFIERS_OPT
                            |   TYPE_QUALIFIER DECLARATION_SPECIFIERS_OPT
                            |   FUNCTION_SPECIFIER DECLARATION_SPECIFIERS_OPT
                            ;

DECLARATION_SPECIFIERS_OPT  :   DECLARATION_SPECIFIERS          { }
                            |       { }
                            ;                            

INIT_DECLARATOR_LIST        :   INIT_DECLARATOR             { }
                            |   INIT_DECLARATOR_LIST COMMA INIT_DECLARATOR    { }
                            ;

INIT_DECLARATOR         :   DECLARATOR      { }
                        |   DECLARATOR EQUAL_OPERATOR INITIALIZER  { }
                        ;

STORAGE_CLASS_SPECIFIER :   EXTERN  { }
                        |   STATIC  { }
                        |   AUTO    { }
                        |   REGISTER { }
                        ;

TYPE_SPECIFIER  :      VOID   { }
                |      CHAR  { }
                |      SHORT { }
                |      INT   { }
                |      LONG  { }
                |      FLOAT { }
                |      DOUBLE    { }
                |      SIGNED    { }
                |      UNSIGNED  { }
                |      BOOL      { }
                |      COMPLEX   { }
                |      IMAGINARY { }
                ;

SPECIFIER_QUALIFIER_LIST    :   TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST_OPT
                            |   TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST_OPT
                            ;

SPECIFIER_QUALIFIER_LIST_OPT    :   SPECIFIER_QUALIFIER_LIST            { }
                                |   { }
                                ;

TYPE_QUALIFIER      :    CONST      { }
                    | RESTRICT          { }
                    | VOLATILE          { }
                    ;

FUNCTION_SPECIFIER  :    INLINE         { }
                    ;

DECLARATOR  :    POINTER_OPT DIRECT_DECLARATOR  { }
            ;

POINTER_OPT :   POINTER     { }
            |   { }
            ;

DIRECT_DECLARATOR       :   IDENTIFIER                                                                  { }
                        | LEFT_PARANTHESIS DECLARATOR RIGHT_PARANTHESIS                                                            { }
                        | DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT RIGHT_SQUARE_BRACKET   { }
                        | DIRECT_DECLARATOR LEFT_SQUARE_BRACKET STATIC TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET{ }
                        | DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST STATIC ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET    { }
                        | DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT MULTIPLICATION_OPERATOR RIGHT_SQUARE_BRACKET     { }
                        | DIRECT_DECLARATOR LEFT_PARANTHESIS PARAMETER_TYPE_LIST RIGHT_PARANTHESIS                                 { }
                        | DIRECT_DECLARATOR LEFT_PARANTHESIS IDENTIFIER_LIST_OPT RIGHT_PARANTHESIS                                 { }
                        ;

ASSIGNMENT_EXPRESSION_OPT   :   ASSIGNMENT_EXPRESSION           { }
                            |       { }
                            ;

POINTER                 :   MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT 
                        |   MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT POINTER
                        ;

TYPE_QUALIFIER_LIST     :   TYPE_QUALIFIER 
                        |   TYPE_QUALIFIER_LIST TYPE_QUALIFIER 
                        ;

TYPE_QUALIFIER_LIST_OPT :   TYPE_QUALIFIER_LIST                         { }
                        |                                               { }
                        ;

PARAMETER_TYPE_LIST     :   PARAMETER_LIST 
                        |   PARAMETER_LIST COMMA TRIPLE_DOT             { }

PARAMETER_LIST          :   PARAMETER_DECLARATION 
                        |   PARAMETER_LIST COMMA PARAMETER_DECLARATION    { }

PARAMETER_DECLARATION   :   DECLARATION_SPECIFIERS DECLARATOR           { } 
                        |   DECLARATION_SPECIFIERS                      { }
                        ;

IDENTIFIER_LIST         :   IDENTIFIER                                  { }
                        |   IDENTIFIER_LIST COMMA IDENTIFIER            { }
                        ;

IDENTIFIER_LIST_OPT     :   IDENTIFIER_LIST     { }
                        |   { }
                        ;

TYPE_NAME               :   SPECIFIER_QUALIFIER_LIST                    { }
                        ;

INITIALIZER             :   ASSIGNMENT_EXPRESSION                       { }
                        |   LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET      { }
                        |   LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET    { }
                        ;

INITIALIZER_LIST        :   DESIGNATION_OPT INITIALIZER                 { }
                        |   INITIALIZER_LIST COMMA DESIGNATION_OPT INITIALIZER    { }
                        ;

DESIGNATION_OPT         :   DESIGNATION                                 { }
                        |                                               { }
                        ;

DESIGNATION             :   DESIGNATOR_LIST EQUAL_OPERATOR                         { }
                        ;

DESIGNATOR_LIST         :   DESIGNATOR                                  { }
                        |   DESIGNATOR_LIST DESIGNATOR                  { }
                        ;
                        
DESIGNATOR              :   LEFT_SQUARE_BRACKET CONSTANT_EXPRESSION RIGHT_SQUARE_BRACKET                { }
                        |   DOT IDENTIFIER                              { }
                        ;
                
// statements
STATEMENT : LABELED_STATEMENT {} 
          | COMPOUND_STATEMENT {} 
          | EXPRESSION_STATEMENT {} 
          | SELECTION_STATEMENT {} 
          | ITERATION_STATEMENT {} 
          | JUMP_STATEMENT {} 
          ;

LABELED_STATEMENT : IDENTIFIER TERNARY_SEPERATOR STATEMENT {} 
                  | CASE CONSTANT_EXPRESSION TERNARY_SEPERATOR STATEMENT {} 
                  | DEFAULT TERNARY_SEPERATOR STATEMENT {} 
                  ;

COMPOUND_STATEMENT : LEFT_CURLY_BRACKET BLOCK_ITEM_LIST_OPT RIGHT_CURLY_BRACKET {} 
                   ;

BLOCK_ITEM_LIST : BLOCK_ITEM {} 
                | BLOCK_ITEM_LIST BLOCK_ITEM {} 
                ;

BLOCK_ITEM : DECLARATION {} 
           | STATEMENT {} 
           ;

EXPRESSION_STATEMENT : EXPRESSION_OPT SEMI_COLON {} 
                     ;

SELECTION_STATEMENT : IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT {} 
                    | IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT ELSE STATEMENT {} 
                    | SWITCH LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT {} 
                    ;

ITERATION_STATEMENT : WHILE LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT {} 
                    | DO STATEMENT WHILE LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS SEMI_COLON {} 
                    | FOR LEFT_PARANTHESIS EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT ';' EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT {} 
                    | FOR LEFT_PARANTHESIS DECLARATION EXPRESSION_OPT ';' EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT {} 
                    ;

JUMP_STATEMENT : GOTO IDENTIFIER SEMI_COLON {} 
               | CONTINUE SEMI_COLON {} 
               | BREAK SEMI_COLON {} 
               | RETURN EXPRESSION_OPT SEMI_COLON {} 
               ;

// Optional non-terminals
BLOCK_ITEM_LIST_OPT : BLOCK_ITEM_LIST {} 
                    | /* empty */ {} 
                    ;

EXPRESSION_OPT : EXPRESSION {} 
               | /* empty */ {} 
               ;

/*External definitions*/

TRANSLATIONAL_UNIT      :   EXTERNAL_DECLARATION                        { }
                        |   TRANSLATIONAL_UNIT EXTERNAL_DECLARATION     { }
                        ;

EXTERNAL_DECLARATION    :   FUNCTION_DEFINITION                         { }
                        |   DECLARATION                                 { }
                        ;

FUNCTION_DEFINITION     :   DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST_OPT COMPOUND_STATEMENT   { }
                        ;

DECLARATION_LIST        :   DECLARATION                                 { }                                             
                        |   DECLARATION_LIST DECLARATION                { }
                        ;

DECLARATION_LIST_OPT    :   DECLARATION_LIST                            { }
                        |                                               { }
                        ;                        
%%

void yyerror(char * s) {
    printf("\nError: %s\n", s);

    exit(0);
    return;
}