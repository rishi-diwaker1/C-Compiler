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
	
	extern char curid[20];	
	extern char curtype[20];
	extern char curval[20];

	extern int current_nesting;
	extern char line_dec_type;

	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void set_line_dec_type(char);
	int check_line_dec_type(char);
	extern int params_count;
	int call_params_count;
	extern FILE *yyin;
	extern int yylineno;
	extern char *yytext;
	void insertSTtype(char *,char *);
	void insertSTvalue(char *, char *);
	void incertCT(char *, char *);
	void printST();
	void printCT();

	void append_dim(int);

#line 126 "y.tab.c"

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
    INTs = 267,                    /* INTs  */
    FLOATs = 268,                  /* FLOATs  */
    CHARs = 269,                   /* CHARs  */
    DOUBLEs = 270,                 /* DOUBLEs  */
    CONST = 271,                   /* CONST  */
    STRUCT = 272,                  /* STRUCT  */
    ENUM = 273,                    /* ENUM  */
    UNION = 274,                   /* UNION  */
    RETURN = 275,                  /* RETURN  */
    MAIN = 276,                    /* MAIN  */
    VOID = 277,                    /* VOID  */
    WHILE = 278,                   /* WHILE  */
    FOR = 279,                     /* FOR  */
    DO = 280,                      /* DO  */
    BREAK = 281,                   /* BREAK  */
    ENDIF = 282,                   /* ENDIF  */
    SWITCH = 283,                  /* SWITCH  */
    CASE = 284,                    /* CASE  */
    CONTINUE = 285,                /* CONTINUE  */
    DEFAULT = 286,                 /* DEFAULT  */
    SPREAD = 287,                  /* SPREAD  */
    AUTO = 288,                    /* AUTO  */
    STATIC = 289,                  /* STATIC  */
    REGISTER = 290,                /* REGISTER  */
    EXTERN = 291,                  /* EXTERN  */
    VOLATILE = 292,                /* VOLATILE  */
    INLINE = 293,                  /* INLINE  */
    PRINTF = 294,                  /* PRINTF  */
    SCANF = 295,                   /* SCANF  */
    identifier = 296,              /* identifier  */
    array_identifier = 297,        /* array_identifier  */
    func_identifier = 298,         /* func_identifier  */
    integer_constant = 299,        /* integer_constant  */
    string_constant = 300,         /* string_constant  */
    float_constant = 301,          /* float_constant  */
    character_constant = 302,      /* character_constant  */
    ELSE = 303,                    /* ELSE  */
    leftshift_assignment_operator = 304, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 305, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 306, /* XOR_assignment_operator  */
    OR_assignment_operator = 307,  /* OR_assignment_operator  */
    AND_assignment_operator = 308, /* AND_assignment_operator  */
    modulo_assignment_operator = 309, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 310, /* multiplication_assignment_operator  */
    division_assignment_operator = 311, /* division_assignment_operator  */
    addition_assignment_operator = 312, /* addition_assignment_operator  */
    subtraction_assignment_operator = 313, /* subtraction_assignment_operator  */
    assignment_operator = 314,     /* assignment_operator  */
    OR_operator = 315,             /* OR_operator  */
    AND_operator = 316,            /* AND_operator  */
    pipe_operator = 317,           /* pipe_operator  */
    caret_operator = 318,          /* caret_operator  */
    amp_operator = 319,            /* amp_operator  */
    equality_operator = 320,       /* equality_operator  */
    inequality_operator = 321,     /* inequality_operator  */
    lessthan_assignment_operator = 322, /* lessthan_assignment_operator  */
    lessthan_operator = 323,       /* lessthan_operator  */
    greaterthan_assignment_operator = 324, /* greaterthan_assignment_operator  */
    greaterthan_operator = 325,    /* greaterthan_operator  */
    leftshift_operator = 326,      /* leftshift_operator  */
    rightshift_operator = 327,     /* rightshift_operator  */
    add_operator = 328,            /* add_operator  */
    subtract_operator = 329,       /* subtract_operator  */
    multiplication_operator = 330, /* multiplication_operator  */
    division_operator = 331,       /* division_operator  */
    modulo_operator = 332,         /* modulo_operator  */
    STRING = 333,                  /* STRING  */
    SIZEOF = 334,                  /* SIZEOF  */
    tilde_operator = 335,          /* tilde_operator  */
    exclamation_operator = 336,    /* exclamation_operator  */
    increment_operator = 337,      /* increment_operator  */
    decrement_operator = 338       /* decrement_operator  */
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
#define INTs 267
#define FLOATs 268
#define CHARs 269
#define DOUBLEs 270
#define CONST 271
#define STRUCT 272
#define ENUM 273
#define UNION 274
#define RETURN 275
#define MAIN 276
#define VOID 277
#define WHILE 278
#define FOR 279
#define DO 280
#define BREAK 281
#define ENDIF 282
#define SWITCH 283
#define CASE 284
#define CONTINUE 285
#define DEFAULT 286
#define SPREAD 287
#define AUTO 288
#define STATIC 289
#define REGISTER 290
#define EXTERN 291
#define VOLATILE 292
#define INLINE 293
#define PRINTF 294
#define SCANF 295
#define identifier 296
#define array_identifier 297
#define func_identifier 298
#define integer_constant 299
#define string_constant 300
#define float_constant 301
#define character_constant 302
#define ELSE 303
#define leftshift_assignment_operator 304
#define rightshift_assignment_operator 305
#define XOR_assignment_operator 306
#define OR_assignment_operator 307
#define AND_assignment_operator 308
#define modulo_assignment_operator 309
#define multiplication_assignment_operator 310
#define division_assignment_operator 311
#define addition_assignment_operator 312
#define subtraction_assignment_operator 313
#define assignment_operator 314
#define OR_operator 315
#define AND_operator 316
#define pipe_operator 317
#define caret_operator 318
#define amp_operator 319
#define equality_operator 320
#define inequality_operator 321
#define lessthan_assignment_operator 322
#define lessthan_operator 323
#define greaterthan_assignment_operator 324
#define greaterthan_operator 325
#define leftshift_operator 326
#define rightshift_operator 327
#define add_operator 328
#define subtract_operator 329
#define multiplication_operator 330
#define division_operator 331
#define modulo_operator 332
#define STRING 333
#define SIZEOF 334
#define tilde_operator 335
#define exclamation_operator 336
#define increment_operator 337
#define decrement_operator 338

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
  YYSYMBOL_INTs = 12,                      /* INTs  */
  YYSYMBOL_FLOATs = 13,                    /* FLOATs  */
  YYSYMBOL_CHARs = 14,                     /* CHARs  */
  YYSYMBOL_DOUBLEs = 15,                   /* DOUBLEs  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_STRUCT = 17,                    /* STRUCT  */
  YYSYMBOL_ENUM = 18,                      /* ENUM  */
  YYSYMBOL_UNION = 19,                     /* UNION  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_MAIN = 21,                      /* MAIN  */
  YYSYMBOL_VOID = 22,                      /* VOID  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_ENDIF = 27,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_SPREAD = 32,                    /* SPREAD  */
  YYSYMBOL_AUTO = 33,                      /* AUTO  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_REGISTER = 35,                  /* REGISTER  */
  YYSYMBOL_EXTERN = 36,                    /* EXTERN  */
  YYSYMBOL_VOLATILE = 37,                  /* VOLATILE  */
  YYSYMBOL_INLINE = 38,                    /* INLINE  */
  YYSYMBOL_PRINTF = 39,                    /* PRINTF  */
  YYSYMBOL_SCANF = 40,                     /* SCANF  */
  YYSYMBOL_identifier = 41,                /* identifier  */
  YYSYMBOL_array_identifier = 42,          /* array_identifier  */
  YYSYMBOL_func_identifier = 43,           /* func_identifier  */
  YYSYMBOL_integer_constant = 44,          /* integer_constant  */
  YYSYMBOL_string_constant = 45,           /* string_constant  */
  YYSYMBOL_float_constant = 46,            /* float_constant  */
  YYSYMBOL_character_constant = 47,        /* character_constant  */
  YYSYMBOL_ELSE = 48,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 49, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 50, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 51,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 52,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 53,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 54, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 55, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 56, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 57, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 58, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 59,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 60,               /* OR_operator  */
  YYSYMBOL_AND_operator = 61,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 62,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 63,            /* caret_operator  */
  YYSYMBOL_amp_operator = 64,              /* amp_operator  */
  YYSYMBOL_equality_operator = 65,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 66,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 67, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 68,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 69, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 70,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 71,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 72,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 73,              /* add_operator  */
  YYSYMBOL_subtract_operator = 74,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 75,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 76,         /* division_operator  */
  YYSYMBOL_modulo_operator = 77,           /* modulo_operator  */
  YYSYMBOL_STRING = 78,                    /* STRING  */
  YYSYMBOL_SIZEOF = 79,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 80,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 81,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 82,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 83,        /* decrement_operator  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* '['  */
  YYSYMBOL_87_ = 87,                       /* ']'  */
  YYSYMBOL_88_ = 88,                       /* '{'  */
  YYSYMBOL_89_ = 89,                       /* '}'  */
  YYSYMBOL_90_ = 90,                       /* '('  */
  YYSYMBOL_91_ = 91,                       /* ')'  */
  YYSYMBOL_92_ = 92,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_program = 94,                   /* program  */
  YYSYMBOL_declaration_list = 95,          /* declaration_list  */
  YYSYMBOL_D = 96,                         /* D  */
  YYSYMBOL_declaration = 97,               /* declaration  */
  YYSYMBOL_variable_declaration = 98,      /* variable_declaration  */
  YYSYMBOL_storage_classes = 99,           /* storage_classes  */
  YYSYMBOL_variable_declaration_list = 100, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 101, /* variable_declaration_identifier  */
  YYSYMBOL_102_1 = 102,                    /* $@1  */
  YYSYMBOL_103_2 = 103,                    /* $@2  */
  YYSYMBOL_vdi = 104,                      /* vdi  */
  YYSYMBOL_identifier_array_type = 105,    /* identifier_array_type  */
  YYSYMBOL_initilization_params = 106,     /* initilization_params  */
  YYSYMBOL_107_3 = 107,                    /* $@3  */
  YYSYMBOL_initilization = 108,            /* initilization  */
  YYSYMBOL_type_specifier = 109,           /* type_specifier  */
  YYSYMBOL_star_specifier = 110,           /* star_specifier  */
  YYSYMBOL_multiple_stars = 111,           /* multiple_stars  */
  YYSYMBOL_unsigned_grammar = 112,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 113,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 114,             /* long_grammar  */
  YYSYMBOL_short_grammar = 115,            /* short_grammar  */
  YYSYMBOL_structure_definition = 116,     /* structure_definition  */
  YYSYMBOL_117_4 = 117,                    /* $@4  */
  YYSYMBOL_V1 = 118,                       /* V1  */
  YYSYMBOL_structure_declaration = 119,    /* structure_declaration  */
  YYSYMBOL_struct_or_union = 120,          /* struct_or_union  */
  YYSYMBOL_function_declaration = 121,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 122, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 123, /* function_declaration_param_statement  */
  YYSYMBOL_params = 124,                   /* params  */
  YYSYMBOL_parameters_list = 125,          /* parameters_list  */
  YYSYMBOL_126_5 = 126,                    /* $@5  */
  YYSYMBOL_parameters_identifier_list = 127, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 128, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 129,         /* param_identifier  */
  YYSYMBOL_130_6 = 130,                    /* $@6  */
  YYSYMBOL_param_identifier_breakup = 131, /* param_identifier_breakup  */
  YYSYMBOL_statement = 132,                /* statement  */
  YYSYMBOL_printf_scanf_statements = 133,  /* printf_scanf_statements  */
  YYSYMBOL_printf_statement = 134,         /* printf_statement  */
  YYSYMBOL_scanf_statement = 135,          /* scanf_statement  */
  YYSYMBOL_printf_parameters = 136,        /* printf_parameters  */
  YYSYMBOL_scanf_parameters = 137,         /* scanf_parameters  */
  YYSYMBOL_compound_statement = 138,       /* compound_statement  */
  YYSYMBOL_139_7 = 139,                    /* $@7  */
  YYSYMBOL_statment_list = 140,            /* statment_list  */
  YYSYMBOL_expression_statment = 141,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 142,   /* conditional_statements  */
  YYSYMBOL_143_8 = 143,                    /* $@8  */
  YYSYMBOL_conditional_statements_breakup = 144, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 145,     /* iterative_statements  */
  YYSYMBOL_146_9 = 146,                    /* $@9  */
  YYSYMBOL_147_10 = 147,                   /* $@10  */
  YYSYMBOL_148_11 = 148,                   /* $@11  */
  YYSYMBOL_149_12 = 149,                   /* $@12  */
  YYSYMBOL_150_13 = 150,                   /* $@13  */
  YYSYMBOL_return_statement = 151,         /* return_statement  */
  YYSYMBOL_break_statement = 152,          /* break_statement  */
  YYSYMBOL_continue_statement = 153,       /* continue_statement  */
  YYSYMBOL_string_initilization = 154,     /* string_initilization  */
  YYSYMBOL_array_initialization = 155,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 156,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 157, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 158,               /* expression  */
  YYSYMBOL_simple_expression = 159,        /* simple_expression  */
  YYSYMBOL_and_expression = 160,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 161, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 162,       /* regular_expression  */
  YYSYMBOL_relational_operators = 163,     /* relational_operators  */
  YYSYMBOL_sum_expression = 164,           /* sum_expression  */
  YYSYMBOL_sum_operators = 165,            /* sum_operators  */
  YYSYMBOL_term = 166,                     /* term  */
  YYSYMBOL_MULOP = 167,                    /* MULOP  */
  YYSYMBOL_factor = 168,                   /* factor  */
  YYSYMBOL_mutable = 169,                  /* mutable  */
  YYSYMBOL_170_14 = 170,                   /* $@14  */
  YYSYMBOL_immutable = 171,                /* immutable  */
  YYSYMBOL_call = 172,                     /* call  */
  YYSYMBOL_173_15 = 173,                   /* $@15  */
  YYSYMBOL_arguments = 174,                /* arguments  */
  YYSYMBOL_arguments_list = 175,           /* arguments_list  */
  YYSYMBOL_176_16 = 176,                   /* $@16  */
  YYSYMBOL_A = 177,                        /* A  */
  YYSYMBOL_178_17 = 178,                   /* $@17  */
  YYSYMBOL_constant = 179,                 /* constant  */
  YYSYMBOL_enum_declaration = 180,         /* enum_declaration  */
  YYSYMBOL_enum_list = 181,                /* enum_list  */
  YYSYMBOL_enumerator = 182,               /* enumerator  */
  YYSYMBOL_switch_case = 183,              /* switch_case  */
  YYSYMBOL_case_list = 184,                /* case_list  */
  YYSYMBOL_case_entry = 185                /* case_entry  */
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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   338


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
      90,    91,     2,     2,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    84,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    86,     2,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,    89,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   104,   107,   108,   111,   112,   113,   114,
     117,   118,   119,   120,   121,   125,   125,   125,   125,   125,
     128,   128,   131,   131,   132,   132,   136,   136,   139,   140,
     143,   143,   144,   147,   148,   149,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   164,   164,   164,   164,
     164,   166,   169,   169,   169,   169,   172,   172,   172,   172,
     175,   175,   178,   178,   181,   181,   183,   183,   186,   189,
     190,   193,   196,   199,   202,   202,   205,   205,   208,   211,
     212,   215,   215,   218,   219,   222,   222,   223,   223,   224,
     224,   224,   225,   226,   227,   232,   233,   237,   240,   243,
     244,   247,   248,   249,   252,   252,   255,   256,   259,   260,
     263,   263,   266,   267,   270,   270,   271,   271,   272,   272,
     272,   273,   273,   276,   277,   290,   293,   296,   299,   302,
     305,   306,   309,   317,   323,   329,   335,   341,   347,   348,
     349,   352,   353,   356,   357,   361,   362,   365,   366,   369,
     369,   369,   370,   370,   370,   373,   374,   377,   378,   381,
     382,   385,   385,   385,   388,   389,   392,   404,   404,   410,
     413,   414,   415,   418,   418,   435,   435,   438,   438,   441,
     441,   442,   445,   446,   447,   448,   451,   455,   456,   459,
     460,   464,   467,   468,   472,   473,   474,   475
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
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "INTs",
  "FLOATs", "CHARs", "DOUBLEs", "CONST", "STRUCT", "ENUM", "UNION",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF",
  "SWITCH", "CASE", "CONTINUE", "DEFAULT", "SPREAD", "AUTO", "STATIC",
  "REGISTER", "EXTERN", "VOLATILE", "INLINE", "PRINTF", "SCANF",
  "identifier", "array_identifier", "func_identifier", "integer_constant",
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
  "division_operator", "modulo_operator", "STRING", "SIZEOF",
  "tilde_operator", "exclamation_operator", "increment_operator",
  "decrement_operator", "';'", "','", "'['", "']'", "'{'", "'}'", "'('",
  "')'", "':'", "$accept", "program", "declaration_list", "D",
  "declaration", "variable_declaration", "storage_classes",
  "variable_declaration_list", "variable_declaration_identifier", "$@1",
  "$@2", "vdi", "identifier_array_type", "initilization_params", "$@3",
  "initilization", "type_specifier", "star_specifier", "multiple_stars",
  "unsigned_grammar", "signed_grammar", "long_grammar", "short_grammar",
  "structure_definition", "$@4", "V1", "structure_declaration",
  "struct_or_union", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "$@5", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@6",
  "param_identifier_breakup", "statement", "printf_scanf_statements",
  "printf_statement", "scanf_statement", "printf_parameters",
  "scanf_parameters", "compound_statement", "$@7", "statment_list",
  "expression_statment", "conditional_statements", "$@8",
  "conditional_statements_breakup", "iterative_statements", "$@9", "$@10",
  "$@11", "$@12", "$@13", "return_statement", "break_statement",
  "continue_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup", "expression",
  "simple_expression", "and_expression", "unary_relation_expression",
  "regular_expression", "relational_operators", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "$@14",
  "immutable", "call", "$@15", "arguments", "arguments_list", "$@16", "A",
  "$@17", "constant", "enum_declaration", "enum_list", "enumerator",
  "switch_case", "case_list", "case_entry", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     378,  -255,  -255,  -255,  -255,    30,    60,    77,   126,  -255,
    -255,  -255,  -255,   134,  -255,    25,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,    78,  -255,   378,  -255,   273,    65,     5,
    -255,  -255,    -1,    70,  -255,   134,  -255,  -255,  -255,  -255,
    -255,  -255,    30,    60,  -255,  -255,    30,    60,  -255,    90,
      21,  -255,  -255,  -255,   134,    90,    47,  -255,    69,  -255,
    -255,  -255,    90,  -255,  -255,    29,  -255,  -255,  -255,  -255,
    -255,  -255,    85,    74,    90,    91,  -255,   -27,   -27,  -255,
      90,    67,    73,   123,   317,  -255,   122,   -22,  -255,    93,
    -255,     6,   -33,  -255,  -255,  -255,  -255,   412,  -255,  -255,
     103,    99,    -2,   100,   101,   317,   108,   104,   111,   107,
     109,   112,  -255,  -255,  -255,  -255,  -255,   155,     6,  -255,
       6,  -255,    90,   162,  -255,  -255,   120,   121,  -255,   118,
    -255,  -255,  -255,  -255,  -255,  -255,   124,   149,   150,  -255,
      24,   106,    97,  -255,    68,  -255,  -255,  -255,  -255,   166,
      74,   128,  -255,   149,  -255,  -255,   129,  -255,   412,   125,
     130,   134,  -255,     6,  -255,   133,     6,    90,   195,  -255,
     179,  -255,   176,   177,  -255,   139,  -255,  -255,   135,    90,
    -255,  -255,   229,  -255,     6,     6,  -255,  -255,  -255,  -255,
    -255,  -255,    72,  -255,  -255,    72,  -255,  -255,  -255,    72,
       6,     6,     6,     6,     6,     6,  -255,  -255,  -255,  -255,
    -255,   140,   169,  -255,   145,   143,  -255,  -255,   -42,  -255,
     159,    98,   134,   168,   165,  -255,   -65,  -255,   -55,     6,
       6,  -255,   229,   171,   150,  -255,   106,    97,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   129,   216,  -255,  -255,  -255,
    -255,  -255,     6,    90,     6,   184,     6,  -255,    20,  -255,
    -255,   199,  -255,   180,  -255,  -255,   232,  -255,   317,   317,
     -43,   102,   -36,    -6,  -255,  -255,   251,   209,  -255,  -255,
     -31,  -255,  -255,  -255,   248,  -255,  -255,     6,  -255,   113,
     205,   -21,   272,  -255,     6,  -255,   255,   317,  -255,     6,
     -38,   217,   -20,   317,  -255,   274,   218,  -255,   219,   214,
    -255,   215,  -255,  -255,   113,   317,  -255,   221,  -255,   209,
     255,  -255,  -255,  -255,     6,   220,  -255,  -255,  -255,  -255,
     223,   317,  -255,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    36,    37,    38,    39,    61,    63,    59,    55,    46,
      48,    47,    49,     0,    69,     0,    70,    45,    15,    16,
      17,    18,    19,     0,     2,     5,     6,     0,     0,    40,
      50,     8,     0,     0,     7,    75,     9,    60,    41,    62,
      42,    56,    61,    63,    44,    52,    61,    63,    43,     0,
       0,     1,     4,     3,     0,     0,    22,    24,     0,    21,
      51,    14,    64,    76,    71,     0,    74,    57,    58,    53,
      54,    22,     0,     0,     0,     0,    72,    29,    29,    10,
       0,    68,     0,     0,   104,    13,   189,     0,   187,     0,
      11,     0,     0,    23,    26,    25,    20,    67,    81,    77,
      80,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,   166,   167,   182,   183,   184,   185,     0,     0,   109,
       0,    92,     0,     0,    73,    94,     0,     0,    86,     0,
      85,    87,    88,    89,    90,    91,     0,   140,   142,   144,
     146,   148,   156,   160,   165,   164,   171,   172,    93,     0,
       0,     0,    12,    27,   165,    30,    29,    28,    67,     0,
      84,     0,    78,     0,   123,     0,     0,   118,     0,   125,
       0,   126,     0,     0,   173,     0,   169,   145,     0,     0,
      95,    96,   104,   108,     0,     0,   153,   154,   150,   152,
     149,   151,     0,   157,   158,     0,   161,   162,   163,     0,
       0,     0,     0,     0,     0,     0,   138,   139,   190,   188,
     186,     0,     0,    66,     0,     0,    82,    79,     0,   124,
       0,     0,     0,     0,     0,   100,     0,   103,     0,   176,
       0,   170,   104,     0,   141,   143,   147,   155,   159,   137,
     135,   136,   133,   134,   132,    29,     0,    32,    65,    83,
     110,   114,     0,     0,     0,     0,     0,    97,     0,    98,
     177,     0,   175,     0,   106,   105,    35,   127,   104,   104,
       0,     0,     0,   197,    99,   101,     0,   181,   174,   168,
       0,    31,    33,    34,   113,   115,   116,     0,   121,     0,
       0,   197,     0,   102,     0,   178,     0,   104,   111,     0,
       0,     0,     0,   104,   191,     0,     0,   179,   131,     0,
     112,     0,   119,   122,     0,   104,   196,     0,   192,   181,
       0,   129,   128,   117,     0,     0,   194,   193,   180,   130,
       0,   104,   120,   195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,   282,  -255,  -255,    13,  -255,   -46,   228,  -255,
    -255,   231,  -150,  -255,  -255,  -255,     2,  -255,  -255,  -255,
    -255,    27,    28,  -255,  -255,   153,  -255,    33,  -255,  -255,
    -255,  -255,   154,  -255,  -255,  -255,  -255,  -255,  -255,   -84,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,    84,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,    51,  -255,    15,  -255,  -101,   -86,   160,  -111,  -255,
    -255,   146,  -255,   151,  -255,   156,   -87,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,    41,  -255,  -254,  -255,  -255,   198,
    -255,  -255,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    23,    24,    53,    25,   121,    27,    58,    59,    77,
      78,    93,    94,   157,   211,   281,   122,    29,    30,    48,
      44,    38,    40,    31,    82,   159,    32,   123,    34,    35,
      64,    65,    66,    83,    99,   162,   100,   160,   216,   232,
     125,   126,   127,   226,   228,   128,   129,   233,   130,   131,
     268,   298,   132,   269,   299,   222,   324,   301,   133,   134,
     135,   247,   283,   309,   321,   136,   137,   138,   139,   140,
     192,   141,   195,   142,   199,   143,   144,   175,   145,   146,
     229,   261,   262,   277,   295,   319,   147,    36,    87,    88,
     148,   291,   292
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,   165,    28,    72,   154,   153,   212,   177,   289,    75,
     290,   155,   314,    26,   267,    49,    81,   184,   184,   178,
     256,   168,   184,   289,   184,   290,   257,    28,    89,    55,
     258,   154,    91,    33,    37,   302,   259,    63,    26,   111,
     112,   286,   113,   114,   115,   116,   312,   111,   112,   250,
     113,   114,   115,   116,   156,   288,    74,   296,    33,    92,
     325,   275,   117,   150,    39,   220,    50,   151,   304,    67,
     117,    68,   315,    69,   235,    70,   154,   218,    51,   118,
      60,    41,   164,    61,   276,    42,    43,   118,   120,   186,
     187,   188,   189,   190,   191,   266,   120,   154,   154,   239,
     240,   241,   242,   243,   244,   154,    56,    57,   154,    73,
     158,    62,   154,   111,   112,    86,   113,   114,   115,   116,
      84,   221,   200,   201,   202,   203,   204,   205,   260,   263,
      45,    71,    57,    81,    46,    47,   117,    76,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     206,   207,    80,    79,    80,   274,    17,   113,   114,   115,
     116,    97,   120,    63,    98,   154,   270,   154,   272,    85,
      80,   158,   196,   197,   198,    90,    80,   152,    80,   193,
     194,   149,   252,    80,   284,   285,   287,    80,   161,   163,
     166,   167,   169,   307,   170,   171,   176,   172,   311,   173,
     154,   300,   174,   179,   180,   181,   182,   271,   183,   184,
     208,   185,   210,   310,   214,    92,   215,   219,   223,   316,
     224,   225,   227,   330,   253,   230,   231,   245,   246,   248,
     249,   326,   101,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   333,    16,   102,
     251,    17,   103,   104,   105,   106,   255,   107,   254,   108,
     265,   267,    18,    19,    20,    21,    22,   279,   109,   110,
     111,   112,   273,   113,   114,   115,   116,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    54,
     278,   280,   293,   117,   294,    17,   297,   303,   306,   308,
     317,   313,   318,   322,   320,   327,   323,    52,    96,    95,
     118,   213,   331,   119,   332,   217,   264,   282,  -107,   120,
     101,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   329,    16,   102,   236,    17,
     103,   104,   105,   106,   234,   107,   237,   108,   209,   305,
      18,    19,    20,    21,    22,   238,   109,   110,   111,   112,
     328,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   118,     0,
      17,   119,     0,     0,     0,     0,     0,   120,     0,     0,
       0,    18,    19,    20,    21,    22,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    16,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      84,   102,     0,    49,    91,    91,   156,   118,    29,    55,
      31,    44,    32,     0,    45,    13,    62,    60,    60,   120,
      85,   105,    60,    29,    60,    31,    91,    25,    74,    27,
      85,   118,    59,     0,     4,   289,    91,    35,    25,    41,
      42,    84,    44,    45,    46,    47,    84,    41,    42,    91,
      44,    45,    46,    47,    87,    91,    54,    88,    25,    86,
     314,    41,    64,    85,     4,   166,    41,    89,    89,    42,
      64,    43,    92,    46,   185,    47,   163,   163,     0,    81,
      75,     4,    84,    84,    64,     8,     9,    81,    90,    65,
      66,    67,    68,    69,    70,   245,    90,   184,   185,   200,
     201,   202,   203,   204,   205,   192,    41,    42,   195,    88,
      97,    41,   199,    41,    42,    41,    44,    45,    46,    47,
      91,   167,    54,    55,    56,    57,    58,    59,   229,   230,
       4,    41,    42,   179,     8,     9,    64,    90,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      82,    83,    85,    84,    85,   256,    22,    44,    45,    46,
      47,    88,    90,   161,    41,   252,   252,   254,   254,    84,
      85,   158,    75,    76,    77,    84,    85,    84,    85,    73,
      74,    59,    84,    85,   268,   269,    84,    85,    85,    90,
      90,    90,    84,   294,    90,    84,    41,    90,   299,    90,
     287,   287,    90,    41,    84,    84,    88,   253,    84,    60,
      44,    61,    84,   297,    89,    86,    86,    84,    23,   303,
      41,    45,    45,   324,   222,    86,    91,    87,    59,    84,
      87,   315,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   331,    19,    20,
      91,    22,    23,    24,    25,    26,    91,    28,    90,    30,
      89,    45,    33,    34,    35,    36,    37,    87,    39,    40,
      41,    42,    88,    44,    45,    46,    47,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      91,    59,    41,    64,    85,    22,    48,    92,    26,    44,
      26,    84,    84,    89,    85,    84,    91,    25,    80,    78,
      81,   158,    92,    84,    91,   161,   232,   266,    89,    90,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   320,    19,    20,   192,    22,
      23,    24,    25,    26,   184,    28,   195,    30,   150,   291,
      33,    34,    35,    36,    37,   199,    39,    40,    41,    42,
     319,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    81,    -1,
      22,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    33,    34,    35,    36,    37,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    22,    33,    34,
      35,    36,    37,    94,    95,    97,    98,    99,   109,   110,
     111,   116,   119,   120,   121,   122,   180,     4,   114,     4,
     115,     4,     8,     9,   113,     4,     8,     9,   112,   109,
      41,     0,    95,    96,    16,   109,    41,    42,   100,   101,
      75,    84,    41,   109,   123,   124,   125,   114,   115,   114,
     115,    41,   100,    88,   109,   100,    90,   102,   103,    84,
      85,   100,   117,   126,    91,    84,    41,   181,   182,   100,
      84,    59,    86,   104,   105,   104,   101,    88,    41,   127,
     129,     3,    20,    23,    24,    25,    26,    28,    30,    39,
      40,    41,    42,    44,    45,    46,    47,    64,    81,    84,
      90,    98,   109,   120,   132,   133,   134,   135,   138,   139,
     141,   142,   145,   151,   152,   153,   158,   159,   160,   161,
     162,   164,   166,   168,   169,   171,   172,   179,   183,    59,
      85,    89,    84,   159,   169,    44,    87,   106,    98,   118,
     130,    85,   128,    90,    84,   158,    90,    90,   132,    84,
      90,    84,    90,    90,    90,   170,    41,   161,   158,    41,
      84,    84,    88,    84,    60,    61,    65,    66,    67,    68,
      69,    70,   163,    73,    74,   165,    75,    76,    77,   167,
      54,    55,    56,    57,    58,    59,    82,    83,    44,   182,
      84,   107,   105,   118,    89,    86,   131,   125,   159,    84,
     158,   100,   148,    23,    41,    45,   136,    45,   137,   173,
      86,    91,   132,   140,   160,   161,   164,   166,   168,   158,
     158,   158,   158,   158,   158,    87,    59,   154,    84,    87,
      91,    91,    84,   109,    90,    91,    85,    91,    85,    91,
     158,   174,   175,   158,   140,    89,   105,    45,   143,   146,
     159,   100,   159,    88,   158,    41,    64,   176,    91,    87,
      59,   108,   154,   155,   132,   132,    84,    84,    91,    29,
      31,   184,   185,    41,    85,   177,    88,    48,   144,   147,
     159,   150,   179,    92,    89,   185,    26,   158,    44,   156,
     132,   158,    84,    84,    32,    92,   132,    26,    84,   178,
      85,   157,    89,    91,   149,   179,   132,    84,   177,   156,
     158,    92,    91,   132
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    99,    99,    99,    99,    99,
     100,   100,   102,   101,   103,   101,   104,   104,   105,   105,
     107,   106,   106,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   111,   112,   112,   112,   112,   113,   113,   113,   113,
     114,   114,   115,   115,   117,   116,   118,   118,   119,   120,
     120,   121,   122,   123,   124,   124,   126,   125,   127,   128,
     128,   130,   129,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   133,   133,   134,   135,   136,
     136,   137,   137,   137,   139,   138,   140,   140,   141,   141,
     143,   142,   144,   144,   146,   145,   147,   145,   148,   149,
     145,   150,   145,   151,   151,   152,   153,   154,   155,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   163,   163,   163,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   167,   168,   168,   169,   170,   169,   169,
     171,   171,   171,   173,   172,   174,   174,   176,   175,   178,
     177,   177,   179,   179,   179,   179,   180,   181,   181,   182,
     182,   183,   184,   184,   185,   185,   185,   185
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       3,     4,     5,     4,     2,     1,     1,     1,     1,     1,
       3,     1,     0,     3,     0,     3,     1,     2,     2,     0,
       0,     5,     3,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     0,     1,     2,     2,     0,
       1,     0,     1,     0,     0,     7,     2,     0,     3,     1,
       1,     2,     3,     3,     1,     0,     0,     3,     2,     2,
       0,     0,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     4,     3,
       1,     3,     4,     1,     0,     4,     2,     0,     2,     1,
       0,     7,     2,     0,     0,     6,     0,     9,     0,     0,
      11,     0,     8,     2,     3,     2,     2,     2,     4,     2,
       2,     0,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     2,
       3,     1,     1,     0,     5,     1,     0,     0,     3,     0,
       4,     0,     1,     1,     1,     1,     6,     1,     3,     1,
       3,     7,     3,     4,     4,     6,     3,     0
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
  case 10: /* variable_declaration: type_specifier variable_declaration_list ';'  */
