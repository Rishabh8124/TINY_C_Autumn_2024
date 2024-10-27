%{
    #include "tinyC3_22CS10058_22CS10063.h"

    int yylex();
    void yyerror(char *s);
    extern int yylineno; // Defined and maintained by Flex
    extern char *yytext; // Defined and maintained by Flex

    SymbolTable * global_table = new SymbolTable("global");
    SymbolTable * current_table = global_table;
    stack<SymbolTable *> symboltables;

    QuadArray three_address_code;
    int temporary_count, line_count;
%}

%union {string lexval; Expression expr;}

%nonassoc RIGHT_PARANTHESIS
%nonassoc ELSE

%start TRANSLATIONAL_UNIT

%token <lexval> IDENTIFIER
%token <lexval> ASSIGNMENT_OPERATORS
%token <lexval> STRING_LITERAL
%token <lexval> CONSTANT

%token AUTO
%token RESTRICT
%token UNSIGNED
%token BREAK
%token EXTERN
%token RETURN
%token VOID
%token CASE
%token FLOAT
%token SHORT
%token VOLATILE
%token CHAR
%token FOR
%token SIGNED
%token WHILE
%token CONST
%token GOTO
%token SIZEOF
%token BOOL
%token CONTINUE
%token IF
%token STATIC
%token COMPLEX
%token DEFAULT
%token INLINE
%token IMAGINARY
%token DO
%token INT
%token SWITCH
%token DOUBLE
%token LONG
%token REGISTER
%token LESS_THAN
%token LESS_THAN_EQUAL_TO
%token GREATER_THAN
%token GREATER_THAN_EQUAL_TO
%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token LEFT_PARANTHESIS
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET
%token DOT
%token POINTER_ACCESS
%token INCREMENT_OPERATOR
%token DECREMENT_OPERATOR
%token DIVIDE_OPERATOR
%token REMAINDER_OPERATOR
%token SHIFT_LEFT_OPERATOR
%token SHIFT_RIGHT_OPERATOR
%token EQUALITY_OPERATOR
%token NON_EQUALITY_OPERATOR
%token XOR_OPERATOR
%token BITWISE_OR_OPERATOR
%token BITWISE_AND_OPERATOR
%token LOGICAL_AND_OPERATOR
%token LOGICAL_OR_OPERATOR
%token TERNARY_OPERATOR
%token TERNARY_SEPERATOR
%token SEMI_COLON
%token COMMA
%token TRIPLE_DOT
%token ADDITION_OPERATOR
%token MULTIPLICATION_OPERATOR
%token SUBTRACTION_OPERATOR
%token NOT_OPERATOR
%token NEGATION_OPERATOR
%token EQUAL_OPERATOR

%type <expr> PRIMARY_EXPRESSION
%type ARGUMENT_EXPRESSION_LIST_OPT
%type EXPRESSION
%type CONSTANT_EXPRESSION
%type POSTFIX_EXPRESSION
%type ARGUMENT_EXPRESSION_LIST
%type ASSIGNMENT_EXPRESSION
%type UNARY_EXPRESSION
%type CAST_EXPRESSION
%type TYPE_NAME
%type UNARY_OPEARATOR
%type MULTIPLICATIVE_EXPRESSION
%type ADDITIVE_EXPRESSION
%type SHIFT_EXPRESSION
%type RELATIONAL_EXPRESSION
%type EQUALITY_EXPRESSION
%type AND_EXPRESSION
%type EXCLUSIVE_OR_EXPRESSION
%type INCLUSIVE_OR_EXPRESSION
%type LOGICAL_AND_EXPRESSION
%type LOGICAL_OR_EXPRESSION
%type CONDITIONAL_EXPRESSION
%type ASSIGNMENT_OPERATOR
%type TRANSLATIONAL_UNIT

%type DECLARATION
%type DECLARATION_SPECIFIERS
%type INIT_DECLARATOR_LIST
%type INIT_DECLARATOR
%type STORAGE_CLASS_SPECIFIER
%type TYPE_SPECIFIER
%type SPECIFIER_QUALIFIER_LIST
%type TYPE_QUALIFIER
%type FUNCTION_SPECIFIER
%type DECLARATOR
%type DIRECT_DECLARATOR
%type POINTER
%type TYPE_QUALIFIER_LIST
%type PARAMETER_TYPE_LIST
%type PARAMETER_LIST
%type PARAMETER_DECLARATION
%type IDENTIFIER_LIST

