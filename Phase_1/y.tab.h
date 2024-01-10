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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    UNION = 268,                   /* UNION  */
    ENUM = 269,                    /* ENUM  */
    RETURN = 270,                  /* RETURN  */
    MAIN = 271,                    /* MAIN  */
    VOID = 272,                    /* VOID  */
    SWITCH = 273,                  /* SWITCH  */
    CASE = 274,                    /* CASE  */
    DEFAULT = 275,                 /* DEFAULT  */
    WHILE = 276,                   /* WHILE  */
    FOR = 277,                     /* FOR  */
    DO = 278,                      /* DO  */
    PRINTF = 279,                  /* PRINTF  */
    SCANF = 280,                   /* SCANF  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    ENDIF = 283,                   /* ENDIF  */
    INTs = 284,                    /* INTs  */
    FLOATs = 285,                  /* FLOATs  */
    CHARs = 286,                   /* CHARs  */
    DOUBLEs = 287,                 /* DOUBLEs  */
    identifier = 288,              /* identifier  */
    integer_constant = 289,        /* integer_constant  */
    string_constant = 290,         /* string_constant  */
    float_constant = 291,          /* float_constant  */
    character_constant = 292,      /* character_constant  */
    ELSE = 293,                    /* ELSE  */
    leftshift_assignment_operator = 294, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 295, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 296, /* XOR_assignment_operator  */
    OR_assignment_operator = 297,  /* OR_assignment_operator  */
    AND_assignment_operator = 298, /* AND_assignment_operator  */
    modulo_assignment_operator = 299, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 300, /* multiplication_assignment_operator  */
    division_assignment_operator = 301, /* division_assignment_operator  */
    addition_assignment_operator = 302, /* addition_assignment_operator  */
    subtraction_assignment_operator = 303, /* subtraction_assignment_operator  */
    assignment_operator = 304,     /* assignment_operator  */
    OR_operator = 305,             /* OR_operator  */
    AND_operator = 306,            /* AND_operator  */
    pipe_operator = 307,           /* pipe_operator  */
    caret_operator = 308,          /* caret_operator  */
    amp_operator = 309,            /* amp_operator  */
    equality_operator = 310,       /* equality_operator  */
    inequality_operator = 311,     /* inequality_operator  */
    lessthan_assignment_operator = 312, /* lessthan_assignment_operator  */
    lessthan_operator = 313,       /* lessthan_operator  */
    greaterthan_assignment_operator = 314, /* greaterthan_assignment_operator  */
    greaterthan_operator = 315,    /* greaterthan_operator  */
    leftshift_operator = 316,      /* leftshift_operator  */
    rightshift_operator = 317,     /* rightshift_operator  */
    add_operator = 318,            /* add_operator  */
    subtract_operator = 319,       /* subtract_operator  */
    multiplication_operator = 320, /* multiplication_operator  */
    division_operator = 321,       /* division_operator  */
    modulo_operator = 322,         /* modulo_operator  */
    SIZEOF = 323,                  /* SIZEOF  */
    tilde_operator = 324,          /* tilde_operator  */
    exclamation_operator = 325,    /* exclamation_operator  */
    increment_operator = 326,      /* increment_operator  */
    decrement_operator = 327       /* decrement_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define UNION 268
#define ENUM 269
#define RETURN 270
#define MAIN 271
#define VOID 272
#define SWITCH 273
#define CASE 274
#define DEFAULT 275
#define WHILE 276
#define FOR 277
#define DO 278
#define PRINTF 279
#define SCANF 280
#define BREAK 281
#define CONTINUE 282
#define ENDIF 283
#define INTs 284
#define FLOATs 285
#define CHARs 286
#define DOUBLEs 287
#define identifier 288
#define integer_constant 289
#define string_constant 290
#define float_constant 291
#define character_constant 292
#define ELSE 293
#define leftshift_assignment_operator 294
#define rightshift_assignment_operator 295
#define XOR_assignment_operator 296
#define OR_assignment_operator 297
#define AND_assignment_operator 298
#define modulo_assignment_operator 299
#define multiplication_assignment_operator 300
#define division_assignment_operator 301
#define addition_assignment_operator 302
#define subtraction_assignment_operator 303
#define assignment_operator 304
#define OR_operator 305
#define AND_operator 306
#define pipe_operator 307
#define caret_operator 308
#define amp_operator 309
#define equality_operator 310
#define inequality_operator 311
#define lessthan_assignment_operator 312
#define lessthan_operator 313
#define greaterthan_assignment_operator 314
#define greaterthan_operator 315
#define leftshift_operator 316
#define rightshift_operator 317
#define add_operator 318
#define subtract_operator 319
#define multiplication_operator 320
#define division_operator 321
#define modulo_operator 322
#define SIZEOF 323
#define tilde_operator 324
#define exclamation_operator 325
#define increment_operator 326
#define decrement_operator 327

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
