/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tinyC3_22CS10058_22CS10063.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <iostream>
    #include <vector>
    #include "tinyC3_22CS10058_22CS10063.h"

    using namespace std;

    int yylex();
    void yyerror(string s);
    extern int yylineno; // Defined and maintained by Flex
    extern char *yytext; // Defined and maintained by Flex

    SymbolTable * global_table = new SymbolTable("global", NULL);
    SymbolTable * current_table = global_table;
    QuadArray three_address_code;
    int temporary_count, table_count;

#line 92 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    THEN = 258,                    /* THEN  */
    ELSE = 259,                    /* ELSE  */
    IDENTIFIER = 260,              /* IDENTIFIER  */
    ASSIGNMENT_OPERATORS = 261,    /* ASSIGNMENT_OPERATORS  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    INTEGER_CONSTANT = 263,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 264,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 265,      /* CHARACTER_CONSTANT  */
    AUTO = 266,                    /* AUTO  */
    RESTRICT = 267,                /* RESTRICT  */
    UNSIGNED = 268,                /* UNSIGNED  */
    BREAK = 269,                   /* BREAK  */
    EXTERN = 270,                  /* EXTERN  */
    RETURN = 271,                  /* RETURN  */
    VOID = 272,                    /* VOID  */
    CASE = 273,                    /* CASE  */
    FLOAT = 274,                   /* FLOAT  */
    SHORT = 275,                   /* SHORT  */
    VOLATILE = 276,                /* VOLATILE  */
    CHAR = 277,                    /* CHAR  */
    FOR = 278,                     /* FOR  */
    SIGNED = 279,                  /* SIGNED  */
    WHILE = 280,                   /* WHILE  */
    CONST = 281,                   /* CONST  */
    GOTO = 282,                    /* GOTO  */
    SIZEOF = 283,                  /* SIZEOF  */
    BOOL = 284,                    /* BOOL  */
    CONTINUE = 285,                /* CONTINUE  */
    IF = 286,                      /* IF  */
    STATIC = 287,                  /* STATIC  */
    COMPLEX = 288,                 /* COMPLEX  */
    DEFAULT = 289,                 /* DEFAULT  */
    INLINE = 290,                  /* INLINE  */
    IMAGINARY = 291,               /* IMAGINARY  */
    DO = 292,                      /* DO  */
    INT = 293,                     /* INT  */
    SWITCH = 294,                  /* SWITCH  */
    DOUBLE = 295,                  /* DOUBLE  */
    LONG = 296,                    /* LONG  */
    REGISTER = 297,                /* REGISTER  */
    LESS_THAN = 298,               /* LESS_THAN  */
    LESS_THAN_EQUAL_TO = 299,      /* LESS_THAN_EQUAL_TO  */
    GREATER_THAN = 300,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL_TO = 301,   /* GREATER_THAN_EQUAL_TO  */
    LEFT_SQUARE_BRACKET = 302,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 303,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARANTHESIS = 304,        /* LEFT_PARANTHESIS  */
    RIGHT_PARANTHESIS = 305,       /* RIGHT_PARANTHESIS  */
    LEFT_CURLY_BRACKET = 306,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 307,     /* RIGHT_CURLY_BRACKET  */
    DOT = 308,                     /* DOT  */
    POINTER_ACCESS = 309,          /* POINTER_ACCESS  */
    INCREMENT_OPERATOR = 310,      /* INCREMENT_OPERATOR  */
    DECREMENT_OPERATOR = 311,      /* DECREMENT_OPERATOR  */
    DIVIDE_OPERATOR = 312,         /* DIVIDE_OPERATOR  */
    REMAINDER_OPERATOR = 313,      /* REMAINDER_OPERATOR  */
    SHIFT_LEFT_OPERATOR = 314,     /* SHIFT_LEFT_OPERATOR  */
    SHIFT_RIGHT_OPERATOR = 315,    /* SHIFT_RIGHT_OPERATOR  */
    EQUALITY_OPERATOR = 316,       /* EQUALITY_OPERATOR  */
    NON_EQUALITY_OPERATOR = 317,   /* NON_EQUALITY_OPERATOR  */
    XOR_OPERATOR = 318,            /* XOR_OPERATOR  */
    BITWISE_OR_OPERATOR = 319,     /* BITWISE_OR_OPERATOR  */
    BITWISE_AND_OPERATOR = 320,    /* BITWISE_AND_OPERATOR  */
    LOGICAL_AND_OPERATOR = 321,    /* LOGICAL_AND_OPERATOR  */
    LOGICAL_OR_OPERATOR = 322,     /* LOGICAL_OR_OPERATOR  */
    TERNARY_OPERATOR = 323,        /* TERNARY_OPERATOR  */
    TERNARY_SEPERATOR = 324,       /* TERNARY_SEPERATOR  */
    SEMI_COLON = 325,              /* SEMI_COLON  */
    COMMA = 326,                   /* COMMA  */
    TRIPLE_DOT = 327,              /* TRIPLE_DOT  */
    ADDITION_OPERATOR = 328,       /* ADDITION_OPERATOR  */
    MULTIPLICATION_OPERATOR = 329, /* MULTIPLICATION_OPERATOR  */
    SUBTRACTION_OPERATOR = 330,    /* SUBTRACTION_OPERATOR  */
    NOT_OPERATOR = 331,            /* NOT_OPERATOR  */
    NEGATION_OPERATOR = 332,       /* NEGATION_OPERATOR  */
    EQUAL_OPERATOR = 333           /* EQUAL_OPERATOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define THEN 258
#define ELSE 259
#define IDENTIFIER 260
#define ASSIGNMENT_OPERATORS 261
#define STRING_LITERAL 262
#define INTEGER_CONSTANT 263
#define FLOATING_CONSTANT 264
#define CHARACTER_CONSTANT 265
#define AUTO 266
#define RESTRICT 267
#define UNSIGNED 268
#define BREAK 269
#define EXTERN 270
#define RETURN 271
#define VOID 272
#define CASE 273
#define FLOAT 274
#define SHORT 275
#define VOLATILE 276
#define CHAR 277
#define FOR 278
#define SIGNED 279
#define WHILE 280
#define CONST 281
#define GOTO 282
#define SIZEOF 283
#define BOOL 284
#define CONTINUE 285
#define IF 286
#define STATIC 287
#define COMPLEX 288
#define DEFAULT 289
#define INLINE 290
#define IMAGINARY 291
#define DO 292
#define INT 293
#define SWITCH 294
#define DOUBLE 295
#define LONG 296
#define REGISTER 297
#define LESS_THAN 298
#define LESS_THAN_EQUAL_TO 299
#define GREATER_THAN 300
#define GREATER_THAN_EQUAL_TO 301
#define LEFT_SQUARE_BRACKET 302
#define RIGHT_SQUARE_BRACKET 303
#define LEFT_PARANTHESIS 304
#define RIGHT_PARANTHESIS 305
#define LEFT_CURLY_BRACKET 306
#define RIGHT_CURLY_BRACKET 307
#define DOT 308
#define POINTER_ACCESS 309
#define INCREMENT_OPERATOR 310
#define DECREMENT_OPERATOR 311
#define DIVIDE_OPERATOR 312
#define REMAINDER_OPERATOR 313
#define SHIFT_LEFT_OPERATOR 314
#define SHIFT_RIGHT_OPERATOR 315
#define EQUALITY_OPERATOR 316
#define NON_EQUALITY_OPERATOR 317
#define XOR_OPERATOR 318
#define BITWISE_OR_OPERATOR 319
#define BITWISE_AND_OPERATOR 320
#define LOGICAL_AND_OPERATOR 321
#define LOGICAL_OR_OPERATOR 322
#define TERNARY_OPERATOR 323
#define TERNARY_SEPERATOR 324
#define SEMI_COLON 325
#define COMMA 326
#define TRIPLE_DOT 327
#define ADDITION_OPERATOR 328
#define MULTIPLICATION_OPERATOR 329
#define SUBTRACTION_OPERATOR 330
#define NOT_OPERATOR 331
#define NEGATION_OPERATOR 332
#define EQUAL_OPERATOR 333

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "tinyC3_22CS10058_22CS10063.y"

    int ln;
    char * val;
    char * op;
    Array * array;
    SymbolType * declaration_type;
    Expression * expr;
    Symbol * current_symbol;
    vector<string> * params;
    vector<Symbol *> * symbol_list;
    vector<int> * nextlist;
    int param_count;

#line 315 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_THEN = 3,                       /* THEN  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_IDENTIFIER = 5,                 /* IDENTIFIER  */
  YYSYMBOL_ASSIGNMENT_OPERATORS = 6,       /* ASSIGNMENT_OPERATORS  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_INTEGER_CONSTANT = 8,           /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 9,          /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 10,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_AUTO = 11,                      /* AUTO  */
  YYSYMBOL_RESTRICT = 12,                  /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 13,                  /* UNSIGNED  */
  YYSYMBOL_BREAK = 14,                     /* BREAK  */
  YYSYMBOL_EXTERN = 15,                    /* EXTERN  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_VOID = 17,                      /* VOID  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_FLOAT = 19,                     /* FLOAT  */
  YYSYMBOL_SHORT = 20,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 21,                  /* VOLATILE  */
  YYSYMBOL_CHAR = 22,                      /* CHAR  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_SIGNED = 24,                    /* SIGNED  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_CONST = 26,                     /* CONST  */
  YYSYMBOL_GOTO = 27,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 28,                    /* SIZEOF  */
  YYSYMBOL_BOOL = 29,                      /* BOOL  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_STATIC = 32,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 33,                   /* COMPLEX  */
  YYSYMBOL_DEFAULT = 34,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 35,                    /* INLINE  */
  YYSYMBOL_IMAGINARY = 36,                 /* IMAGINARY  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_INT = 38,                       /* INT  */
  YYSYMBOL_SWITCH = 39,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_LONG = 41,                      /* LONG  */
  YYSYMBOL_REGISTER = 42,                  /* REGISTER  */
  YYSYMBOL_LESS_THAN = 43,                 /* LESS_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL_TO = 44,        /* LESS_THAN_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN = 45,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_THAN_EQUAL_TO = 46,     /* GREATER_THAN_EQUAL_TO  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 47,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 48,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 49,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 50,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 51,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 52,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 53,                       /* DOT  */
  YYSYMBOL_POINTER_ACCESS = 54,            /* POINTER_ACCESS  */
  YYSYMBOL_INCREMENT_OPERATOR = 55,        /* INCREMENT_OPERATOR  */
  YYSYMBOL_DECREMENT_OPERATOR = 56,        /* DECREMENT_OPERATOR  */
  YYSYMBOL_DIVIDE_OPERATOR = 57,           /* DIVIDE_OPERATOR  */
  YYSYMBOL_REMAINDER_OPERATOR = 58,        /* REMAINDER_OPERATOR  */
  YYSYMBOL_SHIFT_LEFT_OPERATOR = 59,       /* SHIFT_LEFT_OPERATOR  */
  YYSYMBOL_SHIFT_RIGHT_OPERATOR = 60,      /* SHIFT_RIGHT_OPERATOR  */
  YYSYMBOL_EQUALITY_OPERATOR = 61,         /* EQUALITY_OPERATOR  */
  YYSYMBOL_NON_EQUALITY_OPERATOR = 62,     /* NON_EQUALITY_OPERATOR  */
  YYSYMBOL_XOR_OPERATOR = 63,              /* XOR_OPERATOR  */
  YYSYMBOL_BITWISE_OR_OPERATOR = 64,       /* BITWISE_OR_OPERATOR  */
  YYSYMBOL_BITWISE_AND_OPERATOR = 65,      /* BITWISE_AND_OPERATOR  */
  YYSYMBOL_LOGICAL_AND_OPERATOR = 66,      /* LOGICAL_AND_OPERATOR  */
  YYSYMBOL_LOGICAL_OR_OPERATOR = 67,       /* LOGICAL_OR_OPERATOR  */
  YYSYMBOL_TERNARY_OPERATOR = 68,          /* TERNARY_OPERATOR  */
  YYSYMBOL_TERNARY_SEPERATOR = 69,         /* TERNARY_SEPERATOR  */
  YYSYMBOL_SEMI_COLON = 70,                /* SEMI_COLON  */
  YYSYMBOL_COMMA = 71,                     /* COMMA  */
  YYSYMBOL_TRIPLE_DOT = 72,                /* TRIPLE_DOT  */
  YYSYMBOL_ADDITION_OPERATOR = 73,         /* ADDITION_OPERATOR  */
  YYSYMBOL_MULTIPLICATION_OPERATOR = 74,   /* MULTIPLICATION_OPERATOR  */
  YYSYMBOL_SUBTRACTION_OPERATOR = 75,      /* SUBTRACTION_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 76,              /* NOT_OPERATOR  */
  YYSYMBOL_NEGATION_OPERATOR = 77,         /* NEGATION_OPERATOR  */
  YYSYMBOL_EQUAL_OPERATOR = 78,            /* EQUAL_OPERATOR  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_PRIMARY_EXPRESSION = 80,        /* PRIMARY_EXPRESSION  */
  YYSYMBOL_POSTFIX_EXPRESSION = 81,        /* POSTFIX_EXPRESSION  */
  YYSYMBOL_ARGUMENT_EXPRESSION_LIST = 82,  /* ARGUMENT_EXPRESSION_LIST  */
  YYSYMBOL_ARGUMENT_EXPRESSION_LIST_OPT = 83, /* ARGUMENT_EXPRESSION_LIST_OPT  */
  YYSYMBOL_UNARY_EXPRESSION = 84,          /* UNARY_EXPRESSION  */
  YYSYMBOL_UNARY_OPEARATOR = 85,           /* UNARY_OPEARATOR  */
  YYSYMBOL_CAST_EXPRESSION = 86,           /* CAST_EXPRESSION  */
  YYSYMBOL_MULTIPLICATIVE_EXPRESSION = 87, /* MULTIPLICATIVE_EXPRESSION  */
  YYSYMBOL_ADDITIVE_EXPRESSION = 88,       /* ADDITIVE_EXPRESSION  */
  YYSYMBOL_SHIFT_EXPRESSION = 89,          /* SHIFT_EXPRESSION  */
  YYSYMBOL_RELATIONAL_EXPRESSION = 90,     /* RELATIONAL_EXPRESSION  */
  YYSYMBOL_EQUALITY_EXPRESSION = 91,       /* EQUALITY_EXPRESSION  */
  YYSYMBOL_AND_EXPRESSION = 92,            /* AND_EXPRESSION  */
  YYSYMBOL_EXCLUSIVE_OR_EXPRESSION = 93,   /* EXCLUSIVE_OR_EXPRESSION  */
  YYSYMBOL_INCLUSIVE_OR_EXPRESSION = 94,   /* INCLUSIVE_OR_EXPRESSION  */
  YYSYMBOL_LOGICAL_AND_EXPRESSION = 95,    /* LOGICAL_AND_EXPRESSION  */
  YYSYMBOL_LOGICAL_OR_EXPRESSION = 96,     /* LOGICAL_OR_EXPRESSION  */
  YYSYMBOL_CONDITIONAL_EXPRESSION = 97,    /* CONDITIONAL_EXPRESSION  */
  YYSYMBOL_ASSIGNMENT_EXPRESSION = 98,     /* ASSIGNMENT_EXPRESSION  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 99,       /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_EXPRESSION = 100,               /* EXPRESSION  */
  YYSYMBOL_CONSTANT_EXPRESSION = 101,      /* CONSTANT_EXPRESSION  */
  YYSYMBOL_DECLARATION = 102,              /* DECLARATION  */
  YYSYMBOL_INIT_DECLARATOR_LIST_OPT = 103, /* INIT_DECLARATOR_LIST_OPT  */
  YYSYMBOL_DECLARATION_SPECIFIERS = 104,   /* DECLARATION_SPECIFIERS  */
  YYSYMBOL_DECLARATION_SPECIFIERS_OPT = 105, /* DECLARATION_SPECIFIERS_OPT  */
  YYSYMBOL_INIT_DECLARATOR_LIST = 106,     /* INIT_DECLARATOR_LIST  */
  YYSYMBOL_INIT_DECLARATOR = 107,          /* INIT_DECLARATOR  */
  YYSYMBOL_STORAGE_CLASS_SPECIFIER = 108,  /* STORAGE_CLASS_SPECIFIER  */
  YYSYMBOL_TYPE_SPECIFIER = 109,           /* TYPE_SPECIFIER  */
  YYSYMBOL_SPECIFIER_QUALIFIER_LIST = 110, /* SPECIFIER_QUALIFIER_LIST  */
  YYSYMBOL_SPECIFIER_QUALIFIER_LIST_OPT = 111, /* SPECIFIER_QUALIFIER_LIST_OPT  */
  YYSYMBOL_TYPE_QUALIFIER = 112,           /* TYPE_QUALIFIER  */
  YYSYMBOL_FUNCTION_SPECIFIER = 113,       /* FUNCTION_SPECIFIER  */
  YYSYMBOL_DECLARATOR = 114,               /* DECLARATOR  */
  YYSYMBOL_POINTER_OPT = 115,              /* POINTER_OPT  */
  YYSYMBOL_DIRECT_DECLARATOR = 116,        /* DIRECT_DECLARATOR  */
  YYSYMBOL_ASSIGNMENT_EXPRESSION_OPT = 117, /* ASSIGNMENT_EXPRESSION_OPT  */
  YYSYMBOL_POINTER = 118,                  /* POINTER  */
  YYSYMBOL_TYPE_QUALIFIER_LIST = 119,      /* TYPE_QUALIFIER_LIST  */
  YYSYMBOL_TYPE_QUALIFIER_LIST_OPT = 120,  /* TYPE_QUALIFIER_LIST_OPT  */
  YYSYMBOL_PARAMETER_TYPE_LIST = 121,      /* PARAMETER_TYPE_LIST  */
  YYSYMBOL_PARAMETER_LIST = 122,           /* PARAMETER_LIST  */
  YYSYMBOL_PARAMETER_DECLARATION = 123,    /* PARAMETER_DECLARATION  */
  YYSYMBOL_IDENTIFIER_LIST = 124,          /* IDENTIFIER_LIST  */
  YYSYMBOL_IDENTIFIER_LIST_OPT = 125,      /* IDENTIFIER_LIST_OPT  */
  YYSYMBOL_TYPE_NAME = 126,                /* TYPE_NAME  */
  YYSYMBOL_INITIALIZER = 127,              /* INITIALIZER  */
  YYSYMBOL_INITIALIZER_LIST = 128,         /* INITIALIZER_LIST  */
  YYSYMBOL_DESIGNATION = 129,              /* DESIGNATION  */
  YYSYMBOL_DESIGNATION_OPT = 130,          /* DESIGNATION_OPT  */
  YYSYMBOL_DESIGNATOR_LIST = 131,          /* DESIGNATOR_LIST  */
  YYSYMBOL_DESIGNATOR = 132,               /* DESIGNATOR  */
  YYSYMBOL_STATEMENT = 133,                /* STATEMENT  */
  YYSYMBOL_134_1 = 134,                    /* $@1  */
  YYSYMBOL_LABELED_STATEMENT = 135,        /* LABELED_STATEMENT  */
  YYSYMBOL_COMPOUND_STATEMENT = 136,       /* COMPOUND_STATEMENT  */
  YYSYMBOL_BLOCK_ITEM_LIST = 137,          /* BLOCK_ITEM_LIST  */
  YYSYMBOL_BLOCK_ITEM = 138,               /* BLOCK_ITEM  */
  YYSYMBOL_EXPRESSION_STATEMENT = 139,     /* EXPRESSION_STATEMENT  */
  YYSYMBOL_SELECTION_STATEMENT = 140,      /* SELECTION_STATEMENT  */
  YYSYMBOL_ITERATION_STATEMENT = 141,      /* ITERATION_STATEMENT  */
  YYSYMBOL_JUMP_STATEMENT = 142,           /* JUMP_STATEMENT  */
  YYSYMBOL_M = 143,                        /* M  */
  YYSYMBOL_N = 144,                        /* N  */
  YYSYMBOL_BLOCK_ITEM_LIST_OPT = 145,      /* BLOCK_ITEM_LIST_OPT  */
  YYSYMBOL_EXPRESSION_OPT = 146,           /* EXPRESSION_OPT  */
  YYSYMBOL_TRANSLATIONAL_UNIT = 147,       /* TRANSLATIONAL_UNIT  */
  YYSYMBOL_EXTERNAL_DECLARATION = 148,     /* EXTERNAL_DECLARATION  */
  YYSYMBOL_FUNCTION_DEFINITION = 149,      /* FUNCTION_DEFINITION  */
  YYSYMBOL_150_2 = 150,                    /* $@2  */
  YYSYMBOL_DECLARATION_LIST = 151,         /* DECLARATION_LIST  */
  YYSYMBOL_DECLARATION_LIST_OPT = 152      /* DECLARATION_LIST_OPT  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   988

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  332

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   204,   204,   209,   215,   220,   225,   230,   233,   236,
     247,   252,   253,   254,   259,   264,   265,   268,   269,   272,
     279,   282,   283,   288,   293,   294,   295,   298,   299,   300,
     301,   302,   303,   306,   307,   310,   326,   330,   334,   340,
     341,   346,   353,   354,   359,   366,   367,   377,   387,   397,
     409,   410,   420,   432,   433,   439,   440,   446,   447,   453,
     454,   467,   468,   480,   481,   494,   495,   509,   510,   513,
     514,   517,   522,   539,   540,   543,   544,   545,   546,   549,
     550,   553,   554,   557,   558,   563,   564,   565,   566,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   583,   584,   587,   588,   591,   592,   593,   596,   599,
     610,   611,   614,   615,   616,   626,   627,   628,   629,   639,
     642,   643,   646,   647,   650,   651,   654,   655,   658,   659,
     662,   663,   666,   675,   678,   679,   682,   683,   686,   689,
     690,   691,   694,   695,   698,   701,   702,   705,   706,   709,
     710,   715,   716,   716,   720,   721,   722,   723,   726,   727,
     728,   731,   734,   735,   738,   739,   742,   745,   750,   755,
     758,   764,   769,   775,   778,   779,   780,   781,   784,   787,
     791,   792,   795,   796,   801,   802,   805,   806,   809,   809,
     825,   826,   829,   830
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "THEN", "ELSE",
  "IDENTIFIER", "ASSIGNMENT_OPERATORS", "STRING_LITERAL",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "AUTO",
  "RESTRICT", "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID", "CASE",
  "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST",
  "GOTO", "SIZEOF", "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX",
  "DEFAULT", "INLINE", "IMAGINARY", "DO", "INT", "SWITCH", "DOUBLE",
  "LONG", "REGISTER", "LESS_THAN", "LESS_THAN_EQUAL_TO", "GREATER_THAN",
  "GREATER_THAN_EQUAL_TO", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "DOT", "POINTER_ACCESS", "INCREMENT_OPERATOR",
  "DECREMENT_OPERATOR", "DIVIDE_OPERATOR", "REMAINDER_OPERATOR",
  "SHIFT_LEFT_OPERATOR", "SHIFT_RIGHT_OPERATOR", "EQUALITY_OPERATOR",
  "NON_EQUALITY_OPERATOR", "XOR_OPERATOR", "BITWISE_OR_OPERATOR",
  "BITWISE_AND_OPERATOR", "LOGICAL_AND_OPERATOR", "LOGICAL_OR_OPERATOR",
  "TERNARY_OPERATOR", "TERNARY_SEPERATOR", "SEMI_COLON", "COMMA",
  "TRIPLE_DOT", "ADDITION_OPERATOR", "MULTIPLICATION_OPERATOR",
  "SUBTRACTION_OPERATOR", "NOT_OPERATOR", "NEGATION_OPERATOR",
  "EQUAL_OPERATOR", "$accept", "PRIMARY_EXPRESSION", "POSTFIX_EXPRESSION",
  "ARGUMENT_EXPRESSION_LIST", "ARGUMENT_EXPRESSION_LIST_OPT",
  "UNARY_EXPRESSION", "UNARY_OPEARATOR", "CAST_EXPRESSION",
  "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION", "SHIFT_EXPRESSION",
  "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION", "AND_EXPRESSION",
  "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR",
  "EXPRESSION", "CONSTANT_EXPRESSION", "DECLARATION",
  "INIT_DECLARATOR_LIST_OPT", "DECLARATION_SPECIFIERS",
  "DECLARATION_SPECIFIERS_OPT", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "STORAGE_CLASS_SPECIFIER", "TYPE_SPECIFIER", "SPECIFIER_QUALIFIER_LIST",
  "SPECIFIER_QUALIFIER_LIST_OPT", "TYPE_QUALIFIER", "FUNCTION_SPECIFIER",
  "DECLARATOR", "POINTER_OPT", "DIRECT_DECLARATOR",
  "ASSIGNMENT_EXPRESSION_OPT", "POINTER", "TYPE_QUALIFIER_LIST",
  "TYPE_QUALIFIER_LIST_OPT", "PARAMETER_TYPE_LIST", "PARAMETER_LIST",
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "IDENTIFIER_LIST_OPT",
  "TYPE_NAME", "INITIALIZER", "INITIALIZER_LIST", "DESIGNATION",
  "DESIGNATION_OPT", "DESIGNATOR_LIST", "DESIGNATOR", "STATEMENT", "$@1",
  "LABELED_STATEMENT", "COMPOUND_STATEMENT", "BLOCK_ITEM_LIST",
  "BLOCK_ITEM", "EXPRESSION_STATEMENT", "SELECTION_STATEMENT",
  "ITERATION_STATEMENT", "JUMP_STATEMENT", "M", "N", "BLOCK_ITEM_LIST_OPT",
  "EXPRESSION_OPT", "TRANSLATIONAL_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DEFINITION", "$@2", "DECLARATION_LIST", "DECLARATION_LIST_OPT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-221)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-194)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     916,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,    33,   916,   916,   916,   916,   852,  -221,  -221,
      93,   -44,   -13,  -221,   775,     4,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,    93,   -11,  -221,   -11,   568,
    -221,    33,   916,  -221,  -221,   -11,   103,  -221,  -221,  -221,
      43,  -221,  -221,  -221,  -221,  -221,   153,   462,   -23,   649,
     649,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   185,     8,
     679,  -221,   -17,   109,   -42,   129,    56,    41,    67,    92,
     100,    70,  -221,  -221,  -221,  -221,   119,   136,   110,   884,
     462,  -221,  -221,   -22,   947,  -221,   947,   146,   679,   174,
     -27,  -221,   568,   -31,  -221,   462,  -221,  -221,   679,   679,
     198,   202,  -221,  -221,  -221,  -221,   679,  -221,  -221,   679,
     679,   679,   679,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   679,   679,   679,   679,   679,  -221,   243,  -221,
    -221,    93,   180,   708,  -221,   -29,   163,   145,  -221,   148,
     173,   175,  -221,   679,  -221,  -221,  -221,   620,  -221,   176,
    -221,  -221,    47,  -221,  -221,  -221,   183,   -25,   164,   186,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   -17,   -17,   109,
     109,   -42,   -42,   -42,   -42,   129,   129,    56,    41,    67,
      92,   100,   679,   217,   172,   679,   679,   194,   195,   240,
     179,   238,   219,  -221,   241,   218,  -221,  -221,   119,  -221,
     239,  -221,  -221,  -221,  -221,  -221,   242,   223,   679,   679,
     248,  -221,   249,  -221,  -221,   808,   295,  -221,   250,  -221,
     -23,  -221,  -221,  -221,   568,   250,  -221,   679,  -221,   218,
     535,  -221,   232,   234,   389,  -221,   235,  -221,   679,   535,
     535,   679,  -221,   316,  -221,  -221,   256,   258,  -221,  -221,
    -221,  -221,  -221,    38,  -221,  -221,   245,  -221,  -221,   535,
     679,   237,   679,  -221,   -21,  -221,   284,   -19,  -221,  -221,
    -221,  -221,   102,  -221,  -221,   252,  -221,    37,  -221,   261,
     535,  -221,   679,   679,   679,  -221,   535,  -221,  -221,  -221,
     262,   289,   535,  -221,   679,   535,  -221,  -221,   307,    42,
    -221,   679,  -221,   290,  -221,   535,  -221,   265,  -221,  -221,
     535,  -221
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,   106,    97,    85,    89,    94,    91,   107,    90,
      96,   105,    98,    86,    99,   108,   100,    92,    95,    93,
      88,   187,   111,    80,    80,    80,    80,     0,   184,   186,
     127,     0,    73,    81,    83,     0,   110,    79,    75,    76,
      77,    78,     1,   185,   124,   126,   122,    72,   111,     0,
     190,   111,   192,   188,   112,   111,   109,   125,   123,    82,
      83,     2,     6,     3,     4,     5,     0,     0,   146,     0,
       0,    30,    27,    29,    28,    32,    31,     8,    21,    33,
       0,    35,    39,    42,    45,    50,    53,    55,    57,    59,
      61,    63,    65,   139,    84,   191,     0,     0,   127,   137,
       0,    25,    69,     0,   104,   138,   104,     0,     0,     0,
       0,   145,     0,     0,   147,     0,    22,    23,     0,    20,
       0,     0,    13,    14,    68,    67,     0,    33,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,   152,   189,
     113,   127,   126,   121,   134,   111,     0,   128,   130,   136,
       0,     0,     7,     0,   103,   101,   102,     0,    71,     0,
     150,   140,   146,   142,   144,   148,     0,     0,    19,     0,
      17,    11,    12,    66,    37,    38,    36,    40,    41,    43,
      44,    46,    48,    47,    49,    51,    52,    54,    56,    58,
      60,    62,     0,     2,     0,   183,     0,     0,     0,     0,
       0,     0,     0,   178,     0,   182,   164,   165,     0,   151,
     178,   162,   154,   155,   156,   157,     0,     0,     0,     0,
      29,   120,     0,   132,   118,     0,     0,   119,    26,    70,
     146,    34,   149,   141,     0,     0,     9,     0,    10,   179,
     152,   176,     0,     0,   183,   178,     0,   175,     0,   152,
     152,     0,   153,   152,   161,   166,     0,     0,   117,   114,
     129,   131,   135,     0,   143,    18,     0,   158,   177,   152,
     183,     0,     0,   174,     0,   160,     0,     0,   163,   115,
     116,    15,   146,   178,   159,     0,   178,     0,   178,     0,
     152,    16,     0,   183,   183,   178,   152,   178,   169,    64,
       0,     0,   152,   179,     0,   152,   178,   170,   167,     0,
     173,   183,   178,     0,   179,   152,   171,     0,   168,   178,
     152,   172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,  -221,   -65,  -221,   -70,    78,    54,
       9,    80,   220,   221,   222,   216,   224,  -221,  -105,   -30,
    -221,   -67,   157,   -32,  -221,    11,    30,  -221,   319,  -221,
      28,    79,   263,    53,  -221,   -16,  -221,  -221,  -221,   322,
     275,   -66,  -221,  -221,   139,  -221,  -221,   -88,  -104,   135,
    -221,  -165,  -221,   264,  -135,  -221,  -221,   158,  -221,   115,
    -221,  -221,  -221,  -221,  -129,  -220,  -221,  -192,  -221,   352,
    -221,  -221,  -221,  -221
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    77,    78,   178,   179,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   102,
     126,   215,   169,    21,    31,    51,    38,    32,    33,    23,
      24,   105,   165,    25,    26,    60,    35,    56,   232,    36,
      45,    46,   156,   157,   158,   159,   160,   107,    94,   110,
     111,   112,   113,   114,   217,   218,   219,   149,   220,   221,
     222,   223,   224,   225,   202,   276,   226,   227,    27,    28,
      29,    96,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   101,    50,   168,   116,   117,    34,   244,   173,    54,
     128,    22,   161,   252,   124,   127,   108,   134,   135,    93,
      95,  -133,   109,   246,   108,   171,    47,   176,   162,   298,
     109,   300,   153,   103,    37,    37,    37,    37,    22,    97,
     129,   130,  -133,   127,   172,    30,   163,   174,   103,   163,
     163,   177,   163,    55,    39,    40,    41,   131,    48,   184,
     185,   186,   281,    30,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,    93,    44,   260,   228,   125,   305,   295,   180,
     291,   263,   323,   318,   108,   104,   183,   241,    57,   243,
     109,   168,   127,   -74,   327,     2,   142,    30,   163,   292,
     155,   310,   311,   163,     8,   277,   216,   140,   141,    11,
     106,    49,     2,   231,   285,   286,   282,   244,   104,   324,
     143,     8,   104,   239,   104,   249,    11,   146,   147,   233,
     274,   127,   151,   104,   294,   191,   192,   193,   194,   108,
      98,    44,    99,   106,   301,   109,   144,   106,    61,   106,
      62,    63,    64,    65,   302,   308,   145,   304,   106,   306,
     148,   313,   136,   137,   138,   139,   312,   317,   314,   170,
     320,    66,   132,   164,   133,   164,   150,   321,   189,   190,
     328,   284,     2,   325,   287,   331,   167,   309,   266,   267,
     330,     8,   100,   181,    44,    57,    11,   182,    69,    70,
     187,   188,   229,   234,    93,   297,   235,   275,    71,   236,
     195,   196,   280,   237,   242,   238,    72,    73,    74,    75,
      76,   216,   118,   245,   119,   247,   248,   127,   120,   121,
     122,   123,   251,   254,   255,   256,   155,   319,   203,   257,
      62,    63,    64,    65,     1,     2,     3,   204,     4,   205,
       5,   206,     6,     7,     8,     9,   207,    10,   208,    11,
     209,    66,    12,   210,   211,    13,    14,   212,    15,    16,
     213,    17,   214,    18,    19,    20,   250,   258,   259,   163,
     261,  -180,    67,   265,   264,  -181,   268,   269,    69,    70,
     272,   240,   278,   279,   289,   283,   290,   296,    71,   299,
     307,   322,   315,  -183,   293,   329,    72,    73,    74,    75,
      76,   203,   303,    62,    63,    64,    65,     1,     2,     3,
     204,     4,   205,     5,   206,     6,     7,     8,     9,   207,
      10,   208,    11,   209,    66,    12,   210,   211,    13,    14,
     212,    15,    16,   213,    17,   214,    18,    19,    20,   316,
     326,   200,   197,   253,   198,    67,   199,    59,    58,   166,
     201,    69,    70,   152,   271,   273,   262,   175,   288,    43,
       0,    71,     0,     0,     0,     0,  -183,     0,     0,    72,
      73,    74,    75,    76,    61,     0,    62,    63,    64,    65,
       1,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,     0,    10,     0,    11,     0,    66,    12,     0,
       0,    13,    14,     0,    15,    16,     0,    17,     0,    18,
      19,    20,     0,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    61,     0,    62,
      63,    64,    65,     0,     2,     3,     0,     0,     0,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      66,    12,     0,     0,     0,    14,     0,     0,    16,     0,
      17,     0,    18,    19,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     203,     0,    62,    63,    64,    65,     0,     0,     0,   204,
       0,   205,     0,   206,     0,     0,     0,     0,   207,     0,
     208,     0,   209,    66,     0,   210,   211,     0,     0,   212,
       0,     0,   213,    61,   214,    62,    63,    64,    65,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
      69,    70,     0,     0,     0,     0,    66,     0,     0,     0,
      71,     0,     0,     0,     0,  -183,     0,     0,    72,    73,
      74,    75,    76,     0,     0,     0,     0,    67,     0,    68,
       0,     0,     0,    69,    70,    61,     0,    62,    63,    64,
      65,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,     0,     0,    66,     0,
       0,     0,     0,     0,    61,     0,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,   240,     0,     0,     0,    69,    70,    66,     0,     0,
       0,     0,     0,     0,    61,    71,    62,    63,    64,    65,
       0,     0,     0,    72,    73,    74,    75,    76,   115,     0,
       0,     0,     0,     0,    69,    70,     0,    66,     0,     0,
       0,     0,     0,    61,    71,    62,    63,    64,    65,     0,
       0,     0,    72,    73,    74,    75,    76,     0,    67,     0,
       0,     0,     0,     0,    69,    70,    66,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    67,     0,     0,
       0,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,    72,   230,    74,    75,    76,     1,     2,     3,     0,
       4,     0,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,     0,    12,     0,     0,    13,    14,     0,
      15,    16,     0,    17,     0,    18,    19,    20,     0,     1,
       2,     3,     0,     4,     0,     5,  -193,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
      13,    14,     0,    15,    16,     0,    17,     0,    18,    19,
      20,     0,    42,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     0,     4,     0,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
     270,    12,     0,     0,    13,    14,     0,    15,    16,   154,
      17,     0,    18,    19,    20,     1,     2,     3,     0,     4,
       0,     5,     0,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     0,    12,     0,     0,    13,    14,     0,    15,
      16,     0,    17,     0,    18,    19,    20,     1,     2,     3,
       0,     4,     0,     5,     0,     6,     7,     8,     9,     0,
      10,     0,    11,     0,     0,    12,     0,     0,    13,    14,
       0,    15,    16,     0,    17,     0,    18,    19,    20,     2,
       3,     0,     0,     0,     5,     0,     6,     7,     8,     9,
       0,    10,     0,    11,     0,     0,    12,     0,     0,     0,
      14,     0,     0,    16,     0,    17,     0,    18,    19
};

static const yytype_int16 yycheck[] =
{
      67,    66,    34,   108,    69,    70,    22,   172,   112,     5,
      80,     0,   100,   205,     6,    80,    47,    59,    60,    49,
      52,    50,    53,    48,    47,    52,    70,   115,    50,    50,
      53,    50,    98,   100,    23,    24,    25,    26,    27,    55,
      57,    58,    71,   108,    71,    74,    71,    78,   115,    71,
      71,   118,    71,    49,    24,    25,    26,    74,    71,   129,
     130,   131,   254,    74,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   112,    30,   213,   151,    78,    50,   280,   119,
      52,   220,    50,   313,    47,    67,   126,   167,    45,    52,
      53,   206,   167,    70,   324,    12,    65,    74,    71,    71,
      99,   303,   304,    71,    21,   250,   148,    61,    62,    26,
      67,    78,    12,   153,   259,   260,   255,   292,   100,   321,
      63,    21,   104,   163,   106,   202,    26,    67,    68,   155,
     244,   206,    32,   115,   279,   136,   137,   138,   139,    47,
      47,    98,    49,   100,    52,    53,    64,   104,     5,   106,
       7,     8,     9,    10,   293,   300,    66,   296,   115,   298,
      51,   306,    43,    44,    45,    46,   305,   312,   307,     5,
     315,    28,    73,   104,    75,   106,    50,   316,   134,   135,
     325,   258,    12,   322,   261,   330,    50,   302,   228,   229,
     329,    21,    49,     5,   151,   152,    26,     5,    55,    56,
     132,   133,    32,    50,   244,   282,    71,   247,    65,    71,
     140,   141,   254,    50,    48,    50,    73,    74,    75,    76,
      77,   263,    47,    50,    49,    71,    50,   302,    53,    54,
      55,    56,    70,    49,    49,     5,   235,   314,     5,    70,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    69,    49,    69,    71,
      49,    52,    49,    70,    52,    52,    48,    48,    55,    56,
       5,    51,    70,    69,    48,    70,    48,    70,    65,    25,
      49,     4,    50,    70,    69,    50,    73,    74,    75,    76,
      77,     5,    70,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    70,
      70,   145,   142,   206,   143,    49,   144,    48,    46,   106,
     146,    55,    56,    98,   235,   240,   218,   113,   263,    27,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      74,    75,    76,    77,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    26,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    35,    36,    -1,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,     5,    -1,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,     5,    39,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    55,    56,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    55,    56,    28,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    65,     7,     8,     9,    10,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    28,    -1,    -1,
      -1,    -1,    -1,     5,    65,     7,     8,     9,    10,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    49,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    11,    12,    13,    -1,
      15,    -1,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    26,    -1,    -1,    29,    -1,    -1,    32,    33,    -1,
      35,    36,    -1,    38,    -1,    40,    41,    42,    -1,    11,
      12,    13,    -1,    15,    -1,    17,    51,    19,    20,    21,
      22,    -1,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      32,    33,    -1,    35,    36,    -1,    38,    -1,    40,    41,
      42,    -1,     0,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    26,    -1,
      72,    29,    -1,    -1,    32,    33,    -1,    35,    36,     5,
      38,    -1,    40,    41,    42,    11,    12,    13,    -1,    15,
      -1,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    -1,    35,
      36,    -1,    38,    -1,    40,    41,    42,    11,    12,    13,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    32,    33,
      -1,    35,    36,    -1,    38,    -1,    40,    41,    42,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      33,    -1,    -1,    36,    -1,    38,    -1,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    13,    15,    17,    19,    20,    21,    22,
      24,    26,    29,    32,    33,    35,    36,    38,    40,    41,
      42,   102,   104,   108,   109,   112,   113,   147,   148,   149,
      74,   103,   106,   107,   114,   115,   118,   104,   105,   105,
     105,   105,     0,   148,   112,   119,   120,    70,    71,    78,
     102,   104,   151,   152,     5,    49,   116,   112,   118,   107,
     114,     5,     7,     8,     9,    10,    28,    49,    51,    55,
      56,    65,    73,    74,    75,    76,    77,    80,    81,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   127,   102,   150,   114,    47,    49,
      49,    84,    98,   100,   109,   110,   112,   126,    47,    53,
     128,   129,   130,   131,   132,    49,    84,    84,    47,    49,
      53,    54,    55,    56,     6,    78,    99,    84,    86,    57,
      58,    74,    73,    75,    59,    60,    43,    44,    45,    46,
      61,    62,    65,    63,    64,    66,    67,    68,    51,   136,
      50,    32,   119,   120,     5,   104,   121,   122,   123,   124,
     125,   126,    50,    71,   110,   111,   111,    50,    97,   101,
       5,    52,    71,   127,    78,   132,   126,   100,    82,    83,
      98,     5,     5,    98,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    90,    90,    91,    92,    93,
      94,    95,   143,     5,    14,    16,    18,    23,    25,    27,
      30,    31,    34,    37,    39,   100,   102,   133,   134,   135,
     137,   138,   139,   140,   141,   142,   145,   146,   120,    32,
      74,    98,   117,   114,    50,    71,    71,    50,    50,    98,
      51,    86,    48,    52,   130,    50,    48,    71,    50,   100,
      69,    70,   146,   101,    49,    49,     5,    70,    49,    69,
     143,    49,   136,   143,    52,    70,    98,    98,    48,    48,
      72,   123,     5,   128,   127,    98,   144,   133,    70,    69,
     102,   146,   143,    70,   100,   133,   133,   100,   138,    48,
      48,    52,    71,    69,   133,   146,    70,   100,    50,    25,
      50,    52,   143,    70,   143,    50,   143,    49,   133,    97,
     146,   146,   143,   133,   143,    50,    70,   133,   144,   100,
     133,   143,     4,    50,   146,   143,    70,   144,   133,    50,
     143,   133
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      91,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   112,   113,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   127,
     127,   127,   128,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   133,   133,   133,   133,   133,   135,   135,
     135,   136,   137,   137,   138,   138,   139,   140,   140,   140,
     141,   141,   141,   141,   142,   142,   142,   142,   143,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   150,   149,
     151,   151,   152,   152
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       0,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     8,     1,     3,     1,     1,     1,
       3,     1,     3,     1,     0,     2,     2,     2,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     2,
       1,     0,     1,     3,     5,     6,     6,     5,     4,     4,
       1,     0,     2,     3,     1,     2,     1,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     0,     1,     1,
       3,     4,     2,     4,     2,     1,     0,     1,     2,     3,
       2,     1,     0,     2,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     3,     1,     1,     2,     7,    10,     5,
       7,     9,    13,     8,     3,     2,     2,     3,     0,     0,
       1,     0,     1,     0,     1,     2,     1,     1,     0,     5,
       1,     2,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* PRIMARY_EXPRESSION: IDENTIFIER  */
