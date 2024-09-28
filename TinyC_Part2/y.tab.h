/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 27 "tinyc_yacc.y"
char * val; tree_pointer node;

#line 232 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
