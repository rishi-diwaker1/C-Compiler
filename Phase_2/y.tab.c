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
		int yydebug=1;
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

	

#line 95 "y.tab.c"

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
    FILE_ID = 288,                 /* FILE_ID  */
    identifier = 289,              /* identifier  */
    integer_constant = 290,        /* integer_constant  */
    string_constant = 291,         /* string_constant  */
    float_constant = 292,          /* float_constant  */
    character_constant = 293,      /* character_constant  */
    ELSE = 294,                    /* ELSE  */
    leftshift_assignment_operator = 295, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 296, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 297, /* XOR_assignment_operator  */
    OR_assignment_operator = 298,  /* OR_assignment_operator  */
    AND_assignment_operator = 299, /* AND_assignment_operator  */
    modulo_assignment_operator = 300, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 301, /* multiplication_assignment_operator  */
    division_assignment_operator = 302, /* division_assignment_operator  */
    addition_assignment_operator = 303, /* addition_assignment_operator  */
    subtraction_assignment_operator = 304, /* subtraction_assignment_operator  */
    assignment_operator = 305,     /* assignment_operator  */
    OR_operator = 306,             /* OR_operator  */
    AND_operator = 307,            /* AND_operator  */
    pipe_operator = 308,           /* pipe_operator  */
    caret_operator = 309,          /* caret_operator  */
    amp_operator = 310,            /* amp_operator  */
    equality_operator = 311,       /* equality_operator  */
    inequality_operator = 312,     /* inequality_operator  */
    lessthan_assignment_operator = 313, /* lessthan_assignment_operator  */
    lessthan_operator = 314,       /* lessthan_operator  */
    greaterthan_assignment_operator = 315, /* greaterthan_assignment_operator  */
    greaterthan_operator = 316,    /* greaterthan_operator  */
    leftshift_operator = 317,      /* leftshift_operator  */
    rightshift_operator = 318,     /* rightshift_operator  */
    add_operator = 319,            /* add_operator  */
    subtract_operator = 320,       /* subtract_operator  */
    multiplication_operator = 321, /* multiplication_operator  */
    division_operator = 322,       /* division_operator  */
    modulo_operator = 323,         /* modulo_operator  */
    SIZEOF = 324,                  /* SIZEOF  */
    tilde_operator = 325,          /* tilde_operator  */
    exclamation_operator = 326,    /* exclamation_operator  */
    increment_operator = 327,      /* increment_operator  */
    decrement_operator = 328       /* decrement_operator  */
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
#define FILE_ID 288
#define identifier 289
#define integer_constant 290
#define string_constant 291
#define float_constant 292
#define character_constant 293
#define ELSE 294
#define leftshift_assignment_operator 295
#define rightshift_assignment_operator 296
#define XOR_assignment_operator 297
#define OR_assignment_operator 298
#define AND_assignment_operator 299
#define modulo_assignment_operator 300
#define multiplication_assignment_operator 301
#define division_assignment_operator 302
#define addition_assignment_operator 303
#define subtraction_assignment_operator 304
#define assignment_operator 305
#define OR_operator 306
#define AND_operator 307
#define pipe_operator 308
#define caret_operator 309
#define amp_operator 310
#define equality_operator 311
#define inequality_operator 312
#define lessthan_assignment_operator 313
#define lessthan_operator 314
#define greaterthan_assignment_operator 315
#define greaterthan_operator 316
#define leftshift_operator 317
#define rightshift_operator 318
#define add_operator 319
#define subtract_operator 320
#define multiplication_operator 321
#define division_operator 322
#define modulo_operator 323
#define SIZEOF 324
#define tilde_operator 325
#define exclamation_operator 326
#define increment_operator 327
#define decrement_operator 328

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
  YYSYMBOL_FILE_ID = 33,                   /* FILE_ID  */
  YYSYMBOL_identifier = 34,                /* identifier  */
  YYSYMBOL_integer_constant = 35,          /* integer_constant  */
  YYSYMBOL_string_constant = 36,           /* string_constant  */
  YYSYMBOL_float_constant = 37,            /* float_constant  */
  YYSYMBOL_character_constant = 38,        /* character_constant  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 40, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 41, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 42,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 43,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 44,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 45, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 46, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 47, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 48, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 49, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 50,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 51,               /* OR_operator  */
  YYSYMBOL_AND_operator = 52,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 53,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 54,            /* caret_operator  */
  YYSYMBOL_amp_operator = 55,              /* amp_operator  */
  YYSYMBOL_equality_operator = 56,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 57,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 58, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 59,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 60, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 61,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 62,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 63,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 64,              /* add_operator  */
  YYSYMBOL_subtract_operator = 65,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 66,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 67,         /* division_operator  */
  YYSYMBOL_modulo_operator = 68,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 69,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 70,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 71,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 72,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 73,        /* decrement_operator  */
  YYSYMBOL_74_ = 74,                       /* ';'  */
  YYSYMBOL_75_ = 75,                       /* ','  */
  YYSYMBOL_76_ = 76,                       /* '['  */
  YYSYMBOL_77_ = 77,                       /* ']'  */
  YYSYMBOL_78_ = 78,                       /* '{'  */
  YYSYMBOL_79_ = 79,                       /* '}'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* '&'  */
  YYSYMBOL_83_ = 83,                       /* ':'  */
  YYSYMBOL_84_ = 84,                       /* '?'  */
  YYSYMBOL_85_ = 85,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_program = 87,                   /* program  */
  YYSYMBOL_declaration_list = 88,          /* declaration_list  */
  YYSYMBOL_D = 89,                         /* D  */
  YYSYMBOL_declaration = 90,               /* declaration  */
  YYSYMBOL_variable_declaration = 91,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 92, /* variable_declaration_list  */
  YYSYMBOL_V = 93,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 94, /* variable_declaration_identifier  */
  YYSYMBOL_95_1 = 95,                      /* $@1  */
  YYSYMBOL_vdi = 96,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 97,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 98,      /* initilization_params  */
  YYSYMBOL_initilization = 99,             /* initilization  */
  YYSYMBOL_type_specifier = 100,           /* type_specifier  */
  YYSYMBOL_star_specifier = 101,           /* star_specifier  */
  YYSYMBOL_unsigned_grammar = 102,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 103,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 104,             /* long_grammar  */
  YYSYMBOL_short_grammar = 105,            /* short_grammar  */
  YYSYMBOL_structure_definition = 106,     /* structure_definition  */
  YYSYMBOL_107_2 = 107,                    /* $@2  */
  YYSYMBOL_ID = 108,                       /* ID  */
  YYSYMBOL_union_definition = 109,         /* union_definition  */
  YYSYMBOL_110_3 = 110,                    /* $@3  */
  YYSYMBOL_enum_declaration = 111,         /* enum_declaration  */
  YYSYMBOL_enum_list = 112,                /* enum_list  */
  YYSYMBOL_enumerator = 113,               /* enumerator  */
  YYSYMBOL_V1 = 114,                       /* V1  */
  YYSYMBOL_structure_declaration = 115,    /* structure_declaration  */
  YYSYMBOL_union_declaration = 116,        /* union_declaration  */
  YYSYMBOL_function_declaration = 117,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 118, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 119, /* function_declaration_param_statement  */
  YYSYMBOL_params = 120,                   /* params  */
  YYSYMBOL_parameters_list = 121,          /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 122, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 123, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 124,         /* param_identifier  */
  YYSYMBOL_125_4 = 125,                    /* $@4  */
  YYSYMBOL_param_identifier_breakup = 126, /* param_identifier_breakup  */
  YYSYMBOL_statement = 127,                /* statement  */
  YYSYMBOL_compound_statement = 128,       /* compound_statement  */
  YYSYMBOL_statment_list = 129,            /* statment_list  */
  YYSYMBOL_printf_scanf_statements = 130,  /* printf_scanf_statements  */
  YYSYMBOL_printf_statement = 131,         /* printf_statement  */
  YYSYMBOL_scanf_statement = 132,          /* scanf_statement  */
  YYSYMBOL_printf_parameters = 133,        /* printf_parameters  */
  YYSYMBOL_other_printf_parameters = 134,  /* other_printf_parameters  */
  YYSYMBOL_scanf_parameters = 135,         /* scanf_parameters  */
  YYSYMBOL_expression_statment = 136,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 137,   /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 138, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 139,     /* iterative_statements  */
  YYSYMBOL_multi_expression = 140,         /* multi_expression  */
  YYSYMBOL_return_statement = 141,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 142, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 143,          /* break_statement  */
  YYSYMBOL_continue_statement = 144,       /* continue_statement  */
  YYSYMBOL_string_initilization = 145,     /* string_initilization  */
  YYSYMBOL_array_initialization = 146,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 147,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 148, /* array_int_declarations_breakup  */
  YYSYMBOL_switch_statement = 149,         /* switch_statement  */
  YYSYMBOL_switch_body = 150,              /* switch_body  */
  YYSYMBOL_case_list = 151,                /* case_list  */
  YYSYMBOL_case_clause = 152,              /* case_clause  */
  YYSYMBOL_default_case = 153,             /* default_case  */
  YYSYMBOL_expression = 154,               /* expression  */
  YYSYMBOL_ternary_expression = 155,       /* ternary_expression  */
  YYSYMBOL_expression_breakup = 156,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 157,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 158, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 159,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 160,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 161, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 162,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 163, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 164,     /* relational_operators  */
  YYSYMBOL_sum_expression = 165,           /* sum_expression  */
  YYSYMBOL_sum_operators = 166,            /* sum_operators  */
  YYSYMBOL_term = 167,                     /* term  */
  YYSYMBOL_MULOP = 168,                    /* MULOP  */
  YYSYMBOL_factor = 169,                   /* factor  */
  YYSYMBOL_mutable = 170,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 171,          /* mutable_breakup  */
  YYSYMBOL_immutable = 172,                /* immutable  */
  YYSYMBOL_call = 173,                     /* call  */
  YYSYMBOL_arguments = 174,                /* arguments  */
  YYSYMBOL_arguments_list = 175,           /* arguments_list  */
  YYSYMBOL_A = 176,                        /* A  */
  YYSYMBOL_constant = 177                  /* constant  */
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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   593

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  363

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
       2,     2,     2,     2,     2,     2,     2,     2,    82,     2,
      80,    81,     2,     2,    75,     2,    85,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    74,
       2,     2,     2,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,    79,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    73,    76,    77,    80,    81,    82,    83,
      84,    88,    89,    90,    93,    96,    97,   100,   100,   102,
     102,   105,   106,   109,   110,   111,   114,   115,   118,   118,
     118,   118,   118,   118,   119,   120,   121,   122,   123,   126,
     126,   126,   126,   129,   129,   129,   129,   132,   132,   132,
     132,   135,   135,   138,   138,   141,   141,   144,   144,   144,
     147,   147,   150,   154,   155,   158,   159,   162,   162,   165,
     168,   172,   175,   178,   181,   181,   184,   187,   190,   191,
     194,   194,   194,   197,   198,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   206,   210,   213,   214,   217,   218,
     222,   225,   228,   232,   233,   234,   237,   238,   241,   242,
     245,   248,   249,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   268,   269,   272,
     275,   276,   279,   282,   285,   288,   291,   294,   295,   298,
     301,   302,   303,   304,   307,   308,   311,   312,   313,   316,
     317,   321,   322,   323,   324,   325,   326,   329,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   344,   347,
     347,   350,   353,   354,   357,   358,   359,   362,   365,   366,
     369,   369,   369,   370,   370,   370,   373,   374,   377,   378,
     381,   382,   385,   385,   385,   385,   385,   388,   388,   391,
     392,   395,   396,   399,   400,   400,   403,   406,   406,   409,
     412,   413,   416,   417,   418,   419
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
  "INTs", "FLOATs", "CHARs", "DOUBLEs", "FILE_ID", "identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "leftshift_assignment_operator",
  "rightshift_assignment_operator", "XOR_assignment_operator",
  "OR_assignment_operator", "AND_assignment_operator",
  "modulo_assignment_operator", "multiplication_assignment_operator",
  "division_assignment_operator", "addition_assignment_operator",
  "subtraction_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "leftshift_operator", "rightshift_operator", "add_operator",
  "subtract_operator", "multiplication_operator", "division_operator",
  "modulo_operator", "SIZEOF", "tilde_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "'&'", "':'", "'?'", "'.'", "$accept",
  "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list", "V",
  "variable_declaration_identifier", "$@1", "vdi", "identifier_array_type",
  "initilization_params", "initilization", "type_specifier",
  "star_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "structure_definition", "$@2", "ID", "union_definition",
  "$@3", "enum_declaration", "enum_list", "enumerator", "V1",
  "structure_declaration", "union_declaration", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@4",
  "param_identifier_breakup", "statement", "compound_statement",
  "statment_list", "printf_scanf_statements", "printf_statement",
  "scanf_statement", "printf_parameters", "other_printf_parameters",
  "scanf_parameters", "expression_statment", "conditional_statements",
  "conditional_statements_breakup", "iterative_statements",
  "multi_expression", "return_statement", "return_statement_breakup",
  "break_statement", "continue_statement", "string_initilization",
  "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "switch_statement", "switch_body",
  "case_list", "case_clause", "default_case", "expression",
  "ternary_expression", "expression_breakup", "simple_expression",
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

