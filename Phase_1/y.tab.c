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
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_UNION = 13,                     /* UNION  */
  YYSYMBOL_ENUM = 14,                      /* ENUM  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_MAIN = 16,                      /* MAIN  */
  YYSYMBOL_VOID = 17,                      /* VOID  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_DEFAULT = 20,                   /* DEFAULT  */
  YYSYMBOL_WHILE = 21,                     /* WHILE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_PRINTF = 24,                    /* PRINTF  */
  YYSYMBOL_SCANF = 25,                     /* SCANF  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_ENDIF = 28,                     /* ENDIF  */
  YYSYMBOL_INTs = 29,                      /* INTs  */
  YYSYMBOL_FLOATs = 30,                    /* FLOATs  */
  YYSYMBOL_CHARs = 31,                     /* CHARs  */
  YYSYMBOL_DOUBLEs = 32,                   /* DOUBLEs  */
  YYSYMBOL_identifier = 33,                /* identifier  */
  YYSYMBOL_integer_constant = 34,          /* integer_constant  */
  YYSYMBOL_string_constant = 35,           /* string_constant  */
  YYSYMBOL_float_constant = 36,            /* float_constant  */
  YYSYMBOL_character_constant = 37,        /* character_constant  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 39, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 40, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 41,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 42,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 43,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 44, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 45, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 46, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 47, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 48, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 49,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 50,               /* OR_operator  */
  YYSYMBOL_AND_operator = 51,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 52,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 53,            /* caret_operator  */
  YYSYMBOL_amp_operator = 54,              /* amp_operator  */
  YYSYMBOL_equality_operator = 55,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 56,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 57, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 58,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 59, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 60,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 61,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 62,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 63,              /* add_operator  */
  YYSYMBOL_subtract_operator = 64,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 65,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 66,         /* division_operator  */
  YYSYMBOL_modulo_operator = 67,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 68,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 69,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 70,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 71,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 72,        /* decrement_operator  */
  YYSYMBOL_73_ = 73,                       /* ';'  */
  YYSYMBOL_74_ = 74,                       /* ','  */
  YYSYMBOL_75_ = 75,                       /* '['  */
  YYSYMBOL_76_ = 76,                       /* ']'  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* '('  */
  YYSYMBOL_80_ = 80,                       /* ')'  */
  YYSYMBOL_81_ = 81,                       /* '&'  */
  YYSYMBOL_82_ = 82,                       /* ':'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_program = 85,                   /* program  */
  YYSYMBOL_declaration_list = 86,          /* declaration_list  */
  YYSYMBOL_D = 87,                         /* D  */
  YYSYMBOL_declaration = 88,               /* declaration  */
  YYSYMBOL_variable_declaration = 89,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 90, /* variable_declaration_list  */
  YYSYMBOL_V = 91,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 92, /* variable_declaration_identifier  */
  YYSYMBOL_93_1 = 93,                      /* $@1  */
  YYSYMBOL_vdi = 94,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 95,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 96,      /* initilization_params  */
  YYSYMBOL_initilization = 97,             /* initilization  */
  YYSYMBOL_type_specifier = 98,            /* type_specifier  */
  YYSYMBOL_star_specifier = 99,            /* star_specifier  */
  YYSYMBOL_unsigned_grammar = 100,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 101,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 102,             /* long_grammar  */
  YYSYMBOL_short_grammar = 103,            /* short_grammar  */
  YYSYMBOL_structure_definition = 104,     /* structure_definition  */
  YYSYMBOL_105_2 = 105,                    /* $@2  */
  YYSYMBOL_union_definition = 106,         /* union_definition  */
  YYSYMBOL_107_3 = 107,                    /* $@3  */
  YYSYMBOL_enum_declaration = 108,         /* enum_declaration  */
  YYSYMBOL_enum_list = 109,                /* enum_list  */
  YYSYMBOL_enumerator = 110,               /* enumerator  */
  YYSYMBOL_V1 = 111,                       /* V1  */
  YYSYMBOL_structure_declaration = 112,    /* structure_declaration  */
  YYSYMBOL_union_declaration = 113,        /* union_declaration  */
  YYSYMBOL_function_declaration = 114,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 115, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 116, /* function_declaration_param_statement  */
  YYSYMBOL_params = 117,                   /* params  */
  YYSYMBOL_parameters_list = 118,          /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 119, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 120, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 121,         /* param_identifier  */
  YYSYMBOL_122_4 = 122,                    /* $@4  */
  YYSYMBOL_param_identifier_breakup = 123, /* param_identifier_breakup  */
  YYSYMBOL_statement = 124,                /* statement  */
  YYSYMBOL_compound_statement = 125,       /* compound_statement  */
  YYSYMBOL_statment_list = 126,            /* statment_list  */
  YYSYMBOL_printf_scanf_statements = 127,  /* printf_scanf_statements  */
  YYSYMBOL_printf_statement = 128,         /* printf_statement  */
  YYSYMBOL_scanf_statement = 129,          /* scanf_statement  */
  YYSYMBOL_printf_parameters = 130,        /* printf_parameters  */
  YYSYMBOL_scanf_parameters = 131,         /* scanf_parameters  */
  YYSYMBOL_expression_statment = 132,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 133,   /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 134, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 135,     /* iterative_statements  */
  YYSYMBOL_return_statement = 136,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 137, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 138,          /* break_statement  */
  YYSYMBOL_continue_statement = 139,       /* continue_statement  */
  YYSYMBOL_string_initilization = 140,     /* string_initilization  */
  YYSYMBOL_array_initialization = 141,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 142,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 143, /* array_int_declarations_breakup  */
  YYSYMBOL_switch_statement = 144,         /* switch_statement  */
  YYSYMBOL_switch_body = 145,              /* switch_body  */
  YYSYMBOL_case_list = 146,                /* case_list  */
  YYSYMBOL_case_clause = 147,              /* case_clause  */
  YYSYMBOL_default_case = 148,             /* default_case  */
  YYSYMBOL_expression = 149,               /* expression  */
  YYSYMBOL_expression_breakup = 150,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 151,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 152, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 153,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 154,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 155, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 156,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 157, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 158,     /* relational_operators  */
  YYSYMBOL_sum_expression = 159,           /* sum_expression  */
  YYSYMBOL_sum_operators = 160,            /* sum_operators  */
  YYSYMBOL_term = 161,                     /* term  */
  YYSYMBOL_MULOP = 162,                    /* MULOP  */
  YYSYMBOL_factor = 163,                   /* factor  */
  YYSYMBOL_mutable = 164,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 165,          /* mutable_breakup  */
  YYSYMBOL_immutable = 166,                /* immutable  */
  YYSYMBOL_call = 167,                     /* call  */
  YYSYMBOL_arguments = 168,                /* arguments  */
  YYSYMBOL_arguments_list = 169,           /* arguments_list  */
  YYSYMBOL_A = 170,                        /* A  */
  YYSYMBOL_constant = 171                  /* constant  */
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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  330

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
       2,     2,     2,     2,     2,     2,     2,     2,    81,     2,
      79,    80,     2,     2,    74,     2,    83,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    73,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,    78,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    70,    73,    74,    77,    78,    79,    80,
      81,    85,    86,    87,    90,    93,    94,    97,    97,    99,
      99,   102,   103,   106,   107,   110,   111,   112,   115,   115,
     115,   115,   115,   116,   117,   118,   119,   120,   123,   123,
     123,   123,   126,   126,   126,   126,   129,   129,   129,   129,
     132,   132,   135,   135,   138,   138,   141,   141,   144,   148,
     149,   152,   153,   156,   156,   159,   162,   166,   169,   172,
     175,   175,   178,   181,   184,   185,   188,   188,   191,   192,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   200,
     203,   206,   207,   210,   211,   215,   218,   221,   222,   225,
     226,   229,   230,   233,   236,   237,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     256,   259,   260,   263,   266,   269,   272,   275,   278,   279,
     282,   285,   286,   287,   290,   291,   294,   295,   296,   299,
     300,   304,   305,   308,   309,   310,   311,   312,   313,   314,
     315,   318,   321,   321,   324,   327,   328,   331,   332,   335,
     338,   339,   342,   342,   342,   343,   343,   343,   346,   347,
     350,   351,   354,   355,   358,   358,   358,   361,   361,   364,
     365,   368,   369,   372,   373,   373,   376,   379,   379,   382,
     385,   386,   389,   390,   391,   392
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "UNION", "ENUM", "RETURN", "MAIN", "VOID", "SWITCH", "CASE", "DEFAULT",
  "WHILE", "FOR", "DO", "PRINTF", "SCANF", "BREAK", "CONTINUE", "ENDIF",
  "INTs", "FLOATs", "CHARs", "DOUBLEs", "identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "leftshift_assignment_operator", "rightshift_assignment_operator",
  "XOR_assignment_operator", "OR_assignment_operator",
  "AND_assignment_operator", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "SIZEOF", "tilde_operator",
  "exclamation_operator", "increment_operator", "decrement_operator",
  "';'", "','", "'['", "']'", "'{'", "'}'", "'('", "')'", "'&'", "':'",
  "'.'", "$accept", "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list", "V",
  "variable_declaration_identifier", "$@1", "vdi", "identifier_array_type",
  "initilization_params", "initilization", "type_specifier",
  "star_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "structure_definition", "$@2", "union_definition",
  "$@3", "enum_declaration", "enum_list", "enumerator", "V1",
  "structure_declaration", "union_declaration", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@4",
  "param_identifier_breakup", "statement", "compound_statement",
  "statment_list", "printf_scanf_statements", "printf_statement",
  "scanf_statement", "printf_parameters", "scanf_parameters",
  "expression_statment", "conditional_statements",
  "conditional_statements_breakup", "iterative_statements",
  "return_statement", "return_statement_breakup", "break_statement",
  "continue_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup",
  "switch_statement", "switch_body", "case_list", "case_clause",
  "default_case", "expression", "expression_breakup", "simple_expression",
  "simple_expression_breakup", "and_expression", "and_expression_breakup",
  "unary_relation_expression", "regular_expression",
  "regular_expression_breakup", "relational_operators", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "mutable_breakup",
  "immutable", "call", "arguments", "arguments_list", "A", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-272)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     312,  -272,  -272,  -272,  -272,    23,    25,    79,    97,    29,
      30,    45,  -272,  -272,  -272,  -272,  -272,    81,  -272,   312,
    -272,    57,  -272,  -272,  -272,  -272,  -272,  -272,  -272,   370,
    -272,  -272,  -272,  -272,  -272,    23,    25,  -272,  -272,    23,
      25,  -272,    59,    59,    18,  -272,  -272,  -272,    28,    35,
      43,    69,  -272,    48,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,    58,  -272,    76,   132,  -272,   -37,  -272,    59,  -272,
    -272,  -272,    95,   199,   354,   354,   117,   -55,  -272,   278,
     -12,  -272,  -272,  -272,    96,   370,  -272,    91,   139,   142,
     214,   101,   106,   113,   199,   114,   118,   103,   116,   120,
    -272,  -272,  -272,  -272,   278,  -272,   199,   278,  -272,    59,
    -272,  -272,  -272,   123,   127,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,   128,  -272,   141,   164,  -272,   275,    84,  -272,
     115,  -272,  -272,  -272,   354,   149,   160,   206,   132,   179,
    -272,   177,   222,  -272,   194,  -272,  -272,   278,    59,    59,
    -272,  -272,   200,   278,   278,    36,   253,   240,   242,  -272,
    -272,   278,  -272,   -57,   199,   202,   201,  -272,  -272,  -272,
     278,  -272,   278,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   -27,   -27,  -272,  -272,  -272,   -27,   278,
     278,   278,   278,   278,   278,  -272,  -272,   278,   249,  -272,
    -272,  -272,   210,   212,  -272,  -272,  -272,   237,   255,  -272,
    -272,   215,  -272,   217,   218,   221,   219,    59,   223,   229,
     227,   232,   228,   235,   247,  -272,  -272,  -272,  -272,   141,
     164,   -47,    84,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
     252,  -272,  -272,  -272,    14,  -272,  -272,  -272,  -272,   199,
     259,   199,     0,   264,   226,   267,   278,   278,  -272,   265,
    -272,   278,  -272,  -272,  -272,  -272,  -272,   311,   309,   110,
    -272,  -272,   269,    24,    63,   277,   231,   271,  -272,   319,
     235,   279,   276,   199,  -272,  -272,   273,   290,   110,  -272,
    -272,   274,  -272,  -272,   289,  -272,   292,    88,   104,   297,
     300,  -272,  -272,   311,  -272,  -272,  -272,   199,  -272,  -272,
    -272,   199,  -272,  -272,  -272,   302,  -272,   308,   209,  -272,
    -272,   363,   363,  -272,  -272,  -272,   310,  -272,  -272,  -272
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    28,    29,    30,    31,    51,    53,    49,    45,     0,
       0,     0,    37,    38,    40,    39,    41,     0,     2,     5,
       6,     0,    32,     8,     9,    10,    12,    13,     7,    71,
      50,    33,    52,    34,    46,    51,    53,    36,    42,    51,
      53,    35,    54,    56,     0,     1,     4,     3,    17,     0,
      16,     0,    67,     0,    70,    47,    48,    43,    44,    17,
      65,     0,    66,     0,     0,    68,    22,    11,     0,    14,
      76,    72,    75,     0,    64,    64,    61,     0,    59,     0,
       0,    18,    19,    15,    79,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
     192,   193,   194,   195,     0,   102,    92,     0,    89,     0,
      69,    81,    88,     0,     0,    80,    82,    83,    84,    85,
      86,    87,     0,   142,   153,   156,   158,   161,   169,   173,
     178,   177,   184,   185,    64,     0,     0,     0,     0,     0,
      20,     0,     0,    21,     0,    77,    74,     0,     0,     0,
     121,   120,     0,     0,     0,     0,     0,     0,     0,   123,
     124,   188,   157,   178,    92,     0,     0,    93,    94,   101,
       0,   151,     0,   154,   166,   167,   163,   165,   162,   164,
     170,   171,   159,     0,     0,   174,   175,   176,     0,     0,
       0,     0,     0,     0,     0,   149,   150,     0,     0,   141,
     180,    63,     0,     0,    62,    60,    58,    27,     0,    24,
      78,     0,   122,     0,     0,     0,     0,     0,     0,    98,
       0,   100,     0,   191,     0,   187,    91,    90,   183,   153,
     156,   160,   168,   172,   148,   146,   147,   144,   145,   143,
       0,   182,    55,    57,     0,    23,    25,    26,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
      96,     0,   189,   186,   152,   155,   181,     0,   105,     0,
     106,   118,     0,     0,     0,     0,     0,     0,    97,     0,
     191,   129,     0,     0,   103,   136,     0,     0,   132,   134,
     133,     0,   113,   115,     0,   112,     0,     0,     0,     0,
       0,    99,   190,     0,   127,   126,   104,     0,   130,   135,
     131,     0,   114,   109,   116,     0,   111,     0,     0,   119,
     128,   139,   137,   107,   110,   117,     0,   140,   138,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,   372,  -272,  -272,     2,   -29,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,     1,  -272,  -272,  -272,    92,   112,
    -272,  -272,  -272,  -272,  -272,  -272,   254,   -60,  -272,  -272,
    -272,  -272,  -272,  -272,   313,  -272,  -272,  -272,  -272,  -272,
     -70,  -272,   230,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -271,  -272,   186,  -272,    93,  -272,
    -272,  -272,  -272,   107,   109,   -79,  -272,  -122,   174,   234,
     175,  -100,  -272,  -272,  -272,   224,  -272,   225,  -272,   220,
     -99,  -272,  -272,  -272,  -272,  -272,   126,  -213
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    17,    18,    47,    19,   108,    49,    69,    50,    66,
      81,    82,   143,   245,   109,    22,    41,    37,    31,    33,
      23,    61,    24,    63,    25,    77,    78,   135,    26,    27,
      28,    29,    52,    53,    54,    71,    86,    72,    84,   145,
     164,   111,   165,   112,   113,   114,   220,   222,   115,   116,
     284,   117,   118,   151,   119,   120,   209,   247,   282,   304,
     121,   287,   288,   289,   290,   122,   199,   123,   171,   124,
     173,   125,   126,   182,   183,   127,   184,   128,   188,   129,
     130,   200,   131,   132,   224,   225,   262,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     140,    21,    20,   110,   162,   163,    99,   100,   101,   102,
     103,   152,    79,    60,    62,   136,   180,   181,   197,   138,
      21,    20,   141,   139,   156,   211,   198,    30,   166,    32,
      51,   213,   214,    99,   100,   101,   102,   103,    80,    83,
       1,     2,     3,     4,     5,     6,     7,     8,   163,   248,
     327,   328,   107,    12,   163,   163,   291,    99,   100,   101,
     102,   103,    42,    43,   142,    13,    14,    15,    16,    59,
     104,   163,   230,   163,   201,   291,   134,   134,    44,   107,
     271,    45,   223,    34,   163,   163,    51,    35,    36,   163,
      48,   267,    59,   253,   104,    64,    99,   100,   101,   102,
     103,    38,    70,   107,   293,    39,    40,    65,    67,   215,
     234,   235,   236,   237,   238,   239,   163,    68,   240,    60,
      62,    99,   100,   101,   102,   103,   216,    55,    73,   285,
     286,    57,   275,   104,   277,    74,   134,    99,   100,   101,
     102,   103,   107,   295,   100,   101,   102,   103,    56,   185,
     186,   187,    58,    75,   299,   163,   217,   163,   104,   189,
     190,   191,   192,   193,   194,    76,   137,   107,   314,    85,
     147,   144,   148,   272,   104,   149,   159,   163,   278,   268,
     153,   270,   280,   107,   316,   154,   195,   196,   255,   160,
     197,   170,   155,   157,   294,   296,   167,   158,   198,   161,
     168,   169,    87,     1,     2,     3,     4,     5,     6,     7,
       8,    88,    89,   306,    90,   172,    12,    91,   315,   317,
      92,    93,    94,    95,    96,    97,    98,   202,    13,    14,
      15,    16,    99,   100,   101,   102,   103,   321,   203,   326,
     204,   322,    99,   100,   101,   102,   103,    99,   100,   101,
     102,   103,   206,   207,    99,   100,   101,   102,   103,    99,
     100,   101,   102,   103,    99,   100,   101,   102,   103,   104,
     210,   208,   105,   212,   218,   219,   106,   221,   107,   104,
     227,   228,   241,   242,   104,   243,   244,   150,   107,   325,
     248,   104,   254,   107,   252,   249,   104,   250,   251,   274,
     107,   104,   256,   257,   298,   107,   259,   258,   260,   261,
     107,    99,   100,   101,   102,   103,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   263,   266,    12,
     174,   175,   176,   177,   178,   179,   269,   273,   180,   181,
     276,    13,    14,    15,    16,   281,   279,   283,   104,   292,
     297,   300,   301,   303,   305,   307,   311,   107,     1,     2,
       3,     4,     5,     6,     7,     8,    88,    89,   308,   312,
     318,    12,   313,   319,     1,     2,     3,     4,     5,     6,
       7,     8,   323,    13,    14,    15,    16,    12,   324,    97,
     329,    46,   205,   246,   226,   309,   320,   310,   146,    13,
      14,    15,    16,   264,   229,   265,   302,   231,   233,   232
};

