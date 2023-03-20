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

#ifndef YY_YY_GRAMMER_TAB_H_INCLUDED
# define YY_YY_GRAMMER_TAB_H_INCLUDED
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
    TOK_IDENTIFIER = 258,          /* TOK_IDENTIFIER  */
    TOK_NUMERICLITERAL = 259,      /* TOK_NUMERICLITERAL  */
    TOK_NONNUMERICLITERAL = 260,   /* TOK_NONNUMERICLITERAL  */
    TOK_33 = 261,                  /* "!"  */
    TOK_3361 = 262,                /* "!="  */
    TOK_37 = 263,                  /* "%"  */
    TOK_3761 = 264,                /* "%="  */
    TOK_38 = 265,                  /* "&"  */
    TOK_3838 = 266,                /* "&&"  */
    TOK_3861 = 267,                /* "&="  */
    TOK_40 = 268,                  /* "("  */
    TOK_41 = 269,                  /* ")"  */
    TOK_42 = 270,                  /* "*"  */
    TOK_4261 = 271,                /* "*="  */
    TOK_43 = 272,                  /* "+"  */
    TOK_4343 = 273,                /* "++"  */
    TOK_4361 = 274,                /* "+="  */
    TOK_44 = 275,                  /* ","  */
    TOK_45 = 276,                  /* "-"  */
    TOK_4545 = 277,                /* "--"  */
    TOK_4561 = 278,                /* "-="  */
    TOK_4562 = 279,                /* "->"  */
    TOK_46 = 280,                  /* "."  */
    TOK_464646 = 281,              /* "..."  */
    TOK_47 = 282,                  /* "/"  */
    TOK_4761 = 283,                /* "/="  */
    TOK_58 = 284,                  /* ":"  */
    TOK_5858 = 285,                /* "::"  */
    TOK_59 = 286,                  /* ";"  */
    TOK_60 = 287,                  /* "<"  */
    TOK_6060 = 288,                /* "<<"  */
    TOK_606061 = 289,              /* "<<="  */
    TOK_6061 = 290,                /* "<="  */
    TOK_61 = 291,                  /* "="  */
    TOK_6161 = 292,                /* "=="  */
    TOK_62 = 293,                  /* ">"  */
    TOK_6261 = 294,                /* ">="  */
    TOK_6262 = 295,                /* ">>"  */
    TOK_626261 = 296,              /* ">>="  */
    TOK_626262 = 297,              /* ">>>"  */
    TOK_62626261 = 298,            /* ">>>="  */
    TOK_63 = 299,                  /* "?"  */
    TOK_91 = 300,                  /* "["  */
    TOK_93 = 301,                  /* "]"  */
    TOK_94 = 302,                  /* "^"  */
    TOK_9461 = 303,                /* "^="  */
    TOK_abstract = 304,            /* "abstract"  */
    TOK_assert = 305,              /* "assert"  */
    TOK_boolean = 306,             /* "boolean"  */
    TOK_break = 307,               /* "break"  */
    TOK_byte = 308,                /* "byte"  */
    TOK_case = 309,                /* "case"  */
    TOK_catch = 310,               /* "catch"  */
    TOK_char = 311,                /* "char"  */
    TOK_class = 312,               /* "class"  */
    TOK_continue = 313,            /* "continue"  */
    TOK_default = 314,             /* "default"  */
    TOK_do = 315,                  /* "do"  */
    TOK_double = 316,              /* "double"  */
    TOK_else = 317,                /* "else"  */
    TOK_enum = 318,                /* "enum"  */
    TOK_extends = 319,             /* "extends"  */
    TOK_final = 320,               /* "final"  */
    TOK_finally = 321,             /* "finally"  */
    TOK_float = 322,               /* "float"  */
    TOK_for = 323,                 /* "for"  */
    TOK_if = 324,                  /* "if"  */
    TOK_implements = 325,          /* "implements"  */
    TOK_import = 326,              /* "import"  */
    TOK_instanceof = 327,          /* "instanceof"  */
    TOK_int = 328,                 /* "int"  */
    TOK_interface = 329,           /* "interface"  */
    TOK_long = 330,                /* "long"  */
    TOK_new = 331,                 /* "new"  */
    TOK_package = 332,             /* "package"  */
    TOK_permits = 333,             /* "permits"  */
    TOK_private = 334,             /* "private"  */
    TOK_protected = 335,           /* "protected"  */
    TOK_public = 336,              /* "public"  */
    TOK_record = 337,              /* "record"  */
    TOK_return = 338,              /* "return"  */
    TOK_sealed = 339,              /* "sealed"  */
    TOK_short = 340,               /* "short"  */
    TOK_static = 341,              /* "static"  */
    TOK_strictfp = 342,            /* "strictfp"  */
    TOK_super = 343,               /* "super"  */
    TOK_switch = 344,              /* "switch"  */
    TOK_synchronized = 345,        /* "synchronized"  */
    TOK_this = 346,                /* "this"  */
    TOK_throw = 347,               /* "throw"  */
    TOK_throws = 348,              /* "throws"  */
    TOK_transient = 349,           /* "transient"  */
    TOK_transitive = 350,          /* "transitive"  */
    TOK_try = 351,                 /* "try"  */
    TOK_var = 352,                 /* "var"  */
    TOK_void = 353,                /* "void"  */
    TOK_volatile = 354,            /* "volatile"  */
    TOK_while = 355,               /* "while"  */
    TOK_yield = 356,               /* "yield"  */
    TOK_123 = 357,                 /* "{"  */
    TOK_124 = 358,                 /* "|"  */
    TOK_12461 = 359,               /* "|="  */
    TOK_124124 = 360,              /* "||"  */
    TOK_125 = 361,                 /* "}"  */
    TOK_126 = 362                  /* "~"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "grammer.y"

  char* s;
  int i;

#line 176 "grammer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (void);

/* "%code provides" blocks.  */
#line 51 "grammer.y"

void yyerror (char const*);
int yylex (YYSTYPE*);

#line 195 "grammer.tab.h"

#endif /* !YY_YY_GRAMMER_TAB_H_INCLUDED  */
