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
#line 1 "tinyc_yacc.y"

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
    void add_next(tree_pointer root, tree_pointer next);
    void print_parse_tree(tree_pointer root, int depth);
    tree_pointer parse_tree = NULL;

#line 93 "y.tab.c"

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
    RIGHT_PARANTHESIS = 258,       /* RIGHT_PARANTHESIS  */
    ELSE = 259,                    /* ELSE  */
    AUTO = 260,                    /* AUTO  */
    ENUM = 261,                    /* ENUM  */
    RESTRICT = 262,                /* RESTRICT  */
    UNSIGNED = 263,                /* UNSIGNED  */
    BREAK = 264,                   /* BREAK  */
    EXTERN = 265,                  /* EXTERN  */
    RETURN = 266,                  /* RETURN  */
    VOID = 267,                    /* VOID  */
    CASE = 268,                    /* CASE  */
    FLOAT = 269,                   /* FLOAT  */
    SHORT = 270,                   /* SHORT  */
    VOLATILE = 271,                /* VOLATILE  */
    CHAR = 272,                    /* CHAR  */
    FOR = 273,                     /* FOR  */
    SIGNED = 274,                  /* SIGNED  */
    WHILE = 275,                   /* WHILE  */
    CONST = 276,                   /* CONST  */
    GOTO = 277,                    /* GOTO  */
    SIZEOF = 278,                  /* SIZEOF  */
    BOOL = 279,                    /* BOOL  */
    CONTINUE = 280,                /* CONTINUE  */
    IF = 281,                      /* IF  */
    STATIC = 282,                  /* STATIC  */
    COMPLEX = 283,                 /* COMPLEX  */
    DEFAULT = 284,                 /* DEFAULT  */
    INLINE = 285,                  /* INLINE  */
    STRUCT = 286,                  /* STRUCT  */
    IMAGINARY = 287,               /* IMAGINARY  */
    DO = 288,                      /* DO  */
    INT = 289,                     /* INT  */
    SWITCH = 290,                  /* SWITCH  */
    DOUBLE = 291,                  /* DOUBLE  */
    LONG = 292,                    /* LONG  */
    TYPEDEF = 293,                 /* TYPEDEF  */
    REGISTER = 294,                /* REGISTER  */
    UNION = 295,                   /* UNION  */
    IDENTIFIER = 296,              /* IDENTIFIER  */
    STRING_LITERAL = 297,          /* STRING_LITERAL  */
    CONSTANT = 298,                /* CONSTANT  */
    LESS_THAN = 299,               /* LESS_THAN  */
    LESS_THAN_EQUAL_TO = 300,      /* LESS_THAN_EQUAL_TO  */
    GREATER_THAN = 301,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL_TO = 302,   /* GREATER_THAN_EQUAL_TO  */
    ESCAPE_OPERATOR = 303,         /* ESCAPE_OPERATOR  */
    LEFT_SQUARE_BRACKET = 304,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 305,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARANTHESIS = 306,        /* LEFT_PARANTHESIS  */
    LEFT_CURLY_BRACKET = 307,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 308,     /* RIGHT_CURLY_BRACKET  */
    DOT = 309,                     /* DOT  */
    POINTER_ACCESS = 310,          /* POINTER_ACCESS  */
    INCREMENT_OPERATOR = 311,      /* INCREMENT_OPERATOR  */
    DECREMENT_OPERATOR = 312,      /* DECREMENT_OPERATOR  */
    DIVIDE_OPERATOR = 313,         /* DIVIDE_OPERATOR  */
    REMAINDER_OPERATOR = 314,      /* REMAINDER_OPERATOR  */
    SHIFT_LEFT_OPERATOR = 315,     /* SHIFT_LEFT_OPERATOR  */
    SHIFT_RIGHT_OPERATOR = 316,    /* SHIFT_RIGHT_OPERATOR  */
    EQUALITY_OPERATOR = 317,       /* EQUALITY_OPERATOR  */
    NON_EQUALITY_OPERATOR = 318,   /* NON_EQUALITY_OPERATOR  */
    XOR_OPERATOR = 319,            /* XOR_OPERATOR  */
    BITWISE_OR_OPERATOR = 320,     /* BITWISE_OR_OPERATOR  */
    BITWISE_AND_OPERATOR = 321,    /* BITWISE_AND_OPERATOR  */
    LOGICAL_AND_OPERATOR = 322,    /* LOGICAL_AND_OPERATOR  */
    LOGICAL_OR_OPERATOR = 323,     /* LOGICAL_OR_OPERATOR  */
    TERNARY_OPERATOR = 324,        /* TERNARY_OPERATOR  */
    TERNARY_SEPERATOR = 325,       /* TERNARY_SEPERATOR  */
    SEMI_COLON = 326,              /* SEMI_COLON  */
    COMMA = 327,                   /* COMMA  */
    MACRO_OPERATOR = 328,          /* MACRO_OPERATOR  */
    TRIPLE_DOT = 329,              /* TRIPLE_DOT  */
    ADDITION_OPERATOR = 330,       /* ADDITION_OPERATOR  */
    MULTIPLICATION_OPERATOR = 331, /* MULTIPLICATION_OPERATOR  */
    SUBTRACTION_OPERATOR = 332,    /* SUBTRACTION_OPERATOR  */
    NOT_OPERATOR = 333,            /* NOT_OPERATOR  */
    NEGATION_OPERATOR = 334,       /* NEGATION_OPERATOR  */
    EQUAL_OPERATOR = 335,          /* EQUAL_OPERATOR  */
    ASSIGNMENT_OPERATORS = 336     /* ASSIGNMENT_OPERATORS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define RIGHT_PARANTHESIS 258
#define ELSE 259
#define AUTO 260
#define ENUM 261
#define RESTRICT 262
#define UNSIGNED 263
#define BREAK 264
#define EXTERN 265
#define RETURN 266
#define VOID 267
#define CASE 268
#define FLOAT 269
#define SHORT 270
#define VOLATILE 271
#define CHAR 272
#define FOR 273
#define SIGNED 274
#define WHILE 275
#define CONST 276
#define GOTO 277
#define SIZEOF 278
#define BOOL 279
#define CONTINUE 280
#define IF 281
#define STATIC 282
#define COMPLEX 283
#define DEFAULT 284
#define INLINE 285
#define STRUCT 286
#define IMAGINARY 287
#define DO 288
#define INT 289
#define SWITCH 290
#define DOUBLE 291
#define LONG 292
#define TYPEDEF 293
#define REGISTER 294
#define UNION 295
#define IDENTIFIER 296
#define STRING_LITERAL 297
#define CONSTANT 298
#define LESS_THAN 299
#define LESS_THAN_EQUAL_TO 300
#define GREATER_THAN 301
#define GREATER_THAN_EQUAL_TO 302
#define ESCAPE_OPERATOR 303
#define LEFT_SQUARE_BRACKET 304
#define RIGHT_SQUARE_BRACKET 305
#define LEFT_PARANTHESIS 306
#define LEFT_CURLY_BRACKET 307
#define RIGHT_CURLY_BRACKET 308
#define DOT 309
#define POINTER_ACCESS 310
#define INCREMENT_OPERATOR 311
#define DECREMENT_OPERATOR 312
#define DIVIDE_OPERATOR 313
#define REMAINDER_OPERATOR 314
#define SHIFT_LEFT_OPERATOR 315
#define SHIFT_RIGHT_OPERATOR 316
#define EQUALITY_OPERATOR 317
#define NON_EQUALITY_OPERATOR 318
#define XOR_OPERATOR 319
#define BITWISE_OR_OPERATOR 320
#define BITWISE_AND_OPERATOR 321
#define LOGICAL_AND_OPERATOR 322
#define LOGICAL_OR_OPERATOR 323
#define TERNARY_OPERATOR 324
#define TERNARY_SEPERATOR 325
#define SEMI_COLON 326
#define COMMA 327
#define MACRO_OPERATOR 328
#define TRIPLE_DOT 329
#define ADDITION_OPERATOR 330
#define MULTIPLICATION_OPERATOR 331
#define SUBTRACTION_OPERATOR 332
#define NOT_OPERATOR 333
#define NEGATION_OPERATOR 334
#define EQUAL_OPERATOR 335
#define ASSIGNMENT_OPERATORS 336

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "tinyc_yacc.y"
char * val; tree_pointer node;

#line 311 "y.tab.c"

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
  YYSYMBOL_RIGHT_PARANTHESIS = 3,          /* RIGHT_PARANTHESIS  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_AUTO = 5,                       /* AUTO  */
  YYSYMBOL_ENUM = 6,                       /* ENUM  */
  YYSYMBOL_RESTRICT = 7,                   /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 8,                   /* UNSIGNED  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_EXTERN = 10,                    /* EXTERN  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_VOID = 12,                      /* VOID  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_SHORT = 15,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 16,                  /* VOLATILE  */
  YYSYMBOL_CHAR = 17,                      /* CHAR  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_SIGNED = 19,                    /* SIGNED  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_CONST = 21,                     /* CONST  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 23,                    /* SIZEOF  */
  YYSYMBOL_BOOL = 24,                      /* BOOL  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_STATIC = 27,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 28,                   /* COMPLEX  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 30,                    /* INLINE  */
  YYSYMBOL_STRUCT = 31,                    /* STRUCT  */
  YYSYMBOL_IMAGINARY = 32,                 /* IMAGINARY  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_INT = 34,                       /* INT  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 36,                    /* DOUBLE  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_TYPEDEF = 38,                   /* TYPEDEF  */
  YYSYMBOL_REGISTER = 39,                  /* REGISTER  */
  YYSYMBOL_UNION = 40,                     /* UNION  */
  YYSYMBOL_IDENTIFIER = 41,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_CONSTANT = 43,                  /* CONSTANT  */
  YYSYMBOL_LESS_THAN = 44,                 /* LESS_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL_TO = 45,        /* LESS_THAN_EQUAL_TO  */
  YYSYMBOL_GREATER_THAN = 46,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_THAN_EQUAL_TO = 47,     /* GREATER_THAN_EQUAL_TO  */
  YYSYMBOL_ESCAPE_OPERATOR = 48,           /* ESCAPE_OPERATOR  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 49,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 50,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 51,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 52,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 53,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 54,                       /* DOT  */
  YYSYMBOL_POINTER_ACCESS = 55,            /* POINTER_ACCESS  */
  YYSYMBOL_INCREMENT_OPERATOR = 56,        /* INCREMENT_OPERATOR  */
  YYSYMBOL_DECREMENT_OPERATOR = 57,        /* DECREMENT_OPERATOR  */
  YYSYMBOL_DIVIDE_OPERATOR = 58,           /* DIVIDE_OPERATOR  */
  YYSYMBOL_REMAINDER_OPERATOR = 59,        /* REMAINDER_OPERATOR  */
  YYSYMBOL_SHIFT_LEFT_OPERATOR = 60,       /* SHIFT_LEFT_OPERATOR  */
  YYSYMBOL_SHIFT_RIGHT_OPERATOR = 61,      /* SHIFT_RIGHT_OPERATOR  */
  YYSYMBOL_EQUALITY_OPERATOR = 62,         /* EQUALITY_OPERATOR  */
  YYSYMBOL_NON_EQUALITY_OPERATOR = 63,     /* NON_EQUALITY_OPERATOR  */
  YYSYMBOL_XOR_OPERATOR = 64,              /* XOR_OPERATOR  */
  YYSYMBOL_BITWISE_OR_OPERATOR = 65,       /* BITWISE_OR_OPERATOR  */
  YYSYMBOL_BITWISE_AND_OPERATOR = 66,      /* BITWISE_AND_OPERATOR  */
  YYSYMBOL_LOGICAL_AND_OPERATOR = 67,      /* LOGICAL_AND_OPERATOR  */
  YYSYMBOL_LOGICAL_OR_OPERATOR = 68,       /* LOGICAL_OR_OPERATOR  */
  YYSYMBOL_TERNARY_OPERATOR = 69,          /* TERNARY_OPERATOR  */
  YYSYMBOL_TERNARY_SEPERATOR = 70,         /* TERNARY_SEPERATOR  */
  YYSYMBOL_SEMI_COLON = 71,                /* SEMI_COLON  */
  YYSYMBOL_COMMA = 72,                     /* COMMA  */
  YYSYMBOL_MACRO_OPERATOR = 73,            /* MACRO_OPERATOR  */
  YYSYMBOL_TRIPLE_DOT = 74,                /* TRIPLE_DOT  */
  YYSYMBOL_ADDITION_OPERATOR = 75,         /* ADDITION_OPERATOR  */
  YYSYMBOL_MULTIPLICATION_OPERATOR = 76,   /* MULTIPLICATION_OPERATOR  */
  YYSYMBOL_SUBTRACTION_OPERATOR = 77,      /* SUBTRACTION_OPERATOR  */
  YYSYMBOL_NOT_OPERATOR = 78,              /* NOT_OPERATOR  */
  YYSYMBOL_NEGATION_OPERATOR = 79,         /* NEGATION_OPERATOR  */
  YYSYMBOL_EQUAL_OPERATOR = 80,            /* EQUAL_OPERATOR  */
  YYSYMBOL_ASSIGNMENT_OPERATORS = 81,      /* ASSIGNMENT_OPERATORS  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_PRIMARY_EXPRESSION = 83,        /* PRIMARY_EXPRESSION  */
  YYSYMBOL_POSTFIX_EXPRESSION = 84,        /* POSTFIX_EXPRESSION  */
  YYSYMBOL_ARGUMENT_EXPRESSION_LIST = 85,  /* ARGUMENT_EXPRESSION_LIST  */
  YYSYMBOL_ARGUMENT_EXPRESSION_LIST_OPT = 86, /* ARGUMENT_EXPRESSION_LIST_OPT  */
  YYSYMBOL_UNARY_EXPRESSION = 87,          /* UNARY_EXPRESSION  */
  YYSYMBOL_UNARY_OPEARATOR = 88,           /* UNARY_OPEARATOR  */
  YYSYMBOL_CAST_EXPRESSION = 89,           /* CAST_EXPRESSION  */
  YYSYMBOL_MULTIPLICATIVE_EXPRESSION = 90, /* MULTIPLICATIVE_EXPRESSION  */
  YYSYMBOL_ADDITIVE_EXPRESSION = 91,       /* ADDITIVE_EXPRESSION  */
  YYSYMBOL_SHIFT_EXPRESSION = 92,          /* SHIFT_EXPRESSION  */
  YYSYMBOL_RELATIONAL_EXPRESSION = 93,     /* RELATIONAL_EXPRESSION  */
  YYSYMBOL_EQUALITY_EXPRESSION = 94,       /* EQUALITY_EXPRESSION  */
  YYSYMBOL_AND_EXPRESSION = 95,            /* AND_EXPRESSION  */
  YYSYMBOL_EXCLUSIVE_OR_EXPRESSION = 96,   /* EXCLUSIVE_OR_EXPRESSION  */
  YYSYMBOL_INCLUSIVE_OR_EXPRESSION = 97,   /* INCLUSIVE_OR_EXPRESSION  */
  YYSYMBOL_LOGICAL_AND_EXPRESSION = 98,    /* LOGICAL_AND_EXPRESSION  */
  YYSYMBOL_LOGICAL_OR_EXPRESSION = 99,     /* LOGICAL_OR_EXPRESSION  */
  YYSYMBOL_CONDITIONAL_EXPRESSION = 100,   /* CONDITIONAL_EXPRESSION  */
  YYSYMBOL_ASSIGNMENT_EXPRESSION = 101,    /* ASSIGNMENT_EXPRESSION  */
  YYSYMBOL_ASSIGNMENT_OPERATOR = 102,      /* ASSIGNMENT_OPERATOR  */
  YYSYMBOL_EXPRESSION = 103,               /* EXPRESSION  */
  YYSYMBOL_CONSTANT_EXPRESSION = 104,      /* CONSTANT_EXPRESSION  */
  YYSYMBOL_DECLARATION = 105,              /* DECLARATION  */
  YYSYMBOL_INIT_DECLARATOR_LIST_OPT = 106, /* INIT_DECLARATOR_LIST_OPT  */
  YYSYMBOL_DECLARATION_SPECIFIERS = 107,   /* DECLARATION_SPECIFIERS  */
  YYSYMBOL_DECLARATION_SPECIFIERS_OPT = 108, /* DECLARATION_SPECIFIERS_OPT  */
  YYSYMBOL_INIT_DECLARATOR_LIST = 109,     /* INIT_DECLARATOR_LIST  */
  YYSYMBOL_INIT_DECLARATOR = 110,          /* INIT_DECLARATOR  */
  YYSYMBOL_STORAGE_CLASS_SPECIFIER = 111,  /* STORAGE_CLASS_SPECIFIER  */
  YYSYMBOL_TYPE_SPECIFIER = 112,           /* TYPE_SPECIFIER  */
  YYSYMBOL_SPECIFIER_QUALIFIER_LIST = 113, /* SPECIFIER_QUALIFIER_LIST  */
  YYSYMBOL_SPECIFIER_QUALIFIER_LIST_OPT = 114, /* SPECIFIER_QUALIFIER_LIST_OPT  */
  YYSYMBOL_TYPE_QUALIFIER = 115,           /* TYPE_QUALIFIER  */
  YYSYMBOL_FUNCTION_SPECIFIER = 116,       /* FUNCTION_SPECIFIER  */
  YYSYMBOL_DECLARATOR = 117,               /* DECLARATOR  */
  YYSYMBOL_POINTER_OPT = 118,              /* POINTER_OPT  */
  YYSYMBOL_DIRECT_DECLARATOR = 119,        /* DIRECT_DECLARATOR  */
  YYSYMBOL_ASSIGNMENT_EXPRESSION_OPT = 120, /* ASSIGNMENT_EXPRESSION_OPT  */
  YYSYMBOL_POINTER = 121,                  /* POINTER  */
  YYSYMBOL_TYPE_QUALIFIER_LIST = 122,      /* TYPE_QUALIFIER_LIST  */
  YYSYMBOL_TYPE_QUALIFIER_LIST_OPT = 123,  /* TYPE_QUALIFIER_LIST_OPT  */
  YYSYMBOL_PARAMETER_TYPE_LIST = 124,      /* PARAMETER_TYPE_LIST  */
  YYSYMBOL_PARAMETER_LIST = 125,           /* PARAMETER_LIST  */
  YYSYMBOL_PARAMETER_DECLARATION = 126,    /* PARAMETER_DECLARATION  */
  YYSYMBOL_IDENTIFIER_LIST = 127,          /* IDENTIFIER_LIST  */
  YYSYMBOL_IDENTIFIER_LIST_OPT = 128,      /* IDENTIFIER_LIST_OPT  */
  YYSYMBOL_TYPE_NAME = 129,                /* TYPE_NAME  */
  YYSYMBOL_INITIALIZER = 130,              /* INITIALIZER  */
  YYSYMBOL_INITIALIZER_LIST = 131,         /* INITIALIZER_LIST  */
  YYSYMBOL_DESIGNATION = 132,              /* DESIGNATION  */
  YYSYMBOL_DESIGNATION_OPT = 133,          /* DESIGNATION_OPT  */
  YYSYMBOL_DESIGNATOR_LIST = 134,          /* DESIGNATOR_LIST  */
  YYSYMBOL_DESIGNATOR = 135,               /* DESIGNATOR  */
  YYSYMBOL_STATEMENT = 136,                /* STATEMENT  */
  YYSYMBOL_LABELED_STATEMENT = 137,        /* LABELED_STATEMENT  */
  YYSYMBOL_COMPOUND_STATEMENT = 138,       /* COMPOUND_STATEMENT  */
  YYSYMBOL_BLOCK_ITEM_LIST = 139,          /* BLOCK_ITEM_LIST  */
  YYSYMBOL_BLOCK_ITEM = 140,               /* BLOCK_ITEM  */
  YYSYMBOL_EXPRESSION_STATEMENT = 141,     /* EXPRESSION_STATEMENT  */
  YYSYMBOL_SELECTION_STATEMENT = 142,      /* SELECTION_STATEMENT  */
  YYSYMBOL_ITERATION_STATEMENT = 143,      /* ITERATION_STATEMENT  */
  YYSYMBOL_JUMP_STATEMENT = 144,           /* JUMP_STATEMENT  */
  YYSYMBOL_BLOCK_ITEM_LIST_OPT = 145,      /* BLOCK_ITEM_LIST_OPT  */
  YYSYMBOL_EXPRESSION_OPT = 146,           /* EXPRESSION_OPT  */
  YYSYMBOL_TRANSLATIONAL_UNIT = 147,       /* TRANSLATIONAL_UNIT  */
  YYSYMBOL_EXTERNAL_DECLARATION = 148,     /* EXTERNAL_DECLARATION  */
  YYSYMBOL_FUNCTION_DEFINITION = 149,      /* FUNCTION_DEFINITION  */
  YYSYMBOL_DECLARATION_LIST = 150,         /* DECLARATION_LIST  */
  YYSYMBOL_DECLARATION_LIST_OPT = 151      /* DECLARATION_LIST_OPT  */
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
#define YYLAST   876

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   336


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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    52,    53,    54,    62,    63,    69,    75,
      80,    85,    89,    93,   102,   113,   114,   121,   122,   125,
     126,   131,   136,   140,   145,   154,   155,   156,   157,   158,
     159,   162,   163,   172,   173,   178,   183,   190,   191,   196,
     203,   204,   209,   216,   217,   222,   227,   232,   239,   240,
     245,   252,   253,   260,   261,   268,   269,   276,   277,   284,
     285,   292,   293,   302,   303,   310,   311,   314,   315,   322,
     327,   333,   334,   337,   338,   339,   340,   343,   344,   347,
     348,   355,   356,   363,   364,   365,   366,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   383,
     387,   393,   394,   397,   398,   399,   402,   405,   408,   409,
     412,   413,   419,   426,   434,   442,   449,   455,   463,   464,
     467,   472,   480,   481,   484,   485,   488,   489,   496,   497,
     504,   505,   508,   509,   515,   516,   519,   522,   523,   528,
     531,   534,   540,   544,   545,   548,   549,   552,   557,   564,
     565,   566,   567,   568,   569,   572,   577,   583,   590,   597,
     598,   601,   602,   605,   608,   615,   624,   633,   640,   649,
     660,   672,   677,   681,   685,   693,   694,   697,   698,   703,
     706,   712,   713,   716,   719,   720,   723,   724
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
  "\"end of file\"", "error", "\"invalid token\"", "RIGHT_PARANTHESIS",
  "ELSE", "AUTO", "ENUM", "RESTRICT", "UNSIGNED", "BREAK", "EXTERN",
  "RETURN", "VOID", "CASE", "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR",
  "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF", "BOOL", "CONTINUE", "IF",
  "STATIC", "COMPLEX", "DEFAULT", "INLINE", "STRUCT", "IMAGINARY", "DO",
  "INT", "SWITCH", "DOUBLE", "LONG", "TYPEDEF", "REGISTER", "UNION",
  "IDENTIFIER", "STRING_LITERAL", "CONSTANT", "LESS_THAN",
  "LESS_THAN_EQUAL_TO", "GREATER_THAN", "GREATER_THAN_EQUAL_TO",
  "ESCAPE_OPERATOR", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARANTHESIS", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT",
  "POINTER_ACCESS", "INCREMENT_OPERATOR", "DECREMENT_OPERATOR",
  "DIVIDE_OPERATOR", "REMAINDER_OPERATOR", "SHIFT_LEFT_OPERATOR",
  "SHIFT_RIGHT_OPERATOR", "EQUALITY_OPERATOR", "NON_EQUALITY_OPERATOR",
  "XOR_OPERATOR", "BITWISE_OR_OPERATOR", "BITWISE_AND_OPERATOR",
  "LOGICAL_AND_OPERATOR", "LOGICAL_OR_OPERATOR", "TERNARY_OPERATOR",
  "TERNARY_SEPERATOR", "SEMI_COLON", "COMMA", "MACRO_OPERATOR",
  "TRIPLE_DOT", "ADDITION_OPERATOR", "MULTIPLICATION_OPERATOR",
  "SUBTRACTION_OPERATOR", "NOT_OPERATOR", "NEGATION_OPERATOR",
  "EQUAL_OPERATOR", "ASSIGNMENT_OPERATORS", "$accept",
  "PRIMARY_EXPRESSION", "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST",
  "ARGUMENT_EXPRESSION_LIST_OPT", "UNARY_EXPRESSION", "UNARY_OPEARATOR",
  "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION",
  "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION",
  "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
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
  "DESIGNATION_OPT", "DESIGNATOR_LIST", "DESIGNATOR", "STATEMENT",
  "LABELED_STATEMENT", "COMPOUND_STATEMENT", "BLOCK_ITEM_LIST",
  "BLOCK_ITEM", "EXPRESSION_STATEMENT", "SELECTION_STATEMENT",
  "ITERATION_STATEMENT", "JUMP_STATEMENT", "BLOCK_ITEM_LIST_OPT",
  "EXPRESSION_OPT", "TRANSLATIONAL_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DEFINITION", "DECLARATION_LIST", "DECLARATION_LIST_OPT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-188)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     806,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,   -19,   806,   806,   806,   806,   738,  -175,  -175,
     120,     2,    28,  -175,   203,    -5,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,   120,    54,  -175,    54,   548,
    -175,   -19,   806,    92,  -175,    54,    17,  -175,  -175,  -175,
      93,   595,  -175,  -175,  -175,   400,   -16,   612,   612,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,   128,   -50,   641,  -175,
      -4,    -1,    29,   111,    61,   109,   116,   127,   129,    26,
    -175,  -175,  -175,  -175,   252,  -175,   192,    40,   771,   400,
    -175,  -175,     9,   839,  -175,   839,   195,   641,   158,   -40,
    -175,   548,   -38,  -175,   400,  -175,  -175,   641,   641,   159,
     160,  -175,  -175,  -175,  -175,   641,  -175,  -175,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   131,   641,   641,
     152,   153,   166,   143,   165,   151,   471,   172,   156,   157,
    -175,  -175,  -175,  -175,   252,  -175,  -175,  -175,  -175,  -175,
     175,   161,  -175,   120,   118,   658,  -175,     3,   233,   169,
    -175,   171,   235,   241,  -175,   641,  -175,  -175,  -175,   565,
    -175,   196,  -175,  -175,    16,  -175,  -175,  -175,   242,   -33,
     176,   246,  -175,  -175,  -175,  -175,  -175,  -175,  -175,    -4,
      -4,    -1,    -1,    29,    29,    29,    29,   111,   111,    61,
     109,   116,   127,   129,    70,  -175,   179,   181,   327,   641,
     182,  -175,   641,   471,   232,   641,   471,  -175,  -175,  -175,
     641,   641,   204,  -175,   206,  -175,  -175,   546,   217,  -175,
     238,  -175,   -16,  -175,  -175,  -175,   548,   238,  -175,   641,
    -175,   641,  -175,   471,   641,   221,    11,  -175,    12,  -175,
     245,    15,  -175,   247,   248,  -175,  -175,  -175,  -175,  -175,
     -24,  -175,  -175,  -175,  -175,   228,   641,   471,   471,   641,
     471,  -175,  -175,  -175,    39,   641,   229,  -175,   297,    19,
    -175,  -175,   299,   641,   471,   234,   471,   303,  -175,  -175,
    -175,   471,  -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,   104,    95,    83,    87,    92,    89,   105,    88,
      94,   103,    96,    84,    97,   106,    98,    90,    93,    91,
      86,   182,   109,    78,    78,    78,    78,     0,   179,   181,
     125,     0,    71,    79,    81,     0,   108,    77,    73,    74,
      75,    76,     1,   180,   122,   124,   120,    70,   109,     0,
     184,   109,   186,     0,   110,   109,   107,   123,   121,    80,
      81,     0,     2,     4,     3,     0,   144,     0,     0,    28,
      25,    27,    26,    30,    29,     6,    19,    31,     0,    33,
      37,    40,    43,    48,    51,    53,    55,    57,    59,    61,
      63,   137,    82,   185,   176,   183,     0,   125,   135,     0,
      23,    67,     0,   102,   136,   102,     0,     0,     0,     0,
     143,     0,     0,   145,     0,    20,    21,     0,    18,     0,
       0,    11,    12,    65,    66,     0,    31,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,   178,     0,     2,   177,
     161,   162,   149,   150,   175,   159,   151,   152,   153,   154,
       0,     0,   111,   125,   124,   119,   132,   109,     0,   126,
     128,   134,     0,     0,     5,     0,   101,    99,   100,     0,
      69,     0,   148,   138,   144,   140,   142,   146,     0,     0,
      17,     0,    15,     9,    10,    64,    35,    36,    34,    38,
      39,    41,    42,    44,    46,    45,    47,    49,    50,    52,
      54,    56,    58,    60,     0,   173,     0,     0,   178,     0,
       0,   172,     0,   178,     0,     0,   178,   160,   158,   163,
       0,     0,    27,   118,     0,   130,   116,     0,     0,   117,
      24,    68,   144,    32,   147,   139,     0,     0,     7,     0,
       8,     0,   174,   178,   178,     0,     0,   171,     0,   157,
       0,     0,   155,     0,     0,   115,   112,   127,   129,   133,
       0,   141,    16,    62,   156,     0,   178,   178,   178,     0,
     178,   113,   114,    13,   144,   178,     0,   167,   164,     0,
     166,    14,     0,   178,   178,     0,   178,     0,   165,   168,
     170,   178,   169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,  -175,   -27,  -175,   -70,    59,   -89,
      51,    24,   170,   168,   164,   173,   167,  -175,  -100,   -47,
    -175,   -64,   177,   -31,  -175,     0,   123,  -175,   265,  -175,
      67,    73,   209,    32,  -175,   -18,  -175,  -175,  -175,   269,
     219,   -87,  -175,  -175,    72,  -175,  -175,   -71,  -102,    68,
    -175,  -174,  -175,   210,  -137,  -175,   268,  -175,   174,  -175,
    -175,  -175,  -175,  -175,  -143,  -175,   298,  -175,  -175,  -175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    75,    76,   200,   201,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   101,
     125,   159,   191,    21,    31,    51,    38,    32,    33,    23,
      24,   104,   187,    25,    26,    60,    35,    56,   244,    36,
      45,    46,   178,   179,   180,   181,   182,   106,    92,   109,
     110,   111,   112,   113,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,    27,    28,    29,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   102,    91,    50,    34,   226,  -131,   190,   127,   195,
     175,   107,   184,   193,   287,   288,   108,   258,   290,   234,
     256,    93,   305,    37,    37,    37,    37,    22,   183,   293,
     123,   124,   194,   107,   100,   102,    54,    96,   108,   185,
     115,   116,   196,   198,   211,   212,    55,     2,   294,   190,
     102,   126,   -72,   199,   128,   129,     8,    30,   206,   207,
     208,    11,    44,   160,    91,   107,    97,   173,    98,   255,
     108,   202,   130,    47,   131,  -131,   132,    57,   205,    30,
     126,   185,   224,   185,   185,   265,   240,   185,   107,   133,
     134,   185,   301,   108,   145,   146,   269,   105,   177,   272,
      48,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   253,
     256,   285,   126,   139,   140,     2,   284,     2,   243,    44,
      30,   105,   103,   160,     8,   105,     8,   105,   251,    11,
     261,    11,   185,   296,    94,   241,   105,    39,    40,    41,
     297,   298,   302,   300,   281,   135,   136,   137,   138,   245,
     307,   283,   126,   217,   218,   266,   103,   308,   268,   310,
     103,   271,   103,    49,   312,   141,   186,   117,   186,   118,
     142,   103,   119,   120,   121,   122,   213,   214,   215,   216,
     209,   210,   143,   273,   274,   172,   144,   264,   189,   192,
     203,   204,   225,   228,   229,    44,    57,   230,     1,    91,
       2,     3,   282,     4,   231,     5,   232,     6,     7,     8,
       9,   233,    10,   235,    11,   299,   236,    12,   238,   185,
      13,    14,   239,    15,   126,    16,   246,    17,   249,    18,
      19,   247,    20,   248,   250,   257,   254,   177,   259,   260,
     262,   263,   270,   267,   275,  -187,   276,     1,   279,     2,
       3,   147,     4,   148,     5,   149,     6,     7,     8,     9,
     150,    10,   151,    11,   152,    61,    12,   153,   154,    13,
      14,   155,    15,    49,    16,   156,    17,   157,    18,    19,
     252,    20,   286,   158,    63,    64,   289,   291,   292,   295,
     303,   304,   306,    65,    94,   309,   311,   221,    67,    68,
     220,   219,   223,    59,   188,    58,   174,   222,    69,   278,
     280,    95,   197,  -178,     0,    43,   227,    70,    71,    72,
      73,    74,     1,     0,     2,     3,     0,     4,   237,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      61,    12,     0,     0,    13,    14,     0,    15,     0,    16,
       0,    17,     0,    18,    19,     0,    20,     0,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,    73,    74,     2,     3,     0,
       0,     0,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,    61,    12,     0,     0,     0,    14,     0,
       0,     0,    16,     0,    17,     0,    18,    19,     0,     0,
       0,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,     0,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
     147,     0,   148,     0,   149,     0,     0,     0,     0,   150,
       0,   151,     0,   152,    61,     0,   153,   154,     0,     0,
     155,     0,     0,     0,   156,     0,   157,     0,     0,     0,
       0,     0,   158,    63,    64,     0,     0,     0,     0,     0,
       0,     0,    65,    94,     0,     0,     0,    67,    68,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
      74,     1,     0,     2,     3,     0,     4,     0,     5,     0,
       6,     7,     8,     9,     0,    10,     0,    11,     0,     0,
      12,    61,     0,    13,    14,     0,    15,     0,    16,     0,
      17,     0,    18,    19,     0,    20,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,     0,    67,    68,    62,    63,    64,     0,
       0,     0,     0,     0,    69,     0,    65,   252,    61,     0,
     277,    67,    68,    70,    71,    72,    73,    74,     0,     0,
       0,    69,     0,     0,     0,    61,    62,    63,    64,     0,
      70,    71,    72,    73,    74,     0,    99,     0,     0,     0,
       0,    67,    68,    62,    63,    64,     0,     0,     0,     0,
       0,    69,     0,   114,    61,     0,     0,     0,    67,    68,
      70,    71,    72,    73,    74,     0,     0,     0,    69,     0,
       0,    61,    62,    63,    64,     0,     0,    70,    71,    72,
      73,    74,    65,     0,     0,     0,     0,    67,    68,    62,
      63,    64,     0,     0,     0,     0,     0,    69,     0,    65,
       0,     0,     0,     0,    67,    68,    70,    71,    72,    73,
      74,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    70,   242,    72,    73,    74,    42,     0,
       0,     0,     0,     1,     0,     2,     3,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
      16,     0,    17,     0,    18,    19,     1,    20,     2,     3,
       0,     4,     0,     5,     0,     6,     7,     8,     9,     0,
      10,     0,    11,     0,     0,    12,     0,     0,    13,    14,
       0,    15,     0,    16,     0,    17,     0,    18,    19,     0,
      20,     1,   176,     2,     3,     0,     4,     0,     5,     0,
       6,     7,     8,     9,     0,    10,     0,    11,     0,     0,
      12,     0,     0,    13,    14,     0,    15,     0,    16,     0,
      17,     0,    18,    19,     0,    20,     2,     3,     0,     0,
       0,     5,     0,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     0,    12,     0,     0,     0,    14,     0,     0,
       0,    16,     0,    17,     0,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    65,    49,    34,    22,   148,     3,   107,    78,   111,
      97,    49,     3,    53,     3,     3,    54,    50,     3,   156,
     194,    52,     3,    23,    24,    25,    26,    27,    99,    53,
      80,    81,    72,    49,    61,    99,    41,    55,    54,    72,
      67,    68,    80,   114,   133,   134,    51,     7,    72,   149,
     114,    78,    71,   117,    58,    59,    16,    76,   128,   129,
     130,    21,    30,    94,   111,    49,    49,    27,    51,    53,
      54,   118,    76,    71,    75,    72,    77,    45,   125,    76,
     107,    72,   146,    72,    72,   228,   173,    72,    49,    60,
      61,    72,    53,    54,    68,    69,   233,    65,    98,   236,
      72,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   189,
     294,   264,   149,    62,    63,     7,   263,     7,   175,    97,
      76,    99,    65,   164,    16,   103,    16,   105,   185,    21,
      70,    21,    72,   286,    52,    27,   114,    24,    25,    26,
     287,   288,   295,   290,   256,    44,    45,    46,    47,   177,
     303,   261,   189,   139,   140,   229,    99,   304,   232,   306,
     103,   235,   105,    80,   311,    66,   103,    49,   105,    51,
      64,   114,    54,    55,    56,    57,   135,   136,   137,   138,
     131,   132,    65,   240,   241,     3,    67,   228,     3,    41,
      41,    41,    71,    51,    51,   173,   174,    41,     5,   256,
       7,     8,   259,    10,    71,    12,    51,    14,    15,    16,
      17,    70,    19,    51,    21,   289,    70,    24,    53,    72,
      27,    28,    71,    30,   261,    32,     3,    34,     3,    36,
      37,    72,    39,    72,     3,     3,    50,   247,    72,     3,
      71,    70,    20,    71,    50,    52,    50,     5,    41,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    80,    32,    33,    34,    35,    36,    37,
      52,    39,    71,    41,    42,    43,    51,    50,    50,    71,
      71,     4,     3,    51,    52,    71,     3,   143,    56,    57,
     142,   141,   145,    48,   105,    46,    97,   144,    66,   247,
     252,    53,   112,    71,    -1,    27,   149,    75,    76,    77,
      78,    79,     5,    -1,     7,     8,    -1,    10,   164,    12,
      -1,    14,    15,    16,    17,    -1,    19,    -1,    21,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    -1,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,     7,     8,    -1,
      -1,    -1,    12,    -1,    14,    15,    16,    17,    -1,    19,
      -1,    21,    -1,    23,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    -1,    34,    -1,    36,    37,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
       9,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,     5,    -1,     7,     8,    -1,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    19,    -1,    21,    -1,    -1,
      24,    23,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    -1,    39,    -1,    -1,    23,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    56,    57,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    51,    52,    23,    -1,
      74,    56,    57,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    23,    41,    42,    43,    -1,
      75,    76,    77,    78,    79,    -1,    51,    -1,    -1,    -1,
      -1,    56,    57,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    51,    23,    -1,    -1,    -1,    56,    57,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    66,    -1,
      -1,    23,    41,    42,    43,    -1,    -1,    75,    76,    77,
      78,    79,    51,    -1,    -1,    -1,    -1,    56,    57,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    66,    -1,    51,
      -1,    -1,    -1,    -1,    56,    57,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,     0,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    10,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    19,    -1,    21,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    34,    -1,    36,    37,     5,    39,     7,     8,
      -1,    10,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      19,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    37,    -1,
      39,     5,    41,     7,     8,    -1,    10,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    19,    -1,    21,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    -1,    39,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    17,    -1,    19,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    -1,    34,    -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,     8,    10,    12,    14,    15,    16,    17,
      19,    21,    24,    27,    28,    30,    32,    34,    36,    37,
      39,   105,   107,   111,   112,   115,   116,   147,   148,   149,
      76,   106,   109,   110,   117,   118,   121,   107,   108,   108,
     108,   108,     0,   148,   115,   122,   123,    71,    72,    80,
     105,   107,   150,   151,    41,    51,   119,   115,   121,   110,
     117,    23,    41,    42,    43,    51,    52,    56,    57,    66,
      75,    76,    77,    78,    79,    83,    84,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   130,   105,    52,   138,   117,    49,    51,    51,
      87,   101,   103,   112,   113,   115,   129,    49,    54,   131,
     132,   133,   134,   135,    51,    87,    87,    49,    51,    54,
      55,    56,    57,    80,    81,   102,    87,    89,    58,    59,
      76,    75,    77,    60,    61,    44,    45,    46,    47,    62,
      63,    66,    64,    65,    67,    68,    69,     9,    11,    13,
      18,    20,    22,    25,    26,    29,    33,    35,    41,   103,
     105,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     3,    27,   122,   123,    41,   107,   124,   125,
     126,   127,   128,   129,     3,    72,   113,   114,   114,     3,
     100,   104,    41,    53,    72,   130,    80,   135,   129,   103,
      85,    86,   101,    41,    41,   101,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    93,    93,    94,
      95,    96,    97,    98,   103,    71,   146,   104,    51,    51,
      41,    71,    51,    70,   136,    51,    70,   140,    53,    71,
     123,    27,    76,   101,   120,   117,     3,    72,    72,     3,
       3,   101,    52,    89,    50,    53,   133,     3,    50,    72,
       3,    70,    71,    70,   105,   146,   103,    71,   103,   136,
      20,   103,   136,   101,   101,    50,    50,    74,   126,    41,
     131,   130,   101,   100,   136,   146,    71,     3,     3,    51,
       3,    50,    50,    53,    72,    71,   146,   136,   136,   103,
     136,    53,   146,    71,     4,     3,     3,   146,   136,    71,
     136,     3,   136
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     105,   106,   106,   107,   107,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   116,   117,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   130,   130,   130,
     131,   131,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   138,   139,
     139,   140,   140,   141,   142,   142,   142,   143,   143,   143,
     143,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   150,   150,   151,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     6,     7,     1,     3,     1,     0,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     3,     1,
       3,     1,     0,     2,     2,     2,     2,     1,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     1,     1,     1,     1,     2,     1,     0,
       1,     3,     5,     6,     6,     5,     4,     4,     1,     0,
       2,     3,     1,     2,     1,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     1,     3,     4,
       2,     4,     2,     1,     0,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     3,     1,
       2,     1,     1,     2,     5,     7,     5,     5,     7,     9,
       8,     3,     2,     2,     3,     1,     0,     1,     0,     1,
       2,     1,     1,     4,     1,     2,     1,     0
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
#line 51 "tinyc_yacc.y"
                                                                                    {   (yyval.node) = init_node("PRIMARY_EXPRESSION", "", init_node("IDENTIFIER", (yyvsp[0].val), NULL));}