%type INITIALIZER
%type INITIALIZER_LIST
%type DESIGNATION
%type DESIGNATOR_LIST
%type DESIGNATOR

%type STATEMENT
%type LABELED_STATEMENT
%type COMPOUND_STATEMENT
%type BLOCK_ITEM_LIST
%type BLOCK_ITEM
%type EXPRESSION_STATEMENT
%type SELECTION_STATEMENT
%type ITERATION_STATEMENT
%type JUMP_STATEMENT
%type EXTERNAL_DECLARATION
%type FUNCTION_DEFINITION
%type DECLARATION_LIST
%type DECLARATION_LIST_OPT
%type INIT_DECLARATOR_LIST_OPT
%type DECLARATION_SPECIFIERS_OPT
%type SPECIFIER_QUALIFIER_LIST_OPT
%type POINTER_OPT
%type TYPE_QUALIFIER_LIST_OPT
%type ASSIGNMENT_EXPRESSION_OPT
%type IDENTIFIER_LIST_OPT
%type DESIGNATION_OPT
%type EXPRESSION_OPT
%type BLOCK_ITEM_LIST_OPT

%%

// Expressions
PRIMARY_EXPRESSION              : IDENTIFIER                                    {
                                                                                    $$.symbol = current_table.lookup($1);
                                                                                    $$.type = 0;
                                                                                }
                                | CONSTANT                                      { }
                                | STRING_LITERAL                                { }
                                | LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS { $$ = $2; }
                                ;

POSTFIX_EXPRESSION              : PRIMARY_EXPRESSION                                                                                            { }
                                | POSTFIX_EXPRESSION LEFT_SQUARE_BRACKET EXPRESSION RIGHT_SQUARE_BRACKET                                        { }
                                | POSTFIX_EXPRESSION LEFT_PARANTHESIS ARGUMENT_EXPRESSION_LIST_OPT RIGHT_PARANTHESIS                            { }
                                | POSTFIX_EXPRESSION DOT IDENTIFIER                                                                             { }
                                | POSTFIX_EXPRESSION POINTER_ACCESS IDENTIFIER                                                                  { }
                                | POSTFIX_EXPRESSION INCREMENT_OPERATOR                                                                         { }
                                | POSTFIX_EXPRESSION DECREMENT_OPERATOR                                                                         { }
                                | LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET          { }
                                | LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET    { }
                                ;

ARGUMENT_EXPRESSION_LIST        : ASSIGNMENT_EXPRESSION                                 { }
                                | ARGUMENT_EXPRESSION_LIST COMMA ASSIGNMENT_EXPRESSION  { }
                                ;

ARGUMENT_EXPRESSION_LIST_OPT    : ARGUMENT_EXPRESSION_LIST  { }
                                |                           { }
                                ;

UNARY_EXPRESSION                : POSTFIX_EXPRESSION                                    { }
                                | INCREMENT_OPERATOR UNARY_EXPRESSION                   { }
                                | DECREMENT_OPERATOR UNARY_EXPRESSION                   { }
                                | UNARY_OPEARATOR CAST_EXPRESSION                       { }
                                | SIZEOF UNARY_EXPRESSION                               { }
                                | SIZEOF LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS   { }
                                ;

UNARY_OPEARATOR                 : ADDITION_OPERATOR         { }
                                | SUBTRACTION_OPERATOR      { }
                                | MULTIPLICATION_OPERATOR   { }
                                | BITWISE_AND_OPERATOR      { }
                                | NEGATION_OPERATOR         { }
                                | NOT_OPERATOR              { }
                                ;

CAST_EXPRESSION                 : UNARY_EXPRESSION                                              { }
                                | LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS CAST_EXPRESSION  { }
                                ;

MULTIPLICATIVE_EXPRESSION       : CAST_EXPRESSION                                                   { }
                                | MULTIPLICATIVE_EXPRESSION MULTIPLICATION_OPERATOR CAST_EXPRESSION { }
                                | MULTIPLICATIVE_EXPRESSION DIVIDE_OPERATOR CAST_EXPRESSION         { }
                                | MULTIPLICATIVE_EXPRESSION REMAINDER_OPERATOR CAST_EXPRESSION      { }
                                ;