#define YYPACT_NINF (-282)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-176)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     509,  -282,  -282,  -282,  -282,    28,    50,    89,   107,    32,
      55,    57,  -282,  -282,  -282,  -282,  -282,  -282,   131,  -282,
     509,  -282,    73,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
     560,  -282,  -282,  -282,  -282,  -282,    28,    50,  -282,  -282,
      28,    50,  -282,   102,   102,    79,  -282,  -282,  -282,    69,
      97,    88,   138,  -282,    92,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,    96,  -282,    98,   144,  -282,   -34,  -282,   102,
    -282,  -282,  -282,   104,   269,   543,   543,   133,   -19,  -282,
     373,   -15,  -282,  -282,  -282,   105,   560,  -282,   110,   158,
     160,   363,   116,   120,   121,   269,   125,   128,   135,   137,
     132,  -282,  -282,  -282,  -282,   124,   124,   124,   124,  -282,
     269,   373,  -282,   102,  -282,  -282,  -282,   139,   140,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,   -39,  -282,  -282,   165,
     166,  -282,   168,    71,  -282,   461,  -282,  -282,  -282,   543,
     155,   156,   182,   144,   162,   153,   161,   190,  -282,   164,
    -282,  -282,   124,   102,   102,  -282,  -282,   -31,   124,   373,
     136,   222,   208,   209,  -282,  -282,   373,   124,  -282,   194,
     -26,  -282,  -282,  -282,   269,   170,   -54,  -282,  -282,  -282,
     373,   124,  -282,   124,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,     2,     2,  -282,  -282,  -282,  -282,
    -282,     2,   373,   373,   373,   373,   373,   373,   373,   373,
    -282,  -282,   373,   216,  -282,  -282,  -282,   217,   178,  -282,
    -282,  -282,   -25,   218,  -282,  -282,   172,  -282,   174,    15,
     413,   183,   102,   176,   184,   177,   185,   180,   -20,   181,
    -282,  -282,  -282,  -282,  -282,   -35,   165,   166,    56,    71,
    -282,   153,   153,   153,   153,   153,   153,   153,   153,   -51,
    -282,   188,   191,  -282,   -13,  -282,  -282,  -282,  -282,  -282,
     269,   186,   269,   150,   193,   420,   195,   124,    37,  -282,
    -282,   201,  -282,   373,  -282,  -282,   373,  -282,  -282,  -282,
     217,  -282,   233,   246,    68,  -282,  -282,   207,    -7,   279,
     290,   215,   425,   227,   184,    -6,   263,   -20,   153,  -282,
     234,   231,   269,  -282,  -282,   228,   239,    68,  -282,  -282,
     229,  -282,   373,  -282,   238,  -282,   240,   301,   341,   248,
     249,  -282,  -282,  -282,  -282,   233,  -282,  -282,  -282,   269,
    -282,  -282,  -282,   269,  -282,  -282,  -282,  -282,   250,  -282,
     251,   352,  -282,  -282,   294,   294,  -282,  -282,  -282,   252,
    -282,  -282,  -282
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    28,    29,    30,    31,    52,    54,    50,    46,     0,
       0,     0,    38,    39,    41,    40,    42,    33,     0,     2,
       5,     6,     0,    32,     8,     9,    10,    12,    13,     7,
      75,    51,    34,    53,    35,    47,    52,    54,    37,    43,
      52,    54,    36,    55,    60,     0,     1,     4,     3,    17,
       0,    16,    82,    71,     0,    74,    48,    49,    44,    45,
      17,    69,     0,    70,     0,     0,    72,    22,    11,     0,
      14,    80,    76,    79,     0,    68,    68,    65,     0,    63,
       0,     0,    18,    19,    15,    84,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   212,   213,   214,   215,     0,     0,     0,     0,   109,
      97,     0,    94,     0,    73,    86,    93,     0,     0,    85,
      87,    88,    89,    90,    91,    92,     0,   153,   152,   170,
     173,   176,   179,   187,   191,   198,   197,   204,   205,    68,
       0,     0,     0,     0,     0,    20,     0,     0,    21,     0,
      81,    78,     0,     0,     0,   130,   129,     0,     0,     0,
       0,     0,     0,     0,   132,   133,   208,     0,   156,   173,
     198,   174,   154,   155,    97,     0,     0,    98,    99,   108,
       0,     0,   168,     0,   171,   184,   185,   181,   183,   180,
     182,   188,   189,   177,     0,     0,   196,   195,   192,   193,
     194,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,     0,     0,   151,   200,    67,    59,     0,    66,
      64,    62,    22,     0,    24,    83,     0,   131,     0,     0,
       0,     0,     0,     0,   105,     0,   107,     0,   211,     0,
     207,   175,    96,    95,   203,     0,   170,   173,   178,   186,
     190,   164,   165,   163,   161,   162,   159,   160,   158,     0,
     202,    58,     0,    61,     0,    25,    23,    26,    27,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     100,     0,   101,     0,   209,   206,     0,   169,   172,   201,
      59,    56,     0,   112,   143,   113,   125,     0,   128,     0,
       0,     0,     0,     0,   105,   105,     0,   211,   157,    57,
     138,     0,     0,   110,   146,     0,     0,   141,   144,   142,
       0,   120,     0,   122,     0,   119,     0,     0,     0,     0,
       0,   104,   103,   106,   210,     0,   136,   135,   111,     0,
     139,   145,   140,     0,   127,   121,   116,   123,     0,   118,
       0,     0,   126,   137,   149,   147,   114,   117,   124,     0,
     150,   148,   115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,  -282,   309,  -282,  -282,     9,   -41,  -282,  -282,  -282,
    -282,   108,  -282,  -282,     4,  -282,  -282,  -282,    78,   113,
    -282,  -282,    58,  -282,  -282,  -282,  -282,   202,   -59,  -282,
    -282,  -282,  -282,  -282,  -282,   260,  -282,  -282,  -282,  -282,
    -282,   -73,  -282,   179,  -282,    76,  -282,  -282,  -153,  -282,
    -282,  -282,  -282,  -282,  -281,  -282,  -282,  -199,  -282,   134,
    -282,    22,  -282,  -282,  -282,  -282,    41,    47,   -80,  -282,
    -282,   -95,   119,   187,   122,   -91,  -282,  -282,  -282,   173,
    -282,   189,  -282,   192,  -100,  -282,  -282,  -282,  -282,  -282,
      84,  -273
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    48,    20,   112,    50,    70,    51,    67,
      82,    83,   148,   266,   113,    23,    42,    38,    32,    34,
      24,    62,   262,    25,    64,    26,    78,    79,   140,    27,
      28,    29,    30,    53,    54,    55,    72,    87,    73,    85,
     150,   174,   115,   175,   116,   117,   118,   235,   279,   237,
     119,   120,   313,   121,   297,   122,   156,   123,   124,   224,
     268,   311,   336,   125,   316,   317,   318,   319,   126,   127,
     214,   128,   182,   129,   184,   130,   131,   193,   194,   132,
     195,   133,   201,   134,   135,   215,   136,   137,   239,   240,
     284,   138
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     145,   114,    61,    63,    22,   170,   170,   170,   170,    21,
     168,   157,   172,   173,   169,   171,    80,   141,   324,   326,
     146,   320,   161,   269,    22,   264,   289,   244,    84,    21,
     180,   176,    31,   180,    52,   179,   100,   101,   102,   103,
     104,   344,    81,   227,   320,   180,   348,   350,   286,   180,
     212,    81,   170,   180,    33,   283,   143,   226,   170,   213,
     144,    96,   147,   228,   180,   292,    43,   170,   322,   278,
     359,   100,   101,   102,   103,   104,   241,   180,   180,   229,
     216,   170,   111,   170,   139,   139,   238,   314,   315,    44,
      52,    45,   247,    35,   170,   170,   272,    36,    37,   180,
     245,   170,   105,   101,   102,   103,   104,    49,   106,   107,
     108,    39,    61,    63,    56,    40,    41,   111,    58,   231,
     191,   192,   251,   252,   253,   254,   255,   256,   257,   258,
     170,    46,   259,   196,   197,   274,    60,   198,   199,   200,
       1,     2,     3,     4,     5,     6,     7,     8,   139,    66,
      57,   331,   332,    12,    59,   360,   361,    65,   100,   101,
     102,   103,   104,    69,   232,    13,    14,    15,    16,    17,
      60,    68,    71,    74,    75,   170,    76,   170,    77,    86,
     301,   149,   303,   142,   100,   101,   102,   103,   104,   167,
     152,   276,   153,   298,   154,   106,   158,   293,   305,   295,
     159,   160,   170,   307,   111,   162,   308,   329,   163,   164,
     230,   165,   166,   177,   178,   105,   181,   219,   183,   298,
     298,   106,   107,   108,   185,   186,   187,   188,   189,   190,
     111,   296,   191,   192,   217,   218,   221,   180,   222,   338,
     223,   225,   298,   233,   234,   236,  -175,   298,   298,   243,
     260,   261,   263,   270,   269,   271,   277,   275,   280,   278,
     281,   282,   285,   290,   294,   291,   354,   299,   310,   302,
     355,   298,    88,     1,     2,     3,     4,     5,     6,     7,
       8,    89,    90,   306,    91,   312,    12,    92,   321,   327,
      93,    94,    95,    96,    97,    98,    99,   333,    13,    14,
      15,    16,    17,   100,   101,   102,   103,   104,   330,   335,
     337,   339,   343,   100,   101,   102,   103,   104,   340,   345,
      98,   346,   351,   352,   100,   101,   102,   103,   104,    47,
     265,   356,   357,   362,   105,   100,   101,   102,   103,   104,
     106,   107,   108,   109,   105,   220,   151,   110,   309,   111,
     106,   107,   108,   242,   304,   105,   267,   353,   341,   111,
     323,   106,   107,   108,   342,   287,   105,   248,   246,   288,
     111,   325,   106,   107,   108,   100,   101,   102,   103,   104,
       0,   111,   347,     0,   249,     0,   100,   101,   102,   103,
     104,   334,     0,   250,     0,     0,     0,   100,   101,   102,
     103,   104,     0,     0,     0,     0,   105,   100,   101,   102,
     103,   104,   106,   107,   108,     0,     0,   105,     0,     0,
       0,   111,   349,   106,   107,   108,     0,     0,   105,     0,
       0,     0,   111,   358,   106,   107,   108,   155,   105,     0,
       0,     0,     0,   111,   106,   107,   108,   100,   101,   102,
     103,   104,     0,   111,   100,   101,   102,   103,   104,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,   106,   167,     0,   273,     0,     0,
     167,   106,     0,   111,   300,     0,   106,     0,     0,   328,
     111,   202,   203,     0,     0,   111,   204,   205,   206,   207,
     208,   209,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,   210,   211,     0,     0,   212,    13,    14,
      15,    16,    17,     0,     0,     0,   213,     1,     2,     3,
       4,     5,     6,     7,     8,    89,    90,     0,     0,     0,
      12,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,    13,    14,    15,    16,    17,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,    17
};

