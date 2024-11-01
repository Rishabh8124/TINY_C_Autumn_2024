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

#line 237 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
