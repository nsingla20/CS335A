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
/* "%code requires" blocks.  */
#line 151 "grammer.y"

  struct expr {
    char* s;
    char* type;
    char* v;
  };

#line 57 "grammer.tab.h"

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
    TOK_INTEGERLITERAL = 259,      /* TOK_INTEGERLITERAL  */
    TOK_FLOATLITERAL = 260,        /* TOK_FLOATLITERAL  */
    TOK_BOOLEANLITERAL = 261,      /* TOK_BOOLEANLITERAL  */
    TOK_CHARLITERAL = 262,         /* TOK_CHARLITERAL  */
    TOK_STRINGLITERAL = 263,       /* TOK_STRINGLITERAL  */
    TOK_TEXTBLOCKLITERAL = 264,    /* TOK_TEXTBLOCKLITERAL  */
    TOK_NULLLITERAL = 265,         /* TOK_NULLLITERAL  */
    TOK_33 = 266,                  /* "!"  */
    TOK_3361 = 267,                /* "!="  */
    TOK_37 = 268,                  /* "%"  */
    TOK_3761 = 269,                /* "%="  */
    TOK_38 = 270,                  /* "&"  */
    TOK_3838 = 271,                /* "&&"  */
    TOK_3861 = 272,                /* "&="  */
    TOK_40 = 273,                  /* "("  */
    TOK_41 = 274,                  /* ")"  */
    TOK_42 = 275,                  /* "*"  */
    TOK_4261 = 276,                /* "*="  */
    TOK_43 = 277,                  /* "+"  */
    TOK_4343 = 278,                /* "++"  */
    TOK_4361 = 279,                /* "+="  */
    TOK_44 = 280,                  /* ","  */
    TOK_45 = 281,                  /* "-"  */
    TOK_4545 = 282,                /* "--"  */
    TOK_4561 = 283,                /* "-="  */
    TOK_4562 = 284,                /* "->"  */
    TOK_46 = 285,                  /* "."  */
    TOK_464646 = 286,              /* "..."  */
    TOK_47 = 287,                  /* "/"  */
    TOK_4761 = 288,                /* "/="  */
    TOK_58 = 289,                  /* ":"  */
    TOK_5858 = 290,                /* "::"  */
    TOK_59 = 291,                  /* ";"  */
    TOK_60 = 292,                  /* "<"  */
    TOK_6060 = 293,                /* "<<"  */
    TOK_606061 = 294,              /* "<<="  */
    TOK_6061 = 295,                /* "<="  */
    TOK_61 = 296,                  /* "="  */
    TOK_6161 = 297,                /* "=="  */
    TOK_62 = 298,                  /* ">"  */
    TOK_6261 = 299,                /* ">="  */
    TOK_6262 = 300,                /* ">>"  */
    TOK_626261 = 301,              /* ">>="  */
    TOK_626262 = 302,              /* ">>>"  */
    TOK_62626261 = 303,            /* ">>>="  */
    TOK_63 = 304,                  /* "?"  */
    TOK_91 = 305,                  /* "["  */
    TOK_93 = 306,                  /* "]"  */
    TOK_94 = 307,                  /* "^"  */
    TOK_9461 = 308,                /* "^="  */
    TOK_abstract = 309,            /* "abstract"  */
    TOK_assert = 310,              /* "assert"  */
    TOK_boolean = 311,             /* "boolean"  */
    TOK_break = 312,               /* "break"  */
    TOK_byte = 313,                /* "byte"  */
    TOK_case = 314,                /* "case"  */
    TOK_catch = 315,               /* "catch"  */
    TOK_char = 316,                /* "char"  */
    TOK_class = 317,               /* "class"  */
    TOK_continue = 318,            /* "continue"  */
    TOK_default = 319,             /* "default"  */
    TOK_do = 320,                  /* "do"  */
    TOK_double = 321,              /* "double"  */
    TOK_else = 322,                /* "else"  */
    TOK_enum = 323,                /* "enum"  */
    TOK_extends = 324,             /* "extends"  */
    TOK_final = 325,               /* "final"  */
    TOK_finally = 326,             /* "finally"  */
    TOK_float = 327,               /* "float"  */
    TOK_for = 328,                 /* "for"  */
    TOK_if = 329,                  /* "if"  */
    TOK_implements = 330,          /* "implements"  */
    TOK_import = 331,              /* "import"  */
    TOK_instanceof = 332,          /* "instanceof"  */
    TOK_int = 333,                 /* "int"  */
    TOK_interface = 334,           /* "interface"  */
    TOK_long = 335,                /* "long"  */
    TOK_new = 336,                 /* "new"  */
    TOK_package = 337,             /* "package"  */
    TOK_permits = 338,             /* "permits"  */
    TOK_private = 339,             /* "private"  */
    TOK_protected = 340,           /* "protected"  */
    TOK_public = 341,              /* "public"  */
    TOK_record = 342,              /* "record"  */
    TOK_return = 343,              /* "return"  */
    TOK_sealed = 344,              /* "sealed"  */
    TOK_short = 345,               /* "short"  */
    TOK_static = 346,              /* "static"  */
    TOK_strictfp = 347,            /* "strictfp"  */
    TOK_super = 348,               /* "super"  */
    TOK_switch = 349,              /* "switch"  */
    TOK_synchronized = 350,        /* "synchronized"  */
    TOK_this = 351,                /* "this"  */
    TOK_throw = 352,               /* "throw"  */
    TOK_throws = 353,              /* "throws"  */
    TOK_transient = 354,           /* "transient"  */
    TOK_transitive = 355,          /* "transitive"  */
    TOK_try = 356,                 /* "try"  */
    TOK_var = 357,                 /* "var"  */
    TOK_void = 358,                /* "void"  */
    TOK_volatile = 359,            /* "volatile"  */
    TOK_while = 360,               /* "while"  */
    TOK_yield = 361,               /* "yield"  */
    TOK_123 = 362,                 /* "{"  */
    TOK_124 = 363,                 /* "|"  */
    TOK_12461 = 364,               /* "|="  */
    TOK_124124 = 365,              /* "||"  */
    TOK_125 = 366,                 /* "}"  */
    TOK_126 = 367,                 /* "~"  */
    TERNARY = 368,                 /* TERNARY  */
    UMINUS = 369,                  /* UMINUS  */
    UPLUS = 370,                   /* UPLUS  */
    PREINC = 371,                  /* PREINC  */
    PREDEC = 372,                  /* PREDEC  */
    CAST = 373,                    /* CAST  */
    SWITCH = 374,                  /* SWITCH  */
    POSTINC = 375,                 /* POSTINC  */
    POSTDEC = 376,                 /* POSTDEC  */
    PARENTHESES = 377,             /* PARENTHESES  */
    ARRAY_ACCESS = 378             /* ARRAY_ACCESS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 159 "grammer.y"

  char *s;
  struct expr* e;
  int i;

#line 203 "grammer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (void);

/* "%code provides" blocks.  */
#line 147 "grammer.y"

void yyerror (char const*);
int yylex (YYSTYPE*);

#line 222 "grammer.tab.h"

#endif /* !YY_YY_GRAMMER_TAB_H_INCLUDED  */