#line 204 "tinyC3_22CS10058_22CS10063.y"
                                                                                {
                                                                                    (yyval.expr) = new Expression();
                                                                                    (yyval.expr)->symbol = current_table->lookup((yyvsp[0].val));
                                                                                    (yyval.expr)->type = 0;
                                                                                }
#line 1850 "y.tab.c"
    break;

  case 3: /* PRIMARY_EXPRESSION: INTEGER_CONSTANT  */
#line 209 "tinyC3_22CS10058_22CS10063.y"
                                                                                { 
                                                                                    (yyval.expr) = new Expression();
                                                                                    (yyval.expr)->symbol = current_table->gentemp(SymbolType::TYPE_INT);
                                                                                    (yyval.expr)->symbol->init_val = (yyvsp[0].val);
                                                                                    three_address_code.emit(*(new Quad("=", (yyvsp[0].val), "", (yyval.expr)->symbol->name)));
                                                                                }
#line 1861 "y.tab.c"
    break;

  case 4: /* PRIMARY_EXPRESSION: FLOATING_CONSTANT  */
#line 215 "tinyC3_22CS10058_22CS10063.y"
                                                                                { 
                                                                                    (yyval.expr) = new Expression();
                                                                                    (yyval.expr)->symbol = current_table->gentemp(SymbolType::TYPE_FLOAT);
                                                                                    three_address_code.emit(*(new Quad("=", (yyvsp[0].val), "", (yyval.expr)->symbol->name)));
                                                                                }