ADDITIVE_EXPRESSION             : MULTIPLICATIVE_EXPRESSION                                             { }
                                | ADDITIVE_EXPRESSION ADDITION_OPERATOR MULTIPLICATIVE_EXPRESSION       { }
                                | ADDITIVE_EXPRESSION SUBTRACTION_OPERATOR MULTIPLICATIVE_EXPRESSION    { }
                                ;

SHIFT_EXPRESSION                : ADDITIVE_EXPRESSION                                       { }
                                | SHIFT_EXPRESSION SHIFT_LEFT_OPERATOR ADDITIVE_EXPRESSION  { }
                                | SHIFT_EXPRESSION SHIFT_RIGHT_OPERATOR ADDITIVE_EXPRESSION { }
                                ;

RELATIONAL_EXPRESSION           : SHIFT_EXPRESSION                                              { }
                                | RELATIONAL_EXPRESSION LESS_THAN SHIFT_EXPRESSION              { }
                                | RELATIONAL_EXPRESSION GREATER_THAN SHIFT_EXPRESSION           { }
                                | RELATIONAL_EXPRESSION LESS_THAN_EQUAL_TO SHIFT_EXPRESSION     { }
                                | RELATIONAL_EXPRESSION GREATER_THAN_EQUAL_TO SHIFT_EXPRESSION  { }
                                ;

EQUALITY_EXPRESSION             : RELATIONAL_EXPRESSION                                             { }
                                | EQUALITY_EXPRESSION EQUALITY_OPERATOR RELATIONAL_EXPRESSION       { }
                                | EQUALITY_EXPRESSION NON_EQUALITY_OPERATOR RELATIONAL_EXPRESSION   { }
                                ;

AND_EXPRESSION                  : EQUALITY_EXPRESSION                                       { }
                                | AND_EXPRESSION BITWISE_AND_OPERATOR EQUALITY_EXPRESSION   { }
                                ;

EXCLUSIVE_OR_EXPRESSION         : AND_EXPRESSION                                        { }
                                | EXCLUSIVE_OR_EXPRESSION XOR_OPERATOR AND_EXPRESSION   { }
                                ;

INCLUSIVE_OR_EXPRESSION         : EXCLUSIVE_OR_EXPRESSION                                               { }
                                | INCLUSIVE_OR_EXPRESSION BITWISE_OR_OPERATOR EXCLUSIVE_OR_EXPRESSION   { }
                                ;

LOGICAL_AND_EXPRESSION          : INCLUSIVE_OR_EXPRESSION                                               { }
                                | LOGICAL_AND_EXPRESSION LOGICAL_AND_OPERATOR INCLUSIVE_OR_EXPRESSION   { }
                                ;

LOGICAL_OR_EXPRESSION           : LOGICAL_AND_EXPRESSION                                            { }
                                | LOGICAL_OR_EXPRESSION LOGICAL_OR_OPERATOR LOGICAL_AND_EXPRESSION  { }
                                ;

CONDITIONAL_EXPRESSION          : LOGICAL_OR_EXPRESSION                                                                         { }
                                | LOGICAL_OR_EXPRESSION TERNARY_OPERATOR EXPRESSION TERNARY_SEPERATOR CONDITIONAL_EXPRESSION    { }
                                ;

ASSIGNMENT_EXPRESSION           : CONDITIONAL_EXPRESSION                                        { }
                                | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION    { }
                                ;

ASSIGNMENT_OPERATOR             : EQUAL_OPERATOR        { }
                                | ASSIGNMENT_OPERATORS  { }
                                ;

EXPRESSION                      : ASSIGNMENT_EXPRESSION                     { }
                                | EXPRESSION COMMA ASSIGNMENT_EXPRESSION    { }
                                ;

CONSTANT_EXPRESSION             : CONDITIONAL_EXPRESSION    { }
                                ;

/*Declarations*/

DECLARATION                     : DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST_OPT SEMI_COLON 
                                ;

INIT_DECLARATOR_LIST_OPT        : INIT_DECLARATOR_LIST { } 
                                |                       { } 
                                ;

