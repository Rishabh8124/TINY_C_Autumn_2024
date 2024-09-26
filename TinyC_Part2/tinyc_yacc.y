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
%token IDENTIFIER INTEGER_CONSTANT FLOATING_CONSTANT CHARACTER_CONSTANT STRING_LITERAL PUNCTUATOR
%token MULTI_LINE_COMMENT SINGLE_LINE_COMMENT SPACE
%token LESS_THAN LESS_THAN_EQUAL_TO GREATER_THAN GREATER_THAN_EQUAL_TO ESCAPE_OPERATOR LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET DOT POINTER_ACCESS INCREMENT_OPERATOR DECREMENT_OPERATOR DIVIDE_OPERATOR REMAINDER_OPERATOR SHIFT_LEFT_OPERATOR SHIFT_RIGHT_OPERATOR EQUALITY_OPERATOR NON_EQUALITY_OPERATOR XOR_OPERATOR BITWISE_OR_OPERATOR BITWISE_AND_OPERATOR LOGICAL_AND_OPERATOR LOGICAL_OR_OPERATOR TERNARY_OPERATOR TERNARY_SEPERATOR SEMI_COLON COMMA MACRO_OPERATOR TRIPLE_DOT

%type EXPRESSION CONSTANT_EXPRESSION PRIMARY_EXPRESSION POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST ASSIGNMENT_EXPRESSION UNARY_EXPRESSION CAST_EXPRESSION
%type TYPE_NAME UNARY_OPEARATOR MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION
%type AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION CONDITIONAL_EXPRESSION
%type ASSIGNMENT_OPERATOR

%type DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST TYPE_QUALIFIER
%type FUNCTION_SPECIFIER DECLARATOR DIRECT_DECLARATOR POINTER TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION IDENTIFIER_LIST 
%type INITIALIZER INITIALIZER_LIST DESIGNATION DESIGNATOR_LIST DESIGNATOR

%type STATEMENT LABELED_STATEMENT COMPOUND_STATEMENT BLOCK_ITEM_LIST BLOCK_ITEM EXPRESSION_STATEMENT SELECTION_STATEMENT ITERATION_STATEMENT JUMP_STATEMENT
%type EXTERNAL_DECLARATION FUNCTION_DEFINITION DECLARATION_LIST DECLARATION_LIST_OPT
%type INIT_DECLARATOR_LIST_OPT DECLARATION_SPECIFIERS_OPT SPECIFIER_QUALIFIER_LIST_OPT POINTER_OPT TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT
%type IDENTIFIER_LIST_OPT DESIGNATION_OPT

%%
DECLARATION             : DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST_OPT ';'   { }
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
                            |   INIT_DECLARATOR_LIST ',' INIT_DECLARATOR    { }
                            ;

INIT_DECLARATOR         :   DECLARATOR      { }
                        |   DECLARATOR '=' INITIALIZER  { }
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
                        | '(' DECLARATOR ')'                                                            { }
                        | DIRECT_DECLARATOR '[' TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT ']'   { }
                        | DIRECT_DECLARATOR '[' STATIC TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION ']'{ }
                        | DIRECT_DECLARATOR '[' TYPE_QUALIFIER_LIST STATIC ASSIGNMENT_EXPRESSION ']'    { }
                        | DIRECT_DECLARATOR '[' TYPE_QUALIFIER_LIST_OPT '*' ']'                         { }
                        | DIRECT_DECLARATOR '(' PARAMETER_TYPE_LIST ')'                                 { }
                        | DIRECT_DECLARATOR '(' IDENTIFIER_LIST_OPT ')'                                 { }
                        ;

ASSIGNMENT_EXPRESSION_OPT   :   ASSIGNMENT_EXPRESSION           { }
                            |       { }
                            ;

POINTER                 :   '*' TYPE_QUALIFIER_LIST_OPT 
                        |   '*' TYPE_QUALIFIER_LIST_OPT POINTER
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
                        |   INITIALIZER_LIST ',' DESIGNATION_OPT INITIALIZER    { }
                        ;

DESIGNATION_OPT         :   DESIGNATION                                 { }
                        |                                               { }
                        ;

DESIGNATION             :   DESIGNATOR_LIST '='                         { }
                        ;

DESIGNATOR_LIST         :   DESIGNATOR                                  { }
                        |   DESIGNATOR_LIST DESIGNATOR                  { }
                        ;
                        
DESIGNATOR              :   LEFT_SQUARE_BRACKET CONSTANT_EXPRESSION RIGHT_SQUARE_BRACKET                { }
                        |   DOT IDENTIFIER                              { }
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