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

#ifndef YY_YY_SRC_PARSER_TAB_H_INCLUDED
# define YY_YY_SRC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    LITERAL = 259,                 /* LITERAL  */
    TOK_33 = 260,                  /* TOK_33  */
    TOK_3361 = 261,                /* TOK_3361  */
    TOK_37 = 262,                  /* TOK_37  */
    TOK_3761 = 263,                /* TOK_3761  */
    TOK_38 = 264,                  /* TOK_38  */
    TOK_3838 = 265,                /* TOK_3838  */
    TOK_3861 = 266,                /* TOK_3861  */
    TOK_40 = 267,                  /* TOK_40  */
    TOK_41 = 268,                  /* TOK_41  */
    TOK_42 = 269,                  /* TOK_42  */
    TOK_4261 = 270,                /* TOK_4261  */
    TOK_43 = 271,                  /* TOK_43  */
    TOK_4343 = 272,                /* TOK_4343  */
    TOK_4361 = 273,                /* TOK_4361  */
    TOK_44 = 274,                  /* TOK_44  */
    TOK_45 = 275,                  /* TOK_45  */
    TOK_4545 = 276,                /* TOK_4545  */
    TOK_4561 = 277,                /* TOK_4561  */
    TOK_4562 = 278,                /* TOK_4562  */
    TOK_46 = 279,                  /* TOK_46  */
    TOK_464646 = 280,              /* TOK_464646  */
    TOK_47 = 281,                  /* TOK_47  */
    TOK_4761 = 282,                /* TOK_4761  */
    TOK_58 = 283,                  /* TOK_58  */
    TOK_5858 = 284,                /* TOK_5858  */
    TOK_59 = 285,                  /* TOK_59  */
    TOK_60 = 286,                  /* TOK_60  */
    TOK_6060 = 287,                /* TOK_6060  */
    TOK_606061 = 288,              /* TOK_606061  */
    TOK_6061 = 289,                /* TOK_6061  */
    TOK_61 = 290,                  /* TOK_61  */
    TOK_6161 = 291,                /* TOK_6161  */
    TOK_62 = 292,                  /* TOK_62  */
    TOK_6261 = 293,                /* TOK_6261  */
    TOK_6262 = 294,                /* TOK_6262  */
    TOK_626261 = 295,              /* TOK_626261  */
    TOK_626262 = 296,              /* TOK_626262  */
    TOK_62626261 = 297,            /* TOK_62626261  */
    TOK_63 = 298,                  /* TOK_63  */
    TOK_64 = 299,                  /* TOK_64  */
    TOK_91 = 300,                  /* TOK_91  */
    TOK_93 = 301,                  /* TOK_93  */
    TOK_94 = 302,                  /* TOK_94  */
    TOK_9461 = 303,                /* TOK_9461  */
    TOK_abstract = 304,            /* TOK_abstract  */
    TOK_assert = 305,              /* TOK_assert  */
    TOK_boolean = 306,             /* TOK_boolean  */
    TOK_break = 307,               /* TOK_break  */
    TOK_byte = 308,                /* TOK_byte  */
    TOK_case = 309,                /* TOK_case  */
    TOK_catch = 310,               /* TOK_catch  */
    TOK_char = 311,                /* TOK_char  */
    TOK_class = 312,               /* TOK_class  */
    TOK_continue = 313,            /* TOK_continue  */
    TOK_default = 314,             /* TOK_default  */
    TOK_do = 315,                  /* TOK_do  */
    TOK_double = 316,              /* TOK_double  */
    TOK_else = 317,                /* TOK_else  */
    TOK_enum = 318,                /* TOK_enum  */
    TOK_exports = 319,             /* TOK_exports  */
    TOK_extends = 320,             /* TOK_extends  */
    TOK_final = 321,               /* TOK_final  */
    TOK_finally = 322,             /* TOK_finally  */
    TOK_float = 323,               /* TOK_float  */
    TOK_for = 324,                 /* TOK_for  */
    TOK_if = 325,                  /* TOK_if  */
    TOK_implements = 326,          /* TOK_implements  */
    TOK_import = 327,              /* TOK_import  */
    TOK_instanceof = 328,          /* TOK_instanceof  */
    TOK_int = 329,                 /* TOK_int  */
    TOK_interface = 330,           /* TOK_interface  */
    TOK_long = 331,                /* TOK_long  */
    TOK_module = 332,              /* TOK_module  */
    TOK_native = 333,              /* TOK_native  */
    TOK_new = 334,                 /* TOK_new  */
    TOK_open = 335,                /* TOK_open  */
    TOK_opens = 336,               /* TOK_opens  */
    TOK_package = 337,             /* TOK_package  */
    TOK_permits = 338,             /* TOK_permits  */
    TOK_private = 339,             /* TOK_private  */
    TOK_protected = 340,           /* TOK_protected  */
    TOK_provides = 341,            /* TOK_provides  */
    TOK_public = 342,              /* TOK_public  */
    TOK_record = 343,              /* TOK_record  */
    TOK_requires = 344,            /* TOK_requires  */
    TOK_return = 345,              /* TOK_return  */
    TOK_sealed = 346,              /* TOK_sealed  */
    TOK_short = 347,               /* TOK_short  */
    TOK_static = 348,              /* TOK_static  */
    TOK_strictfp = 349,            /* TOK_strictfp  */
    TOK_super = 350,               /* TOK_super  */
    TOK_switch = 351,              /* TOK_switch  */
    TOK_synchronized = 352,        /* TOK_synchronized  */
    TOK_this = 353,                /* TOK_this  */
    TOK_throw = 354,               /* TOK_throw  */
    TOK_throws = 355,              /* TOK_throws  */
    TOK_to = 356,                  /* TOK_to  */
    TOK_transient = 357,           /* TOK_transient  */
    TOK_transitive = 358,          /* TOK_transitive  */
    TOK_try = 359,                 /* TOK_try  */
    TOK_uses = 360,                /* TOK_uses  */
    TOK_var = 361,                 /* TOK_var  */
    TOK_void = 362,                /* TOK_void  */
    TOK_volatile = 363,            /* TOK_volatile  */
    TOK_while = 364,               /* TOK_while  */
    TOK_with = 365,                /* TOK_with  */
    TOK_yield = 366,               /* TOK_yield  */
    TOK_123 = 367,                 /* TOK_123  */
    TOK_124 = 368,                 /* TOK_124  */
    TOK_12461 = 369,               /* TOK_12461  */
    TOK_124124 = 370,              /* TOK_124124  */
    TOK_125 = 371,                 /* TOK_125  */
    TOK_126 = 372                  /* TOK_126  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "src/parser.y"

  char* s;
  int i;

#line 186 "src/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (void);

/* "%code provides" blocks.  */
#line 21 "src/parser.y"

void yyerror (char const*);
int yylex (YYSTYPE*);

#line 205 "src/parser.tab.h"

#endif /* !YY_YY_SRC_PARSER_TAB_H_INCLUDED  */