#line 1808 "y.tab.c"
    break;

  case 3: /* PRIMARY_EXPRESSION: CONSTANT  */
#line 52 "tinyc_yacc.y"
                                                                                    {   (yyval.node) = init_node("PRIMARY_EXPRESSION", "", init_node("CONSTANT", (yyvsp[0].val), NULL));}
#line 1814 "y.tab.c"
    break;

  case 4: /* PRIMARY_EXPRESSION: STRING_LITERAL  */
#line 53 "tinyc_yacc.y"
                                                                                    {   (yyval.node) = init_node("PRIMARY_EXPRESSION", "", init_node("STRING_LITERAL", (yyvsp[0].val), NULL));}
#line 1820 "y.tab.c"
    break;

  case 5: /* PRIMARY_EXPRESSION: LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS  */
#line 54 "tinyc_yacc.y"
                                                                                    {
                                                                                        tree_pointer temp = init_node((yyvsp[-2].val), "", NULL); 
                                                                                        (yyval.node) = init_node("PRIMARY_EXPRESSION", "", temp);
                                                                                        add_next(temp, (yyvsp[-1].node));
                                                                                        add_next(temp, init_node((yyvsp[0].val), "", NULL));
                                                                                    }
#line 1831 "y.tab.c"
    break;

  case 6: /* POSTFIX_EXPRESSION: PRIMARY_EXPRESSION  */
