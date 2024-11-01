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
    RESTRICT = 261,                /* RESTRICT  */
    UNSIGNED = 262,                /* UNSIGNED  */
    BREAK = 263,                   /* BREAK  */
    EXTERN = 264,                  /* EXTERN  */
    RETURN = 265,                  /* RETURN  */
    VOID = 266,                    /* VOID  */
    CASE = 267,                    /* CASE  */
    FLOAT = 268,                   /* FLOAT  */
    SHORT = 269,                   /* SHORT  */
    VOLATILE = 270,                /* VOLATILE  */
    CHAR = 271,                    /* CHAR  */
    FOR = 272,                     /* FOR  */
    SIGNED = 273,                  /* SIGNED  */
    WHILE = 274,                   /* WHILE  */
    CONST = 275,                   /* CONST  */
    GOTO = 276,                    /* GOTO  */
    SIZEOF = 277,                  /* SIZEOF  */
    BOOL = 278,                    /* BOOL  */
    CONTINUE = 279,                /* CONTINUE  */
    IF = 280,                      /* IF  */
    STATIC = 281,                  /* STATIC  */
    COMPLEX = 282,                 /* COMPLEX  */
    DEFAULT = 283,                 /* DEFAULT  */
    INLINE = 284,                  /* INLINE  */
    IMAGINARY = 285,               /* IMAGINARY  */
    DO = 286,                      /* DO  */
    INT = 287,                     /* INT  */
    SWITCH = 288,                  /* SWITCH  */
    DOUBLE = 289,                  /* DOUBLE  */
    LONG = 290,                    /* LONG  */
    REGISTER = 291,                /* REGISTER  */
    IDENTIFIER = 292,              /* IDENTIFIER  */
    STRING_LITERAL = 293,          /* STRING_LITERAL  */
    CONSTANT = 294,                /* CONSTANT  */
    LESS_THAN = 295,               /* LESS_THAN  */
    LESS_THAN_EQUAL_TO = 296,      /* LESS_THAN_EQUAL_TO  */
    GREATER_THAN = 297,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL_TO = 298,   /* GREATER_THAN_EQUAL_TO  */
    LEFT_SQUARE_BRACKET = 299,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 300,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARANTHESIS = 301,        /* LEFT_PARANTHESIS  */
    LEFT_CURLY_BRACKET = 302,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 303,     /* RIGHT_CURLY_BRACKET  */
    DOT = 304,                     /* DOT  */
    POINTER_ACCESS = 305,          /* POINTER_ACCESS  */
    INCREMENT_OPERATOR = 306,      /* INCREMENT_OPERATOR  */
    DECREMENT_OPERATOR = 307,      /* DECREMENT_OPERATOR  */
    DIVIDE_OPERATOR = 308,         /* DIVIDE_OPERATOR  */
    REMAINDER_OPERATOR = 309,      /* REMAINDER_OPERATOR  */
    SHIFT_LEFT_OPERATOR = 310,     /* SHIFT_LEFT_OPERATOR  */
    SHIFT_RIGHT_OPERATOR = 311,    /* SHIFT_RIGHT_OPERATOR  */
    EQUALITY_OPERATOR = 312,       /* EQUALITY_OPERATOR  */
    NON_EQUALITY_OPERATOR = 313,   /* NON_EQUALITY_OPERATOR  */
    XOR_OPERATOR = 314,            /* XOR_OPERATOR  */
    BITWISE_OR_OPERATOR = 315,     /* BITWISE_OR_OPERATOR  */
    BITWISE_AND_OPERATOR = 316,    /* BITWISE_AND_OPERATOR  */
    LOGICAL_AND_OPERATOR = 317,    /* LOGICAL_AND_OPERATOR  */
    LOGICAL_OR_OPERATOR = 318,     /* LOGICAL_OR_OPERATOR  */
    TERNARY_OPERATOR = 319,        /* TERNARY_OPERATOR  */
    TERNARY_SEPERATOR = 320,       /* TERNARY_SEPERATOR  */
    SEMI_COLON = 321,              /* SEMI_COLON  */
    COMMA = 322,                   /* COMMA  */
    TRIPLE_DOT = 323,              /* TRIPLE_DOT  */
    ADDITION_OPERATOR = 324,       /* ADDITION_OPERATOR  */
    MULTIPLICATION_OPERATOR = 325, /* MULTIPLICATION_OPERATOR  */
    SUBTRACTION_OPERATOR = 326,    /* SUBTRACTION_OPERATOR  */
    NOT_OPERATOR = 327,            /* NOT_OPERATOR  */
    NEGATION_OPERATOR = 328,       /* NEGATION_OPERATOR  */
    EQUAL_OPERATOR = 329,          /* EQUAL_OPERATOR  */
    ASSIGNMENT_OPERATORS = 330,    /* ASSIGNMENT_OPERATORS  */
    ENUM = 331,                    /* ENUM  */
    STRUCT = 332,                  /* STRUCT  */
    TYPEDEF = 333,                 /* TYPEDEF  */
    UNION = 334,                   /* UNION  */
    ESCAPE_OPERATOR = 335,         /* ESCAPE_OPERATOR  */
    MACRO_OPERATOR = 336           /* MACRO_OPERATOR  */
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
#define RESTRICT 261
#define UNSIGNED 262
#define BREAK 263
#define EXTERN 264
#define RETURN 265
#define VOID 266
#define CASE 267
#define FLOAT 268
#define SHORT 269
#define VOLATILE 270
#define CHAR 271
#define FOR 272
#define SIGNED 273
#define WHILE 274
#define CONST 275
#define GOTO 276
#define SIZEOF 277
#define BOOL 278
#define CONTINUE 279
#define IF 280
#define STATIC 281
#define COMPLEX 282
#define DEFAULT 283
#define INLINE 284
#define IMAGINARY 285
#define DO 286
#define INT 287
#define SWITCH 288
#define DOUBLE 289
#define LONG 290
#define REGISTER 291
#define IDENTIFIER 292
#define STRING_LITERAL 293
#define CONSTANT 294
#define LESS_THAN 295
#define LESS_THAN_EQUAL_TO 296
#define GREATER_THAN 297
#define GREATER_THAN_EQUAL_TO 298
#define LEFT_SQUARE_BRACKET 299
#define RIGHT_SQUARE_BRACKET 300
#define LEFT_PARANTHESIS 301
#define LEFT_CURLY_BRACKET 302
#define RIGHT_CURLY_BRACKET 303
#define DOT 304
#define POINTER_ACCESS 305
#define INCREMENT_OPERATOR 306
#define DECREMENT_OPERATOR 307
#define DIVIDE_OPERATOR 308
#define REMAINDER_OPERATOR 309
#define SHIFT_LEFT_OPERATOR 310
#define SHIFT_RIGHT_OPERATOR 311
#define EQUALITY_OPERATOR 312
#define NON_EQUALITY_OPERATOR 313
#define XOR_OPERATOR 314
#define BITWISE_OR_OPERATOR 315
#define BITWISE_AND_OPERATOR 316
#define LOGICAL_AND_OPERATOR 317
#define LOGICAL_OR_OPERATOR 318
#define TERNARY_OPERATOR 319
#define TERNARY_SEPERATOR 320
#define SEMI_COLON 321
#define COMMA 322
#define TRIPLE_DOT 323
#define ADDITION_OPERATOR 324
#define MULTIPLICATION_OPERATOR 325
#define SUBTRACTION_OPERATOR 326
#define NOT_OPERATOR 327
#define NEGATION_OPERATOR 328
#define EQUAL_OPERATOR 329
#define ASSIGNMENT_OPERATORS 330
#define ENUM 331
#define STRUCT 332
#define TYPEDEF 333
#define UNION 334
#define ESCAPE_OPERATOR 335
#define MACRO_OPERATOR 336

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "tinyC2_22CS10058_22CS10063.y"
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