#line 117 "parser.y"
                                                                       {set_line_dec_type('n');}
#line 1805 "y.tab.c"
    break;

  case 11: /* variable_declaration: storage_classes type_specifier variable_declaration_list ';'  */
#line 118 "parser.y"
                                                                                       {set_line_dec_type('n');}
#line 1811 "y.tab.c"
    break;

  case 12: /* variable_declaration: storage_classes CONST type_specifier variable_declaration_list ';'  */
#line 119 "parser.y"
                                                                                             {set_line_dec_type('n');}
#line 1817 "y.tab.c"
    break;

  case 13: /* variable_declaration: CONST type_specifier variable_declaration_list ';'  */
#line 120 "parser.y"
                                                                             {set_line_dec_type('n');}
#line 1823 "y.tab.c"
    break;

  case 14: /* variable_declaration: structure_declaration ';'  */
#line 121 "parser.y"
                                                    {set_line_dec_type('n');}
#line 1829 "y.tab.c"
    break;

  case 22: /* $@1: %empty  */
#line 131 "parser.y"
                                     {if(duplicate(curid)){printf("\n");} ins();  }
#line 1835 "y.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 132 "parser.y"
                                             {if(duplicate(curid)){printf("\n");} ins();  }
#line 1841 "y.tab.c"
    break;

  case 27: /* vdi: assignment_operator simple_expression  */
