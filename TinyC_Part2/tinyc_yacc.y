%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex();
    void yyerror(char *s);
%}

%union {int num;}
%start TRANSLATIONAL_UNIT
%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYOEDEF ELSE REGISTER UNION
%token IDENTIFIER INTEGER_CONSTANT FLOATING_CONSTANT CHARACTER_CONSTANT STRING_LITERAL PUNCTUATOR CONSTANT
%token MULTI_LINE_COMMENT SINGLE_LINE_COMMENT SPACE
%token LESS_THAN LESS_THAN_EQUAL_TO GREATER_THAN GREATER_THAN_EQUAL_TO ESCAPE_OPERATOR LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET DOT POINTER_ACCESS INCREMENT_OPERATOR DECREMENT_OPERATOR DIVIDE_OPERATOR REMAINDER_OPERATOR SHIFT_LEFT_OPERATOR SHIFT_RIGHT_OPERATOR EQUALITY_OPERATOR NON_EQUALITY_OPERATOR XOR_OPERATOR BITWISE_OR_OPERATOR BITWISE_AND_OPERATOR LOGICAL_AND_OPERATOR LOGICAL_OR_OPERATOR TERNARY_OPERATOR TERNARY_SEPERATOR SEMI_COLON COMMA MACRO_OPERATOR TRIPLE_DOT

%type ARGUMENT_EXPRESSION_LIST_OPT EXPRESSION CONSTANT_EXPRESSION PRIMARY_EXPRESSION POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST ASSIGNMENT_EXPRESSION UNARY_EXPRESSION CAST_EXPRESSION
%type TYPE_NAME UNARY_OPEARATOR MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION
%type AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION CONDITIONAL_EXPRESSION
%type ASSIGNMENT_OPERATOR

%type DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST TYPE_QUALIFIER
%type FUNCTION_SPECIFIER DECLARATOR DIRECT_DECLARATOR POINTER TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION IDENTIFIER_LIST 
%type INITIALIZER INITIALIZER_LIST DESIGNATION DESIGNATOR_LIST DESIGNATOR

%type STATEMENT LABELED_STATEMENT COMPOUND_STATEMENT BLOCK_ITEM_LIST BLOCK_ITEM EXPRESSION_STATEMENT SELECTION_STATEMENT ITERATION_STATEMENT JUMP_STATEMENT
%type EXTERNAL_DECLARATION FUNCTION_DEFINITION DECLARATION_LIST DECLARATION_LIST_OPT

%%

// Expressions
PRIMARY_EXPRESSION : IDENTIFIER         {}
                   | CONSTANT           {}
                   | STRING_LITERAL     {}
                   | '(' EXPRESSION ')' {}
                   ;

POSTFIX_EXPRESSION : PRIMARY_EXPRESSION                                  {}
                   | POSTFIX_EXPRESSION '[' EXPRESSION']'                {}
                   | POSTFIX_EXPRESSION '(' ARGUMENT_EXPRESSION_LIST_OPT ')' {}
                   | POSTFIX_EXPRESSION '.' IDENTIFIER {}
                   | POSTFIX_EXPRESSION '-' '>' IDENTIFIER {}
                   | POSTFIX_EXPRESSION '+' '+' {}
                   | POSTFIX_EXPRESSION '-' '-' {}                   
                   | '(' TYPE_NAME ')' '{' INITIALIZER_LIST '}' {}
                   | '(' TYPE_NAME ')' '{' INITIALIZER_LIST ',' '}' {}
                   ;                   

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION {}
                         | ARGUMENT_EXPRESSION_LIST ',' ASSIGNMENT_EXPRESSION {}
                         ;

ARGUMENT_EXPRESSION_LIST_OPT : ARGUMENT_EXPRESSION_LIST {}
                             |  {}
                             ;

UNARY_EXPRESSION : POSTFIX_EXPRESSION {}
                 | '+' '+' UNARY_EXPRESSION {}
                 | '-' '-' UNARY_EXPRESSION {}
                 | UNARY_OPEARATOR CAST_EXPRESSION {}
                 | SIZEOF UNARY_EXPRESSION {}
                 | SIZEOF '(' TYPE_NAME ')' {}
                 ;

UNARY_OPEARATOR : '+' {}
                | '-' {}
                | '*' {}
                | '&' {}
                | '~' {}
                | '!' {}
                ;