#line 62 "tinyc_yacc.y"
                                                                                                                                                    {   (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[0].node));}
#line 1837 "y.tab.c"
    break;

  case 7: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION LEFT_SQUARE_BRACKET EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 63 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[-3].node));
                                                                                                                                                        add_next((yyvsp[-3].node), init_node((yyvsp[-2].val), "", NULL));
                                                                                                                                                        add_next((yyvsp[-3].node), (yyvsp[-1].node));
                                                                                                                                                        add_next((yyvsp[-3].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                    }
#line 1848 "y.tab.c"
    break;

  case 8: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION LEFT_PARANTHESIS ARGUMENT_EXPRESSION_LIST_OPT RIGHT_PARANTHESIS  */
#line 69 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[-3].node));
                                                                                                                                                        add_next((yyvsp[-3].node), init_node((yyvsp[-2].val), "", NULL));
                                                                                                                                                        add_next((yyvsp[-3].node), (yyvsp[-1].node));
                                                                                                                                                        add_next((yyvsp[-3].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                    }
#line 1859 "y.tab.c"
    break;

  case 9: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION DOT IDENTIFIER  */
#line 75 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                                                        add_next((yyvsp[-2].node), init_node("IDENTIFIER", (yyvsp[0].val), NULL));
                                                                                                                                                    }
#line 1869 "y.tab.c"
    break;

  case 10: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION POINTER_ACCESS IDENTIFIER  */
#line 80 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                                                        add_next((yyvsp[-2].node), init_node("IDENTIFIER", (yyvsp[0].val), NULL));
                                                                                                                                                    }