#line 1871 "y.tab.c"
    break;

  case 5: /* PRIMARY_EXPRESSION: CHARACTER_CONSTANT  */
#line 220 "tinyC3_22CS10058_22CS10063.y"
                                                                                { 
                                                                                    (yyval.expr) = new Expression();
                                                                                    (yyval.expr)->symbol = current_table->gentemp(SymbolType::TYPE_CHAR);
                                                                                    three_address_code.emit(*(new Quad("=", (yyvsp[0].val), "", (yyval.expr)->symbol->name)));
                                                                                }
#line 1881 "y.tab.c"
    break;

  case 6: /* PRIMARY_EXPRESSION: STRING_LITERAL  */
#line 225 "tinyC3_22CS10058_22CS10063.y"
                                                                                { 
                                                                                    (yyval.expr) = new Expression();
                                                                                    (yyval.expr)->symbol = current_table->gentemp(SymbolType::TYPE_STRING_LITERAL, (int) (sizeof((yyvsp[0].val))+1));
                                                                                    three_address_code.emit(*(new Quad("=", (yyvsp[0].val), "", (yyval.expr)->symbol->name)));
                                                                                }
#line 1891 "y.tab.c"
    break;

  case 7: /* PRIMARY_EXPRESSION: LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS  */
#line 230 "tinyC3_22CS10058_22CS10063.y"
                                                                                { (yyval.expr) = (yyvsp[-1].expr); }