DECLARATION_SPECIFIERS          :   STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS_OPT 
                                |   TYPE_SPECIFIER DECLARATION_SPECIFIERS_OPT           
                                |   TYPE_QUALIFIER DECLARATION_SPECIFIERS_OPT           
                                |   FUNCTION_SPECIFIER DECLARATION_SPECIFIERS_OPT       
                                ;

DECLARATION_SPECIFIERS_OPT      :   DECLARATION_SPECIFIERS  { } 
                                |                           { } 
                                ;                            

INIT_DECLARATOR_LIST            :   INIT_DECLARATOR { } 
                                |   INIT_DECLARATOR_LIST COMMA INIT_DECLARATOR { } 
                                ;

INIT_DECLARATOR                 :   DECLARATOR { } 
                                |   DECLARATOR EQUAL_OPERATOR INITIALIZER { } 
                                ;

STORAGE_CLASS_SPECIFIER         :   EXTERN { } 
                                |   STATIC { } 
                                |   AUTO { } 
                                |   REGISTER { } 
                                ;

TYPE_SPECIFIER                  :   VOID { } 
                                |   CHAR { } 
                                |   SHORT { } 
                                |   INT { } 
                                |   LONG { } 
                                |   FLOAT { } 
                                |   DOUBLE { } 
                                |   SIGNED { } 
                                |   UNSIGNED { } 
                                |   BOOL { } 
                                |   COMPLEX { } 
                                |   IMAGINARY { } 
                                ;

SPECIFIER_QUALIFIER_LIST        :   TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST_OPT { } 
                                |   TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST_OPT { } 
                                ;

SPECIFIER_QUALIFIER_LIST_OPT    :   SPECIFIER_QUALIFIER_LIST { } 
                                |                               { } 
                                ;

TYPE_QUALIFIER                  :   CONST { } 
                                |   RESTRICT { } 
                                |   VOLATILE { } 
                                ;

FUNCTION_SPECIFIER              :   INLINE { } 
                                ;

DECLARATOR                      :   POINTER_OPT DIRECT_DECLARATOR { } 
                                ;

POINTER_OPT                     :   POINTER { } 
                                |           { } 
                                ;

DIRECT_DECLARATOR               :   IDENTIFIER { } 
                                |   LEFT_PARANTHESIS DECLARATOR RIGHT_PARANTHESIS { } 
                                |   DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT RIGHT_SQUARE_BRACKET { } 
                                |   DIRECT_DECLARATOR LEFT_SQUARE_BRACKET STATIC TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET { } 
                                |   DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST STATIC ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET { } 
                                |   DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT MULTIPLICATION_OPERATOR RIGHT_SQUARE_BRACKET { } 
                                |   DIRECT_DECLARATOR LEFT_PARANTHESIS PARAMETER_TYPE_LIST RIGHT_PARANTHESIS { } 
                                |   DIRECT_DECLARATOR LEFT_PARANTHESIS IDENTIFIER_LIST_OPT RIGHT_PARANTHESIS { } 
                                ;

ASSIGNMENT_EXPRESSION_OPT       :   ASSIGNMENT_EXPRESSION { } 
                                |                           { } 
                                ;

POINTER                         :   MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT { } 
                                |   MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT POINTER { } 
                                ;

TYPE_QUALIFIER_LIST             :   TYPE_QUALIFIER { } 
                                |   TYPE_QUALIFIER_LIST TYPE_QUALIFIER { } 
                                ;

TYPE_QUALIFIER_LIST_OPT         :   TYPE_QUALIFIER_LIST { } 
                                |                                               { } 
                                ;

PARAMETER_TYPE_LIST             :   PARAMETER_LIST { }                  
                                |   PARAMETER_LIST COMMA TRIPLE_DOT { } 
                                ;

PARAMETER_LIST                  :   PARAMETER_DECLARATION { }                       
                                |   PARAMETER_LIST COMMA PARAMETER_DECLARATION { } 
                                ;

PARAMETER_DECLARATION           :   DECLARATION_SPECIFIERS DECLARATOR { }           
                                |   DECLARATION_SPECIFIERS { } 
                                ;

IDENTIFIER_LIST                 :   IDENTIFIER { }                                  
                                |   IDENTIFIER_LIST COMMA IDENTIFIER { } 
                                ;