static const yytype_int16 yycheck[] =
{
      80,    74,    43,    44,     0,   105,   106,   107,   108,     0,
     105,    91,   107,   108,   105,   106,    50,    76,   299,   300,
      35,   294,    95,    36,    20,    50,    77,    81,    69,    20,
      84,   111,     4,    84,    30,    74,    34,    35,    36,    37,
      38,   322,    76,    74,   317,    84,   327,   328,    83,    84,
      76,    76,   152,    84,     4,    75,    75,   152,   158,    85,
      79,    24,    77,   158,    84,    78,    34,   167,    75,    75,
     351,    34,    35,    36,    37,    38,   167,    84,    84,   159,
     139,   181,    80,   183,    75,    76,   166,    19,    20,    34,
      86,    34,   183,     4,   194,   195,    81,     8,     9,    84,
     180,   201,    65,    35,    36,    37,    38,    34,    71,    72,
      73,     4,   153,   154,    36,     8,     9,    80,    40,   160,
      64,    65,   202,   203,   204,   205,   206,   207,   208,   209,
     230,     0,   212,    62,    63,   230,    34,    66,    67,    68,
       4,     5,     6,     7,     8,     9,    10,    11,   139,    80,
      37,   304,   305,    17,    41,   354,   355,    78,    34,    35,
      36,    37,    38,    75,   160,    29,    30,    31,    32,    33,
      34,    74,    34,    81,    78,   275,    78,   277,    34,    75,
     275,    76,   277,    50,    34,    35,    36,    37,    38,    65,
      80,   232,    34,   273,    34,    71,    80,   270,   278,   272,
      80,    80,   302,   283,    80,    80,   286,   302,    80,    74,
      74,    74,    80,    74,    74,    65,    51,    35,    52,   299,
     300,    71,    72,    73,    56,    57,    58,    59,    60,    61,
      80,    81,    64,    65,    79,    79,    74,    84,    77,   312,
      50,    77,   322,    21,    36,    36,    52,   327,   328,    79,
      34,    34,    74,    81,    36,    81,    80,    74,    81,    75,
      75,    81,    81,    75,    78,    74,   339,    74,    35,    74,
     343,   351,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    82,    15,    39,    17,    18,    81,    74,
      21,    22,    23,    24,    25,    26,    27,    34,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    81,    75,
      79,    83,    83,    34,    35,    36,    37,    38,    79,    81,
      26,    81,    74,    74,    34,    35,    36,    37,    38,    20,
     222,    81,    81,    81,    65,    34,    35,    36,    37,    38,
      71,    72,    73,    74,    65,   143,    86,    78,   290,    80,
      71,    72,    73,   174,   278,    65,   222,   335,   317,    80,
      81,    71,    72,    73,   317,   246,    65,   194,   181,   247,
      80,    81,    71,    72,    73,    34,    35,    36,    37,    38,
      -1,    80,    81,    -1,   195,    -1,    34,    35,    36,    37,
      38,   307,    -1,   201,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    65,    34,    35,    36,
      37,    38,    71,    72,    73,    -1,    -1,    65,    -1,    -1,
      -1,    80,    81,    71,    72,    73,    -1,    -1,    65,    -1,
      -1,    -1,    80,    81,    71,    72,    73,    74,    65,    -1,
      -1,    -1,    -1,    80,    71,    72,    73,    34,    35,    36,
      37,    38,    -1,    80,    34,    35,    36,    37,    38,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    65,    -1,    74,    -1,    -1,
      65,    71,    -1,    80,    74,    -1,    71,    -1,    -1,    74,
      80,    40,    41,    -1,    -1,    80,    45,    46,    47,    48,
      49,    50,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    85,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      17,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    29,    30,    31,    32,    33,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    17,    29,    30,    31,    32,    33,    87,    88,
      90,    91,   100,   101,   106,   109,   111,   115,   116,   117,
     118,     4,   104,     4,   105,     4,     8,     9,   103,     4,
       8,     9,   102,    34,    34,    34,     0,    88,    89,    34,
      92,    94,   100,   119,   120,   121,   104,   105,   104,   105,
      34,    92,   107,    92,   110,    78,    80,    95,    74,    75,
      93,    34,   122,   124,    81,    78,    78,    34,   112,   113,
      50,    76,    96,    97,    92,   125,    75,   123,     3,    12,
      13,    15,    18,    21,    22,    23,    24,    25,    26,    27,
      34,    35,    36,    37,    38,    65,    71,    72,    73,    74,
      78,    80,    91,   100,   127,   128,   130,   131,   132,   136,
     137,   139,   141,   143,   144,   149,   154,   155,   157,   159,
     161,   162,   165,   167,   169,   170,   172,   173,   177,    91,
     114,   114,    50,    75,    79,   154,    35,    77,    98,    76,
     126,   121,    80,    34,    34,    74,   142,   154,    80,    80,
      80,   127,    80,    80,    74,    74,    80,    65,   157,   161,
     170,   161,   157,   157,   127,   129,   154,    74,    74,    74,
      84,    51,   158,    52,   160,    56,    57,    58,    59,    60,
      61,    64,    65,   163,   164,   166,    62,    63,    66,    67,
      68,   168,    40,    41,    45,    46,    47,    48,    49,    50,
      72,    73,    76,    85,   156,   171,   114,    79,    79,    35,
     113,    74,    77,    50,   145,    77,   157,    74,   157,   154,
      74,    92,   100,    21,    36,   133,    36,   135,   154,   174,
     175,   161,   129,    79,    81,   154,   159,   161,   165,   167,
     169,   154,   154,   154,   154,   154,   154,   154,   154,   154,
      34,    34,   108,    74,    50,    97,    99,   145,   146,    36,
      81,    81,    81,    74,   157,    74,    92,    80,    75,   134,
      81,    75,    81,    75,   176,    81,    83,   158,   160,    77,
      75,    74,    78,   127,    78,   127,    81,   140,   154,    74,
      74,   157,    74,   157,   131,   154,    82,   154,   154,   108,
      35,   147,    39,   138,    19,    20,   150,   151,   152,   153,
     177,    81,    75,    81,   140,    81,   140,    74,    74,   157,
      81,   134,   134,    34,   176,    75,   148,    79,   127,    83,
      79,   152,   153,    83,   140,    81,    81,    81,   140,    81,
     140,    74,    74,   147,   127,   127,    81,    81,    81,   140,
     143,   143,    81
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    89,    89,    90,    90,    90,    90,
      90,    91,    91,    91,    92,    93,    93,    95,    94,    96,
      96,    97,    97,    98,    98,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   102,   102,   102,   102,   103,   103,   103,
     103,   104,   104,   105,   105,   107,   106,   108,   108,   108,
     110,   109,   111,   112,   112,   113,   113,   114,   114,   115,
     116,   117,   118,   119,   120,   120,   121,   122,   123,   123,
     125,   124,   124,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   129,   130,   130,
     131,   132,   133,   134,   134,   134,   135,   135,   136,   136,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   141,
     142,   142,   143,   144,   145,   146,   147,   148,   148,   149,
     150,   150,   150,   150,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   154,   154,   154,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   157,   158,
     158,   159,   160,   160,   161,   161,   161,   162,   163,   163,
     164,   164,   164,   164,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   172,   173,   174,   174,   175,
     176,   176,   177,   177,   177,   177
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     0,     0,     3,     1,
       2,     2,     0,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     0,     8,     3,     1,     0,
       0,     7,     6,     1,     3,     1,     3,     2,     0,     3,
       3,     2,     3,     3,     1,     0,     2,     2,     2,     0,
       0,     3,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     2,     2,
       4,     4,     2,     3,     3,     0,     4,     1,     2,     1,
       6,     2,     0,     5,     8,     9,     7,     8,     7,     6,
       6,     7,     6,     7,     8,     5,     7,     3,     1,     2,
       1,     2,     2,     2,     2,     4,     2,     2,     0,     7,
       2,     1,     1,     0,     1,     2,     1,     3,     4,     3,
       4,     2,     1,     1,     2,     2,     2,     5,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     2,     3,
       0,     2,     3,     0,     2,     2,     1,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 100 "parser.y"
                                             { ins(); }
#line 1791 "y.tab.c"
    break;

  case 55: /* $@2: %empty  */
#line 141 "parser.y"
                                                    { ins(); }
#line 1797 "y.tab.c"
    break;

  case 60: /* $@3: %empty  */
#line 147 "parser.y"
                                                   { ins(); }
#line 1803 "y.tab.c"
    break;

  case 72: /* function_declaration_type: type_specifier identifier '('  */
#line 175 "parser.y"
                                                                 { ins();}
#line 1809 "y.tab.c"
    break;

  case 80: /* $@4: %empty  */
#line 194 "parser.y"
                                             { ins(); }
#line 1815 "y.tab.c"
    break;

  case 134: /* string_initilization: assignment_operator string_constant  */
#line 285 "parser.y"
                                                                      { insV(); }
#line 1821 "y.tab.c"
    break;

  case 212: /* constant: integer_constant  */
#line 416 "parser.y"
                                                        { insV(); }
#line 1827 "y.tab.c"
    break;

  case 213: /* constant: string_constant  */
#line 417 "parser.y"
                                                        { insV(); }
#line 1833 "y.tab.c"
    break;

  case 214: /* constant: float_constant  */
#line 418 "parser.y"
                                                        { insV(); }
#line 1839 "y.tab.c"
    break;

  case 215: /* constant: character_constant  */
#line 419 "parser.y"
                                                    { insV(); }
#line 1845 "y.tab.c"
    break;


#line 1849 "y.tab.c"

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

#line 421 "parser.y"


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