#line 1897 "y.tab.c"
    break;

  case 8: /* POSTFIX_EXPRESSION: PRIMARY_EXPRESSION  */
#line 233 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                {
                                                                                                                                                    (yyval.array) = new Array((yyvsp[0].expr)->symbol, NULL, (yyvsp[0].expr)->symbol->type);
                                                                                                                                                }
#line 1905 "y.tab.c"
    break;

  case 9: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION LEFT_SQUARE_BRACKET EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 236 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { 
                                                                                                                                                    if ((yyvsp[-3].array)->temp == NULL) {
                                                                                                                                                        (yyval.array) = new Array((yyvsp[-3].array)->symbol, current_table->gentemp(SymbolType::TYPE_INT), (yyvsp[-3].array)->elem->array_elem_type);
                                                                                                                                                        three_address_code.emit(*(new Quad("*", (yyvsp[-1].expr)->symbol->name, int_to_string((yyvsp[-3].array)->elem->array_elem_type->width), (yyval.array)->temp->name)));
                                                                                                                                                    } else {
                                                                                                                                                        Symbol * temp = current_table->gentemp(SymbolType::TYPE_INT);
                                                                                                                                                        three_address_code.emit(*(new Quad("*", (yyvsp[-1].expr)->symbol->name, int_to_string((yyvsp[-3].array)->elem->array_elem_type->width), temp->name)));
                                                                                                                                                        (yyval.array) = new Array((yyvsp[-3].array)->symbol, current_table->gentemp(SymbolType::TYPE_INT), (yyvsp[-3].array)->elem->array_elem_type);
                                                                                                                                                        three_address_code.emit(*(new Quad("+", (yyvsp[-3].array)->temp->name, temp->name, (yyval.array)->temp->name)));
                                                                                                                                                    }
                                                                                                                                                }
#line 1921 "y.tab.c"
    break;

  case 10: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION LEFT_PARANTHESIS ARGUMENT_EXPRESSION_LIST_OPT RIGHT_PARANTHESIS  */
#line 247 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { 
                                                                                                                                                    (yyval.array) = new Array();
                                                                                                                                                    (yyval.array)->symbol = current_table->gentemp((yyvsp[-3].array)->symbol->type->name);
                                                                                                                                                    three_address_code.emit(*(new Quad("call", (yyvsp[-3].array)->symbol->name, int_to_string((yyvsp[-1].param_count)), (yyval.array)->symbol->name)));
                                                                                                                                                }
#line 1931 "y.tab.c"
    break;

  case 11: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION DOT IDENTIFIER  */
#line 252 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { /*IGNORED*/ }
#line 1937 "y.tab.c"
    break;

  case 12: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION POINTER_ACCESS IDENTIFIER  */
#line 253 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { /*IGNORED*/ }
#line 1943 "y.tab.c"
    break;

  case 13: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION INCREMENT_OPERATOR  */
#line 254 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                {
                                                                                                                                                    (yyval.array) = new Array(current_table->gentemp((yyvsp[-1].array)->symbol->type->name));
                                                                                                                                                    three_address_code.emit(*(new Quad("=", (yyvsp[-1].array)->symbol->name, "", (yyval.array)->symbol->name)));
                                                                                                                                                    three_address_code.emit(*(new Quad("+", (yyvsp[-1].array)->symbol->name, "1", (yyvsp[-1].array)->symbol->name)));
                                                                                                                                                }
#line 1953 "y.tab.c"
    break;

  case 14: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION DECREMENT_OPERATOR  */
#line 259 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                {
                                                                                                                                                    (yyval.array) = new Array(current_table->gentemp((yyvsp[-1].array)->symbol->type->name));
                                                                                                                                                    three_address_code.emit(*(new Quad("=", (yyvsp[-1].array)->symbol->name, "", (yyval.array)->symbol->name)));
                                                                                                                                                    three_address_code.emit(*(new Quad("-", (yyvsp[-1].array)->symbol->name, "1", (yyvsp[-1].array)->symbol->name)));
                                                                                                                                                }
#line 1963 "y.tab.c"
    break;

  case 15: /* POSTFIX_EXPRESSION: LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET  */
#line 264 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { /*IGNORED*/ }
#line 1969 "y.tab.c"
    break;

  case 16: /* POSTFIX_EXPRESSION: LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET  */
#line 265 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { /*IGNORED*/ }
#line 1975 "y.tab.c"
    break;

  case 17: /* ARGUMENT_EXPRESSION_LIST: ASSIGNMENT_EXPRESSION  */
#line 268 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { (yyval.params) = new vector<string>; (yyval.params)->push_back((yyvsp[0].expr)->symbol->name); }
#line 1981 "y.tab.c"
    break;

  case 18: /* ARGUMENT_EXPRESSION_LIST: ARGUMENT_EXPRESSION_LIST COMMA ASSIGNMENT_EXPRESSION  */
#line 269 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { (yyval.params) = (yyvsp[-2].params); (yyval.params)->push_back((yyvsp[0].expr)->symbol->name); }
#line 1987 "y.tab.c"
    break;

  case 19: /* ARGUMENT_EXPRESSION_LIST_OPT: ARGUMENT_EXPRESSION_LIST  */
#line 272 "tinyC3_22CS10058_22CS10063.y"
                                                            {
                                                                (yyval.param_count) = 0;
                                                                for (auto param_name: *((yyvsp[0].params))) {
                                                                    (yyval.param_count)++;
                                                                    three_address_code.emit(*(new Quad("param", param_name, "", "")));
                                                                }
                                                            }
#line 1999 "y.tab.c"
    break;

  case 20: /* ARGUMENT_EXPRESSION_LIST_OPT: %empty  */
#line 279 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.param_count) = 0; }
#line 2005 "y.tab.c"
    break;

  case 21: /* UNARY_EXPRESSION: POSTFIX_EXPRESSION  */
#line 282 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { (yyval.array) = (yyvsp[0].array); }
#line 2011 "y.tab.c"
    break;

  case 22: /* UNARY_EXPRESSION: INCREMENT_OPERATOR UNARY_EXPRESSION  */
#line 283 "tinyC3_22CS10058_22CS10063.y"
                                                                                        {
                                                                                            (yyval.array) = new Array(current_table->gentemp((yyvsp[0].array)->symbol->type->name));
                                                                                            three_address_code.emit(*(new Quad("+", (yyvsp[0].array)->symbol->name, "1", (yyvsp[0].array)->symbol->name)));
                                                                                            three_address_code.emit(*(new Quad("=", (yyvsp[0].array)->symbol->name, "", (yyval.array)->symbol->name)));
                                                                                        }
#line 2021 "y.tab.c"
    break;

  case 23: /* UNARY_EXPRESSION: DECREMENT_OPERATOR UNARY_EXPRESSION  */
#line 288 "tinyC3_22CS10058_22CS10063.y"
                                                                                        {
                                                                                            (yyval.array) = new Array(current_table->gentemp((yyvsp[0].array)->symbol->type->name));
                                                                                            three_address_code.emit(*(new Quad("-", (yyvsp[0].array)->symbol->name, "1", (yyvsp[0].array)->symbol->name)));
                                                                                            three_address_code.emit(*(new Quad("=", (yyvsp[0].array)->symbol->name, "", (yyval.array)->symbol->name)));
                                                                                        }