#line 136 "parser.y"
                                                                    {if (check_line_dec_type('i') && yyvsp[0] == 1){printf("\n");} else {printf("Types don't match\n");exit(0);} }
#line 1847 "y.tab.c"
    break;

  case 30: /* $@3: %empty  */
#line 143 "parser.y"
                                           {append_dim(yyvsp[0]);}
#line 1853 "y.tab.c"
    break;

  case 31: /* initilization_params: integer_constant $@3 ']' identifier_array_type initilization  */
#line 143 "parser.y"
                                                                                                     {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1859 "y.tab.c"
    break;

  case 36: /* type_specifier: INT  */
#line 152 "parser.y"
                              {set_line_dec_type('i');}
#line 1865 "y.tab.c"
    break;

  case 37: /* type_specifier: CHAR  */
#line 153 "parser.y"
                               {set_line_dec_type('i');}
#line 1871 "y.tab.c"
    break;

  case 38: /* type_specifier: FLOAT  */
#line 154 "parser.y"
                                {set_line_dec_type('i');}
#line 1877 "y.tab.c"
    break;

  case 39: /* type_specifier: DOUBLE  */
#line 155 "parser.y"
                                 {set_line_dec_type('i');}
#line 1883 "y.tab.c"
    break;

  case 40: /* type_specifier: star_specifier  */
#line 156 "parser.y"
                                         {set_line_dec_type('i');}
#line 1889 "y.tab.c"
    break;

  case 64: /* $@4: %empty  */
#line 181 "parser.y"
                                                     { ins(); }
#line 1895 "y.tab.c"
    break;

  case 72: /* function_declaration_type: type_specifier identifier '('  */
#line 196 "parser.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1901 "y.tab.c"
    break;

  case 76: /* $@5: %empty  */
#line 205 "parser.y"
                                         { check_params(curtype); }
#line 1907 "y.tab.c"
    break;

  case 77: /* parameters_list: type_specifier $@5 parameters_identifier_list  */
#line 205 "parser.y"
                                                                                               { insertSTparamscount(currfunc, params_count); }
#line 1913 "y.tab.c"
    break;

  case 81: /* $@6: %empty  */
#line 215 "parser.y"
                                     { ins(); params_count++; }
#line 1919 "y.tab.c"
    break;

  case 104: /* $@7: %empty  */
#line 252 "parser.y"
                          {current_nesting++;}
#line 1925 "y.tab.c"
    break;

  case 105: /* compound_statement: $@7 '{' statment_list '}'  */
#line 252 "parser.y"
                                                                       {printST(); deletedata(current_nesting);current_nesting--;}
#line 1931 "y.tab.c"
    break;

  case 110: /* $@8: %empty  */
#line 263 "parser.y"
                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1937 "y.tab.c"
    break;

  case 114: /* $@9: %empty  */
#line 270 "parser.y"
                                                   {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1943 "y.tab.c"
    break;

  case 116: /* $@10: %empty  */
#line 271 "parser.y"
                                                                                      {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1949 "y.tab.c"
    break;

  case 118: /* $@11: %empty  */
#line 272 "parser.y"
                                  {current_nesting++;}
#line 1955 "y.tab.c"
    break;

  case 119: /* $@12: %empty  */
#line 272 "parser.y"
                                                                                                                          {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1961 "y.tab.c"
    break;

  case 121: /* $@13: %empty  */
#line 273 "parser.y"
                                                                      {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1967 "y.tab.c"
    break;

  case 123: /* return_statement: RETURN ';'  */
#line 276 "parser.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1973 "y.tab.c"
    break;

  case 124: /* return_statement: RETURN expression ';'  */
#line 277 "parser.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function returns something but is declared void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1989 "y.tab.c"
    break;

  case 127: /* string_initilization: assignment_operator string_constant  */
#line 296 "parser.y"
                                                              {insV();}
#line 1995 "y.tab.c"
    break;

  case 132: /* expression: mutable assignment_operator expression  */
#line 309 "parser.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2008 "y.tab.c"
    break;

  case 133: /* expression: mutable addition_assignment_operator expression  */
#line 317 "parser.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2019 "y.tab.c"
    break;

  case 134: /* expression: mutable subtraction_assignment_operator expression  */
#line 323 "parser.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2030 "y.tab.c"
    break;

  case 135: /* expression: mutable multiplication_assignment_operator expression  */
#line 329 "parser.y"
                                                                                {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2041 "y.tab.c"
    break;

  case 136: /* expression: mutable division_assignment_operator expression  */
#line 335 "parser.y"
                                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2052 "y.tab.c"
    break;

  case 137: /* expression: mutable modulo_assignment_operator expression  */
#line 341 "parser.y"
                                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2063 "y.tab.c"
    break;

  case 138: /* expression: mutable increment_operator  */
#line 347 "parser.y"
                                                                                                        {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 2069 "y.tab.c"
    break;

  case 139: /* expression: mutable decrement_operator  */
#line 348 "parser.y"
                                                                                                        {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 2075 "y.tab.c"
    break;

  case 140: /* expression: simple_expression  */
#line 349 "parser.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2081 "y.tab.c"
    break;

  case 141: /* simple_expression: simple_expression OR_operator and_expression  */
#line 352 "parser.y"
                                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2087 "y.tab.c"
    break;

  case 142: /* simple_expression: and_expression  */
#line 353 "parser.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2093 "y.tab.c"
    break;

  case 143: /* and_expression: and_expression AND_operator unary_relation_expression  */
#line 356 "parser.y"
                                                                                {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2099 "y.tab.c"
    break;

  case 144: /* and_expression: unary_relation_expression  */
#line 357 "parser.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2105 "y.tab.c"
    break;

  case 145: /* unary_relation_expression: exclamation_operator unary_relation_expression  */
#line 361 "parser.y"
                                                                         {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2111 "y.tab.c"
    break;

  case 146: /* unary_relation_expression: regular_expression  */
#line 362 "parser.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2117 "y.tab.c"
    break;

  case 147: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 365 "parser.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2123 "y.tab.c"
    break;

  case 148: /* regular_expression: sum_expression  */
#line 366 "parser.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2129 "y.tab.c"
    break;

  case 155: /* sum_expression: sum_expression sum_operators term  */
#line 373 "parser.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2135 "y.tab.c"
    break;

  case 156: /* sum_expression: term  */
#line 374 "parser.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2141 "y.tab.c"
    break;

  case 159: /* term: term MULOP factor  */
#line 381 "parser.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2147 "y.tab.c"
    break;

  case 160: /* term: factor  */
#line 382 "parser.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2153 "y.tab.c"
    break;

  case 164: /* factor: immutable  */
#line 388 "parser.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2159 "y.tab.c"
    break;

  case 165: /* factor: mutable  */
#line 389 "parser.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2165 "y.tab.c"
    break;

  case 166: /* mutable: identifier  */
#line 392 "parser.y"
                                     { 
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 2182 "y.tab.c"
    break;

  case 167: /* $@14: %empty  */
#line 404 "parser.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 2188 "y.tab.c"
    break;

  case 168: /* mutable: array_identifier $@14 '[' expression ']'  */
#line 405 "parser.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 2198 "y.tab.c"
    break;

  case 169: /* mutable: amp_operator identifier  */
#line 410 "parser.y"
                                                  {yyval = 1;}
#line 2204 "y.tab.c"
    break;

  case 170: /* immutable: '(' expression ')'  */
#line 413 "parser.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2210 "y.tab.c"
    break;

  case 172: /* immutable: constant  */
#line 415 "parser.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2216 "y.tab.c"
    break;

  case 173: /* $@15: %empty  */
#line 418 "parser.y"
                                        {
			             if(!check_declaration(curid, "Function"))
			             { printf("Need to declare function"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 2227 "y.tab.c"
    break;

  case 174: /* call: identifier '(' $@15 arguments ')'  */
#line 424 "parser.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("function arguments required does not match the passed arguments...");
									exit(8);
								}
							} 
						 }
#line 2241 "y.tab.c"
    break;

  case 177: /* $@16: %empty  */
#line 438 "parser.y"
                                     { call_params_count++; }
#line 2247 "y.tab.c"
    break;

  case 179: /* $@17: %empty  */
#line 441 "parser.y"
                                         { call_params_count++; }
#line 2253 "y.tab.c"
    break;

  case 182: /* constant: integer_constant  */
#line 445 "parser.y"
                                                {  insV(); yyval=1; }
#line 2259 "y.tab.c"
    break;

  case 183: /* constant: string_constant  */
#line 446 "parser.y"
                                                {  insV(); yyval=-1;}
#line 2265 "y.tab.c"
    break;

  case 184: /* constant: float_constant  */
#line 447 "parser.y"
                                                {  insV(); yyval=1;}
#line 2271 "y.tab.c"
    break;

  case 185: /* constant: character_constant  */
#line 448 "parser.y"
                                            {  insV();yyval=1; }
#line 2277 "y.tab.c"
    break;


#line 2281 "y.tab.c"

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

#line 478 "parser.y"



int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf( "PASSED: Semantic Phase\n");
		printf("%30s"  "PRINTING SYMBOL TABLE"  "\n\n", " ");
		printST();
		printf("%30s %s\n", " ", "-------------------------------");
		printf("\n\n%30s"  "PRINTING CONSTANT TABLE"  "\n\n", " ");
		printCT();
	}
}

void yyerror(char *s)
{
	printf( "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf( "FAILED: Semantic Phase Parsing failed\n" );
	exit(7);
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