static const yytype_int16 yycheck[] =
{
      79,     0,     0,    73,   104,   104,    33,    34,    35,    36,
      37,    90,    49,    42,    43,    75,    63,    64,    75,    74,
      19,    19,    34,    78,    94,   147,    83,     4,   107,     4,
      29,   153,   154,    33,    34,    35,    36,    37,    75,    68,
       4,     5,     6,     7,     8,     9,    10,    11,   147,    35,
     321,   322,    79,    17,   153,   154,   269,    33,    34,    35,
      36,    37,    33,    33,    76,    29,    30,    31,    32,    33,
      70,   170,   172,   172,   134,   288,    74,    75,    33,    79,
      80,     0,   161,     4,   183,   184,    85,     8,     9,   188,
      33,    77,    33,   215,    70,    77,    33,    34,    35,    36,
      37,     4,    33,    79,    80,     8,     9,    79,    73,    73,
     189,   190,   191,   192,   193,   194,   215,    74,   197,   148,
     149,    33,    34,    35,    36,    37,   155,    35,    80,    19,
      20,    39,   254,    70,   256,    77,   134,    33,    34,    35,
      36,    37,    79,    80,    34,    35,    36,    37,    36,    65,
      66,    67,    40,    77,   276,   254,   155,   256,    70,    44,
      45,    46,    47,    48,    49,    33,    49,    79,    80,    74,
      79,    75,    33,   252,    70,    33,    73,   276,   257,   249,
      79,   251,   261,    79,    80,    79,    71,    72,   217,    73,
      75,    50,    79,    79,   273,   274,    73,    79,    83,    79,
      73,    73,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   283,    15,    51,    17,    18,   297,   298,
      21,    22,    23,    24,    25,    26,    27,    78,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   307,    78,   318,
      34,   311,    33,    34,    35,    36,    37,    33,    34,    35,
      36,    37,    73,    76,    33,    34,    35,    36,    37,    33,
      34,    35,    36,    37,    33,    34,    35,    36,    37,    70,
      76,    49,    73,    73,    21,    35,    77,    35,    79,    70,
      78,    80,    33,    73,    70,    73,    49,    73,    79,    80,
      35,    70,    73,    79,    73,    80,    70,    80,    80,    73,
      79,    70,    79,    74,    73,    79,    74,    80,    80,    74,
      79,    33,    34,    35,    36,    37,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    80,    76,    17,
      55,    56,    57,    58,    59,    60,    77,    73,    63,    64,
      73,    29,    30,    31,    32,    34,    81,    38,    70,    80,
      73,    80,    33,    74,    78,    82,    82,    79,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    78,    80,
      73,    17,    80,    73,     4,     5,     6,     7,     8,     9,
      10,    11,    80,    29,    30,    31,    32,    17,    80,    26,
      80,    19,   138,   207,   164,   288,   303,   288,    85,    29,
      30,    31,    32,   229,   170,   230,   280,   183,   188,   184
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    17,    29,    30,    31,    32,    85,    86,    88,
      89,    98,    99,   104,   106,   108,   112,   113,   114,   115,
       4,   102,     4,   103,     4,     8,     9,   101,     4,     8,
       9,   100,    33,    33,    33,     0,    86,    87,    33,    90,
      92,    98,   116,   117,   118,   102,   103,   102,   103,    33,
      90,   105,    90,   107,    77,    79,    93,    73,    74,    91,
      33,   119,   121,    80,    77,    77,    33,   109,   110,    49,
      75,    94,    95,    90,   122,    74,   120,     3,    12,    13,
      15,    18,    21,    22,    23,    24,    25,    26,    27,    33,
      34,    35,    36,    37,    70,    73,    77,    79,    89,    98,
     124,   125,   127,   128,   129,   132,   133,   135,   136,   138,
     139,   144,   149,   151,   153,   155,   156,   159,   161,   163,
     164,   166,   167,   171,    89,   111,   111,    49,    74,    78,
     149,    34,    76,    96,    75,   123,   118,    79,    33,    33,
      73,   137,   149,    79,    79,    79,   124,    79,    79,    73,
      73,    79,   155,   164,   124,   126,   149,    73,    73,    73,
      50,   152,    51,   154,    55,    56,    57,    58,    59,    60,
      63,    64,   157,   158,   160,    65,    66,    67,   162,    44,
      45,    46,    47,    48,    49,    71,    72,    75,    83,   150,
     165,   111,    78,    78,    34,   110,    73,    76,    49,   140,
      76,   151,    73,   151,   151,    73,    90,    98,    21,    35,
     130,    35,   131,   149,   168,   169,   126,    78,    80,   153,
     155,   159,   161,   163,   149,   149,   149,   149,   149,   149,
     149,    33,    73,    73,    49,    97,   140,   141,    35,    80,
      80,    80,    73,   151,    73,    90,    79,    74,    80,    74,
      80,    74,   170,    80,   152,   154,    76,    77,   124,    77,
     124,    80,   149,    73,    73,   151,    73,   151,   149,    81,
     149,    34,   142,    38,   134,    19,    20,   145,   146,   147,
     148,   171,    80,    80,   149,    80,   149,    73,    73,   151,
      80,    33,   170,    74,   143,    78,   124,    82,    78,   147,
     148,    82,    80,    80,    80,   149,    80,   149,    73,    73,
     142,   124,   124,    80,    80,    80,   149,   138,   138,    80
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    90,    91,    91,    93,    92,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   103,   105,   104,   107,   106,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   114,   115,   116,
     117,   117,   118,   119,   120,   120,   122,   121,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     125,   126,   126,   127,   127,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   137,   137,   138,   139,   140,   141,   142,   143,   143,
     144,   145,   145,   145,   146,   146,   147,   147,   147,   148,
     148,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   152,   152,   153,   154,   154,   155,   155,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   166,   167,   168,   168,   169,
     170,   170,   171,   171,   171,   171
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     0,     0,     3,     1,
       2,     2,     0,     3,     2,     1,     1,     0,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     1,     2,     2,     0,
       1,     0,     1,     0,     0,     7,     0,     7,     6,     1,
       3,     1,     3,     2,     0,     3,     3,     2,     3,     3,
       1,     0,     2,     2,     2,     0,     0,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     0,     2,     2,     4,     4,     3,     1,     4,
       1,     2,     1,     6,     2,     0,     5,     8,     9,     7,
       8,     7,     6,     6,     7,     6,     7,     8,     5,     7,
       2,     1,     2,     2,     2,     2,     4,     2,     2,     0,
       7,     2,     1,     1,     1,     2,     1,     3,     4,     3,
       4,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     3,     0,     2,     3,     0,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     4,     1,     0,     2,
       3,     0,     1,     1,     1,     1
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
  case 17: /* $@1: %empty  */
#line 97 "parser.y"
                                     { ins(); }
#line 1721 "y.tab.c"
    break;

  case 54: /* $@2: %empty  */
#line 138 "parser.y"
                                            { ins(); }
#line 1727 "y.tab.c"
    break;

  case 56: /* $@3: %empty  */
#line 141 "parser.y"
                                           { ins(); }
#line 1733 "y.tab.c"
    break;

  case 68: /* function_declaration_type: type_specifier identifier '('  */
#line 169 "parser.y"
                                                         { ins();}
#line 1739 "y.tab.c"
    break;

  case 76: /* $@4: %empty  */
#line 188 "parser.y"
                                     { ins(); }
#line 1745 "y.tab.c"
    break;

  case 125: /* string_initilization: assignment_operator string_constant  */
#line 269 "parser.y"
                                                              { insV(); }
#line 1751 "y.tab.c"
    break;

  case 192: /* constant: integer_constant  */
#line 389 "parser.y"
                                                { insV(); }
#line 1757 "y.tab.c"
    break;

  case 193: /* constant: string_constant  */
#line 390 "parser.y"
                                                { insV(); }
#line 1763 "y.tab.c"
    break;

  case 194: /* constant: float_constant  */
#line 391 "parser.y"
                                                { insV(); }
#line 1769 "y.tab.c"
    break;

  case 195: /* constant: character_constant  */
#line 392 "parser.y"
                                            { insV(); }
#line 1775 "y.tab.c"
    break;


#line 1779 "y.tab.c"

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

#line 394 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