#line 2031 "y.tab.c"
    break;

  case 24: /* UNARY_EXPRESSION: UNARY_OPEARATOR CAST_EXPRESSION  */
#line 293 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { }
#line 2037 "y.tab.c"
    break;

  case 25: /* UNARY_EXPRESSION: SIZEOF UNARY_EXPRESSION  */
#line 294 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { /*IGNORED*/ }
#line 2043 "y.tab.c"
    break;

  case 26: /* UNARY_EXPRESSION: SIZEOF LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS  */
#line 295 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { /*IGNORED*/ }
#line 2049 "y.tab.c"
    break;

  case 27: /* UNARY_OPEARATOR: ADDITION_OPERATOR  */
#line 298 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.op) = (char *) "+"; }
#line 2055 "y.tab.c"
    break;

  case 28: /* UNARY_OPEARATOR: SUBTRACTION_OPERATOR  */
#line 299 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.op) = (char *) "-"; }
#line 2061 "y.tab.c"
    break;

  case 29: /* UNARY_OPEARATOR: MULTIPLICATION_OPERATOR  */
#line 300 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.op) = (char *) "*"; }
#line 2067 "y.tab.c"
    break;

  case 30: /* UNARY_OPEARATOR: BITWISE_AND_OPERATOR  */
#line 301 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.op) = (char *) "&"; }
#line 2073 "y.tab.c"
    break;

  case 31: /* UNARY_OPEARATOR: NEGATION_OPERATOR  */
#line 302 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.op) = (char *) "~"; }
#line 2079 "y.tab.c"
    break;

  case 32: /* UNARY_OPEARATOR: NOT_OPERATOR  */
#line 303 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.op) = (char *) "!"; }
#line 2085 "y.tab.c"
    break;

  case 33: /* CAST_EXPRESSION: UNARY_EXPRESSION  */
#line 306 "tinyC3_22CS10058_22CS10063.y"
                                                                                                { (yyval.array) = (yyvsp[0].array); }
#line 2091 "y.tab.c"
    break;

  case 34: /* CAST_EXPRESSION: LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS CAST_EXPRESSION  */
#line 307 "tinyC3_22CS10058_22CS10063.y"
                                                                                                { }
#line 2097 "y.tab.c"
    break;

  case 35: /* MULTIPLICATIVE_EXPRESSION: CAST_EXPRESSION  */
#line 310 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    {
                                                                                                        (yyval.expr) = new Expression((yyvsp[0].array)->symbol);
                                                                                                        if ((yyvsp[0].array)->symbol->type->name == SymbolType::TYPE_ARRAY) {
                                                                                                            SymbolType * base = (yyvsp[0].array)->elem;
                                                                                                            while(base->array_elem_type != NULL) base = base->array_elem_type;
                                                                                                            Symbol * temp = current_table->gentemp(base->name);
                                                                                                            (yyval.expr)->symbol = temp;
                                                                                                            three_address_code.emit(*(new Quad("=[]", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name, (yyval.expr)->symbol->name)));
                                                                                                        } else if ((yyvsp[0].array)->symbol->type->name == SymbolType::TYPE_POINTER) {
                                                                                                            SymbolType * base = (yyvsp[0].array)->elem;
                                                                                                            while(base->array_elem_type != NULL) base = base->array_elem_type;
                                                                                                            Symbol * temp = current_table->gentemp(base->name);
                                                                                                            (yyval.expr)->symbol = temp;
                                                                                                            three_address_code.emit(*(new Quad("=*", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name, (yyval.expr)->symbol->name)));
                                                                                                        }
                                                                                                    }
#line 2118 "y.tab.c"
    break;

  case 36: /* MULTIPLICATIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION MULTIPLICATION_OPERATOR CAST_EXPRESSION  */
#line 326 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    { 
                                                                                                        (yyval.expr) = new Expression(current_table->gentemp((yyvsp[-2].expr)->symbol->type->name));
                                                                                                        three_address_code.emit(*(new Quad("*", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].array)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                                    }
#line 2127 "y.tab.c"
    break;

  case 37: /* MULTIPLICATIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION DIVIDE_OPERATOR CAST_EXPRESSION  */
#line 330 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    { 
                                                                                                        (yyval.expr) = new Expression(current_table->gentemp((yyvsp[-2].expr)->symbol->type->name));
                                                                                                        three_address_code.emit(*(new Quad("/", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].array)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                                    }
#line 2136 "y.tab.c"
    break;

  case 38: /* MULTIPLICATIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION REMAINDER_OPERATOR CAST_EXPRESSION  */
#line 334 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    { 
                                                                                                        (yyval.expr) = new Expression(current_table->gentemp((yyvsp[-2].expr)->symbol->type->name));
                                                                                                        three_address_code.emit(*(new Quad("%", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].array)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                                    }
#line 2145 "y.tab.c"
    break;

  case 39: /* ADDITIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION  */
#line 340 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2151 "y.tab.c"
    break;

  case 40: /* ADDITIVE_EXPRESSION: ADDITIVE_EXPRESSION ADDITION_OPERATOR MULTIPLICATIVE_EXPRESSION  */