CAST_EXPRESSION : UNARY_EXPRESSION {}
                | '(' TYPE_NAME ')' CAST_EXPRESSION {}
                ;

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION {}
                          | MULTIPLICATIVE_EXPRESSION '*' CAST_EXPRESSION {}
                          | MULTIPLICATIVE_EXPRESSION '/' CAST_EXPRESSION {} 
                          | MULTIPLICATIVE_EXPRESSION '%' CAST_EXPRESSION {}
                          ;

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION {} 
                    | ADDITIVE_EXPRESSION '+' MULTIPLICATIVE_EXPRESSION {} 
                    | ADDITIVE_EXPRESSION '-' MULTIPLICATIVE_EXPRESSION {} 
                    ;

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION {} 
                 | SHIFT_EXPRESSION '<''<' ADDITIVE_EXPRESSION {} 
                 | SHIFT_EXPRESSION '>''>' ADDITIVE_EXPRESSION {} 
                 ;

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION '<' SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION '>' SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION '<' '=' SHIFT_EXPRESSION {} 
                      | RELATIONAL_EXPRESSION '>' '=' SHIFT_EXPRESSION {} 
                      ;

EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION {} 
                    | EQUALITY_EXPRESSION '=''=' RELATIONAL_EXPRESSION {} 
                    | EQUALITY_EXPRESSION '!''=' RELATIONAL_EXPRESSION {} 
                    ;

AND_EXPRESSION : EQUALITY_EXPRESSION {} 
               | AND_EXPRESSION '&' EQUALITY_EXPRESSION {} 
               ;

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION {} 
                        | EXCLUSIVE_OR_EXPRESSION '^' AND_EXPRESSION {} 
                        ;

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION {} 
                        | INCLUSIVE_OR_EXPRESSION '|' EXCLUSIVE_OR_EXPRESSION {} 
                        ;

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION {} 
                       | LOGICAL_AND_EXPRESSION '&''&' INCLUSIVE_OR_EXPRESSION {} 
                       ;

LOGICAL_OR_EXPRESSION : LOGICAL_AND_EXPRESSION {} 
                      | LOGICAL_OR_EXPRESSION '|''|' LOGICAL_AND_EXPRESSION {} 
                      ;

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION {} 
                       | LOGICAL_OR_EXPRESSION '?' EXPRESSION ':' CONDITIONAL_EXPRESSION {}
                       ;

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION {}
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION {}
                      ;

ASSIGNMENT_OPERATOR : '=' {}
                    | '*''=' {}
                    | '/''=' {}
                    | '%''=' {}
                    | '+''=' {}
                    | '-''=' {}
                    | '<''<''=' {}
                    | '>''>''=' {}
                    | '&''=' {}
                    | '^''=' {}
                    | '|''=' {}
                    ;

EXPRESSION : ASSIGNMENT_EXPRESSION {}
           | EXPRESSION ',' ASSIGNMENT_EXPRESSION {}
           ;

CONSTANT_EXPRESSION : CONDITIONAL_EXPRESSION {}
                    ;
                
// statements
STATEMENT : LABELED_STATEMENT {} 
          | COMPOUND_STATEMENT {} 
          | EXPRESSION_STATEMENT {} 
          | SELECTION_STATEMENT {} 
          | ITERATION_STATEMENT {} 
          | JUMP_STATEMENT {} 
          ;

LABELED_STATEMENT : IDENTIFIER ':' STATEMENT {} 
                  | CASE CONSTANT_EXPRESSION ':' STATEMENT {} 
                  | DEFAULT ':' STATEMENT {} 
                  ;

COMPOUND_STATEMENT : '{' BLOCK_ITEM_LIST_OPT '}' {} 
                   ;

BLOCK_ITEM_LIST : BLOCK_ITEM {} 
                | BLOCK_ITEM_LIST BLOCK_ITEM {} 
                ;

BLOCK_ITEM : DECLARATION {} 
           | STATEMENT {} 
           ;

EXPRESSION_STATEMENT : EXPRESSION_OPT ';' {} 
                     ;

SELECTION_STATEMENT : IF '(' EXPRESSION ')' STATEMENT {} 
                    | IF '(' EXPRESSION ')' STATEMENT ELSE STATEMENT {} 
                    | SWITCH '(' EXPRESSION ')' STATEMENT {} 
                    ;

ITERATION_STATEMENT : WHILE '(' EXPRESSION ')' STATEMENT {} 
                    | DO STATEMENT WHILE '(' EXPRESSION ')' ';' {} 
                    | FOR '(' EXPRESSION_OPT ';' EXPRESSION_OPT ';' EXPRESSION_OPT ')' STATEMENT {} 
                    | FOR '(' DECLARATION EXPRESSION_OPT ';' EXPRESSION_OPT ')' STATEMENT {} 
                    ;

JUMP_STATEMENT : GOTO IDENTIFIER ';' {} 
               | CONTINUE ';' {} 
               | BREAK ';' {} 
               | RETURN EXPRESSION_OPT ';' {} 
               ;

// Optional non-terminals
BLOCK_ITEM_LIST_OPT : BLOCK_ITEM_LIST {} 
                    | /* empty */ {} 
                    ;

EXPRESSION_OPT : EXPRESSION {} 
               | /* empty */ {} 
               ;
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