#line 1879 "y.tab.c"
    break;

  case 11: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION INCREMENT_OPERATOR  */
#line 85 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[-1].node));
                                                                                                                                                        add_next((yyvsp[-1].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                    }
#line 1888 "y.tab.c"
    break;

  case 12: /* POSTFIX_EXPRESSION: POSTFIX_EXPRESSION DECREMENT_OPERATOR  */
#line 89 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", (yyvsp[-1].node));
                                                                                                                                                        add_next((yyvsp[-1].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                    }
#line 1897 "y.tab.c"
    break;

  case 13: /* POSTFIX_EXPRESSION: LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET  */
#line 93 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        tree_pointer temp = init_node((yyvsp[-5].val), "", NULL); 
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", temp);
                                                                                                                                                        add_next(temp, (yyvsp[-4].node));
                                                                                                                                                        add_next(temp, init_node((yyvsp[-3].val), "", NULL));
                                                                                                                                                        add_next(temp, init_node((yyvsp[-2].val), "", NULL));
                                                                                                                                                        add_next(temp, (yyvsp[-1].node));
                                                                                                                                                        add_next(temp, init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                    }
#line 1911 "y.tab.c"
    break;

  case 14: /* POSTFIX_EXPRESSION: LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET  */
#line 102 "tinyc_yacc.y"
                                                                                                                                                    {
                                                                                                                                                        tree_pointer temp = init_node((yyvsp[-6].val), "", NULL); 
                                                                                                                                                        (yyval.node) = init_node("POSTFIX_EXPRESSION", "", temp);
                                                                                                                                                        add_next(temp, (yyvsp[-5].node));
                                                                                                                                                        add_next(temp, init_node((yyvsp[-4].val), "", NULL));
                                                                                                                                                        add_next(temp, init_node((yyvsp[-3].val), "", NULL));
                                                                                                                                                        add_next(temp, (yyvsp[-2].node));
                                                                                                                                                        add_next(temp, init_node((yyvsp[-1].val), "", NULL));
                                                                                                                                                    }
#line 1925 "y.tab.c"
    break;

  case 15: /* ARGUMENT_EXPRESSION_LIST: ASSIGNMENT_EXPRESSION  */
#line 113 "tinyc_yacc.y"
                                                                                            {(yyval.node) = init_node("ARGUMENT_EXPRESSION_LIST", "", (yyvsp[0].node));}
#line 1931 "y.tab.c"
    break;

  case 16: /* ARGUMENT_EXPRESSION_LIST: ARGUMENT_EXPRESSION_LIST COMMA ASSIGNMENT_EXPRESSION  */
#line 114 "tinyc_yacc.y"
                                                                                            {
                                                                                                (yyval.node) = init_node("ARGUMENT_EXPRESSION_LIST", "", (yyvsp[-2].node));
                                                                                                add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                            }
#line 1941 "y.tab.c"
    break;

  case 17: /* ARGUMENT_EXPRESSION_LIST_OPT: ARGUMENT_EXPRESSION_LIST  */
#line 121 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("ARGUMENT_EXPRESSION_LIST_OPT", "", (yyvsp[0].node));}
#line 1947 "y.tab.c"
    break;

  case 18: /* ARGUMENT_EXPRESSION_LIST_OPT: %empty  */
#line 122 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("ARGUMENT_EXPRESSION_LIST_OPT", "", init_node("<empty>", "", NULL));}
#line 1953 "y.tab.c"
    break;

  case 19: /* UNARY_EXPRESSION: POSTFIX_EXPRESSION  */
#line 125 "tinyc_yacc.y"
                                                                                            {(yyval.node) = init_node("UNARY_EXPRESSION", "", (yyvsp[0].node));}
#line 1959 "y.tab.c"
    break;

  case 20: /* UNARY_EXPRESSION: INCREMENT_OPERATOR UNARY_EXPRESSION  */
#line 126 "tinyc_yacc.y"
                                                                                            {
                                                                                                tree_pointer temp = init_node((yyvsp[-1].val), "", NULL);
                                                                                                (yyval.node) = init_node("UNARY_EXPRESSION", "", temp);
                                                                                                add_next(temp, (yyvsp[0].node));
                                                                                            }
#line 1969 "y.tab.c"
    break;

  case 21: /* UNARY_EXPRESSION: DECREMENT_OPERATOR UNARY_EXPRESSION  */
#line 131 "tinyc_yacc.y"
                                                                                            {
                                                                                                tree_pointer temp = init_node((yyvsp[-1].val), "", NULL);
                                                                                                (yyval.node) = init_node("UNARY_EXPRESSION", "", temp);
                                                                                                add_next(temp, (yyvsp[0].node));
                                                                                            }
#line 1979 "y.tab.c"
    break;

  case 22: /* UNARY_EXPRESSION: UNARY_OPEARATOR CAST_EXPRESSION  */
#line 136 "tinyc_yacc.y"
                                                                                            {
                                                                                                (yyval.node) = init_node("UNARY_EXPRESSION", "", (yyvsp[-1].node));
                                                                                                add_next((yyvsp[-1].node), (yyvsp[0].node));
                                                                                            }
#line 1988 "y.tab.c"
    break;

  case 23: /* UNARY_EXPRESSION: SIZEOF UNARY_EXPRESSION  */
#line 140 "tinyc_yacc.y"
                                                                                            {
                                                                                                tree_pointer temp = init_node((yyvsp[-1].val), "", NULL);
                                                                                                (yyval.node) = init_node("UNARY_EXPRESSION", "", temp);
                                                                                                add_next(temp, (yyvsp[0].node));
                                                                                            }
#line 1998 "y.tab.c"
    break;

  case 24: /* UNARY_EXPRESSION: SIZEOF LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS  */
#line 145 "tinyc_yacc.y"
                                                                                            {
                                                                                                tree_pointer temp = init_node((yyvsp[-3].val), "", NULL);
                                                                                                (yyval.node) = init_node("UNARY_EXPRESSION", "", temp);
                                                                                                add_next(temp, init_node((yyvsp[-2].val), "", NULL));
                                                                                                add_next(temp, (yyvsp[-1].node));
                                                                                                add_next(temp, init_node((yyvsp[0].val), "", NULL));
                                                                                            }
#line 2010 "y.tab.c"
    break;

  case 25: /* UNARY_OPEARATOR: ADDITION_OPERATOR  */
#line 154 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("UNARY_OPERATOR", (yyvsp[0].val), NULL);}
#line 2016 "y.tab.c"
    break;

  case 26: /* UNARY_OPEARATOR: SUBTRACTION_OPERATOR  */
#line 155 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("UNARY_OPERATOR", (yyvsp[0].val), NULL);}
#line 2022 "y.tab.c"
    break;

  case 27: /* UNARY_OPEARATOR: MULTIPLICATION_OPERATOR  */
#line 156 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("UNARY_OPERATOR", (yyvsp[0].val), NULL);}
#line 2028 "y.tab.c"
    break;

  case 28: /* UNARY_OPEARATOR: BITWISE_AND_OPERATOR  */
#line 157 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("UNARY_OPERATOR", (yyvsp[0].val), NULL);}
#line 2034 "y.tab.c"
    break;

  case 29: /* UNARY_OPEARATOR: NEGATION_OPERATOR  */
#line 158 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("UNARY_OPERATOR", (yyvsp[0].val), NULL);}
#line 2040 "y.tab.c"
    break;

  case 30: /* UNARY_OPEARATOR: NOT_OPERATOR  */
#line 159 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("UNARY_OPERATOR", (yyvsp[0].val), NULL);}
#line 2046 "y.tab.c"
    break;

  case 31: /* CAST_EXPRESSION: UNARY_EXPRESSION  */
#line 162 "tinyc_yacc.y"
                                                                                                    {(yyval.node) = init_node("CAST_EXPRESSION", "", (yyvsp[0].node));}
#line 2052 "y.tab.c"
    break;

  case 32: /* CAST_EXPRESSION: LEFT_PARANTHESIS TYPE_NAME RIGHT_PARANTHESIS CAST_EXPRESSION  */
#line 163 "tinyc_yacc.y"
                                                                                                    {
                                                                                                        tree_pointer temp = init_node((yyvsp[-3].val), "", NULL);
                                                                                                        (yyval.node) = init_node("CAST_EXPRESSION", "", temp);
                                                                                                        add_next(temp, (yyvsp[-2].node));
                                                                                                        add_next(temp, init_node((yyvsp[-1].val), "", NULL));
                                                                                                        add_next(temp, (yyvsp[0].node));
                                                                                                    }
#line 2064 "y.tab.c"
    break;

  case 33: /* MULTIPLICATIVE_EXPRESSION: CAST_EXPRESSION  */
#line 172 "tinyc_yacc.y"
                                                                                                        {(yyval.node) = init_node("MULTIPLICATIVE_EXPRESSION", "", (yyvsp[0].node));}
#line 2070 "y.tab.c"
    break;

  case 34: /* MULTIPLICATIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION MULTIPLICATION_OPERATOR CAST_EXPRESSION  */
#line 173 "tinyc_yacc.y"
                                                                                                        {
                                                                                                            (yyval.node) = init_node("MULTIPLICATIVE_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                            add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                        }
#line 2080 "y.tab.c"
    break;

  case 35: /* MULTIPLICATIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION DIVIDE_OPERATOR CAST_EXPRESSION  */
#line 178 "tinyc_yacc.y"
                                                                                                        {
                                                                                                            (yyval.node) = init_node("MULTIPLICATIVE_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                            add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                        }
#line 2090 "y.tab.c"
    break;

  case 36: /* MULTIPLICATIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION REMAINDER_OPERATOR CAST_EXPRESSION  */
#line 183 "tinyc_yacc.y"
                                                                                                        {
                                                                                                            (yyval.node) = init_node("MULTIPLICATIVE_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                            add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                        }
#line 2100 "y.tab.c"
    break;

  case 37: /* ADDITIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION  */
#line 190 "tinyc_yacc.y"
                                                                                                            {(yyval.node) = init_node("ADDITIVE_EXPRESSION", "", (yyvsp[0].node));}
#line 2106 "y.tab.c"
    break;

  case 38: /* ADDITIVE_EXPRESSION: ADDITIVE_EXPRESSION ADDITION_OPERATOR MULTIPLICATIVE_EXPRESSION  */
#line 191 "tinyc_yacc.y"
                                                                                                            {
                                                                                                                (yyval.node) = init_node("ADDITIVE_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                                add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                            }
#line 2116 "y.tab.c"
    break;

  case 39: /* ADDITIVE_EXPRESSION: ADDITIVE_EXPRESSION SUBTRACTION_OPERATOR MULTIPLICATIVE_EXPRESSION  */
#line 196 "tinyc_yacc.y"
                                                                                                            {
                                                                                                                (yyval.node) = init_node("ADDITIVE_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                                add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                            }
#line 2126 "y.tab.c"
    break;

  case 40: /* SHIFT_EXPRESSION: ADDITIVE_EXPRESSION  */
#line 203 "tinyc_yacc.y"
                                                                                                {   (yyval.node) = init_node("SHIFT_EXPRESSION", "", (yyvsp[0].node));}
#line 2132 "y.tab.c"
    break;

  case 41: /* SHIFT_EXPRESSION: SHIFT_EXPRESSION SHIFT_LEFT_OPERATOR ADDITIVE_EXPRESSION  */
#line 204 "tinyc_yacc.y"
                                                                                                {
                                                                                                    (yyval.node) = init_node("SHIFT_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                    add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                    add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                }
#line 2142 "y.tab.c"
    break;

  case 42: /* SHIFT_EXPRESSION: SHIFT_EXPRESSION SHIFT_RIGHT_OPERATOR ADDITIVE_EXPRESSION  */
#line 209 "tinyc_yacc.y"
                                                                                                {
                                                                                                    (yyval.node) = init_node("SHIFT_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                    add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                    add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                }
#line 2152 "y.tab.c"
    break;

  case 43: /* RELATIONAL_EXPRESSION: SHIFT_EXPRESSION  */
#line 216 "tinyc_yacc.y"
                                                                                                    {   (yyval.node) = init_node("RELATIONAL_EXPRESSION", "", (yyvsp[0].node));}
#line 2158 "y.tab.c"
    break;

  case 44: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION LESS_THAN SHIFT_EXPRESSION  */
#line 217 "tinyc_yacc.y"
                                                                                                    {
                                                                                                        (yyval.node) = init_node("RELATIONAL_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                    }
#line 2168 "y.tab.c"
    break;

  case 45: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION GREATER_THAN SHIFT_EXPRESSION  */
#line 222 "tinyc_yacc.y"
                                                                                                    {
                                                                                                        (yyval.node) = init_node("RELATIONAL_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                    }
#line 2178 "y.tab.c"
    break;

  case 46: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION LESS_THAN_EQUAL_TO SHIFT_EXPRESSION  */
#line 227 "tinyc_yacc.y"
                                                                                                    {
                                                                                                        (yyval.node) = init_node("RELATIONAL_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                    }
#line 2188 "y.tab.c"
    break;

  case 47: /* RELATIONAL_EXPRESSION: RELATIONAL_EXPRESSION GREATER_THAN_EQUAL_TO SHIFT_EXPRESSION  */
#line 232 "tinyc_yacc.y"
                                                                                                    {
                                                                                                        (yyval.node) = init_node("RELATIONAL_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                    }
#line 2198 "y.tab.c"
    break;

  case 48: /* EQUALITY_EXPRESSION: RELATIONAL_EXPRESSION  */
#line 239 "tinyc_yacc.y"
                                                                                                        {   (yyval.node) = init_node("EQUALITY_EXPRESSION", "", (yyvsp[0].node));}
#line 2204 "y.tab.c"
    break;

  case 49: /* EQUALITY_EXPRESSION: EQUALITY_EXPRESSION EQUALITY_OPERATOR RELATIONAL_EXPRESSION  */
#line 240 "tinyc_yacc.y"
                                                                                                        {
                                                                                                            (yyval.node) = init_node("EQUALITY_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                            add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                        }
#line 2214 "y.tab.c"
    break;

  case 50: /* EQUALITY_EXPRESSION: EQUALITY_EXPRESSION NON_EQUALITY_OPERATOR RELATIONAL_EXPRESSION  */
#line 245 "tinyc_yacc.y"
                                                                                                        {
                                                                                                            (yyval.node) = init_node("EQUALITY_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                            add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                        }
#line 2224 "y.tab.c"
    break;

  case 51: /* AND_EXPRESSION: EQUALITY_EXPRESSION  */
#line 252 "tinyc_yacc.y"
                                                                                                {   (yyval.node) = init_node("AND_EXPRESSION", "", (yyvsp[0].node));}
#line 2230 "y.tab.c"
    break;

  case 52: /* AND_EXPRESSION: AND_EXPRESSION BITWISE_AND_OPERATOR EQUALITY_EXPRESSION  */
#line 253 "tinyc_yacc.y"
                                                                                                {
                                                                                                    (yyval.node) = init_node("AND_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                    add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                    add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                }
#line 2240 "y.tab.c"
    break;

  case 53: /* EXCLUSIVE_OR_EXPRESSION: AND_EXPRESSION  */
#line 260 "tinyc_yacc.y"
                                                                                            {   (yyval.node) = init_node("EXCLUSIVE_OR_EXPRESSION", "", (yyvsp[0].node));}
#line 2246 "y.tab.c"
    break;

  case 54: /* EXCLUSIVE_OR_EXPRESSION: EXCLUSIVE_OR_EXPRESSION XOR_OPERATOR AND_EXPRESSION  */
#line 261 "tinyc_yacc.y"
                                                                                            {
                                                                                                (yyval.node) = init_node("EXCLUSIVE_OR_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                            }
#line 2256 "y.tab.c"
    break;

  case 55: /* INCLUSIVE_OR_EXPRESSION: EXCLUSIVE_OR_EXPRESSION  */
#line 268 "tinyc_yacc.y"
                                                                                                            {   (yyval.node) = init_node("INCLUSIVE_OR_EXPRESSION", "", (yyvsp[0].node));}
#line 2262 "y.tab.c"
    break;

  case 56: /* INCLUSIVE_OR_EXPRESSION: INCLUSIVE_OR_EXPRESSION BITWISE_OR_OPERATOR EXCLUSIVE_OR_EXPRESSION  */
#line 269 "tinyc_yacc.y"
                                                                                                            {
                                                                                                                (yyval.node) = init_node("INCLUSIVE_OR_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                                add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                            }
#line 2272 "y.tab.c"
    break;

  case 57: /* LOGICAL_AND_EXPRESSION: INCLUSIVE_OR_EXPRESSION  */
#line 276 "tinyc_yacc.y"
                                                                                                            {   (yyval.node) = init_node("LOGICAL_AND_EXPRESSION", "", (yyvsp[0].node));}
#line 2278 "y.tab.c"
    break;

  case 58: /* LOGICAL_AND_EXPRESSION: LOGICAL_AND_EXPRESSION LOGICAL_AND_OPERATOR INCLUSIVE_OR_EXPRESSION  */
#line 277 "tinyc_yacc.y"
                                                                                                            {
                                                                                                                (yyval.node) = init_node("LOGICAL_AND_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                                add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                            }
#line 2288 "y.tab.c"
    break;

  case 59: /* LOGICAL_OR_EXPRESSION: LOGICAL_AND_EXPRESSION  */
#line 284 "tinyc_yacc.y"
                                                                                                        {   (yyval.node) = init_node("LOGICAL_OR_EXPRESSION", "", (yyvsp[0].node));}
#line 2294 "y.tab.c"
    break;

  case 60: /* LOGICAL_OR_EXPRESSION: LOGICAL_OR_EXPRESSION LOGICAL_OR_OPERATOR LOGICAL_AND_EXPRESSION  */
#line 285 "tinyc_yacc.y"
                                                                                                        {
                                                                                                            (yyval.node) = init_node("LOGICAL_OR_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                            add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                        }
#line 2304 "y.tab.c"
    break;

  case 61: /* CONDITIONAL_EXPRESSION: LOGICAL_OR_EXPRESSION  */
#line 292 "tinyc_yacc.y"
                                                                                                                                    {   (yyval.node) = init_node("CONDITIONAL_EXPRESSION", "", (yyvsp[0].node));}
#line 2310 "y.tab.c"
    break;

  case 62: /* CONDITIONAL_EXPRESSION: LOGICAL_OR_EXPRESSION TERNARY_OPERATOR EXPRESSION TERNARY_SEPERATOR CONDITIONAL_EXPRESSION  */
#line 293 "tinyc_yacc.y"
                                                                                                                                    {
                                                                                                                                        (yyval.node) = init_node("CONDITIONAL_EXPRESSION", "", (yyvsp[-4].node));
                                                                                                                                        add_next((yyvsp[-4].node), init_node((yyvsp[-3].val), "", NULL));
                                                                                                                                        add_next((yyvsp[-4].node), (yyvsp[-2].node));
                                                                                                                                        add_next((yyvsp[-4].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                                        add_next((yyvsp[-4].node), (yyvsp[0].node));
                                                                                                                                    }
#line 2322 "y.tab.c"
    break;

  case 63: /* ASSIGNMENT_EXPRESSION: CONDITIONAL_EXPRESSION  */
#line 302 "tinyc_yacc.y"
                                                                                                    {   (yyval.node) = init_node("ASSIGNMENT_EXPRESSION", "", (yyvsp[0].node));}
#line 2328 "y.tab.c"
    break;

  case 64: /* ASSIGNMENT_EXPRESSION: UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION  */
#line 303 "tinyc_yacc.y"
                                                                                                    {
                                                                                                        (yyval.node) = init_node("ASSIGNMENT_EXPRESSION", "", (yyvsp[-2].node));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[-1].node));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                                    }
#line 2338 "y.tab.c"
    break;

  case 65: /* ASSIGNMENT_OPERATOR: EQUAL_OPERATOR  */
#line 310 "tinyc_yacc.y"
                                                            {(yyval.node) = init_node("ASSIGNMENT_OPERATOR", (yyvsp[0].val), NULL);}
#line 2344 "y.tab.c"
    break;

  case 66: /* ASSIGNMENT_OPERATOR: ASSIGNMENT_OPERATORS  */
#line 311 "tinyc_yacc.y"
                                                            {(yyval.node) = init_node("ASSIGNMENT_OPERATOR", (yyvsp[0].val), NULL);}
#line 2350 "y.tab.c"
    break;

  case 67: /* EXPRESSION: ASSIGNMENT_EXPRESSION  */
#line 314 "tinyc_yacc.y"
                                                                                {   (yyval.node) = init_node("EXPRESSION", "", (yyvsp[0].node));}
#line 2356 "y.tab.c"
    break;

  case 68: /* EXPRESSION: EXPRESSION COMMA ASSIGNMENT_EXPRESSION  */
#line 315 "tinyc_yacc.y"
                                                                                {
                                                                                    (yyval.node) = init_node("EXPRESSION", "", (yyvsp[-2].node));
                                                                                    add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                    add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                }
#line 2366 "y.tab.c"
    break;

  case 69: /* CONSTANT_EXPRESSION: CONDITIONAL_EXPRESSION  */
#line 322 "tinyc_yacc.y"
                                                                {   (yyval.node) = init_node("CONSTANT_EXPRESSION", "", (yyvsp[0].node));}
#line 2372 "y.tab.c"
    break;

  case 70: /* DECLARATION: DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST_OPT SEMI_COLON  */
#line 327 "tinyc_yacc.y"
                                                                                                    {   (yyval.node) = init_node("DECLARATION", "", (yyvsp[-2].node));
                                                                                                        add_next((yyvsp[-2].node), (yyvsp[-1].node));
                                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                    }
#line 2381 "y.tab.c"
    break;

  case 71: /* INIT_DECLARATOR_LIST_OPT: INIT_DECLARATOR_LIST  */
#line 333 "tinyc_yacc.y"
                                                            {   (yyval.node) = init_node("INIT_DECLARATOR_LIST_OPT", "", (yyvsp[0].node));}
#line 2387 "y.tab.c"
    break;

  case 72: /* INIT_DECLARATOR_LIST_OPT: %empty  */
#line 334 "tinyc_yacc.y"
                                                            {   (yyval.node) = init_node("INIT_DECLARATOR_LIST_OPT", "", init_node("<empty>", "", NULL));}
#line 2393 "y.tab.c"
    break;

  case 73: /* DECLARATION_SPECIFIERS: STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS_OPT  */
#line 337 "tinyc_yacc.y"
                                                                                            {   (yyval.node) = init_node("DECLARATION_SPECIFIERS", "", (yyvsp[-1].node)); add_next((yyvsp[-1].node), (yyvsp[0].node));}
#line 2399 "y.tab.c"
    break;

  case 74: /* DECLARATION_SPECIFIERS: TYPE_SPECIFIER DECLARATION_SPECIFIERS_OPT  */
#line 338 "tinyc_yacc.y"
                                                                                            {   (yyval.node) = init_node("DECLARATION_SPECIFIERS", "", (yyvsp[-1].node)); add_next((yyvsp[-1].node), (yyvsp[0].node));}
#line 2405 "y.tab.c"
    break;

  case 75: /* DECLARATION_SPECIFIERS: TYPE_QUALIFIER DECLARATION_SPECIFIERS_OPT  */
#line 339 "tinyc_yacc.y"
                                                                                            {   (yyval.node) = init_node("DECLARATION_SPECIFIERS", "", (yyvsp[-1].node)); add_next((yyvsp[-1].node), (yyvsp[0].node));}
#line 2411 "y.tab.c"
    break;

  case 76: /* DECLARATION_SPECIFIERS: FUNCTION_SPECIFIER DECLARATION_SPECIFIERS_OPT  */
#line 340 "tinyc_yacc.y"
                                                                                            {   (yyval.node) = init_node("DECLARATION_SPECIFIERS", "", (yyvsp[-1].node)); add_next((yyvsp[-1].node), (yyvsp[0].node));}
#line 2417 "y.tab.c"
    break;

  case 77: /* DECLARATION_SPECIFIERS_OPT: DECLARATION_SPECIFIERS  */
#line 343 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("DECLARATION_SPECIFIERS_OPT", "", (yyvsp[0].node));}
#line 2423 "y.tab.c"
    break;

  case 78: /* DECLARATION_SPECIFIERS_OPT: %empty  */
#line 344 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("DECLARATION_SPECIFIERS_OPT", "", init_node("<empty>", "", NULL));}
#line 2429 "y.tab.c"
    break;

  case 79: /* INIT_DECLARATOR_LIST: INIT_DECLARATOR  */
#line 347 "tinyc_yacc.y"
                                                                                    {   (yyval.node) = init_node("INIT_DECLARATOR_LIST", "", (yyvsp[0].node));}
#line 2435 "y.tab.c"
    break;

  case 80: /* INIT_DECLARATOR_LIST: INIT_DECLARATOR_LIST COMMA INIT_DECLARATOR  */
#line 348 "tinyc_yacc.y"
                                                                                    {
                                                                                        (yyval.node) = init_node("INIT_DECLARATOR_LIST", "", (yyvsp[-2].node));
                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                    }
#line 2445 "y.tab.c"
    break;

  case 81: /* INIT_DECLARATOR: DECLARATOR  */
#line 355 "tinyc_yacc.y"
                                                                                {(yyval.node) = init_node("INIT_DECLARATOR", "", (yyvsp[0].node));}
#line 2451 "y.tab.c"
    break;

  case 82: /* INIT_DECLARATOR: DECLARATOR EQUAL_OPERATOR INITIALIZER  */
#line 356 "tinyc_yacc.y"
                                                                                {
                                                                                    (yyval.node) = init_node("INIT_DECLARATOR", "", (yyvsp[-2].node));
                                                                                    add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                    add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                }
#line 2461 "y.tab.c"
    break;

  case 83: /* STORAGE_CLASS_SPECIFIER: EXTERN  */
#line 363 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("STORAGE_CLASS_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2467 "y.tab.c"
    break;

  case 84: /* STORAGE_CLASS_SPECIFIER: STATIC  */
#line 364 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("STORAGE_CLASS_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2473 "y.tab.c"
    break;

  case 85: /* STORAGE_CLASS_SPECIFIER: AUTO  */
#line 365 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("STORAGE_CLASS_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2479 "y.tab.c"
    break;

  case 86: /* STORAGE_CLASS_SPECIFIER: REGISTER  */
#line 366 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("STORAGE_CLASS_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2485 "y.tab.c"
    break;

  case 87: /* TYPE_SPECIFIER: VOID  */
#line 369 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2491 "y.tab.c"
    break;

  case 88: /* TYPE_SPECIFIER: CHAR  */
#line 370 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2497 "y.tab.c"
    break;

  case 89: /* TYPE_SPECIFIER: SHORT  */
#line 371 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2503 "y.tab.c"
    break;

  case 90: /* TYPE_SPECIFIER: INT  */
#line 372 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2509 "y.tab.c"
    break;

  case 91: /* TYPE_SPECIFIER: LONG  */
#line 373 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2515 "y.tab.c"
    break;

  case 92: /* TYPE_SPECIFIER: FLOAT  */
#line 374 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2521 "y.tab.c"
    break;

  case 93: /* TYPE_SPECIFIER: DOUBLE  */
#line 375 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2527 "y.tab.c"
    break;

  case 94: /* TYPE_SPECIFIER: SIGNED  */
#line 376 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2533 "y.tab.c"
    break;

  case 95: /* TYPE_SPECIFIER: UNSIGNED  */
#line 377 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2539 "y.tab.c"
    break;

  case 96: /* TYPE_SPECIFIER: BOOL  */
#line 378 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2545 "y.tab.c"
    break;

  case 97: /* TYPE_SPECIFIER: COMPLEX  */
#line 379 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2551 "y.tab.c"
    break;

  case 98: /* TYPE_SPECIFIER: IMAGINARY  */
#line 380 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2557 "y.tab.c"
    break;

  case 99: /* SPECIFIER_QUALIFIER_LIST: TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST_OPT  */
#line 383 "tinyc_yacc.y"
                                                                                    {
                                                                                        (yyval.node) = init_node("SPECIFIER_QUALIFIER_LIST", "", (yyvsp[-1].node));
                                                                                        add_next((yyvsp[-1].node), (yyvsp[0].node));
                                                                                    }
#line 2566 "y.tab.c"
    break;

  case 100: /* SPECIFIER_QUALIFIER_LIST: TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST_OPT  */
#line 387 "tinyc_yacc.y"
                                                                                    {
                                                                                        (yyval.node) = init_node("SPECIFIER_QUALIFIER_LIST", "", (yyvsp[-1].node));
                                                                                        add_next((yyvsp[-1].node), (yyvsp[0].node));
                                                                                    }
#line 2575 "y.tab.c"
    break;

  case 101: /* SPECIFIER_QUALIFIER_LIST_OPT: SPECIFIER_QUALIFIER_LIST  */
#line 393 "tinyc_yacc.y"
                                                                    {(yyval.node) = init_node("SPECIFIER_QUALIFIER_LIST_OPT", "", (yyvsp[0].node));}
#line 2581 "y.tab.c"
    break;

  case 102: /* SPECIFIER_QUALIFIER_LIST_OPT: %empty  */
#line 394 "tinyc_yacc.y"
                                                                    {(yyval.node) = init_node("SPECIFIER_QUALIFIER_LIST_OPT", "", init_node("<empty>", "", NULL));}
#line 2587 "y.tab.c"
    break;

  case 103: /* TYPE_QUALIFIER: CONST  */
#line 397 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_QUALIFIER", (yyvsp[0].val), NULL);}
#line 2593 "y.tab.c"
    break;

  case 104: /* TYPE_QUALIFIER: RESTRICT  */
#line 398 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_QUALIFIER", (yyvsp[0].val), NULL);}
#line 2599 "y.tab.c"
    break;

  case 105: /* TYPE_QUALIFIER: VOLATILE  */
#line 399 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("TYPE_QUALIFIER", (yyvsp[0].val), NULL);}
#line 2605 "y.tab.c"
    break;

  case 106: /* FUNCTION_SPECIFIER: INLINE  */
#line 402 "tinyc_yacc.y"
                                                    {(yyval.node) = init_node("FUNCTION_SPECIFIER", (yyvsp[0].val), NULL);}
#line 2611 "y.tab.c"
    break;

  case 107: /* DECLARATOR: POINTER_OPT DIRECT_DECLARATOR  */
#line 405 "tinyc_yacc.y"
                                                                        {(yyval.node) = init_node("DECLARATOR", "", (yyvsp[-1].node)); add_next((yyvsp[-1].node), (yyvsp[0].node));}
#line 2617 "y.tab.c"
    break;

  case 108: /* POINTER_OPT: POINTER  */
#line 408 "tinyc_yacc.y"
                                                {(yyval.node) = init_node("POINTER_OPT", "", (yyvsp[0].node));}
#line 2623 "y.tab.c"
    break;

  case 109: /* POINTER_OPT: %empty  */
#line 409 "tinyc_yacc.y"
                                                {(yyval.node) = init_node("POINTER_OPT", "", init_node("<empty>", "", NULL));}
#line 2629 "y.tab.c"
    break;

  case 110: /* DIRECT_DECLARATOR: IDENTIFIER  */
#line 412 "tinyc_yacc.y"
                                                                                                                                                        {(yyval.node) = init_node("DIRECT_DECLARATOR", "", init_node("IDENTIFIER", (yyvsp[0].val), NULL));}
#line 2635 "y.tab.c"
    break;

  case 111: /* DIRECT_DECLARATOR: LEFT_PARANTHESIS DECLARATOR RIGHT_PARANTHESIS  */
#line 413 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            tree_pointer temp = init_node((yyvsp[-2].val), "", NULL);
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", temp);
                                                                                                                                                            add_next(temp, (yyvsp[-1].node));
                                                                                                                                                            add_next(temp, init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2646 "y.tab.c"
    break;

  case 112: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION_OPT RIGHT_SQUARE_BRACKET  */
#line 419 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", (yyvsp[-4].node));
                                                                                                                                                            add_next((yyvsp[-4].node), init_node((yyvsp[-3].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-4].node), (yyvsp[-2].node));
                                                                                                                                                            add_next((yyvsp[-4].node), (yyvsp[-1].node));
                                                                                                                                                            add_next((yyvsp[-4].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2658 "y.tab.c"
    break;

  case 113: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET STATIC TYPE_QUALIFIER_LIST_OPT ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 426 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", (yyvsp[-5].node));
                                                                                                                                                            add_next((yyvsp[-5].node), init_node((yyvsp[-4].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-5].node), init_node((yyvsp[-3].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-5].node), (yyvsp[-2].node));
                                                                                                                                                            add_next((yyvsp[-5].node), (yyvsp[-1].node));
                                                                                                                                                            add_next((yyvsp[-5].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2671 "y.tab.c"
    break;

  case 114: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST STATIC ASSIGNMENT_EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 434 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", (yyvsp[-5].node));
                                                                                                                                                            add_next((yyvsp[-5].node), init_node((yyvsp[-4].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-5].node), (yyvsp[-3].node));
                                                                                                                                                            add_next((yyvsp[-5].node), init_node((yyvsp[-2].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-5].node), (yyvsp[-1].node));
                                                                                                                                                            add_next((yyvsp[-5].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2684 "y.tab.c"
    break;

  case 115: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_SQUARE_BRACKET TYPE_QUALIFIER_LIST_OPT MULTIPLICATION_OPERATOR RIGHT_SQUARE_BRACKET  */
#line 442 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", (yyvsp[-4].node));
                                                                                                                                                            add_next((yyvsp[-4].node), init_node((yyvsp[-3].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-4].node), (yyvsp[-2].node));
                                                                                                                                                            add_next((yyvsp[-4].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-4].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2696 "y.tab.c"
    break;

  case 116: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_PARANTHESIS PARAMETER_TYPE_LIST RIGHT_PARANTHESIS  */
#line 449 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", (yyvsp[-3].node));
                                                                                                                                                            add_next((yyvsp[-3].node), init_node((yyvsp[-2].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-3].node), (yyvsp[-1].node));
                                                                                                                                                            add_next((yyvsp[-3].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2707 "y.tab.c"
    break;

  case 117: /* DIRECT_DECLARATOR: DIRECT_DECLARATOR LEFT_PARANTHESIS IDENTIFIER_LIST_OPT RIGHT_PARANTHESIS  */
#line 455 "tinyc_yacc.y"
                                                                                                                                                        {
                                                                                                                                                            (yyval.node) = init_node("DIRECT_DECLARATOR", "", (yyvsp[-3].node));
                                                                                                                                                            add_next((yyvsp[-3].node), init_node((yyvsp[-2].val), "", NULL));
                                                                                                                                                            add_next((yyvsp[-3].node), (yyvsp[-1].node));
                                                                                                                                                            add_next((yyvsp[-3].node), init_node((yyvsp[0].val), "", NULL));
                                                                                                                                                        }
#line 2718 "y.tab.c"
    break;

  case 118: /* ASSIGNMENT_EXPRESSION_OPT: ASSIGNMENT_EXPRESSION  */
#line 463 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("ASSIGNMENT_EXPRESSION_OPT", "", (yyvsp[0].node));}
#line 2724 "y.tab.c"
    break;

  case 119: /* ASSIGNMENT_EXPRESSION_OPT: %empty  */
#line 464 "tinyc_yacc.y"
                                                                {(yyval.node) = init_node("ASSIGNMENT_EXPRESSION_OPT", "", init_node("<empty>", "", NULL));}
#line 2730 "y.tab.c"
    break;

  case 120: /* POINTER: MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT  */
#line 467 "tinyc_yacc.y"
                                                                                                {
                                                                                                    tree_pointer temp = init_node((yyvsp[-1].val), "", NULL);
                                                                                                    (yyval.node) = init_node("POINTER", "", temp);
                                                                                                    add_next(temp, (yyvsp[0].node));
                                                                                                }
#line 2740 "y.tab.c"
    break;

  case 121: /* POINTER: MULTIPLICATION_OPERATOR TYPE_QUALIFIER_LIST_OPT POINTER  */
#line 472 "tinyc_yacc.y"
                                                                                                {
                                                                                                    tree_pointer temp = init_node((yyvsp[-2].val), "", NULL);
                                                                                                    (yyval.node) = init_node("POINTER", "", temp);
                                                                                                    add_next(temp, (yyvsp[-1].node));
                                                                                                    add_next(temp, (yyvsp[0].node));
                                                                                                }
#line 2751 "y.tab.c"
    break;

  case 122: /* TYPE_QUALIFIER_LIST: TYPE_QUALIFIER  */
#line 480 "tinyc_yacc.y"
                                                                            {(yyval.node) = init_node("TYPE_QUALIFIER_LIST", "", (yyvsp[0].node));}
#line 2757 "y.tab.c"
    break;

  case 123: /* TYPE_QUALIFIER_LIST: TYPE_QUALIFIER_LIST TYPE_QUALIFIER  */
#line 481 "tinyc_yacc.y"
                                                                            {(yyval.node) = init_node("TYPE_QUALIFIER_LIST", "", (yyvsp[-1].node)); add_next((yyvsp[-1].node), (yyvsp[0].node));}
#line 2763 "y.tab.c"
    break;

  case 124: /* TYPE_QUALIFIER_LIST_OPT: TYPE_QUALIFIER_LIST  */
#line 484 "tinyc_yacc.y"
                                                                                    {(yyval.node) = init_node("TYPE_QUALIFIER_LIST_OPT", "", (yyvsp[0].node));}
#line 2769 "y.tab.c"
    break;

  case 125: /* TYPE_QUALIFIER_LIST_OPT: %empty  */
#line 485 "tinyc_yacc.y"
                                                                                    {(yyval.node) = init_node("TYPE_QUALIFIER_LIST_OPT", "", init_node("<empty>", "", NULL));}
#line 2775 "y.tab.c"
    break;

  case 126: /* PARAMETER_TYPE_LIST: PARAMETER_LIST  */
#line 488 "tinyc_yacc.y"
                                                                        {(yyval.node) = init_node("PARAMETER_TYPE_LIST", "", (yyvsp[0].node));}
#line 2781 "y.tab.c"
    break;

  case 127: /* PARAMETER_TYPE_LIST: PARAMETER_LIST COMMA TRIPLE_DOT  */
#line 489 "tinyc_yacc.y"
                                                                        {
                                                                            (yyval.node) = init_node("PARAMETER_TYPE_LIST", "", (yyvsp[-2].node));
                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                            add_next((yyvsp[-2].node), init_node((yyvsp[0].val), "", NULL));
                                                                        }
#line 2791 "y.tab.c"
    break;

  case 128: /* PARAMETER_LIST: PARAMETER_DECLARATION  */
#line 496 "tinyc_yacc.y"
                                                                                    {(yyval.node) = init_node("PARAMETER_LIST", "", (yyvsp[0].node));}
#line 2797 "y.tab.c"
    break;

  case 129: /* PARAMETER_LIST: PARAMETER_LIST COMMA PARAMETER_DECLARATION  */
#line 497 "tinyc_yacc.y"
                                                                                    {
                                                                                        (yyval.node) = init_node("PARAMETER_LIST", "", (yyvsp[-2].node));
                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val), "", NULL));
                                                                                        add_next((yyvsp[-2].node), (yyvsp[0].node));
                                                                                    }
#line 2807 "y.tab.c"
    break;

  case 130: /* PARAMETER_DECLARATION: DECLARATION_SPECIFIERS DECLARATOR  */
#line 504 "tinyc_yacc.y"
                                                                                    { (yyval.node) = init_node("PARAMETER_DECLARATION","",(yyvsp[-1].node)); add_next((yyvsp[-1].node),(yyvsp[0].node) ); }
#line 2813 "y.tab.c"
    break;

  case 131: /* PARAMETER_DECLARATION: DECLARATION_SPECIFIERS  */
#line 505 "tinyc_yacc.y"
                                                                                    { (yyval.node) = init_node("PARAMETER_DECLARATION","",(yyvsp[0].node)); }
#line 2819 "y.tab.c"
    break;

  case 132: /* IDENTIFIER_LIST: IDENTIFIER  */
#line 508 "tinyc_yacc.y"
                                                                                    {   (yyval.node) = init_node("IDENTIFIER_LIST","", init_node("IDENTIFIER",(yyvsp[0].val),NULL)); }
#line 2825 "y.tab.c"
    break;

  case 133: /* IDENTIFIER_LIST: IDENTIFIER_LIST COMMA IDENTIFIER  */
#line 509 "tinyc_yacc.y"
                                                                                    {   (yyval.node) = init_node("IDENTIFIER_LIST","",(yyvsp[-2].node));
                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[-1].val),"",NULL) );
                                                                                        add_next((yyvsp[-2].node), init_node((yyvsp[0].val),"",NULL) );
                                                                                    }
#line 2834 "y.tab.c"
    break;

  case 134: /* IDENTIFIER_LIST_OPT: IDENTIFIER_LIST  */
#line 515 "tinyc_yacc.y"
                                                            { (yyval.node) = init_node("IDENTIFIER_LIST_OPT","",(yyvsp[0].node)); }
#line 2840 "y.tab.c"
    break;

  case 135: /* IDENTIFIER_LIST_OPT: %empty  */
#line 516 "tinyc_yacc.y"
                                        { (yyval.node) = init_node("IDENTIFIER_LIST_OPT","",init_node("<empty>","",NULL)); }
#line 2846 "y.tab.c"
    break;

  case 136: /* TYPE_NAME: SPECIFIER_QUALIFIER_LIST  */
#line 519 "tinyc_yacc.y"
                                                                                    { (yyval.node) = init_node("TYPE_NAME","",(yyvsp[0].node)); }
#line 2852 "y.tab.c"
    break;

  case 137: /* INITIALIZER: ASSIGNMENT_EXPRESSION  */
#line 522 "tinyc_yacc.y"
                                                                                    { (yyval.node) = init_node("INITIALIZER","",(yyvsp[0].node)); }
#line 2858 "y.tab.c"
    break;

  case 138: /* INITIALIZER: LEFT_CURLY_BRACKET INITIALIZER_LIST RIGHT_CURLY_BRACKET  */
#line 523 "tinyc_yacc.y"
                                                                                                   {    tree_pointer temp = init_node((yyvsp[-2].val),"",NULL);
                                                                                                        (yyval.node) = init_node("INITIALIZER","",temp);
                                                                                                        add_next(temp, (yyvsp[-1].node) );
                                                                                                        add_next(temp, init_node((yyvsp[0].val),"",NULL) );
                                                                                                   }
#line 2868 "y.tab.c"
    break;

  case 139: /* INITIALIZER: LEFT_CURLY_BRACKET INITIALIZER_LIST COMMA RIGHT_CURLY_BRACKET  */
#line 528 "tinyc_yacc.y"
                                                                                                         { }
#line 2874 "y.tab.c"
    break;

  case 140: /* INITIALIZER_LIST: DESIGNATION_OPT INITIALIZER  */
#line 531 "tinyc_yacc.y"
                                                                       {    (yyval.node) = init_node("INITIALIZER_LIST","",(yyvsp[-1].node)); 
                                                                            add_next((yyvsp[-1].node), (yyvsp[0].node) );
                                                                       }
#line 2882 "y.tab.c"
    break;

  case 141: /* INITIALIZER_LIST: INITIALIZER_LIST COMMA DESIGNATION_OPT INITIALIZER  */
#line 534 "tinyc_yacc.y"
                                                                                            {   (yyval.node) = init_node("INITIALIZER_LIST","",(yyvsp[-3].node)); 
                                                                                                add_next((yyvsp[-3].node), init_node((yyvsp[-2].val),"",NULL) );
                                                                                                add_next((yyvsp[-3].node), (yyvsp[-1].node) );
                                                                                            }
#line 2891 "y.tab.c"
    break;

  case 142: /* DESIGNATION: DESIGNATOR_LIST EQUAL_OPERATOR  */
#line 540 "tinyc_yacc.y"
                                                                        {   (yyval.node) = init_node("DESIGNATION","",(yyvsp[-1].node)); 
                                                                            add_next((yyvsp[-1].node), init_node((yyvsp[0].val),"",NULL) );
                                                                        }
#line 2899 "y.tab.c"
    break;

  case 143: /* DESIGNATION_OPT: DESIGNATION  */
#line 544 "tinyc_yacc.y"
                                                     { (yyval.node) = init_node("DESIGNATION_OPT","",(yyvsp[0].node)); }
#line 2905 "y.tab.c"
    break;

  case 144: /* DESIGNATION_OPT: %empty  */
#line 545 "tinyc_yacc.y"
                                                     { (yyval.node) = init_node("DESIGNATION_OPT","",init_node("<empty>","",NULL)); }
#line 2911 "y.tab.c"
    break;

  case 145: /* DESIGNATOR_LIST: DESIGNATOR  */
#line 548 "tinyc_yacc.y"
                                                                                    { (yyval.node) = init_node("DESIGNATOR_LIST","",(yyvsp[0].node)); }
#line 2917 "y.tab.c"
    break;

  case 146: /* DESIGNATOR_LIST: DESIGNATOR_LIST DESIGNATOR  */
#line 549 "tinyc_yacc.y"
                                                                                    { (yyval.node) = init_node("DESIGNATOR_LIST","",(yyvsp[-1].node)); add_next((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2923 "y.tab.c"
    break;

  case 147: /* DESIGNATOR: LEFT_SQUARE_BRACKET CONSTANT_EXPRESSION RIGHT_SQUARE_BRACKET  */
#line 552 "tinyc_yacc.y"
                                                                                                      {     tree_pointer temp = init_node((yyvsp[-2].val),"",NULL);
                                                                                                            (yyval.node) = init_node("DESIGNATOR","",temp); 
                                                                                                            add_next(temp, (yyvsp[-1].node) );
                                                                                                            add_next(temp, init_node((yyvsp[0].val),"",NULL) );
                                                                                                      }
#line 2933 "y.tab.c"
    break;

  case 148: /* DESIGNATOR: DOT IDENTIFIER  */
#line 557 "tinyc_yacc.y"
                                                            {   tree_pointer temp = init_node((yyvsp[-1].val),"",NULL); 
                                                                (yyval.node) = init_node("DESIGNATOR","",temp); 
                                                                add_next(temp, init_node("IDENTIFIER",(yyvsp[0].val),NULL) );
                                                            }
#line 2942 "y.tab.c"
    break;

  case 149: /* STATEMENT: LABELED_STATEMENT  */
#line 564 "tinyc_yacc.y"
                                 { (yyval.node) = init_node("STATEMENT","",(yyvsp[0].node)); }
#line 2948 "y.tab.c"
    break;

  case 150: /* STATEMENT: COMPOUND_STATEMENT  */
#line 565 "tinyc_yacc.y"
                                 { (yyval.node) = init_node("STATEMENT","",(yyvsp[0].node)); }
#line 2954 "y.tab.c"
    break;

  case 151: /* STATEMENT: EXPRESSION_STATEMENT  */
#line 566 "tinyc_yacc.y"
                                 { (yyval.node) = init_node("STATEMENT","",(yyvsp[0].node)); }
#line 2960 "y.tab.c"
    break;

  case 152: /* STATEMENT: SELECTION_STATEMENT  */
#line 567 "tinyc_yacc.y"
                                 { (yyval.node) = init_node("STATEMENT","",(yyvsp[0].node)); }
#line 2966 "y.tab.c"
    break;

  case 153: /* STATEMENT: ITERATION_STATEMENT  */
#line 568 "tinyc_yacc.y"
                                 { (yyval.node) = init_node("STATEMENT","",(yyvsp[0].node)); }
#line 2972 "y.tab.c"
    break;

  case 154: /* STATEMENT: JUMP_STATEMENT  */
#line 569 "tinyc_yacc.y"
                                 { (yyval.node) = init_node("STATEMENT","",(yyvsp[0].node)); }
#line 2978 "y.tab.c"
    break;

  case 155: /* LABELED_STATEMENT: IDENTIFIER TERNARY_SEPERATOR STATEMENT  */
#line 572 "tinyc_yacc.y"
                                                            {   tree_pointer temp = init_node("IDENTIFIER",(yyvsp[-2].val),NULL); 
                                                                (yyval.node) = init_node("LABELED_STATEMENT","",temp); 
                                                                add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                add_next(temp, (yyvsp[0].node) );
                                                            }
#line 2988 "y.tab.c"
    break;

  case 156: /* LABELED_STATEMENT: CASE CONSTANT_EXPRESSION TERNARY_SEPERATOR STATEMENT  */
#line 577 "tinyc_yacc.y"
                                                                         {  tree_pointer temp = init_node((yyvsp[-3].val),"",NULL); 
                                                                            (yyval.node) = init_node("LABELED_STATEMENT","",temp); 
                                                                            add_next(temp, (yyvsp[-2].node) );
                                                                            add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                            add_next(temp, (yyvsp[0].node) );
                                                                         }
#line 2999 "y.tab.c"
    break;

  case 157: /* LABELED_STATEMENT: DEFAULT TERNARY_SEPERATOR STATEMENT  */
#line 583 "tinyc_yacc.y"
                                                        {   tree_pointer temp = init_node((yyvsp[-2].val),"",NULL); 
                                                            (yyval.node) = init_node("LABELED_STATEMENT","",temp); 
                                                            add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                            add_next(temp, (yyvsp[0].node) );
                                                        }
#line 3009 "y.tab.c"
    break;

  case 158: /* COMPOUND_STATEMENT: LEFT_CURLY_BRACKET BLOCK_ITEM_LIST_OPT RIGHT_CURLY_BRACKET  */
#line 590 "tinyc_yacc.y"
                                                                                {   tree_pointer temp = init_node((yyvsp[-2].val),"",NULL); 
                                                                                    (yyval.node) = init_node("COMPOUND_STATEMENT","",temp); 
                                                                                    add_next(temp, (yyvsp[-1].node) );
                                                                                    add_next(temp, init_node((yyvsp[0].val),"",NULL) );
                                                                                }
#line 3019 "y.tab.c"
    break;

  case 159: /* BLOCK_ITEM_LIST: BLOCK_ITEM  */
#line 597 "tinyc_yacc.y"
                                             { (yyval.node) = init_node("BLOCK_ITEM_LIST","",(yyvsp[0].node));}
#line 3025 "y.tab.c"
    break;

  case 160: /* BLOCK_ITEM_LIST: BLOCK_ITEM_LIST BLOCK_ITEM  */
#line 598 "tinyc_yacc.y"
                                             { (yyval.node) = init_node("BLOCK_ITEM_LIST","",(yyvsp[-1].node)); add_next((yyvsp[-1].node),(yyvsp[0].node)); }
#line 3031 "y.tab.c"
    break;

  case 161: /* BLOCK_ITEM: DECLARATION  */
#line 601 "tinyc_yacc.y"
                         { (yyval.node) = init_node("BLOCK_ITEM","",(yyvsp[0].node)); }
#line 3037 "y.tab.c"
    break;

  case 162: /* BLOCK_ITEM: STATEMENT  */
#line 602 "tinyc_yacc.y"
                         { (yyval.node) = init_node("BLOCK_ITEM","",(yyvsp[0].node)); }
#line 3043 "y.tab.c"
    break;

  case 163: /* EXPRESSION_STATEMENT: EXPRESSION_OPT SEMI_COLON  */
#line 605 "tinyc_yacc.y"
                                                 { (yyval.node) = init_node("EXPRESSION_STATEMENT","",(yyvsp[-1].node)); add_next((yyvsp[-1].node),init_node((yyvsp[0].val),"",NULL)); }
#line 3049 "y.tab.c"
    break;

  case 164: /* SELECTION_STATEMENT: IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT  */
#line 608 "tinyc_yacc.y"
                                                                                 {  tree_pointer temp = init_node((yyvsp[-4].val),"",NULL); 
                                                                                    (yyval.node) = init_node("SELECTION_STATEMENT","",temp); 
                                                                                    add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                    add_next(temp, (yyvsp[-2].node) );
                                                                                    add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                    add_next(temp, (yyvsp[0].node) );
                                                                                 }
#line 3061 "y.tab.c"
    break;

  case 165: /* SELECTION_STATEMENT: IF LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT ELSE STATEMENT  */
#line 615 "tinyc_yacc.y"
                                                                                                {   tree_pointer temp = init_node((yyvsp[-6].val),"",NULL); 
                                                                                                    (yyval.node) = init_node("SELECTION_STATEMENT","",temp); 
                                                                                                    add_next(temp, init_node((yyvsp[-5].val),"",NULL) );
                                                                                                    add_next(temp, (yyvsp[-4].node) );
                                                                                                    add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                                    add_next(temp, (yyvsp[-2].node) );
                                                                                                    add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                                    add_next(temp, (yyvsp[0].node) );
                                                                                                }
#line 3075 "y.tab.c"
    break;

  case 166: /* SELECTION_STATEMENT: SWITCH LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT  */
#line 624 "tinyc_yacc.y"
                                                                                     {  tree_pointer temp = init_node((yyvsp[-4].val),"",NULL); 
                                                                                        (yyval.node) = init_node("SELECTION_STATEMENT","",temp); 
                                                                                        add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                        add_next(temp, (yyvsp[-2].node) );
                                                                                        add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                        add_next(temp, (yyvsp[0].node) );
                                                                                     }
#line 3087 "y.tab.c"
    break;

  case 167: /* ITERATION_STATEMENT: WHILE LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS STATEMENT  */
#line 633 "tinyc_yacc.y"
                                                                                    {  tree_pointer temp = init_node((yyvsp[-4].val),"",NULL); 
                                                                                        (yyval.node) = init_node("ITERATION_STATEMENT","",temp); 
                                                                                        add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                        add_next(temp, (yyvsp[-2].node) );
                                                                                        add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                        add_next(temp, (yyvsp[0].node) );
                                                                                     }
#line 3099 "y.tab.c"
    break;

  case 168: /* ITERATION_STATEMENT: DO STATEMENT WHILE LEFT_PARANTHESIS EXPRESSION RIGHT_PARANTHESIS SEMI_COLON  */
#line 640 "tinyc_yacc.y"
                                                                                                  {     tree_pointer temp = init_node((yyvsp[-6].val),"",NULL); 
                                                                                                        (yyval.node) = init_node("ITERATION_STATEMENT","",temp); 
                                                                                                        add_next(temp, (yyvsp[-5].node) );
                                                                                                        add_next(temp, init_node((yyvsp[-4].val),"",NULL) );
                                                                                                        add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                                        add_next(temp, (yyvsp[-2].node) );
                                                                                                        add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                                        add_next(temp, init_node((yyvsp[0].val),"",NULL) );
                                                                                                  }
#line 3113 "y.tab.c"
    break;

  case 169: /* ITERATION_STATEMENT: FOR LEFT_PARANTHESIS EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT  */
#line 649 "tinyc_yacc.y"
                                                                                                                                          {     tree_pointer temp = init_node((yyvsp[-8].val),"",NULL); 
                                                                                                                                                (yyval.node) = init_node("ITERATION_STATEMENT","",temp); 
                                                                                                                                                add_next(temp, init_node((yyvsp[-7].val),"",NULL) );
                                                                                                                                                add_next(temp, (yyvsp[-6].node) );
                                                                                                                                                add_next(temp, init_node((yyvsp[-5].val),"",NULL) );
                                                                                                                                                add_next(temp, (yyvsp[-4].node) );
                                                                                                                                                add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                                                                                add_next(temp, (yyvsp[-2].node) );
                                                                                                                                                add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                                                                                add_next(temp, (yyvsp[0].node) );
                                                                                                                                          }
#line 3129 "y.tab.c"
    break;

  case 170: /* ITERATION_STATEMENT: FOR LEFT_PARANTHESIS DECLARATION EXPRESSION_OPT SEMI_COLON EXPRESSION_OPT RIGHT_PARANTHESIS STATEMENT  */
#line 660 "tinyc_yacc.y"
                                                                                                                            {   tree_pointer temp = init_node((yyvsp[-7].val),"",NULL); 
                                                                                                                                (yyval.node) = init_node("ITERATION_STATEMENT","",temp); 
                                                                                                                                add_next(temp, init_node((yyvsp[-6].val),"",NULL) );
                                                                                                                                add_next(temp, (yyvsp[-5].node) );
                                                                                                                                add_next(temp, (yyvsp[-4].node) );
                                                                                                                                add_next(temp, init_node((yyvsp[-3].val),"",NULL) );
                                                                                                                                add_next(temp, (yyvsp[-2].node) );
                                                                                                                                add_next(temp, init_node((yyvsp[-1].val),"",NULL) );
                                                                                                                                add_next(temp, (yyvsp[0].node) );
                                                                                                                            }
#line 3144 "y.tab.c"
    break;

  case 171: /* JUMP_STATEMENT: GOTO IDENTIFIER SEMI_COLON  */
#line 672 "tinyc_yacc.y"
                                             {   tree_pointer temp = init_node((yyvsp[-2].val),"",NULL);
                                                (yyval.node) = init_node("JUMP_STATEMENT","",temp) ; 
                                                add_next(temp,init_node((yyvsp[-1].val),"",NULL)); 
                                                add_next(temp,init_node((yyvsp[0].val),"",NULL));  
                                             }
#line 3154 "y.tab.c"
    break;

  case 172: /* JUMP_STATEMENT: CONTINUE SEMI_COLON  */
#line 677 "tinyc_yacc.y"
                                             {  tree_pointer temp = init_node((yyvsp[-1].val),"",NULL);
                                                (yyval.node) = init_node("JUMP_STATEMENT","",temp) ; 
                                                add_next(temp,init_node((yyvsp[0].val),"",NULL));
                                             }
#line 3163 "y.tab.c"
    break;

  case 173: /* JUMP_STATEMENT: BREAK SEMI_COLON  */
#line 681 "tinyc_yacc.y"
                                             {  tree_pointer temp = init_node((yyvsp[-1].val),"",NULL);
                                                (yyval.node) = init_node("JUMP_STATEMENT","",temp) ; 
                                                add_next(temp,init_node((yyvsp[0].val),"",NULL));
                                             }
#line 3172 "y.tab.c"
    break;

  case 174: /* JUMP_STATEMENT: RETURN EXPRESSION_OPT SEMI_COLON  */
#line 685 "tinyc_yacc.y"
                                                  {  tree_pointer temp = init_node((yyvsp[-2].val),"",NULL);
                                                     (yyval.node) = init_node("JUMP_STATEMENT","",temp) ; 
                                                     add_next(temp,(yyvsp[-1].node));
                                                     add_next(temp,init_node((yyvsp[0].val),"",NULL));
                                                  }
#line 3182 "y.tab.c"
    break;

  case 175: /* BLOCK_ITEM_LIST_OPT: BLOCK_ITEM_LIST  */
#line 693 "tinyc_yacc.y"
                                      { (yyval.node) = init_node("BLOCK_ITEM_LIST_OPT","",(yyvsp[0].node)); }
#line 3188 "y.tab.c"
    break;

  case 176: /* BLOCK_ITEM_LIST_OPT: %empty  */
#line 694 "tinyc_yacc.y"
                                      { (yyval.node) = init_node("BLOCK_ITEM_LIST_OPT","",init_node("<empty>","",NULL)); }
#line 3194 "y.tab.c"
    break;

  case 177: /* EXPRESSION_OPT: EXPRESSION  */
#line 697 "tinyc_yacc.y"
                             { (yyval.node) = init_node("EXPRESSION_OPT","",(yyvsp[0].node)); }
#line 3200 "y.tab.c"
    break;

  case 178: /* EXPRESSION_OPT: %empty  */
#line 698 "tinyc_yacc.y"
                             { (yyval.node) = init_node("EXPRESSION_OPT","",init_node("<empty>","",NULL)); }
#line 3206 "y.tab.c"
    break;

  case 179: /* TRANSLATIONAL_UNIT: EXTERNAL_DECLARATION  */
#line 703 "tinyc_yacc.y"
                                                                        {   parse_tree = init_node("TRANSLATIONAL_UNIT","",(yyvsp[0].node));
                                                                            (yyval.node)=parse_tree;
                                                                        }
#line 3214 "y.tab.c"
    break;

  case 180: /* TRANSLATIONAL_UNIT: TRANSLATIONAL_UNIT EXTERNAL_DECLARATION  */
#line 706 "tinyc_yacc.y"
                                                                        {   parse_tree = init_node("TRANSLATIONAL_UNIT","",(yyvsp[-1].node));
                                                                            add_next((yyvsp[-1].node),(yyvsp[0].node));
                                                                            (yyval.node) = parse_tree;
                                                                        }
#line 3223 "y.tab.c"
    break;

  case 181: /* EXTERNAL_DECLARATION: FUNCTION_DEFINITION  */
#line 712 "tinyc_yacc.y"
                                                                        { (yyval.node) = init_node("EXTERNAL_DECLARATION","",(yyvsp[0].node)); }
#line 3229 "y.tab.c"
    break;

  case 182: /* EXTERNAL_DECLARATION: DECLARATION  */
#line 713 "tinyc_yacc.y"
                                                                        { (yyval.node) = init_node("EXTERNAL_DECLARATION","",(yyvsp[0].node)); }
#line 3235 "y.tab.c"
    break;

  case 183: /* FUNCTION_DEFINITION: DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST_OPT COMPOUND_STATEMENT  */
#line 716 "tinyc_yacc.y"
                                                                                                        { (yyval.node) = init_node("FUNCTION_DEFINITION","",(yyvsp[-3].node)); add_next((yyvsp[-3].node),(yyvsp[-2].node)); add_next((yyvsp[-2].node),(yyvsp[-1].node)); add_next((yyvsp[-1].node),(yyvsp[0].node)); }
#line 3241 "y.tab.c"
    break;

  case 184: /* DECLARATION_LIST: DECLARATION  */
#line 719 "tinyc_yacc.y"
                                                                        { (yyval.node) = init_node("DECLARATION_LIST","",(yyvsp[0].node)); }
#line 3247 "y.tab.c"
    break;

  case 185: /* DECLARATION_LIST: DECLARATION_LIST DECLARATION  */
#line 720 "tinyc_yacc.y"
                                                                        { (yyval.node) = init_node("DECLARATION_LIST","",(yyvsp[-1].node)); add_next((yyvsp[-1].node),(yyvsp[0].node)); }
#line 3253 "y.tab.c"
    break;

  case 186: /* DECLARATION_LIST_OPT: DECLARATION_LIST  */
#line 723 "tinyc_yacc.y"
                                                                        { (yyval.node) = init_node("DECLARATION_LIST_OPT","",(yyvsp[0].node)); }
#line 3259 "y.tab.c"
    break;

  case 187: /* DECLARATION_LIST_OPT: %empty  */
#line 724 "tinyc_yacc.y"
                                                                        { (yyval.node) = init_node("DECLARATION_LIST_OPT","",NULL); }
#line 3265 "y.tab.c"
    break;


#line 3269 "y.tab.c"

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

#line 726 "tinyc_yacc.y"


void yyerror(char * s) {
    printf("\nError: %s\n", s);
    exit(0);
    return;
}