#line 341 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        {
                                                                                                            (yyval.expr) = new Expression();
                                                                                                            (yyval.expr)->symbol = current_table->gentemp((yyvsp[-2].expr)->symbol->type->name);
                                                                                                            three_address_code.emit(*(new Quad("+", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                                        }
#line 2161 "y.tab.c"
    break;

  case 41: /* ADDITIVE_EXPRESSION: ADDITIVE_EXPRESSION SUBTRACTION_OPERATOR MULTIPLICATIVE_EXPRESSION  */
#line 346 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        {
                                                                                                            (yyval.expr) = new Expression();
                                                                                                            (yyval.expr)->symbol = current_table->gentemp((yyvsp[-2].expr)->symbol->type->name);
                                                                                                            three_address_code.emit(*(new Quad("-", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                                        }
#line 2171 "y.tab.c"
    break;

  case 42: /* SHIFT_EXPRESSION: ADDITIVE_EXPRESSION  */
#line 353 "tinyC3_22CS10058_22CS10063.y"
                                                                                            { (yyval.expr) = (yyvsp[0].expr); }
#line 2177 "y.tab.c"
    break;

  case 43: /* SHIFT_EXPRESSION: SHIFT_EXPRESSION SHIFT_LEFT_OPERATOR ADDITIVE_EXPRESSION  */
#line 354 "tinyC3_22CS10058_22CS10063.y"
                                                                                            {
                                                                                                (yyval.expr) = new Expression();
                                                                                                (yyval.expr)->symbol = current_table->gentemp((yyvsp[-2].expr)->symbol->type->name);
                                                                                                three_address_code.emit(*(new Quad("<<", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                            }
#line 2187 "y.tab.c"
    break;

  case 44: /* SHIFT_EXPRESSION: SHIFT_EXPRESSION SHIFT_RIGHT_OPERATOR ADDITIVE_EXPRESSION  */
#line 359 "tinyC3_22CS10058_22CS10063.y"
                                                                                            {
                                                                                                (yyval.expr) = new Expression();
                                                                                                (yyval.expr)->symbol = current_table->gentemp((yyvsp[-2].expr)->symbol->type->name);
                                                                                                three_address_code.emit(*(new Quad(">>", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                            }
#line 2197 "y.tab.c"
    break;

  case 45: /* RELATIONAL_EXPRESSION: SHIFT_EXPRESSION  */
#line 366 "tinyC3_22CS10058_22CS10063.y"
                                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2203 "y.tab.c"
    break;

  case 46: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION LESS_THAN SHIFT_EXPRESSION  */
#line 367 "tinyC3_22CS10058_22CS10063.y"
                                                                                                {
                                                                                                    (yyval.expr) = new Expression();
                                                                                                    (yyval.expr)->symbol = NULL;
                                                                                                    (yyval.expr)->type = 1;
                                                                                                    (yyval.expr)->truelist = makelist(getlineno());
                                                                                                    backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                    three_address_code.emit(*(new Quad("<", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                    (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                    three_address_code.emit(*(new Quad("goto")));
                                                                                                }
#line 2218 "y.tab.c"
    break;

  case 47: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION GREATER_THAN SHIFT_EXPRESSION  */
#line 377 "tinyC3_22CS10058_22CS10063.y"
                                                                                                {
                                                                                                    (yyval.expr) = new Expression();
                                                                                                    (yyval.expr)->symbol = NULL;
                                                                                                    (yyval.expr)->type = 1;
                                                                                                    (yyval.expr)->truelist = makelist(getlineno());
                                                                                                    backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                    three_address_code.emit(*(new Quad(">", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                    (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                    three_address_code.emit(*(new Quad("goto")));
                                                                                                }
#line 2233 "y.tab.c"
    break;

  case 48: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION LESS_THAN_EQUAL_TO SHIFT_EXPRESSION  */
#line 387 "tinyC3_22CS10058_22CS10063.y"
                                                                                                {
                                                                                                    (yyval.expr) = new Expression();
                                                                                                    (yyval.expr)->symbol = NULL;
                                                                                                    (yyval.expr)->type = 1;
                                                                                                    (yyval.expr)->truelist = makelist(getlineno());
                                                                                                    backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                    three_address_code.emit(*(new Quad("<=", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                    (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                    three_address_code.emit(*(new Quad("goto")));
                                                                                                }
#line 2248 "y.tab.c"
    break;

  case 49: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION GREATER_THAN_EQUAL_TO SHIFT_EXPRESSION  */
#line 397 "tinyC3_22CS10058_22CS10063.y"
                                                                                                {
                                                                                                    (yyval.expr) = new Expression();
                                                                                                    (yyval.expr)->symbol = NULL;
                                                                                                    (yyval.expr)->type = 1;
                                                                                                    (yyval.expr)->truelist = makelist(getlineno());
                                                                                                    backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                    three_address_code.emit(*(new Quad(">=", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                    (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                    three_address_code.emit(*(new Quad("goto")));
                                                                                                }
#line 2263 "y.tab.c"
    break;

  case 50: /* EQUALITY_EXPRESSION: RELATIONAL_EXPRESSION  */
#line 409 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2269 "y.tab.c"
    break;

  case 51: /* EQUALITY_EXPRESSION: EQUALITY_EXPRESSION EQUALITY_OPERATOR RELATIONAL_EXPRESSION  */
#line 410 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    {
                                                                                                        (yyval.expr) = new Expression();
                                                                                                        (yyval.expr)->symbol = NULL;
                                                                                                        (yyval.expr)->type = 1;
                                                                                                        (yyval.expr)->truelist = makelist(getlineno());
                                                                                                        backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                        three_address_code.emit(*(new Quad(">=", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                        (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                        three_address_code.emit(*(new Quad("goto")));
                                                                                                    }
#line 2284 "y.tab.c"
    break;

  case 52: /* EQUALITY_EXPRESSION: EQUALITY_EXPRESSION NON_EQUALITY_OPERATOR RELATIONAL_EXPRESSION  */
#line 420 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    {
                                                                                                        (yyval.expr) = new Expression();
                                                                                                        (yyval.expr)->symbol = NULL;
                                                                                                        (yyval.expr)->type = 1;
                                                                                                        (yyval.expr)->truelist = makelist(getlineno());
                                                                                                        backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                        three_address_code.emit(*(new Quad(">=", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                        (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                        three_address_code.emit(*(new Quad("goto")));
                                                                                                    }
#line 2299 "y.tab.c"
    break;

  case 53: /* AND_EXPRESSION: EQUALITY_EXPRESSION  */
#line 432 "tinyC3_22CS10058_22CS10063.y"
                                                                                            { (yyval.expr) = (yyvsp[0].expr); }
#line 2305 "y.tab.c"
    break;

  case 54: /* AND_EXPRESSION: AND_EXPRESSION BITWISE_AND_OPERATOR EQUALITY_EXPRESSION  */
#line 433 "tinyC3_22CS10058_22CS10063.y"
                                                                                            { 
                                                                                                (yyval.expr) = new Expression(current_table->gentemp((yyvsp[-2].expr)->symbol->type->name));
                                                                                                three_address_code.emit(*(new Quad("&", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                            }
#line 2314 "y.tab.c"
    break;

  case 55: /* EXCLUSIVE_OR_EXPRESSION: AND_EXPRESSION  */
#line 439 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2320 "y.tab.c"
    break;

  case 56: /* EXCLUSIVE_OR_EXPRESSION: EXCLUSIVE_OR_EXPRESSION XOR_OPERATOR AND_EXPRESSION  */
#line 440 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { 
                                                                                            (yyval.expr) = new Expression(current_table->gentemp((yyvsp[-2].expr)->symbol->type->name));
                                                                                            three_address_code.emit(*(new Quad("^", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                        }
#line 2329 "y.tab.c"
    break;

  case 57: /* INCLUSIVE_OR_EXPRESSION: EXCLUSIVE_OR_EXPRESSION  */
#line 446 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2335 "y.tab.c"
    break;

  case 58: /* INCLUSIVE_OR_EXPRESSION: INCLUSIVE_OR_EXPRESSION BITWISE_OR_OPERATOR EXCLUSIVE_OR_EXPRESSION  */
#line 447 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        { 
                                                                                                            (yyval.expr) = new Expression(current_table->gentemp((yyvsp[-2].expr)->symbol->type->name));
                                                                                                            three_address_code.emit(*(new Quad("|", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, (yyval.expr)->symbol->name)));
                                                                                                        }
#line 2344 "y.tab.c"
    break;

  case 59: /* LOGICAL_AND_EXPRESSION: INCLUSIVE_OR_EXPRESSION  */
#line 453 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2350 "y.tab.c"
    break;

  case 60: /* LOGICAL_AND_EXPRESSION: LOGICAL_AND_EXPRESSION LOGICAL_AND_OPERATOR INCLUSIVE_OR_EXPRESSION  */
#line 454 "tinyC3_22CS10058_22CS10063.y"
                                                                                                        {
                                                                                                            (yyval.expr) = new Expression();
                                                                                                            (yyval.expr)->symbol = NULL;
                                                                                                            (yyval.expr)->type = 1;
                                                                                                            (yyval.expr)->truelist = makelist(getlineno());
                                                                                                            backpatch((yyvsp[-2].expr)->truelist, getlineno());
                                                                                                            cout << "Hello" << endl;
                                                                                                            three_address_code.emit(*(new Quad("&&", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                            (yyval.expr)->falselist = merge((yyvsp[-2].expr)->falselist, makelist(getlineno()));
                                                                                                            three_address_code.emit(*(new Quad("goto")));
                                                                                                        }
#line 2366 "y.tab.c"
    break;

  case 61: /* LOGICAL_OR_EXPRESSION: LOGICAL_AND_EXPRESSION  */
#line 467 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2372 "y.tab.c"
    break;

  case 62: /* LOGICAL_OR_EXPRESSION: LOGICAL_OR_EXPRESSION LOGICAL_OR_OPERATOR LOGICAL_AND_EXPRESSION  */
#line 468 "tinyC3_22CS10058_22CS10063.y"
                                                                                                    {
                                                                                                        (yyval.expr) = new Expression();
                                                                                                        (yyval.expr)->symbol = NULL;
                                                                                                        (yyval.expr)->type = 1;
                                                                                                        (yyval.expr)->falselist = makelist(getlineno());
                                                                                                        backpatch((yyvsp[-2].expr)->falselist, getlineno());
                                                                                                        three_address_code.emit(*(new Quad("||", (yyvsp[-2].expr)->symbol->name, (yyvsp[0].expr)->symbol->name, "")));
                                                                                                        (yyval.expr)->truelist = merge((yyvsp[-2].expr)->truelist, makelist(getlineno()));
                                                                                                        three_address_code.emit(*(new Quad("goto")));
                                                                                                    }
#line 2387 "y.tab.c"
    break;

  case 63: /* CONDITIONAL_EXPRESSION: LOGICAL_OR_EXPRESSION  */
#line 480 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2393 "y.tab.c"
    break;

  case 64: /* CONDITIONAL_EXPRESSION: LOGICAL_OR_EXPRESSION TERNARY_OPERATOR M EXPRESSION N TERNARY_SEPERATOR M CONDITIONAL_EXPRESSION  */
#line 481 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                        {
                                                                                                                                            (yyval.expr) = new Expression();
                                                                                                                                            (yyval.expr)->symbol = current_table->gentemp((yyvsp[-7].expr)->symbol->type->name);
                                                                                                                                            backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-5].ln));
                                                                                                                                            backpatch((yyvsp[-7].expr)->falselist, (yyvsp[-1].ln));
                                                                                                                                            three_address_code.emit(*(new Quad("=", (yyvsp[0].expr)->symbol->name, "", (yyval.expr)->symbol->name)));
                                                                                                                                            three_address_code.emit(*(new Quad("goto", "", "", int_to_string(getlineno()+3))));
                                                                                                                                            backpatch((yyvsp[-3].nextlist), getlineno());
                                                                                                                                            three_address_code.emit(*(new Quad("=", (yyvsp[-4].expr)->symbol->name, "", (yyval.expr)->symbol->name)));
                                                                                                                                            three_address_code.emit(*(new Quad("goto", "", "", int_to_string(getlineno()+1))));
                                                                                                                                        }
#line 2409 "y.tab.c"
    break;

  case 65: /* ASSIGNMENT_EXPRESSION: CONDITIONAL_EXPRESSION  */
#line 494 "tinyC3_22CS10058_22CS10063.y"
                                                                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2415 "y.tab.c"
    break;

  case 66: /* ASSIGNMENT_EXPRESSION: UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION  */
#line 495 "tinyC3_22CS10058_22CS10063.y"
                                                                                                {
                                                                                                    (yyval.expr) = new Expression((yyvsp[-2].array)->symbol);
                                                                                                    if ((yyvsp[-1].op) == "=") {
                                                                                                        if ((yyvsp[-2].array)->symbol->type->name == SymbolType::TYPE_ARRAY) three_address_code.emit(*(new Quad("[]", (yyvsp[0].expr)->symbol->name, (yyvsp[-2].array)->temp->name, (yyvsp[-2].array)->symbol->name)));
                                                                                                        else three_address_code.emit(*(new Quad("=", (yyvsp[0].expr)->symbol->name, "", (yyvsp[-2].array)->symbol->name)));
                                                                                                    } else {
                                                                                                        char sym = (yyvsp[-1].op)[0];
                                                                                                        string oper = " ";
                                                                                                        oper[0] = sym;
                                                                                                        three_address_code.emit(*(new Quad(oper, (yyvsp[0].expr)->symbol->name, (yyvsp[-2].array)->symbol->name, (yyvsp[-2].array)->symbol->name)));
                                                                                                    }
                                                                                                }
#line 2432 "y.tab.c"
    break;

  case 67: /* ASSIGNMENT_OPERATOR: EQUAL_OPERATOR  */
#line 509 "tinyC3_22CS10058_22CS10063.y"
                                                        { (yyval.op) = (char *) "="; }
#line 2438 "y.tab.c"
    break;

  case 68: /* ASSIGNMENT_OPERATOR: ASSIGNMENT_OPERATORS  */
#line 510 "tinyC3_22CS10058_22CS10063.y"
                                                        { (yyval.op) = (yyvsp[0].val); }
#line 2444 "y.tab.c"
    break;

  case 69: /* EXPRESSION: ASSIGNMENT_EXPRESSION  */
#line 513 "tinyC3_22CS10058_22CS10063.y"
                                                                            { (yyval.expr) = (yyvsp[0].expr); }
#line 2450 "y.tab.c"
    break;

  case 70: /* EXPRESSION: EXPRESSION COMMA ASSIGNMENT_EXPRESSION  */
#line 514 "tinyC3_22CS10058_22CS10063.y"
                                                                            { (yyval.expr) = (yyvsp[0].expr); }
#line 2456 "y.tab.c"
    break;

  case 71: /* CONSTANT_EXPRESSION: CONDITIONAL_EXPRESSION  */
#line 517 "tinyC3_22CS10058_22CS10063.y"
                                                            { (yyval.expr) = (yyvsp[0].expr); }
#line 2462 "y.tab.c"
    break;

  case 72: /* DECLARATION: DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST_OPT SEMI_COLON  */
#line 522 "tinyC3_22CS10058_22CS10063.y"
                                                                                                {
                                                                                                    SymbolType * temp;
                                                                                                    for (auto symbol: *((yyvsp[-1].symbol_list))) {
                                                                                                        // cout << current_table->symbols.size() << endl;
                                                                                                        // cout << symbol->name << " " << current_table->name << endl;
                                                                                                        current_table->symbols.push_back(symbol);
                                                                                                        current_table->symbol_instance[symbol->name] = symbol;
                                                                                                        temp = symbol->type;
                                                                                                        if (temp == NULL) symbol->type = (yyvsp[-2].declaration_type);
                                                                                                        else {
                                                                                                            while(temp->array_elem_type != NULL) temp = temp->array_elem_type;
                                                                                                            temp->array_elem_type = (yyvsp[-2].declaration_type);
                                                                                                        }
                                                                                                    }
                                                                                                }
#line 2482 "y.tab.c"
    break;

  case 73: /* INIT_DECLARATOR_LIST_OPT: INIT_DECLARATOR_LIST  */
#line 539 "tinyC3_22CS10058_22CS10063.y"
                                                       { (yyval.symbol_list) = (yyvsp[0].symbol_list); }
#line 2488 "y.tab.c"
    break;

  case 74: /* INIT_DECLARATOR_LIST_OPT: %empty  */
#line 540 "tinyC3_22CS10058_22CS10063.y"
                                                       { /*No semantics*/ }
#line 2494 "y.tab.c"
    break;

  case 75: /* DECLARATION_SPECIFIERS: STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS_OPT  */
#line 543 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { /*IGNORED*/ }
#line 2500 "y.tab.c"
    break;

  case 76: /* DECLARATION_SPECIFIERS: TYPE_SPECIFIER DECLARATION_SPECIFIERS_OPT  */
#line 544 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { (yyval.declaration_type) = (yyvsp[-1].declaration_type); }
#line 2506 "y.tab.c"
    break;

  case 77: /* DECLARATION_SPECIFIERS: TYPE_QUALIFIER DECLARATION_SPECIFIERS_OPT  */
#line 545 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { /*IGNORED*/ }
#line 2512 "y.tab.c"
    break;

  case 78: /* DECLARATION_SPECIFIERS: FUNCTION_SPECIFIER DECLARATION_SPECIFIERS_OPT  */
#line 546 "tinyC3_22CS10058_22CS10063.y"
                                                                                        { /*IGNORED*/ }
#line 2518 "y.tab.c"
    break;

  case 79: /* DECLARATION_SPECIFIERS_OPT: DECLARATION_SPECIFIERS  */
#line 549 "tinyC3_22CS10058_22CS10063.y"
                                                            { /*IGNORED*/ }
#line 2524 "y.tab.c"
    break;

  case 80: /* DECLARATION_SPECIFIERS_OPT: %empty  */
#line 550 "tinyC3_22CS10058_22CS10063.y"
                                                            { /*IGNORED*/ }
#line 2530 "y.tab.c"
    break;

  case 81: /* INIT_DECLARATOR_LIST: INIT_DECLARATOR  */
#line 553 "tinyC3_22CS10058_22CS10063.y"
                                                    { (yyval.symbol_list) = new vector<Symbol *>; (yyval.symbol_list)->push_back((yyvsp[0].current_symbol)); }
#line 2536 "y.tab.c"
    break;

  case 82: /* INIT_DECLARATOR_LIST: INIT_DECLARATOR_LIST COMMA INIT_DECLARATOR  */
#line 554 "tinyC3_22CS10058_22CS10063.y"
                                                                               { (yyval.symbol_list) = (yyvsp[-2].symbol_list); (yyval.symbol_list)->push_back((yyvsp[0].current_symbol)); }
#line 2542 "y.tab.c"
    break;

  case 83: /* INIT_DECLARATOR: DECLARATOR  */
#line 557 "tinyC3_22CS10058_22CS10063.y"
                                               { (yyval.current_symbol) = (yyvsp[0].current_symbol); }
#line 2548 "y.tab.c"
    break;

  case 84: /* INIT_DECLARATOR: DECLARATOR EQUAL_OPERATOR INITIALIZER  */
#line 558 "tinyC3_22CS10058_22CS10063.y"
                                                                            {
                                                                                (yyval.current_symbol) = (yyvsp[-2].current_symbol);
                                                                            }
#line 2556 "y.tab.c"
    break;

  case 85: /* STORAGE_CLASS_SPECIFIER: EXTERN  */
#line 563 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2562 "y.tab.c"
    break;

  case 86: /* STORAGE_CLASS_SPECIFIER: STATIC  */
#line 564 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2568 "y.tab.c"
    break;

  case 87: /* STORAGE_CLASS_SPECIFIER: AUTO  */
#line 565 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2574 "y.tab.c"
    break;

  case 88: /* STORAGE_CLASS_SPECIFIER: REGISTER  */
#line 566 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2580 "y.tab.c"
    break;

  case 89: /* TYPE_SPECIFIER: VOID  */
#line 569 "tinyC3_22CS10058_22CS10063.y"
                                                { (yyval.declaration_type) = new SymbolType(SymbolType::TYPE_VOID); }
#line 2586 "y.tab.c"
    break;

  case 90: /* TYPE_SPECIFIER: CHAR  */
#line 570 "tinyC3_22CS10058_22CS10063.y"
                                                { (yyval.declaration_type) = new SymbolType(SymbolType::TYPE_CHAR); }
#line 2592 "y.tab.c"
    break;

  case 91: /* TYPE_SPECIFIER: SHORT  */
#line 571 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2598 "y.tab.c"
    break;

  case 92: /* TYPE_SPECIFIER: INT  */
#line 572 "tinyC3_22CS10058_22CS10063.y"
                                                { (yyval.declaration_type) = new SymbolType(SymbolType::TYPE_INT); }
#line 2604 "y.tab.c"
    break;

  case 93: /* TYPE_SPECIFIER: LONG  */
#line 573 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2610 "y.tab.c"
    break;

  case 94: /* TYPE_SPECIFIER: FLOAT  */
#line 574 "tinyC3_22CS10058_22CS10063.y"
                                                { (yyval.declaration_type) = new SymbolType(SymbolType::TYPE_FLOAT); }
#line 2616 "y.tab.c"
    break;

  case 95: /* TYPE_SPECIFIER: DOUBLE  */
#line 575 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2622 "y.tab.c"
    break;

  case 96: /* TYPE_SPECIFIER: SIGNED  */
#line 576 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2628 "y.tab.c"
    break;

  case 97: /* TYPE_SPECIFIER: UNSIGNED  */
#line 577 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2634 "y.tab.c"
    break;

  case 98: /* TYPE_SPECIFIER: BOOL  */
#line 578 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2640 "y.tab.c"
    break;

  case 99: /* TYPE_SPECIFIER: COMPLEX  */
#line 579 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2646 "y.tab.c"
    break;

  case 100: /* TYPE_SPECIFIER: IMAGINARY  */
#line 580 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2652 "y.tab.c"
    break;

  case 101: /* SPECIFIER_QUALIFIER_LIST: TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST_OPT  */
#line 583 "tinyC3_22CS10058_22CS10063.y"
                                                                                { (yyval.declaration_type) = (yyvsp[-1].declaration_type); }
#line 2658 "y.tab.c"
    break;

  case 102: /* SPECIFIER_QUALIFIER_LIST: TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST_OPT  */
#line 584 "tinyC3_22CS10058_22CS10063.y"
                                                                                { /*IGNORED*/ }
#line 2664 "y.tab.c"
    break;

  case 103: /* SPECIFIER_QUALIFIER_LIST_OPT: SPECIFIER_QUALIFIER_LIST  */
#line 587 "tinyC3_22CS10058_22CS10063.y"
                                                             { (yyval.declaration_type) = (yyvsp[0].declaration_type); }
#line 2670 "y.tab.c"
    break;

  case 104: /* SPECIFIER_QUALIFIER_LIST_OPT: %empty  */
#line 588 "tinyC3_22CS10058_22CS10063.y"
                                                             { (yyval.declaration_type) = NULL; }
#line 2676 "y.tab.c"
    break;

  case 105: /* TYPE_QUALIFIER: CONST  */
#line 591 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2682 "y.tab.c"
    break;

  case 106: /* TYPE_QUALIFIER: RESTRICT  */
#line 592 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2688 "y.tab.c"
    break;

  case 107: /* TYPE_QUALIFIER: VOLATILE  */
#line 593 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2694 "y.tab.c"
    break;

  case 108: /* FUNCTION_SPECIFIER: INLINE  */
#line 596 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2700 "y.tab.c"
    break;

  case 109: /* DECLARATOR: POINTER_OPT DIRECT_DECLARATOR  */
#line 599 "tinyC3_22CS10058_22CS10063.y"
                                                                    {
                                                                        (yyval.current_symbol) = (yyvsp[0].current_symbol);
                                                                        if ((yyvsp[-1].declaration_type) != NULL) {
                                                                            SymbolType * temp = (yyvsp[-1].declaration_type);
                                                                            while(temp->array_elem_type != NULL) temp = temp->array_elem_type;
                                                                            temp->array_elem_type = (yyvsp[0].current_symbol)->type;
                                                                            (yyvsp[0].current_symbol)->type = temp;
                                                                        }
                                                                    }
#line 2714 "y.tab.c"
    break;

  case 110: /* POINTER_OPT: POINTER  */
#line 610 "tinyC3_22CS10058_22CS10063.y"
                                            { (yyval.declaration_type) = (yyvsp[0].declaration_type); }
#line 2720 "y.tab.c"
    break;

  case 111: /* POINTER_OPT: %empty  */
#line 611 "tinyC3_22CS10058_22CS10063.y"
                                            { (yyval.declaration_type) = NULL; }
#line 2726 "y.tab.c"
    break;

  case 112: /* DIRECT_DECLARATOR: IDENTIFIER  */
#line 614 "tinyC3_22CS10058_22CS10063.y"
                                               { (yyval.current_symbol) = new Symbol((yyvsp[0].val)); }
#line 2732 "y.tab.c"
    break;

  case 113: /* DIRECT_DECLARATOR: LEFT_PARANTHESIS DECLARATOR RIGHT_PARANTHESIS  */
#line 615 "tinyC3_22CS10058_22CS10063.y"
                                                                                  { (yyval.current_symbol) = (yyvsp[-1].current_symbol); }
#line 2738 "y.tab.c"
    break;

  case 114: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT RIGHT_SQUARE_BRACKET  */
#line 616 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                    { 
                                                                                                                                                        SymbolType * temp = new SymbolType(SymbolType::TYPE_ARRAY, string_to_int((yyvsp[-1].expr)->symbol->init_val));
                                                                                                                                                        (yyval.current_symbol) = (yyvsp[-4].current_symbol);
                                                                                                                                                        if ((yyval.current_symbol)->type == NULL) (yyval.current_symbol)->type = temp;
                                                                                                                                                        else {
                                                                                                                                                            SymbolType * t = (yyval.current_symbol)->type;
                                                                                                                                                            while(t->array_elem_type != NULL) t = t->array_elem_type;
                                                                                                                                                            t->array_elem_type = temp;
                                                                                                                                                        }
                                                                                                                                                    }
#line 2753 "y.tab.c"
    break;

  case 115: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET STATIC TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 626 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                    { /*IGNORED*/ }
#line 2759 "y.tab.c"
    break;

  case 116: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST STATIC ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 627 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                { /*IGNORED*/ }
#line 2765 "y.tab.c"
    break;

  case 117: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT MULTIPLICATION_OPERATOR RIGHT_SQUARE_BRACKET  */
#line 628 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                               { /*IGNORED*/ }
#line 2771 "y.tab.c"
    break;

  case 118: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_PARANTHESIS PARAMETER_TYPE_LIST RIGHT_PARANTHESIS  */
#line 629 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                { 
                                                                                                                    (yyval.current_symbol) = (yyvsp[-3].current_symbol);
                                                                                                                    SymbolTable * func_table = new SymbolTable((yyvsp[-3].current_symbol)->name, current_table);
                                                                                                                    (yyvsp[-3].current_symbol)->nested = func_table;

                                                                                                                    for(auto symbol: *((yyvsp[-1].symbol_list))) {
                                                                                                                        func_table->symbols.push_back(symbol);
                                                                                                                        func_table->symbol_instance[symbol->name] = symbol;
                                                                                                                    }
                                                                                                                }
#line 2786 "y.tab.c"
    break;

  case 119: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_PARANTHESIS IDENTIFIER_LIST_OPT RIGHT_PARANTHESIS  */
#line 639 "tinyC3_22CS10058_22CS10063.y"
                                                                                                             { /*IGNORED*/ }
#line 2792 "y.tab.c"
    break;

  case 120: /* ASSIGNMENT_EXPRESSION_OPT: ASSIGNMENT_EXPRESSION  */
#line 642 "tinyC3_22CS10058_22CS10063.y"
                                                          { (yyval.expr) = (yyvsp[0].expr); }
#line 2798 "y.tab.c"
    break;

  case 121: /* ASSIGNMENT_EXPRESSION_OPT: %empty  */
#line 643 "tinyC3_22CS10058_22CS10063.y"
                                    { (yyval.expr) = NULL; }
#line 2804 "y.tab.c"
    break;

  case 122: /* POINTER: MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT  */
#line 646 "tinyC3_22CS10058_22CS10063.y"
                                                                                    { (yyval.declaration_type) = new SymbolType(SymbolType::TYPE_POINTER); }
#line 2810 "y.tab.c"
    break;

  case 123: /* POINTER: MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT POINTER  */
#line 647 "tinyC3_22CS10058_22CS10063.y"
                                                                                            { (yyval.declaration_type) = new SymbolType(SymbolType::TYPE_POINTER, POINTER_SIZE, (yyvsp[0].declaration_type)); }
#line 2816 "y.tab.c"
    break;

  case 124: /* TYPE_QUALIFIER_LIST: TYPE_QUALIFIER  */
#line 650 "tinyC3_22CS10058_22CS10063.y"
                                                   { /*IGNORED*/ }
#line 2822 "y.tab.c"
    break;

  case 125: /* TYPE_QUALIFIER_LIST: TYPE_QUALIFIER_LIST TYPE_QUALIFIER  */
#line 651 "tinyC3_22CS10058_22CS10063.y"
                                                                       { /*IGNORED*/ }
#line 2828 "y.tab.c"
    break;

  case 126: /* TYPE_QUALIFIER_LIST_OPT: TYPE_QUALIFIER_LIST  */
#line 654 "tinyC3_22CS10058_22CS10063.y"
                                                        { /*IGNORED*/ }
#line 2834 "y.tab.c"
    break;

  case 127: /* TYPE_QUALIFIER_LIST_OPT: %empty  */
#line 655 "tinyC3_22CS10058_22CS10063.y"
                                    { /*IGNORED*/ }
#line 2840 "y.tab.c"
    break;

  case 128: /* PARAMETER_TYPE_LIST: PARAMETER_LIST  */
#line 658 "tinyC3_22CS10058_22CS10063.y"
                                                   { (yyval.symbol_list) = (yyvsp[0].symbol_list); }
#line 2846 "y.tab.c"
    break;

  case 129: /* PARAMETER_TYPE_LIST: PARAMETER_LIST COMMA TRIPLE_DOT  */
#line 659 "tinyC3_22CS10058_22CS10063.y"
                                                                    { /*IGNORED*/ }
#line 2852 "y.tab.c"
    break;

  case 130: /* PARAMETER_LIST: PARAMETER_DECLARATION  */
#line 662 "tinyC3_22CS10058_22CS10063.y"
                                                          { (yyval.symbol_list) = new vector<Symbol *>; (yyval.symbol_list)->push_back((yyvsp[0].current_symbol)); }
#line 2858 "y.tab.c"
    break;

  case 131: /* PARAMETER_LIST: PARAMETER_LIST COMMA PARAMETER_DECLARATION  */
#line 663 "tinyC3_22CS10058_22CS10063.y"
                                                                               { (yyval.symbol_list)=(yyvsp[-2].symbol_list); (yyval.symbol_list)->push_back((yyvsp[0].current_symbol)); }
#line 2864 "y.tab.c"
    break;

  case 132: /* PARAMETER_DECLARATION: DECLARATION_SPECIFIERS DECLARATOR  */
#line 666 "tinyC3_22CS10058_22CS10063.y"
                                                                        { 
                                                                            (yyval.current_symbol) = (yyvsp[0].current_symbol);
                                                                            if ((yyval.current_symbol)->type == NULL) (yyval.current_symbol)->type = (yyvsp[-1].declaration_type);
                                                                            else {
                                                                                SymbolType * temp = (yyval.current_symbol)->type;
                                                                                while(temp->array_elem_type != NULL)  temp = temp->array_elem_type;
                                                                                temp->array_elem_type = (yyvsp[-1].declaration_type);
                                                                            }
                                                                        }
#line 2878 "y.tab.c"
    break;

  case 133: /* PARAMETER_DECLARATION: DECLARATION_SPECIFIERS  */
#line 675 "tinyC3_22CS10058_22CS10063.y"
                                                           { /*IGNORED*/ }
#line 2884 "y.tab.c"
    break;

  case 134: /* IDENTIFIER_LIST: IDENTIFIER  */
#line 678 "tinyC3_22CS10058_22CS10063.y"
                                               { /*IGNORED*/ }
#line 2890 "y.tab.c"
    break;

  case 135: /* IDENTIFIER_LIST: IDENTIFIER_LIST COMMA IDENTIFIER  */
#line 679 "tinyC3_22CS10058_22CS10063.y"
                                                                     { /*IGNORED*/ }
#line 2896 "y.tab.c"
    break;

  case 136: /* IDENTIFIER_LIST_OPT: IDENTIFIER_LIST  */
#line 682 "tinyC3_22CS10058_22CS10063.y"
                                                    { /*IGNORED*/ }
#line 2902 "y.tab.c"
    break;

  case 137: /* IDENTIFIER_LIST_OPT: %empty  */
#line 683 "tinyC3_22CS10058_22CS10063.y"
                                    { /*IGNORED*/ }
#line 2908 "y.tab.c"
    break;

  case 138: /* TYPE_NAME: SPECIFIER_QUALIFIER_LIST  */
#line 686 "tinyC3_22CS10058_22CS10063.y"
                                                             { /*IGNORED*/ }
#line 2914 "y.tab.c"
    break;

  case 139: /* INITIALIZER: ASSIGNMENT_EXPRESSION  */
#line 689 "tinyC3_22CS10058_22CS10063.y"
                                                          { (yyval.expr) = (yyvsp[0].expr); }
#line 2920 "y.tab.c"
    break;

  case 140: /* INITIALIZER: LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET  */
#line 690 "tinyC3_22CS10058_22CS10063.y"
                                                                                            { /*IGNORED*/ }
#line 2926 "y.tab.c"
    break;

  case 141: /* INITIALIZER: LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET  */
#line 691 "tinyC3_22CS10058_22CS10063.y"
                                                                                                  { /*IGNORED*/ }
#line 2932 "y.tab.c"
    break;

  case 142: /* INITIALIZER_LIST: DESIGNATION_OPT INITIALIZER  */
#line 694 "tinyC3_22CS10058_22CS10063.y"
                                                                { /*IGNORED*/ }
#line 2938 "y.tab.c"
    break;

  case 143: /* INITIALIZER_LIST: INITIALIZER_LIST COMMA DESIGNATION_OPT INITIALIZER  */
#line 695 "tinyC3_22CS10058_22CS10063.y"
                                                                                       { /*IGNORED*/ }
#line 2944 "y.tab.c"
    break;

  case 144: /* DESIGNATION: DESIGNATOR_LIST EQUAL_OPERATOR  */
#line 698 "tinyC3_22CS10058_22CS10063.y"
                                                                   { /*IGNORED*/ }
#line 2950 "y.tab.c"
    break;

  case 145: /* DESIGNATION_OPT: DESIGNATION  */
#line 701 "tinyC3_22CS10058_22CS10063.y"
                                                { /*IGNORED*/ }
#line 2956 "y.tab.c"
    break;

  case 146: /* DESIGNATION_OPT: %empty  */
#line 702 "tinyC3_22CS10058_22CS10063.y"
                                    { /*IGNORED*/ }
#line 2962 "y.tab.c"
    break;

  case 147: /* DESIGNATOR_LIST: DESIGNATOR  */
#line 705 "tinyC3_22CS10058_22CS10063.y"
                                               { /*IGNORED*/ }
#line 2968 "y.tab.c"
    break;

  case 148: /* DESIGNATOR_LIST: DESIGNATOR_LIST DESIGNATOR  */
#line 706 "tinyC3_22CS10058_22CS10063.y"
                                                               { /*IGNORED*/ }
#line 2974 "y.tab.c"
    break;

  case 149: /* DESIGNATOR: LEFT_SQUARE_BRACKET CONSTANT_EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 709 "tinyC3_22CS10058_22CS10063.y"
                                                                                                 { /*IGNORED*/ }
#line 2980 "y.tab.c"
    break;

  case 150: /* DESIGNATOR: DOT IDENTIFIER  */
#line 710 "tinyC3_22CS10058_22CS10063.y"
                                                   { /*IGNORED*/ }
#line 2986 "y.tab.c"
    break;

  case 151: /* STATEMENT: LABELED_STATEMENT  */
#line 715 "tinyC3_22CS10058_22CS10063.y"
                                                       { /*IGNORED*/ }
#line 2992 "y.tab.c"
    break;

  case 152: /* $@1: %empty  */
#line 716 "tinyC3_22CS10058_22CS10063.y"
                                    { 
                                        current_table = new SymbolTable(current_table->name+int_to_string(table_count++), current_table); 
                                        three_address_code.emit(*(new Quad(current_table->name+":")));
                                    }
#line 3001 "y.tab.c"
    break;

  case 153: /* STATEMENT: $@1 COMPOUND_STATEMENT  */
#line 719 "tinyC3_22CS10058_22CS10063.y"
                                                           { current_table = current_table->parent; }
#line 3007 "y.tab.c"
    break;

  case 154: /* STATEMENT: EXPRESSION_STATEMENT  */
#line 720 "tinyC3_22CS10058_22CS10063.y"
                                                       { (yyval.nextlist) = NULL; }
#line 3013 "y.tab.c"
    break;

  case 155: /* STATEMENT: SELECTION_STATEMENT  */
#line 721 "tinyC3_22CS10058_22CS10063.y"
                                                       { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3019 "y.tab.c"
    break;

  case 156: /* STATEMENT: ITERATION_STATEMENT  */
#line 722 "tinyC3_22CS10058_22CS10063.y"
                                                       { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3025 "y.tab.c"
    break;

  case 157: /* STATEMENT: JUMP_STATEMENT  */
#line 723 "tinyC3_22CS10058_22CS10063.y"
                                                       { }
#line 3031 "y.tab.c"
    break;

  case 158: /* LABELED_STATEMENT: IDENTIFIER TERNARY_SEPERATOR STATEMENT  */
#line 726 "tinyC3_22CS10058_22CS10063.y"
                                                                          { /*IGNORED*/ }
#line 3037 "y.tab.c"
    break;

  case 159: /* LABELED_STATEMENT: CASE CONSTANT_EXPRESSION TERNARY_SEPERATOR STATEMENT  */
#line 727 "tinyC3_22CS10058_22CS10063.y"
                                                                                       { /*IGNORED*/ }
#line 3043 "y.tab.c"
    break;

  case 160: /* LABELED_STATEMENT: DEFAULT TERNARY_SEPERATOR STATEMENT  */
#line 728 "tinyC3_22CS10058_22CS10063.y"
                                                                      { /*IGNORED*/ }
#line 3049 "y.tab.c"
    break;

  case 161: /* COMPOUND_STATEMENT: LEFT_CURLY_BRACKET BLOCK_ITEM_LIST_OPT RIGHT_CURLY_BRACKET  */
#line 731 "tinyC3_22CS10058_22CS10063.y"
                                                                                             { (yyval.nextlist) = (yyvsp[-1].nextlist); }
#line 3055 "y.tab.c"
    break;

  case 162: /* BLOCK_ITEM_LIST: BLOCK_ITEM  */
#line 734 "tinyC3_22CS10058_22CS10063.y"
                                                             { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3061 "y.tab.c"
    break;

  case 163: /* BLOCK_ITEM_LIST: BLOCK_ITEM_LIST M BLOCK_ITEM  */
#line 735 "tinyC3_22CS10058_22CS10063.y"
                                                               { (yyval.nextlist) = (yyvsp[0].nextlist); backpatch((yyvsp[-2].nextlist), (yyvsp[-1].ln)); }
#line 3067 "y.tab.c"
    break;

  case 164: /* BLOCK_ITEM: DECLARATION  */
#line 738 "tinyC3_22CS10058_22CS10063.y"
                                              { (yyval.nextlist) = NULL; }
#line 3073 "y.tab.c"
    break;

  case 165: /* BLOCK_ITEM: STATEMENT  */
#line 739 "tinyC3_22CS10058_22CS10063.y"
                                              { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3079 "y.tab.c"
    break;

  case 166: /* EXPRESSION_STATEMENT: EXPRESSION_OPT SEMI_COLON  */
#line 742 "tinyC3_22CS10058_22CS10063.y"
                                                            { /*NO SEMANTICS*/ }
#line 3085 "y.tab.c"
    break;

  case 167: /* SELECTION_STATEMENT: IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS M STATEMENT N  */
#line 745 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            {
                                                                                                                cout << "Hello" << endl;
                                                                                                                backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-2].ln));
                                                                                                                (yyval.nextlist) = merge((yyvsp[-4].expr)->falselist, merge((yyvsp[-1].nextlist), (yyvsp[0].nextlist)));
                                                                                                            }
#line 3095 "y.tab.c"
    break;

  case 168: /* SELECTION_STATEMENT: IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS M STATEMENT N ELSE M STATEMENT  */
#line 750 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                    { 
                                                                                                                        backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-5].ln));
                                                                                                                        backpatch((yyvsp[-7].expr)->falselist, (yyvsp[-1].ln));
                                                                                                                        (yyval.nextlist) = merge(merge((yyvsp[-4].nextlist), (yyvsp[-3].nextlist)), (yyvsp[0].nextlist));
                                                                                                                    }
#line 3105 "y.tab.c"
    break;

  case 169: /* SELECTION_STATEMENT: SWITCH LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT  */
#line 755 "tinyC3_22CS10058_22CS10063.y"
                                                                                                 { /*IGNORED*/ }
#line 3111 "y.tab.c"
    break;

  case 170: /* ITERATION_STATEMENT: WHILE LEFT_PARANTHESIS M EXPRESSION RIGHT_PARANTHESIS M STATEMENT  */
#line 758 "tinyC3_22CS10058_22CS10063.y"
                                                                                                      {
                                                                                                        (yyval.nextlist) = (yyvsp[-3].expr)->falselist;
                                                                                                        backpatch((yyvsp[0].nextlist), (yyvsp[-4].ln));
                                                                                                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].ln));
                                                                                                        three_address_code.emit(*(new Quad("goto", "", "", int_to_string((yyvsp[-4].ln)))));
                                                                                                    }
#line 3122 "y.tab.c"
    break;

  case 171: /* ITERATION_STATEMENT: DO M STATEMENT WHILE LEFT_PARANTHESIS M EXPRESSION RIGHT_PARANTHESIS SEMI_COLON  */
#line 764 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                    {
                                                                                                                        (yyval.nextlist) = (yyvsp[-2].expr)->falselist;
                                                                                                                        backpatch((yyvsp[-6].nextlist), (yyvsp[-3].ln));
                                                                                                                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].ln));
                                                                                                                    }
#line 3132 "y.tab.c"
    break;

  case 172: /* ITERATION_STATEMENT: FOR LEFT_PARANTHESIS EXPRESSION_OPT SEMI_COLON M EXPRESSION_OPT SEMI_COLON M EXPRESSION_OPT N RIGHT_PARANTHESIS M STATEMENT  */
#line 769 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                                                {
                                                                                                                                                                    (yyval.nextlist) = (yyvsp[-7].expr)->falselist;
                                                                                                                                                                    backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-1].ln));
                                                                                                                                                                    backpatch((yyvsp[0].nextlist), (yyvsp[-5].ln));
                                                                                                                                                                    backpatch((yyvsp[-3].nextlist), (yyvsp[-8].ln));
                                                                                                                                                                }
#line 3143 "y.tab.c"
    break;

  case 173: /* ITERATION_STATEMENT: FOR LEFT_PARANTHESIS DECLARATION EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT  */
#line 775 "tinyC3_22CS10058_22CS10063.y"
                                                                                                                                        { /*IGNORED*/ }
#line 3149 "y.tab.c"
    break;

  case 174: /* JUMP_STATEMENT: GOTO IDENTIFIER SEMI_COLON  */
#line 778 "tinyC3_22CS10058_22CS10063.y"
                                                             { /*IGNORED*/ }
#line 3155 "y.tab.c"
    break;

  case 175: /* JUMP_STATEMENT: CONTINUE SEMI_COLON  */
#line 779 "tinyC3_22CS10058_22CS10063.y"
                                                             { /*IGNORED*/ }
#line 3161 "y.tab.c"
    break;

  case 176: /* JUMP_STATEMENT: BREAK SEMI_COLON  */
#line 780 "tinyC3_22CS10058_22CS10063.y"
                                                              { /*IGNORED*/ }
#line 3167 "y.tab.c"
    break;

  case 177: /* JUMP_STATEMENT: RETURN EXPRESSION_OPT SEMI_COLON  */
#line 781 "tinyC3_22CS10058_22CS10063.y"
                                                                   { }
#line 3173 "y.tab.c"
    break;

  case 178: /* M: %empty  */
#line 784 "tinyC3_22CS10058_22CS10063.y"
                                  { (yyval.ln) = getlineno(); }
#line 3179 "y.tab.c"
    break;

  case 179: /* N: %empty  */
#line 787 "tinyC3_22CS10058_22CS10063.y"
                                  { (yyval.nextlist) = makelist(getlineno()); three_address_code.emit(*(new Quad("goto"))); }
#line 3185 "y.tab.c"
    break;

  case 180: /* BLOCK_ITEM_LIST_OPT: BLOCK_ITEM_LIST  */
#line 791 "tinyC3_22CS10058_22CS10063.y"
                                                  { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3191 "y.tab.c"
    break;

  case 181: /* BLOCK_ITEM_LIST_OPT: %empty  */
#line 792 "tinyC3_22CS10058_22CS10063.y"
                                                  { (yyval.nextlist) = NULL; }
#line 3197 "y.tab.c"
    break;

  case 182: /* EXPRESSION_OPT: EXPRESSION  */
#line 795 "tinyC3_22CS10058_22CS10063.y"
                                              { (yyval.expr) = (yyvsp[0].expr); }
#line 3203 "y.tab.c"
    break;

  case 183: /* EXPRESSION_OPT: %empty  */
#line 796 "tinyC3_22CS10058_22CS10063.y"
                                              { (yyval.expr) = NULL; }
#line 3209 "y.tab.c"
    break;

  case 184: /* TRANSLATIONAL_UNIT: EXTERNAL_DECLARATION  */
#line 801 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { /*NO SEMANTICS*/ }
#line 3215 "y.tab.c"
    break;

  case 185: /* TRANSLATIONAL_UNIT: TRANSLATIONAL_UNIT EXTERNAL_DECLARATION  */
#line 802 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { /*NO SEMANTICS*/ }
#line 3221 "y.tab.c"
    break;

  case 186: /* EXTERNAL_DECLARATION: FUNCTION_DEFINITION  */
#line 805 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { /*NO SEMANTICS*/ }
#line 3227 "y.tab.c"
    break;

  case 187: /* EXTERNAL_DECLARATION: DECLARATION  */
#line 806 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { /*NO SEMANTICS*/ }
#line 3233 "y.tab.c"
    break;

  case 188: /* $@2: %empty  */
#line 809 "tinyC3_22CS10058_22CS10063.y"
                                                                                            {   
                                                                                                if (current_table->symbol_instance[(yyvsp[-1].current_symbol)->name] == NULL) {
                                                                                                    current_table->symbols.push_back((yyvsp[-1].current_symbol));
                                                                                                    (yyvsp[-1].current_symbol)->type = (yyvsp[-2].declaration_type);
                                                                                                    current_table->symbol_instance[(yyvsp[-1].current_symbol)->name] = (yyvsp[-1].current_symbol);
                                                                                                    (yyvsp[-1].current_symbol)->nested = new SymbolTable((yyvsp[-1].current_symbol)->name, current_table);
                                                                                                    current_table = (yyvsp[-1].current_symbol)->nested; 
                                                                                                } else {
                                                                                                    current_table = current_table->symbol_instance[(yyvsp[-1].current_symbol)->name]->nested; 
                                                                                                }
                                                                                                three_address_code.emit(*(new Quad(current_table->name+":")));
                                                                                            }
#line 3250 "y.tab.c"
    break;

  case 189: /* FUNCTION_DEFINITION: DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST_OPT $@2 COMPOUND_STATEMENT  */
#line 822 "tinyC3_22CS10058_22CS10063.y"
                                                                                                               { current_table = current_table->parent; }
#line 3256 "y.tab.c"
    break;

  case 190: /* DECLARATION_LIST: DECLARATION  */
#line 825 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { }
#line 3262 "y.tab.c"
    break;

  case 191: /* DECLARATION_LIST: DECLARATION_LIST DECLARATION  */
#line 826 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { }
#line 3268 "y.tab.c"
    break;

  case 192: /* DECLARATION_LIST_OPT: DECLARATION_LIST  */
#line 829 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { }
#line 3274 "y.tab.c"
    break;

  case 193: /* DECLARATION_LIST_OPT: %empty  */
#line 830 "tinyC3_22CS10058_22CS10063.y"
                                                                                                            { }
#line 3280 "y.tab.c"
    break;


#line 3284 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 832 "tinyC3_22CS10058_22CS10063.y"


void yyerror(string s) {
    cout << s << endl;
}
