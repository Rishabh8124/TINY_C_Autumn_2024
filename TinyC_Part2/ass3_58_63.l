/*NAME - S.RISHABH*/
/*ROLL NUMBER - 22CS10058*/

%{
    #include "y.tab.h"
    
%}

/*REGULAR DEFINITIONS*/ 

/* REGEX FOR MULTI LINE COMMENT */
/*     <--[^\*\/]--             */
/*  -> S ---*---> A --/--> E    */
/*    |_^        |_^            */
/*   [^\*]        *             */
MULTI_LINE_COMMENT \/\*[^\*]*(\*+[^\*\/][^\*]*)*[\*]+\/
SINGLE_LINE_COMMENT \/\/.*\n

/*keywords*/
AUTO "auto"
ENUM "enum"
RESTRICT "restrict"
UNSIGNED "unsigned"
BREAK "break"
EXTERN "extern"
RETURN "return"
VOID "void"
CASE "case"
FLOAT "float"
SHORT "short"
VOLATILE "volatile"
CHAR "char"
FOR "for"
SIGNED "signed"
WHILE "while"
CONST "const"
GOTO "goto"
SIZEOF "sizeof"
BOOL "_Bool"
CONTINUE "continue"
IF "if"
STATIC "static"
COMPLEX "_Complex"
DEFAULT "default"
INLINE "inline"
STRUCT "struct"
IMAGINARY "_Imaginary"
DO "do"
INT "int"
SWITCH "switch"
DOUBLE "double"
LONG "long"
TYOEDEF "typedef"
ELSE "else"
REGISTER "register"
UNION "union"

/*identifiers*/

digit [0-9]
identifier_nondigit [_a-zA-Z]

IDENTIFIER {identifier_nondigit}({digit}|{identifier_nondigit})*

/*constants*/
sign [+-]
escape_sequence "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
c_char [^\'\\\n]|{escape_sequence}
c_char_sequence {c_char}+
digit_sequence {digit}*|\'{c_char_sequence}\'
exponent_part [eE]{sign}?{digit_sequence}
fractional_constant ({digit_sequence}\.)|({digit_sequence}?\.{digit_sequence})

INTEGER_CONSTANT [1-9]{digit}*|0
FLOATING_CONSTANT {fractional_constant}{exponent_part}?|{digit_sequence}{exponent_part}
CHARACTER_CONSTANT \'{c_char_sequence}\'

/*string literals*/
s_char [^\'\\\n]|{escape_sequence}
s_char_sequence {s_char}+
STRING_LITERAL \"{s_char_sequence}?\"

PUNCTUATOR "<"|">"|"\\"|"\["|"\]"|"\("|"\)"|"\{"|"\}"|"."|"\->"|"\+\+"|"\-\-"|"\/"|"%"|"<<"|">>"|"<="|">="|"=="|"!="|"\^"|"\|"|"&&"|"\|\|"|"\?"|":"|";"|"..."|","|"#"
WHITE_SPACE [ \n\t]

unary-operator "&" | "\*" | "\+" | "\-" | "\~" | "\!"

assignment-operator "=" | "*=" | "/=" | "%=" | "+=" | "-=" | "<<=" | ">>=" | "&=" | "^=" | "|="

%%
{MULTI_LINE_COMMENT}    { }
{SINGLE_LINE_COMMENT}   { }

{AUTO}                  {return AUTO}; 
{ENUM}                  {return ENUM;}
{RESTRICT}              {return RESTRICT}; 
{UNSIGNED}              {return UNSIGNED;}
{BREAK}                 {return BREAK;}
{EXTERN}                {return EXTERN;}
{RETURN}                {return RETURN}; 
{VOID}                  {return VOID;}
{CASE}                  {return CASE;}
{FLOAT}                 {return FLOAT;}
{SHORT}                 {return SHORT;}
{VOLATILE}              {return VOLATILE;}
{CHAR}                  {return CHAR;}
{FOR}                   {return FOR;}
{SIGNED}                {return SIGNED;}
{WHILE}                 {return WHILE;}
{CONST}                 {return CONST;}
{GOTO}                  {return GOTO;}
{SIZEOF}                {return SIZEOF;}
{BOOL}                  {return BOOL;}
{CONTINUE}              {return CONTINUE;}
{IF}                    {return IF;}
{STATIC}                {return STATIC;}
{COMPLEX}               {return COMPLEX;}
{DEFAULT}               {return DEFAULT;}
{INLINE}                {return INLINE;}
{STRUCT}                {return STRUCT;}
{IMAGINARY}             {return IMAGINARY;}
{DO}                    {return DO;}
{INT}                   {return INT;}
{SWITCH}                {return SWITCH;}
{DOUBLE}                {return DOUBLE;}
{LONG}                  {return LONG;}
{TYOEDEF}               {return TYOEDEF;}
{ELSE}                  {return ELSE;}
{REGISTER}              {return REGISTER;}
{UNION}                 {return UNION;}

{IDENTIFIER}            {return IDENTIFIER;}
{STRING_LITERAL}        {return STRING_LITERAL;}
{PUNCTUATOR}            {return PUNCTUATOR;}

{INTEGER_CONSTANT}      {return INTEGER_CONSTANT;}
{FLOATING_CONSTANT}     {return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT}    {return CHARACTER_CONSTANT;}

{WHITE_SPACE}           { }
.                       {yyerror("Invalid character found\n");}
%%

int yywrap(void) {return 1;}