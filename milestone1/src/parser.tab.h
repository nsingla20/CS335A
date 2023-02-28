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
    TOK_IDENTIFIER = 258,          /* TOK_IDENTIFIER  */
    TOK_LITERAL = 259,             /* TOK_LITERAL  */
    TOK_33 = 260,                  /* "!"  */
    TOK_3361 = 261,                /* "!="  */
    TOK_37 = 262,                  /* "%"  */
    TOK_3761 = 263,                /* "%="  */
    TOK_38 = 264,                  /* "&"  */
    TOK_3838 = 265,                /* "&&"  */
    TOK_3861 = 266,                /* "&="  */
    TOK_40 = 267,                  /* "("  */
    TOK_41 = 268,                  /* ")"  */
    TOK_42 = 269,                  /* "*"  */
    TOK_4261 = 270,                /* "*="  */
    TOK_43 = 271,                  /* "+"  */
    TOK_4343 = 272,                /* "++"  */
    TOK_4361 = 273,                /* "+="  */
    TOK_44 = 274,                  /* ","  */
    TOK_45 = 275,                  /* "-"  */
    TOK_4545 = 276,                /* "--"  */
    TOK_4561 = 277,                /* "-="  */
    TOK_4562 = 278,                /* "->"  */
    TOK_46 = 279,                  /* "."  */
    TOK_464646 = 280,              /* "..."  */
    TOK_47 = 281,                  /* "/"  */
    TOK_4761 = 282,                /* "/="  */
    TOK_58 = 283,                  /* ":"  */
    TOK_5858 = 284,                /* "::"  */
    TOK_59 = 285,                  /* ";"  */
    TOK_60 = 286,                  /* "<"  */
    TOK_6060 = 287,                /* "<<"  */
    TOK_606061 = 288,              /* "<<="  */
    TOK_6061 = 289,                /* "<="  */
    TOK_61 = 290,                  /* "="  */
    TOK_6161 = 291,                /* "=="  */
    TOK_62 = 292,                  /* ">"  */
    TOK_6261 = 293,                /* ">="  */
    TOK_6262 = 294,                /* ">>"  */
    TOK_626261 = 295,              /* ">>="  */
    TOK_626262 = 296,              /* ">>>"  */
    TOK_62626261 = 297,            /* ">>>="  */
    TOK_63 = 298,                  /* "?"  */
    TOK_64 = 299,                  /* "@"  */
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
    TOK_exports = 319,             /* "exports"  */
    TOK_extends = 320,             /* "extends"  */
    TOK_final = 321,               /* "final"  */
    TOK_finally = 322,             /* "finally"  */
    TOK_float = 323,               /* "float"  */
    TOK_for = 324,                 /* "for"  */
    TOK_if = 325,                  /* "if"  */
    TOK_implements = 326,          /* "implements"  */
    TOK_import = 327,              /* "import"  */
    TOK_instanceof = 328,          /* "instanceof"  */
    TOK_int = 329,                 /* "int"  */
    TOK_interface = 330,           /* "interface"  */
    TOK_long = 331,                /* "long"  */
    TOK_module = 332,              /* "module"  */
    TOK_new = 333,                 /* "new"  */
    TOK_open = 334,                /* "open"  */
    TOK_opens = 335,               /* "opens"  */
    TOK_package = 336,             /* "package"  */
    TOK_permits = 337,             /* "permits"  */
    TOK_private = 338,             /* "private"  */
    TOK_protected = 339,           /* "protected"  */
    TOK_provides = 340,            /* "provides"  */
    TOK_public = 341,              /* "public"  */
    TOK_record = 342,              /* "record"  */
    TOK_requires = 343,            /* "requires"  */
    TOK_return = 344,              /* "return"  */
    TOK_sealed = 345,              /* "sealed"  */
    TOK_short = 346,               /* "short"  */
    TOK_static = 347,              /* "static"  */
    TOK_strictfp = 348,            /* "strictfp"  */
    TOK_super = 349,               /* "super"  */
    TOK_switch = 350,              /* "switch"  */
    TOK_synchronized = 351,        /* "synchronized"  */
    TOK_this = 352,                /* "this"  */
    TOK_throw = 353,               /* "throw"  */
    TOK_throws = 354,              /* "throws"  */
    TOK_to = 355,                  /* "to"  */
    TOK_transient = 356,           /* "transient"  */
    TOK_transitive = 357,          /* "transitive"  */
    TOK_try = 358,                 /* "try"  */
    TOK_uses = 359,                /* "uses"  */
    TOK_var = 360,                 /* "var"  */
    TOK_void = 361,                /* "void"  */
    TOK_volatile = 362,            /* "volatile"  */
    TOK_while = 363,               /* "while"  */
    TOK_with = 364,                /* "with"  */
    TOK_yield = 365,               /* "yield"  */
    TOK_123 = 366,                 /* "{"  */
    TOK_124 = 367,                 /* "|"  */
    TOK_12461 = 368,               /* "|="  */
    TOK_124124 = 369,              /* "||"  */
    TOK_125 = 370,                 /* "}"  */
    TOK_126 = 371                  /* "~"  */
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

#line 185 "src/parser.tab.h"

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

#line 204 "src/parser.tab.h"

#endif /* !YY_YY_SRC_PARSER_TAB_H_INCLUDED  */