IDENTIFIER_LIST_OPT             :   IDENTIFIER_LIST { }     
                                |                                               { } 
                                ;

TYPE_NAME                       :   SPECIFIER_QUALIFIER_LIST { }                    
                                ;

INITIALIZER                     :   ASSIGNMENT_EXPRESSION { }                       
                                |   LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET { } 
                                |   LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET { } 
                                ;

INITIALIZER_LIST                :   DESIGNATION_OPT INITIALIZER { }    
                                |   INITIALIZER_LIST COMMA DESIGNATION_OPT INITIALIZER { } 
                                ;

DESIGNATION                     :   DESIGNATOR_LIST EQUAL_OPERATOR { }  
                                ;

DESIGNATION_OPT                 :   DESIGNATION { }  
                                |                                               { } 
                                ;

DESIGNATOR_LIST                 :   DESIGNATOR { }                                  
                                |   DESIGNATOR_LIST DESIGNATOR { } 
                                ;

DESIGNATOR                      :   LEFT_SQUARE_BRACKET CONSTANT_EXPRESSION RIGHT_SQUARE_BRACKET { }  
                                |   DOT IDENTIFIER { }      
                                ;

              
// statements
STATEMENT                       : LABELED_STATEMENT    { } 
                                | COMPOUND_STATEMENT   { } 
                                | EXPRESSION_STATEMENT { } 
                                | SELECTION_STATEMENT  { } 
                                | ITERATION_STATEMENT  { } 
                                | JUMP_STATEMENT       { } 
                                ;

LABELED_STATEMENT               : IDENTIFIER TERNARY_SEPERATOR STATEMENT  { } 
                                | CASE CONSTANT_EXPRESSION TERNARY_SEPERATOR STATEMENT { } 
                                | DEFAULT TERNARY_SEPERATOR STATEMENT { } 
                                ;

COMPOUND_STATEMENT              : LEFT_CURLY_BRACKET BLOCK_ITEM_LIST_OPT RIGHT_CURLY_BRACKET { } 
                                ;

BLOCK_ITEM_LIST                 : BLOCK_ITEM                 { } 
                                | BLOCK_ITEM_LIST BLOCK_ITEM { } 
                                ;

BLOCK_ITEM                      : DECLARATION { } 
                                | STATEMENT   { } 
                                ;

EXPRESSION_STATEMENT            : EXPRESSION_OPT SEMI_COLON { } 
                                ;

SELECTION_STATEMENT             : IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT { } 
                                | IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT ELSE STATEMENT { } 
                                | SWITCH LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT { } 
                                ;

ITERATION_STATEMENT             : WHILE LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT { } 
                                | DO STATEMENT WHILE LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS SEMI_COLON { } 
                                | FOR LEFT_PARANTHESIS EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT { } 
                                | FOR LEFT_PARANTHESIS DECLARATION EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT { } 
                                ;

JUMP_STATEMENT                  : GOTO IDENTIFIER SEMI_COLON { } 
                                | CONTINUE SEMI_COLON        { } 
                                | BREAK SEMI_COLON            { } 
                                | RETURN EXPRESSION_OPT SEMI_COLON { } 
                                ;

// Optional non-terminals
BLOCK_ITEM_LIST_OPT             : BLOCK_ITEM_LIST { } 
                                | /* empty */     { } 
                                ;

EXPRESSION_OPT                  : EXPRESSION  { } 
                                | /* empty */ { } 
                                ;

/* External definitions */

TRANSLATIONAL_UNIT              : EXTERNAL_DECLARATION                                                      { }
                                | TRANSLATIONAL_UNIT EXTERNAL_DECLARATION                                   { }
                                ;

EXTERNAL_DECLARATION            : FUNCTION_DEFINITION                                                       { }
                                | DECLARATION                                                               { }
                                ;

FUNCTION_DEFINITION             : DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST_OPT COMPOUND_STATEMENT { }
                                ;

DECLARATION_LIST                : DECLARATION                                                               { }                                             
                                | DECLARATION_LIST DECLARATION                                              { }
                                ;

DECLARATION_LIST_OPT            : DECLARATION_LIST                                                          { }
                                |                                                                           { }
                                ;                        
%%


void yyerror(char *s) {
    fprintf(stderr, "Error: %s at line %d, near '%s'\n", s, yylineno, yytext);
}