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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"


/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1
// Data structures to store the tree
vector<pair<string,vector<int>>> nodes;
int startNode;

// Symbol Table
vector<map<string,string>> block_table(1000);
map<string,string> symbol_table;
int block_count = 1;
int mblock = 0;
string curr_type;


void yyerror(char const *);
int createNode(string);
void addChild(int, int);


#line 99 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_IDENTIFIER = 3,             /* TOK_IDENTIFIER  */
  YYSYMBOL_TOK_NUMERICLITERAL = 4,         /* TOK_NUMERICLITERAL  */
  YYSYMBOL_TOK_NONNUMERICLITERAL = 5,      /* TOK_NONNUMERICLITERAL  */
  YYSYMBOL_TOK_33 = 6,                     /* "!"  */
  YYSYMBOL_TOK_3361 = 7,                   /* "!="  */
  YYSYMBOL_TOK_37 = 8,                     /* "%"  */
  YYSYMBOL_TOK_3761 = 9,                   /* "%="  */
  YYSYMBOL_TOK_38 = 10,                    /* "&"  */
  YYSYMBOL_TOK_3838 = 11,                  /* "&&"  */
  YYSYMBOL_TOK_3861 = 12,                  /* "&="  */
  YYSYMBOL_TOK_40 = 13,                    /* "("  */
  YYSYMBOL_TOK_41 = 14,                    /* ")"  */
  YYSYMBOL_TOK_42 = 15,                    /* "*"  */
  YYSYMBOL_TOK_4261 = 16,                  /* "*="  */
  YYSYMBOL_TOK_43 = 17,                    /* "+"  */
  YYSYMBOL_TOK_4343 = 18,                  /* "++"  */
  YYSYMBOL_TOK_4361 = 19,                  /* "+="  */
  YYSYMBOL_TOK_44 = 20,                    /* ","  */
  YYSYMBOL_TOK_45 = 21,                    /* "-"  */
  YYSYMBOL_TOK_4545 = 22,                  /* "--"  */
  YYSYMBOL_TOK_4561 = 23,                  /* "-="  */
  YYSYMBOL_TOK_4562 = 24,                  /* "->"  */
  YYSYMBOL_TOK_46 = 25,                    /* "."  */
  YYSYMBOL_TOK_464646 = 26,                /* "..."  */
  YYSYMBOL_TOK_47 = 27,                    /* "/"  */
  YYSYMBOL_TOK_4761 = 28,                  /* "/="  */
  YYSYMBOL_TOK_58 = 29,                    /* ":"  */
  YYSYMBOL_TOK_5858 = 30,                  /* "::"  */
  YYSYMBOL_TOK_59 = 31,                    /* ";"  */
  YYSYMBOL_TOK_60 = 32,                    /* "<"  */
  YYSYMBOL_TOK_6060 = 33,                  /* "<<"  */
  YYSYMBOL_TOK_606061 = 34,                /* "<<="  */
  YYSYMBOL_TOK_6061 = 35,                  /* "<="  */
  YYSYMBOL_TOK_61 = 36,                    /* "="  */
  YYSYMBOL_TOK_6161 = 37,                  /* "=="  */
  YYSYMBOL_TOK_62 = 38,                    /* ">"  */
  YYSYMBOL_TOK_6261 = 39,                  /* ">="  */
  YYSYMBOL_TOK_6262 = 40,                  /* ">>"  */
  YYSYMBOL_TOK_626261 = 41,                /* ">>="  */
  YYSYMBOL_TOK_626262 = 42,                /* ">>>"  */
  YYSYMBOL_TOK_62626261 = 43,              /* ">>>="  */
  YYSYMBOL_TOK_63 = 44,                    /* "?"  */
  YYSYMBOL_TOK_91 = 45,                    /* "["  */
  YYSYMBOL_TOK_93 = 46,                    /* "]"  */
  YYSYMBOL_TOK_94 = 47,                    /* "^"  */
  YYSYMBOL_TOK_9461 = 48,                  /* "^="  */
  YYSYMBOL_TOK_abstract = 49,              /* "abstract"  */
  YYSYMBOL_TOK_assert = 50,                /* "assert"  */
  YYSYMBOL_TOK_boolean = 51,               /* "boolean"  */
  YYSYMBOL_TOK_break = 52,                 /* "break"  */
  YYSYMBOL_TOK_byte = 53,                  /* "byte"  */
  YYSYMBOL_TOK_case = 54,                  /* "case"  */
  YYSYMBOL_TOK_catch = 55,                 /* "catch"  */
  YYSYMBOL_TOK_char = 56,                  /* "char"  */
  YYSYMBOL_TOK_class = 57,                 /* "class"  */
  YYSYMBOL_TOK_continue = 58,              /* "continue"  */
  YYSYMBOL_TOK_default = 59,               /* "default"  */
  YYSYMBOL_TOK_do = 60,                    /* "do"  */
  YYSYMBOL_TOK_double = 61,                /* "double"  */
  YYSYMBOL_TOK_else = 62,                  /* "else"  */
  YYSYMBOL_TOK_enum = 63,                  /* "enum"  */
  YYSYMBOL_TOK_extends = 64,               /* "extends"  */
  YYSYMBOL_TOK_final = 65,                 /* "final"  */
  YYSYMBOL_TOK_finally = 66,               /* "finally"  */
  YYSYMBOL_TOK_float = 67,                 /* "float"  */
  YYSYMBOL_TOK_for = 68,                   /* "for"  */
  YYSYMBOL_TOK_if = 69,                    /* "if"  */
  YYSYMBOL_TOK_implements = 70,            /* "implements"  */
  YYSYMBOL_TOK_import = 71,                /* "import"  */
  YYSYMBOL_TOK_instanceof = 72,            /* "instanceof"  */
  YYSYMBOL_TOK_int = 73,                   /* "int"  */
  YYSYMBOL_TOK_interface = 74,             /* "interface"  */
  YYSYMBOL_TOK_long = 75,                  /* "long"  */
  YYSYMBOL_TOK_new = 76,                   /* "new"  */
  YYSYMBOL_TOK_package = 77,               /* "package"  */
  YYSYMBOL_TOK_permits = 78,               /* "permits"  */
  YYSYMBOL_TOK_private = 79,               /* "private"  */
  YYSYMBOL_TOK_protected = 80,             /* "protected"  */
  YYSYMBOL_TOK_public = 81,                /* "public"  */
  YYSYMBOL_TOK_record = 82,                /* "record"  */
  YYSYMBOL_TOK_return = 83,                /* "return"  */
  YYSYMBOL_TOK_sealed = 84,                /* "sealed"  */
  YYSYMBOL_TOK_short = 85,                 /* "short"  */
  YYSYMBOL_TOK_static = 86,                /* "static"  */
  YYSYMBOL_TOK_strictfp = 87,              /* "strictfp"  */
  YYSYMBOL_TOK_super = 88,                 /* "super"  */
  YYSYMBOL_TOK_switch = 89,                /* "switch"  */
  YYSYMBOL_TOK_synchronized = 90,          /* "synchronized"  */
  YYSYMBOL_TOK_this = 91,                  /* "this"  */
  YYSYMBOL_TOK_throw = 92,                 /* "throw"  */
  YYSYMBOL_TOK_throws = 93,                /* "throws"  */
  YYSYMBOL_TOK_transient = 94,             /* "transient"  */
  YYSYMBOL_TOK_transitive = 95,            /* "transitive"  */
  YYSYMBOL_TOK_try = 96,                   /* "try"  */
  YYSYMBOL_TOK_var = 97,                   /* "var"  */
  YYSYMBOL_TOK_void = 98,                  /* "void"  */
  YYSYMBOL_TOK_volatile = 99,              /* "volatile"  */
  YYSYMBOL_TOK_while = 100,                /* "while"  */
  YYSYMBOL_TOK_yield = 101,                /* "yield"  */
  YYSYMBOL_TOK_123 = 102,                  /* "{"  */
  YYSYMBOL_TOK_124 = 103,                  /* "|"  */
  YYSYMBOL_TOK_12461 = 104,                /* "|="  */
  YYSYMBOL_TOK_124124 = 105,               /* "||"  */
  YYSYMBOL_TOK_125 = 106,                  /* "}"  */
  YYSYMBOL_TOK_126 = 107,                  /* "~"  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_input = 109,                    /* input  */
  YYSYMBOL_110_modifier_multiopt = 110,    /* modifier.multiopt  */
  YYSYMBOL_modifier = 111,                 /* modifier  */
  YYSYMBOL_112_dot_ind_multiopt = 112,     /* dot_ind.multiopt  */
  YYSYMBOL_type = 113,                     /* type  */
  YYSYMBOL_primitive_type = 114,           /* primitive_type  */
  YYSYMBOL_numeric_type = 115,             /* numeric_type  */
  YYSYMBOL_integral_type = 116,            /* integral_type  */
  YYSYMBOL_floating_point_type = 117,      /* floating_point_type  */
  YYSYMBOL_reference_type = 118,           /* reference_type  */
  YYSYMBOL_class_or_interface_type = 119,  /* class_or_interface_type  */
  YYSYMBOL_array_type = 120,               /* array_type  */
  YYSYMBOL_dims = 121,                     /* dims  */
  YYSYMBOL_type_parameter = 122,           /* type_parameter  */
  YYSYMBOL_123_type_bound_opt = 123,       /* type_bound.opt  */
  YYSYMBOL_type_bound = 124,               /* type_bound  */
  YYSYMBOL_additional_bound = 125,         /* additional_bound  */
  YYSYMBOL_type_arguments = 126,           /* type_arguments  */
  YYSYMBOL_type_argument_list = 127,       /* type_argument_list  */
  YYSYMBOL_128_type_argument_multiopt = 128, /* type_argument.multiopt  */
  YYSYMBOL_type_argument = 129,            /* type_argument  */
  YYSYMBOL_wildcard = 130,                 /* wildcard  */
  YYSYMBOL_131_wildcard_bounds_opt = 131,  /* wildcard_bounds.opt  */
  YYSYMBOL_wildcard_bounds = 132,          /* wildcard_bounds  */
  YYSYMBOL_un_name = 133,                  /* un_name  */
  YYSYMBOL_compilation_unit = 134,         /* compilation_unit  */
  YYSYMBOL_ordinary_compilation_unit = 135, /* ordinary_compilation_unit  */
  YYSYMBOL_136_package_declaration_opt = 136, /* package_declaration.opt  */
  YYSYMBOL_package_declaration = 137,      /* package_declaration  */
  YYSYMBOL_138_import_declaration_multiopt = 138, /* import_declaration.multiopt  */
  YYSYMBOL_import_declaration = 139,       /* import_declaration  */
  YYSYMBOL_single_type_import_declaration = 140, /* single_type_import_declaration  */
  YYSYMBOL_type_import_on_demand_declaration = 141, /* type_import_on_demand_declaration  */
  YYSYMBOL_single_static_import_declaration = 142, /* single_static_import_declaration  */
  YYSYMBOL_static_import_on_demand_declaration = 143, /* static_import_on_demand_declaration  */
  YYSYMBOL_144_top_level_class_or_interface_declaration_multiopt = 144, /* top_level_class_or_interface_declaration.multiopt  */
  YYSYMBOL_top_level_class_or_interface_declaration = 145, /* top_level_class_or_interface_declaration  */
  YYSYMBOL_146_com_type_name_multiopt = 146, /* com_type_name.multiopt  */
  YYSYMBOL_class_declaration = 147,        /* class_declaration  */
  YYSYMBOL_normal_class_declaration = 148, /* normal_class_declaration  */
  YYSYMBOL_149_type_parameters_opt = 149,  /* type_parameters.opt  */
  YYSYMBOL_150_class_extends_opt = 150,    /* class_extends.opt  */
  YYSYMBOL_151_class_implements_opt = 151, /* class_implements.opt  */
  YYSYMBOL_152_class_permits_opt = 152,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 153,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 154,      /* type_parameter_list  */
  YYSYMBOL_155_com_type_parameter_multiopt = 155, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 156,            /* class_extends  */
  YYSYMBOL_class_implements = 157,         /* class_implements  */
  YYSYMBOL_interface_type_list = 158,      /* interface_type_list  */
  YYSYMBOL_159_com_interface_type_multiopt = 159, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 160,            /* class_permits  */
  YYSYMBOL_class_body = 161,               /* class_body  */
  YYSYMBOL_162_class_body_declaration_multiopt = 162, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 163,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 164, /* class_member_declaration  */
  YYSYMBOL_variable_declarator_list = 165, /* variable_declarator_list  */
  YYSYMBOL_166_com_variable_declarator_multiopt = 166, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 167,      /* variable_declarator  */
  YYSYMBOL_168_eq_variable_initializer_opt = 168, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 169,   /* variable_declarator_id  */
  YYSYMBOL_170_dims_opt = 170,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 171,     /* variable_initializer  */
  YYSYMBOL_172_type_arguments_opt = 172,   /* type_arguments.opt  */
  YYSYMBOL_method_declaration = 173,       /* method_declaration  */
  YYSYMBOL_method_header = 174,            /* method_header  */
  YYSYMBOL_175_throws_opt = 175,           /* throws.opt  */
  YYSYMBOL_result = 176,                   /* result  */
  YYSYMBOL_method_declarator = 177,        /* method_declarator  */
  YYSYMBOL_178_formal_parameter_list_opt = 178, /* formal_parameter_list.opt  */
  YYSYMBOL_formal_parameter_list = 179,    /* formal_parameter_list  */
  YYSYMBOL_180_com_formal_parameter_multiopt = 180, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 181,         /* formal_parameter  */
  YYSYMBOL_variable_arity_parameter = 182, /* variable_arity_parameter  */
  YYSYMBOL_throws = 183,                   /* throws  */
  YYSYMBOL_exception_type_list = 184,      /* exception_type_list  */
  YYSYMBOL_185_com_exception_type_multiopt = 185, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 186,           /* exception_type  */
  YYSYMBOL_method_body = 187,              /* method_body  */
  YYSYMBOL_instance_initializer = 188,     /* instance_initializer  */
  YYSYMBOL_constructor_declaration = 189,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 190,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 191,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 192,         /* constructor_body  */
  YYSYMBOL_193_block_statements_opt = 193, /* block_statements.opt  */
  YYSYMBOL_194_argument_list_opt = 194,    /* argument_list.opt  */
  YYSYMBOL_enum_declaration = 195,         /* enum_declaration  */
  YYSYMBOL_enum_body = 196,                /* enum_body  */
  YYSYMBOL_197_com_opt = 197,              /* com.opt  */
  YYSYMBOL_198_enum_body_declarations_opt = 198, /* enum_body_declarations.opt  */
  YYSYMBOL_199_enum_constant_list_opt = 199, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 200,       /* enum_constant_list  */
  YYSYMBOL_201_com_enum_constant_multiopt = 201, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 202,            /* enum_constant  */
  YYSYMBOL_203_class_body_opt = 203,       /* class_body.opt  */
  YYSYMBOL_enum_body_declarations = 204,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 205,       /* record_declaration  */
  YYSYMBOL_record_header = 206,            /* record_header  */
  YYSYMBOL_207_record_component_list_opt = 207, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 208,    /* record_component_list  */
  YYSYMBOL_209_com_record_component_multiopt = 209, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 210,         /* record_component  */
  YYSYMBOL_variable_arity_record_component = 211, /* variable_arity_record_component  */
  YYSYMBOL_record_body = 212,              /* record_body  */
  YYSYMBOL_213_record_body_declaration_multiopt = 213, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 214,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 215, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 216,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 217, /* normal_interface_declaration  */
  YYSYMBOL_218_interface_extends_opt = 218, /* interface_extends.opt  */
  YYSYMBOL_219_interface_permits_opt = 219, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 220,        /* interface_extends  */
  YYSYMBOL_interface_permits = 221,        /* interface_permits  */
  YYSYMBOL_interface_body = 222,           /* interface_body  */
  YYSYMBOL_223_interface_member_declaration_multiopt = 223, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 224, /* interface_member_declaration  */
  YYSYMBOL_interface_method_declaration = 225, /* interface_method_declaration  */
  YYSYMBOL_array_initializer = 226,        /* array_initializer  */
  YYSYMBOL_227_variable_initializer_list_opt = 227, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 228, /* variable_initializer_list  */
  YYSYMBOL_229_com_variable_initializer_multiopt = 229, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 230,                    /* block  */
  YYSYMBOL_block_statements = 231,         /* block_statements  */
  YYSYMBOL_232_block_statement_multiopt = 232, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 233,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 234, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 235, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 236, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 237,      /* local_variable_type  */
  YYSYMBOL_statement = 238,                /* statement  */
  YYSYMBOL_statement_no_short_if = 239,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 240, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 241,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 242,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 243, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 244,     /* expression_statement  */
  YYSYMBOL_statement_expression = 245,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 246,        /* if_then_statement  */
  YYSYMBOL_if_then_else_statement = 247,   /* if_then_else_statement  */
  YYSYMBOL_if_then_else_statement_no_short_if = 248, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_assert_statement = 249,         /* assert_statement  */
  YYSYMBOL_switch_statement = 250,         /* switch_statement  */
  YYSYMBOL_switch_block = 251,             /* switch_block  */
  YYSYMBOL_252_switch_rule_multiopt = 252, /* switch_rule.multiopt  */
  YYSYMBOL_253_switch_block_statement_group_multiopt = 253, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_254_switch_label_col_multiopt = 254, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 255,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 256, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 257,             /* switch_label  */
  YYSYMBOL_258_com_case_constant_multiopt = 258, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 259,            /* case_constant  */
  YYSYMBOL_while_statement = 260,          /* while_statement  */
  YYSYMBOL_while_statement_no_short_if = 261, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 262,             /* do_statement  */
  YYSYMBOL_for_statement = 263,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 264, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 265,      /* basic_for_statement  */
  YYSYMBOL_266_for_init_opt = 266,         /* for_init.opt  */
  YYSYMBOL_267_expression_opt = 267,       /* expression.opt  */
  YYSYMBOL_268_for_update_opt = 268,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 269, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 270,                 /* for_init  */
  YYSYMBOL_for_update = 271,               /* for_update  */
  YYSYMBOL_statement_expression_list = 272, /* statement_expression_list  */
  YYSYMBOL_273_com_statement_expression_multiopt = 273, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 274,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 275, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 276,          /* break_statement  */
  YYSYMBOL_277_IDENTIFIER_opt = 277,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 278,          /* yield_statement  */
  YYSYMBOL_continue_statement = 279,       /* continue_statement  */
  YYSYMBOL_return_statement = 280,         /* return_statement  */
  YYSYMBOL_throw_statement = 281,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 282,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 283,            /* try_statement  */
  YYSYMBOL_284_catches_opt = 284,          /* catches.opt  */
  YYSYMBOL_catches = 285,                  /* catches  */
  YYSYMBOL_286_catch_clause_multiopt = 286, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 287,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 288,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 289,               /* catch_type  */
  YYSYMBOL_290_vt_class_type_multiopt = 290, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 291,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 292, /* try_with_resources_statement  */
  YYSYMBOL_293_finally_opt = 293,          /* finally.opt  */
  YYSYMBOL_resource_specification = 294,   /* resource_specification  */
  YYSYMBOL_295_semcol_opt = 295,           /* semcol.opt  */
  YYSYMBOL_resource_list = 296,            /* resource_list  */
  YYSYMBOL_297_semcol_resource_multiopt = 297, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 298,                 /* resource  */
  YYSYMBOL_variable_access = 299,          /* variable_access  */
  YYSYMBOL_pattern = 300,                  /* pattern  */
  YYSYMBOL_type_pattern = 301,             /* type_pattern  */
  YYSYMBOL_primary = 302,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 303,     /* primary_no_new_array  */
  YYSYMBOL_hold_Literal = 304,             /* hold_Literal  */
  YYSYMBOL_class_instance_creation_expression = 305, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 306, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_field_access = 307,             /* field_access  */
  YYSYMBOL_array_access = 308,             /* array_access  */
  YYSYMBOL_method_invocation = 309,        /* method_invocation  */
  YYSYMBOL_argument_list = 310,            /* argument_list  */
  YYSYMBOL_311_com_expression_multiopt = 311, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 312,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 313, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 314,                /* dim_exprs  */
  YYSYMBOL_315_dim_expr_multiopt = 315,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 316,                 /* dim_expr  */
  YYSYMBOL_expression = 317,               /* expression  */
  YYSYMBOL_assignment_expression = 318,    /* assignment_expression  */
  YYSYMBOL_assignment = 319,               /* assignment  */
  YYSYMBOL_left_hand_side = 320,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 321,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 322,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 323, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 324, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 325,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 326,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 327,           /* and_expression  */
  YYSYMBOL_equality_expression = 328,      /* equality_expression  */
  YYSYMBOL_relational_expression = 329,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 330,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 331,         /* shift_expression  */
  YYSYMBOL_additive_expression = 332,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 333, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 334,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 335, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 336, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 337, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 338,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 339, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 340, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 341,          /* cast_expression  */
  YYSYMBOL_342_additional_bound_multiopt = 342, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 343         /* switch_expression  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1889

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  236
/* YYNRULES -- Number of rules.  */
#define YYNRULES  456
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  740

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   387,   387,   390,   391,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   407,   408,   412,   413,
     416,   417,   420,   421,   424,   425,   426,   427,   428,   431,
     432,   435,   436,   439,   440,   441,   444,   447,   448,   451,
     454,   455,   458,   461,   464,   467,   468,   471,   472,   475,
     476,   479,   482,   483,   486,   487,   492,   493,   499,   502,
     505,   506,   509,   512,   513,   516,   517,   518,   519,   522,
     525,   528,   531,   534,   535,   538,   539,   540,   543,   544,
     549,   550,   551,   554,   557,   558,   561,   562,   565,   566,
     569,   570,   573,   576,   579,   580,   583,   586,   589,   592,
     593,   596,   599,   602,   603,   606,   607,   608,   611,   612,
     613,   616,   619,   620,   623,   626,   627,   630,   633,   634,
     637,   638,   641,   642,   645,   648,   649,   652,   653,   656,
     657,   660,   663,   664,   667,   670,   671,   674,   675,   678,
     681,   684,   687,   688,   691,   694,   695,   698,   701,   704,
     707,   710,   713,   714,   717,   718,   721,   724,   727,   728,
     731,   732,   735,   736,   739,   742,   743,   746,   750,   751,
     755,   758,   761,   764,   765,   768,   771,   772,   776,   777,
     781,   784,   787,   788,   791,   792,   795,   801,   804,   807,
     808,   811,   812,   815,   818,   821,   824,   825,   828,   829,
     830,   831,   837,   843,   846,   847,   850,   853,   854,   859,
     862,   865,   866,   869,   870,   871,   874,   875,   878,   881,
     884,   885,   888,   889,   890,   891,   892,   893,   896,   897,
     898,   899,   900,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   918,   921,   924,   927,
     930,   931,   932,   933,   934,   935,   936,   939,   942,   945,
     948,   949,   952,   955,   956,   959,   960,   963,   964,   967,
     968,   971,   972,   973,   976,   979,   980,   983,   984,   987,
     990,   993,   996,   999,  1000,  1003,  1004,  1007,  1010,  1011,
    1014,  1015,  1018,  1019,  1022,  1025,  1026,  1029,  1032,  1035,
    1036,  1039,  1042,  1045,  1048,  1049,  1052,  1055,  1058,  1061,
    1064,  1067,  1068,  1069,  1072,  1073,  1076,  1079,  1080,  1083,
    1086,  1089,  1092,  1093,  1096,  1099,  1102,  1103,  1106,  1109,
    1110,  1113,  1116,  1117,  1120,  1121,  1124,  1125,  1128,  1131,
    1136,  1137,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1152,  1153,  1157,  1158,  1159,  1162,  1165,  1166,  1167,
    1170,  1171,  1174,  1175,  1176,  1177,  1178,  1181,  1184,  1185,
    1188,  1189,  1190,  1191,  1194,  1195,  1196,  1197,  1200,  1203,
    1204,  1207,  1210,  1213,  1214,  1217,  1220,  1221,  1222,  1225,
    1226,  1227,  1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,
    1236,  1239,  1240,  1243,  1244,  1247,  1248,  1251,  1252,  1255,
    1256,  1259,  1260,  1263,  1264,  1265,  1268,  1269,  1270,  1271,
    1272,  1273,  1276,  1277,  1280,  1281,  1282,  1283,  1286,  1287,
    1288,  1291,  1292,  1293,  1294,  1297,  1298,  1299,  1300,  1301,
    1304,  1306,  1308,  1309,  1310,  1311,  1312,  1315,  1316,  1317,
    1318,  1321,  1324,  1327,  1330,  1331,  1334
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
  "\"end of file\"", "error", "\"invalid token\"", "TOK_IDENTIFIER",
  "TOK_NUMERICLITERAL", "TOK_NONNUMERICLITERAL", "\"!\"", "\"!=\"",
  "\"%\"", "\"%=\"", "\"&\"", "\"&&\"", "\"&=\"", "\"(\"", "\")\"",
  "\"*\"", "\"*=\"", "\"+\"", "\"++\"", "\"+=\"", "\",\"", "\"-\"",
  "\"--\"", "\"-=\"", "\"->\"", "\".\"", "\"...\"", "\"/\"", "\"/=\"",
  "\":\"", "\"::\"", "\";\"", "\"<\"", "\"<<\"", "\"<<=\"", "\"<=\"",
  "\"=\"", "\"==\"", "\">\"", "\">=\"", "\">>\"", "\">>=\"", "\">>>\"",
  "\">>>=\"", "\"?\"", "\"[\"", "\"]\"", "\"^\"", "\"^=\"", "\"abstract\"",
  "\"assert\"", "\"boolean\"", "\"break\"", "\"byte\"", "\"case\"",
  "\"catch\"", "\"char\"", "\"class\"", "\"continue\"", "\"default\"",
  "\"do\"", "\"double\"", "\"else\"", "\"enum\"", "\"extends\"",
  "\"final\"", "\"finally\"", "\"float\"", "\"for\"", "\"if\"",
  "\"implements\"", "\"import\"", "\"instanceof\"", "\"int\"",
  "\"interface\"", "\"long\"", "\"new\"", "\"package\"", "\"permits\"",
  "\"private\"", "\"protected\"", "\"public\"", "\"record\"", "\"return\"",
  "\"sealed\"", "\"short\"", "\"static\"", "\"strictfp\"", "\"super\"",
  "\"switch\"", "\"synchronized\"", "\"this\"", "\"throw\"", "\"throws\"",
  "\"transient\"", "\"transitive\"", "\"try\"", "\"var\"", "\"void\"",
  "\"volatile\"", "\"while\"", "\"yield\"", "\"{\"", "\"|\"", "\"|=\"",
  "\"||\"", "\"}\"", "\"~\"", "$accept", "input", "modifier.multiopt",
  "modifier", "dot_ind.multiopt", "type", "primitive_type", "numeric_type",
  "integral_type", "floating_point_type", "reference_type",
  "class_or_interface_type", "array_type", "dims", "type_parameter",
  "type_bound.opt", "type_bound", "additional_bound", "type_arguments",
  "type_argument_list", "type_argument.multiopt", "type_argument",
  "wildcard", "wildcard_bounds.opt", "wildcard_bounds", "un_name",
  "compilation_unit", "ordinary_compilation_unit",
  "package_declaration.opt", "package_declaration",
  "import_declaration.multiopt", "import_declaration",
  "single_type_import_declaration", "type_import_on_demand_declaration",
  "single_static_import_declaration",
  "static_import_on_demand_declaration",
  "top_level_class_or_interface_declaration.multiopt",
  "top_level_class_or_interface_declaration", "com_type_name.multiopt",
  "class_declaration", "normal_class_declaration", "type_parameters.opt",
  "class_extends.opt", "class_implements.opt", "class_permits.opt",
  "type_parameters", "type_parameter_list", "com_type_parameter.multiopt",
  "class_extends", "class_implements", "interface_type_list",
  "com_interface_type.multiopt", "class_permits", "class_body",
  "class_body_declaration.multiopt", "class_body_declaration",
  "class_member_declaration", "variable_declarator_list",
  "com_variable_declarator.multiopt", "variable_declarator",
  "eq_variable_initializer.opt", "variable_declarator_id", "dims.opt",
  "variable_initializer", "type_arguments.opt", "method_declaration",
  "method_header", "throws.opt", "result", "method_declarator",
  "formal_parameter_list.opt", "formal_parameter_list",
  "com_formal_parameter.multiopt", "formal_parameter",
  "variable_arity_parameter", "throws", "exception_type_list",
  "com_exception_type.multiopt", "exception_type", "method_body",
  "instance_initializer", "constructor_declaration",
  "constructor_declarator", "simple_type_name", "constructor_body",
  "block_statements.opt", "argument_list.opt", "enum_declaration",
  "enum_body", "com.opt", "enum_body_declarations.opt",
  "enum_constant_list.opt", "enum_constant_list",
  "com_enum_constant.multiopt", "enum_constant", "class_body.opt",
  "enum_body_declarations", "record_declaration", "record_header",
  "record_component_list.opt", "record_component_list",
  "com_record_component.multiopt", "record_component",
  "variable_arity_record_component", "record_body",
  "record_body_declaration.multiopt", "record_body_declaration",
  "compact_constructor_declaration", "interface_declaration",
  "normal_interface_declaration", "interface_extends.opt",
  "interface_permits.opt", "interface_extends", "interface_permits",
  "interface_body", "interface_member_declaration.multiopt",
  "interface_member_declaration", "interface_method_declaration",
  "array_initializer", "variable_initializer_list.opt",
  "variable_initializer_list", "com_variable_initializer.multiopt",
  "block", "block_statements", "block_statement.multiopt",
  "block_statement", "local_class_or_interface_declaration",
  "local_variable_declaration_statement", "local_variable_declaration",
  "local_variable_type", "statement", "statement_no_short_if",
  "statement_without_trailing_substatement", "empty_statement",
  "labeled_statement", "labeled_statement_no_short_if",
  "expression_statement", "statement_expression", "if_then_statement",
  "if_then_else_statement", "if_then_else_statement_no_short_if",
  "assert_statement", "switch_statement", "switch_block",
  "switch_rule.multiopt", "switch_block_statement_group.multiopt",
  "switch_label_col.multiopt", "switch_rule",
  "switch_block_statement_group", "switch_label",
  "com_case_constant.multiopt", "case_constant", "while_statement",
  "while_statement_no_short_if", "do_statement", "for_statement",
  "for_statement_no_short_if", "basic_for_statement", "for_init.opt",
  "expression.opt", "for_update.opt", "basic_for_statement_no_short_if",
  "for_init", "for_update", "statement_expression_list",
  "com_statement_expression.multiopt", "enhanced_for_statement",
  "enhanced_for_statement_no_short_if", "break_statement",
  "IDENTIFIER.opt", "yield_statement", "continue_statement",
  "return_statement", "throw_statement", "synchronized_statement",
  "try_statement", "catches.opt", "catches", "catch_clause.multiopt",
  "catch_clause", "catch_formal_parameter", "catch_type",
  "vt_class_type.multiopt", "finally", "try_with_resources_statement",
  "finally.opt", "resource_specification", "semcol.opt", "resource_list",
  "semcol_resource.multiopt", "resource", "variable_access", "pattern",
  "type_pattern", "primary", "primary_no_new_array", "hold_Literal",
  "class_instance_creation_expression",
  "unqualified_class_instance_creation_expression", "field_access",
  "array_access", "method_invocation", "argument_list",
  "com_expression.multiopt", "method_reference",
  "array_creation_expression", "dim_exprs", "dim_expr.multiopt",
  "dim_expr", "expression", "assignment_expression", "assignment",
  "left_hand_side", "assignment_operator", "conditional_expression",
  "conditional_or_expression", "conditional_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "instanceof_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "unary_expression", "pre_increment_expression",
  "pre_decrement_expression", "unary_expression_not_plus_minus",
  "postfix_expression", "post_increment_expression",
  "post_decrement_expression", "cast_expression",
  "additional_bound.multiopt", "switch_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-629)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-451)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,    57,    68,  -629,  -629,  -629,  -629,  -629,  -629,    76,
     127,    18,  -629,  -629,  -629,  -629,  -629,    49,   118,  -629,
    -629,   151,   162,  -629,  1255,  -629,  -629,  -629,  -629,  -629,
    -629,  -629,  -629,   166,   121,  -629,  -629,   197,   211,  -629,
     213,  -629,  -629,  -629,   248,  -629,  -629,  -629,  -629,  -629,
    -629,  -629,   204,  -629,   230,   253,   222,   253,   253,   263,
     268,  -629,   317,   258,  -629,   325,   232,  -629,   272,   332,
    -629,  -629,   283,  -629,   315,   325,   222,  -629,   323,   342,
     354,  -629,   400,  -629,   325,   327,  -629,   787,   222,   325,
    -629,  -629,   393,  -629,   342,   339,   389,  -629,  -629,   425,
     414,   432,   391,   417,  -629,  -629,  -629,   151,   336,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,    60,  -629,
    -629,  -629,  -629,  -629,   112,  -629,   426,  -629,  -629,  -629,
     337,   342,   317,   151,   340,  -629,   408,    39,   323,   325,
     437,  -629,   420,   434,   354,  -629,  -629,  -629,   453,   412,
     415,  -629,   441,  -629,  -629,   455,  -629,   354,  -629,  -629,
    -629,    44,    26,  -629,  -629,  -629,  -629,   342,  1163,  -629,
     357,  -629,   400,   447,    -9,  -629,  -629,   423,   787,   191,
     325,  -629,   447,   229,  -629,   325,   325,  -629,  -629,  -629,
    -629,  1163,   966,  1163,  1163,  1163,  1163,   787,   176,   460,
    -629,  1163,  1735,   462,   190,   429,  -629,  -629,  -629,   443,
     719,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  1758,  -629,
     -14,   469,   378,   436,   475,    33,   252,  -629,   256,   316,
     184,  -629,  -629,  -629,  -629,   320,  -629,  -629,  -629,  -629,
     237,  -629,  -629,   151,  -629,  -629,  1571,  -629,  -629,  -629,
    -629,  -629,  -629,  1295,  -629,  1611,  -629,  -629,  -629,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,   342,  -629,  1611,  -629,
    -629,  -629,    42,  -629,  -629,  -629,   473,   474,  -629,  -629,
    -629,  -629,   444,   153,   489,   323,  1163,  -629,  1163,   136,
     323,  1163,   449,    24,   323,  1163,   478,  -629,  -629,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  1163,
    1163,  1163,  1163,  1163,  1163,  1163,  1163,  1163,  1163,  1163,
    1163,  1163,   547,  1163,  1163,  1163,  1163,  1163,  1163,  1163,
    1163,  -629,  -629,   354,  -629,  -629,    50,    -8,   490,   247,
    1163,  -629,  1163,   496,   496,  1475,   487,   491,  1163,   492,
     494,  1163,     6,  -629,   495,  1163,  -629,   116,  -629,   396,
    -629,  -629,  -629,  -629,  -629,  -629,   472,   506,  -629,  -629,
    -629,  -629,  -629,   480,  -629,  -629,  -629,  -629,  -629,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,
    -629,   148,   257,  -629,  -629,  -629,   320,   326,   328,    11,
      -8,   419,    13,   500,  1163,  -629,   789,   -13,   470,  -629,
    1163,   -13,   470,   501,   515,   505,   507,   510,   325,   225,
    -629,  -629,   522,   481,   340,   513,  -629,   525,   483,  1163,
    -629,   502,   469,   378,   436,   475,    33,   252,   252,   256,
     256,   256,   256,   527,  -629,  -629,  -629,   316,   316,   316,
     184,   184,  -629,  -629,  -629,   490,  -629,  -629,  -629,   519,
     419,  1475,    64,  -629,   504,   508,   511,   445,  1785,  1163,
     512,  -629,  1163,  1163,   518,  1792,   514,   457,  1163,   520,
    -629,  1205,  -629,   470,  -629,  -629,   529,  -629,  -629,   325,
     461,  -629,   553,  1295,  -629,  -629,   526,  1143,  -629,   415,
    -629,   531,   564,  -629,  -629,  1163,  -629,   485,  -629,  1163,
     220,   533,   323,  -629,  -629,  -629,  -629,  1163,  -629,  -629,
    -629,  1163,   419,   553,  -629,  -629,  1163,  -629,  -629,  -629,
     558,   554,  -629,   551,  -629,  -629,   571,  -629,   576,   579,
    -629,   218,  -629,   565,  -629,  -629,   190,    27,   582,   535,
     536,  -629,   514,   583,  -629,  -629,  -629,   585,  1143,  -629,
     342,  -629,  -629,  -629,  1651,   592,  -629,  -629,  -629,   493,
    -629,  -629,  -629,   417,  -629,  -629,  1163,  -629,   340,   596,
     199,  -629,   597,   599,   610,   601,  -629,  -629,   603,   587,
    1163,  1163,   605,  1163,  1510,   485,   457,  -629,   607,   588,
    -629,   457,  -629,   514,   535,  -629,  1475,   506,  -629,   609,
     106,  -629,   614,  -629,   615,   517,  -629,  -629,  1163,  -629,
     199,  -629,   606,  -629,  1163,  -629,  -629,   470,  -629,   622,
     623,   557,   611,   612,   627,   630,   633,  -629,   590,   591,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,  1792,
     849,   635,  -629,  -629,  -629,  -629,  -629,  -629,   325,   647,
    -629,  -629,  1143,  -629,  -629,  -629,    12,  -629,   625,    25,
    1086,   641,  -629,   626,  1475,  -629,   557,  1510,  1785,  1163,
    1163,  1475,  -629,   342,   506,   457,  -629,  -629,  -629,  -629,
     636,  -629,   629,  -629,  -629,  -629,  -629,  -629,   631,  -629,
    -629,  -629,   650,  -629,  -629,  -629,   632,   634,   655,   656,
    -629,   570,  -629,  -629,  1163,  -629,  1385,  -629,  1475,  1163,
    1163,  1510,  1510,   325,  -629,  -629,  -629,   660,   644,   616,
    -629,   342,  1510,   557,  1510,  -629,   662,  -629,  1510,  -629
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      61,     0,     0,     2,    58,    64,    60,    17,     1,    74,
       0,     0,    63,    65,    66,    67,    68,     4,     0,    62,
      56,     0,     0,    77,     0,    73,    75,    80,    81,    82,
      76,   187,    16,     0,     0,    69,     8,     0,     0,    10,
       0,     7,     6,     5,     0,    11,     9,    12,    14,    13,
      15,     3,     0,    57,     0,    85,    89,    85,    85,    57,
       0,    70,     0,    87,    84,     0,     0,    88,   190,     0,
      71,    72,    41,    95,     0,     0,    89,    86,    56,   100,
      35,    97,   163,   156,     0,   192,   189,   174,    89,     0,
      39,    40,    93,    92,    96,    91,    48,   122,    33,     0,
      98,     0,     0,   159,   162,   166,   193,     0,     0,   191,
      21,    24,    28,    30,    29,    26,    27,    25,     0,    18,
      20,    22,    23,    19,    31,    32,     0,   173,   177,   179,
       0,   455,     0,     0,     0,    90,     0,     0,   123,     0,
       0,   158,   161,   164,    79,   197,   188,   178,     0,     0,
      36,   172,   175,   183,   171,    42,    94,    79,   104,    83,
      44,     0,    53,    49,    45,    50,    34,    99,   155,   104,
       0,   160,     0,   194,     4,   180,    37,     0,     0,     4,
       0,   454,   101,     4,    47,     0,     0,    51,    52,   351,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,     0,   448,     0,   447,   340,   342,   346,   353,   347,
     348,   349,   154,   350,   341,   369,   382,   384,     0,   383,
     401,   403,   405,   407,   409,   411,   413,   421,   416,   424,
     428,   431,   435,   436,   439,   442,   449,   450,   445,   446,
       4,   157,   165,     0,   201,   195,     0,   199,   200,   196,
     198,    38,   176,     4,   181,     0,   109,   184,   105,   108,
     106,   107,   182,   185,   110,   147,    43,   102,     0,   103,
      54,    55,   448,   347,   348,   444,     0,     0,   437,   440,
     438,   441,     0,     0,     0,   123,     0,   443,   155,     0,
     123,     0,     0,     0,   123,     0,   367,   392,   398,   390,
     393,   394,   391,   395,   389,   396,   397,   399,   400,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,   452,    78,   130,   129,     0,     0,     0,    56,
       0,   246,     0,   305,   305,     0,     0,     0,   291,     0,
       0,     0,     0,   221,     0,     0,   220,   386,   216,     0,
     217,   233,   152,   212,   213,   214,     0,     0,   215,   222,
     234,   223,   235,     0,   224,   225,   236,   237,   226,   238,
     227,   283,   284,   239,   245,   240,   241,   243,   242,   244,
     313,   346,   349,   250,   251,   252,     0,   253,   254,    56,
       0,   128,     0,     0,     0,   345,     0,     0,   119,   380,
     155,     0,   119,   358,     0,     0,     0,    57,     0,     0,
     344,   354,     0,     0,   169,   357,   355,     0,     0,     0,
     385,     0,   404,   406,   408,   410,   412,   415,   414,   417,
     419,   418,   420,   422,   339,   423,   338,   425,   426,   427,
     429,   430,   434,   432,   433,     0,   146,   202,   145,     0,
     128,     0,     0,   304,     0,     0,    56,     0,   289,     0,
       0,   290,     0,     0,     0,     0,   315,     0,     0,     0,
     209,     4,   218,   119,   219,   113,   116,   249,   124,     0,
       0,   127,     4,     4,   186,   453,     0,   205,   376,   118,
     374,   378,     0,   377,   375,   155,   372,     0,   362,   155,
       0,     0,   123,   370,   360,   168,   167,   155,   371,   361,
     368,     0,   128,     4,   125,   247,     0,   260,   303,   307,
       0,   296,   300,     0,   288,   295,     0,   308,     0,     0,
     309,   336,   334,   330,   333,   335,     0,   347,     0,     0,
     311,   318,   315,     0,   306,   211,   117,   111,     0,   114,
     144,   140,   143,   148,     0,     0,   132,   136,   138,     0,
     381,   208,   121,   159,   204,   120,     0,   379,   169,     0,
     268,   456,     0,   359,     0,     0,   402,   126,     0,     0,
       0,     0,   298,   291,     0,     0,     0,   329,     0,   331,
       4,     0,   312,   316,   327,   314,     0,     0,   115,   141,
       0,   149,   134,   151,   206,     0,   356,   365,     0,   276,
     270,   266,     0,   363,   155,   373,   364,   119,   261,     0,
       0,     0,     0,    56,     0,     0,     0,   257,     0,   222,
     229,   230,   231,   232,   285,   286,   262,   310,   328,     0,
       0,     0,   324,   317,   326,   325,   280,   112,     0,     0,
     137,     4,     0,   203,   278,   279,     0,   267,     0,     0,
       0,     0,   131,     0,     0,   299,   293,     0,   289,     0,
       0,     0,   332,   323,     0,     0,   142,   139,   135,   207,
     275,   264,     0,   270,   263,   265,   272,   273,     0,   366,
     282,   301,     0,   292,   297,   248,   296,     0,     0,     0,
     258,   321,   320,   319,     0,   269,     4,   271,     0,     0,
     291,     0,     0,     0,   277,   274,   287,     0,     0,     0,
     281,   322,     0,   293,     0,   302,     0,   259,     0,   294
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -629,  -629,  -171,  -629,  -629,   -58,    62,  -629,  -629,  -629,
    -104,   -64,  -629,  -106,   545,  -629,  -629,  -629,  -629,  -629,
    -629,   524,  -629,  -629,  -629,   -11,  -629,  -629,  -629,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,   523,    34,
    -629,    73,  -629,   180,  -629,  -194,  -629,  -629,  -629,  -629,
     595,  -629,  -629,   552,   528,   516,  -629,  -629,  -629,    80,
    -629,  -582,  -398,  -552,  -134,  -629,   446,  -415,   355,   241,
     175,  -629,  -629,    38,  -629,  -629,  -629,  -629,    43,   300,
    -629,  -629,  -629,   438,   217,   215,  -283,  -629,  -629,   137,
    -629,  -629,  -629,  -629,   537,   135,  -629,  -629,  -629,  -629,
    -629,  -629,   538,  -629,  -629,  -629,  -629,  -629,    -4,  -244,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,   -30,  -629,
    -629,  -629,  -148,    -2,  -629,   234,  -629,  -629,  -245,  -629,
    -180,  -452,  -579,  -629,  -629,  -629,  -629,  -403,  -629,  -629,
    -629,  -629,  -629,   124,  -629,  -629,    28,    53,  -629,  -604,
    -629,     9,  -629,  -629,  -629,  -629,  -629,  -629,    48,  -576,
      -3,  -629,  -629,  -629,  -628,  -629,  -629,  -629,  -629,   390,
    -629,  -629,  -629,    63,  -629,  -629,   185,   187,  -629,   138,
    -629,  -629,  -629,   140,  -629,  -629,  -629,  -629,  -629,  -629,
      91,  -629,  -629,  -629,  -468,  -629,  -629,   -50,   113,    45,
      71,    87,  -629,  -629,  -629,  -629,   463,  -629,   249,  -146,
    -629,    96,  -629,  -629,  -519,  -629,   440,   454,   435,   442,
     456,    99,  -629,   101,    85,    97,  -157,   123,   243,  -629,
     264,   398,   407,  -629,  -629,  -629
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    24,    51,    10,   356,   119,   120,   121,   122,
     123,   124,   125,   499,    73,    90,    91,   181,    97,   136,
     137,   164,   165,   187,   188,   202,     3,     4,     5,     6,
       9,    12,    13,    14,    15,    16,    17,    25,   173,   358,
      27,    63,    76,    66,   134,    64,    74,    92,    77,    67,
      81,   100,   135,   515,   183,   269,   258,   484,   557,   485,
     559,   486,   500,   571,    98,   259,   400,   490,   338,   460,
     565,   566,   612,   567,   568,   491,   561,   609,   562,   457,
     260,   261,   401,   402,   494,   359,   203,    28,    83,   142,
     170,   103,   104,   143,   105,   516,   171,    29,    88,   126,
     127,   152,   128,   129,   154,   179,   262,   263,   264,    31,
      85,   108,    86,   109,   146,   174,   249,   250,   572,   573,
     574,   614,   361,   362,   481,   363,   364,   365,   366,   367,
     368,   638,   369,   370,   371,   640,   372,   373,   374,   375,
     641,   376,   377,   581,   669,   620,   666,   621,   667,   622,
     690,   664,   378,   642,   379,   380,   643,   381,   533,   470,
     702,   644,   534,   703,   535,   592,   382,   645,   383,   464,
     384,   385,   386,   387,   388,   389,   549,   550,   603,   551,
     651,   684,   711,   602,   390,   655,   477,   598,   543,   599,
     544,   545,   445,   446,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   296,   213,   214,   408,   501,   409,   215,
     216,   217,   218,   309,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   155,   239
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    79,   586,   246,   166,   416,   608,   546,   255,   360,
      33,    94,   268,    30,   504,   639,   668,   632,   150,   475,
      79,    20,   244,   456,  -150,   131,   492,   425,   660,   118,
     310,   265,   177,   163,   275,   265,   278,   279,   280,   281,
     316,  -337,    78,    96,   287,   524,   277,    78,   704,   -59,
       1,    26,   336,    78,    80,   288,   694,   163,  -337,   161,
       7,   336,   692,   147,    80,   532,   618,   289,     8,   268,
     317,   619,   290,    80,   336,   167,    80,   444,    80,   618,
      23,   270,   271,   162,   619,   556,   148,   291,   162,   497,
     185,   311,   265,   526,   253,   527,   144,   245,   639,   665,
     418,   110,   712,   111,    21,   704,   112,   587,   253,   483,
     689,   113,   692,  -150,   186,   493,   266,   114,   691,   -35,
     118,    32,   157,   115,    53,   116,    80,   502,    80,   288,
      68,    69,   659,   283,  -448,   117,    54,    99,  -448,   417,
     415,   289,   639,   639,   728,   423,   290,    11,   334,   428,
      80,   414,    18,   639,    20,   639,   422,   149,    19,   639,
     427,   291,  -256,   430,   431,   467,   410,    80,  -256,    80,
     248,   452,   453,   454,    80,    80,   407,   411,    99,  -256,
     272,   546,   272,   272,   272,   272,    80,    34,   335,   458,
     272,    52,   328,    35,   277,   665,   462,   335,   406,   329,
      55,   284,   471,   391,   476,   474,   285,    59,   247,   479,
     335,   330,   418,   256,    56,   293,    57,   256,   443,    60,
     294,   -35,   579,   531,   419,   705,   582,   420,   675,   672,
     542,   288,   333,   410,   585,    80,   273,   360,   273,   273,
     273,   273,   357,   289,    80,    99,   273,   495,   290,   360,
     511,    58,   458,   618,   276,   512,    95,    80,   619,   282,
     496,    61,   274,   291,   274,   274,   274,   274,   130,   729,
     730,  -255,   274,   532,   256,   532,   461,  -255,   335,    96,
     735,   525,   737,   520,   318,    62,   739,   319,  -255,   323,
     320,   321,    65,   253,    70,   391,   324,   254,   325,    71,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,    80,   272,   272,   272,   272,   272,   272,   272,   272,
      72,   564,    75,   536,   322,    80,   538,   539,    78,   552,
     532,   253,   553,   326,    82,   267,    84,   327,   331,   253,
     392,   671,   332,  -170,  -449,    87,  -450,    89,  -449,   393,
    -450,   575,   564,    93,   510,    96,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,    99,   273,   273,
     273,   273,   273,   273,   273,   273,   394,   498,   584,   101,
     589,   503,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   272,   274,   274,   274,   274,   274,   274,
     274,   274,   421,   102,   542,   107,   426,    80,   447,   448,
     449,   391,   575,   132,   637,   437,   438,   133,   391,   439,
     440,   441,   442,   450,   451,   560,   656,   -46,   138,   650,
     496,   391,   392,   706,   139,    53,   140,   141,   145,   153,
     151,   393,   158,   391,   629,   630,   160,   471,   647,   273,
     168,   169,  -387,   652,   172,  -387,   175,   357,   176,  -387,
     177,   178,  -387,   241,   541,   180,  -387,   243,   394,   251,
     357,  -387,   360,   286,   295,   274,   292,  -387,    80,  -387,
     312,   313,   357,   314,  -387,   315,  -387,   404,   405,   406,
     564,  -387,   413,   459,   701,   424,   395,   525,   429,   463,
     468,   710,   480,   482,   469,   472,   610,   473,   478,   483,
     272,   487,   489,   492,   505,   149,   575,   396,   506,   507,
     547,   508,   696,   509,   698,   513,   517,   514,   518,   519,
     -19,   521,   523,   708,   709,   528,   583,   713,   726,   529,
     461,   637,   656,   537,   391,   530,   274,  -387,   392,   540,
      78,   554,   701,    80,   710,   392,   391,   393,   726,   253,
      20,   189,   190,   493,   393,   558,   273,  -133,   392,   548,
     340,   590,   570,   727,   471,   194,   576,   393,   578,   196,
     392,   391,   593,   591,   394,   594,   683,   580,   395,   393,
     595,   394,   274,   596,   560,   600,   597,   606,   110,   613,
     111,   601,  -314,   112,   394,   607,   611,   272,   113,   396,
     617,   623,   624,   625,   114,   626,   394,   627,   628,   649,
     115,   648,   116,   663,   391,   631,   391,   391,   391,   658,
     670,   391,   117,   197,   661,   662,   673,   674,   541,    80,
     678,   677,   676,   679,   353,   198,   680,    80,   200,   685,
     687,   397,   681,  -228,   693,   699,   714,   700,   715,   731,
     398,   719,   717,   273,   718,   720,   391,   357,   391,   721,
     722,   391,   391,   723,   732,   733,   738,   156,   734,   106,
     182,   392,   391,   391,   391,   184,   159,   657,   391,   274,
     393,   455,   337,   392,   547,   257,   522,   240,   588,   688,
     488,   686,   393,   272,   395,   357,   403,   563,   569,   242,
     615,   395,    80,   616,   725,   555,   252,   394,   392,   646,
     274,   716,   695,   724,   395,   396,   707,   393,  -388,   394,
     736,  -388,   396,   697,   465,  -388,   395,   604,  -388,   605,
     682,   653,  -388,   397,   654,   396,   412,  -388,   434,     0,
     577,   432,   398,  -388,   394,  -388,   435,   396,     0,   273,
    -388,   392,  -388,   392,   392,   392,   433,  -388,   392,     0,
     393,   436,   393,   393,   393,     0,     0,   393,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
      78,     0,    20,   189,   190,   191,     0,   394,     0,   394,
     394,   394,   192,   392,   394,   392,   193,   194,   392,   392,
     195,   196,   393,     0,   393,     0,     0,   393,   393,   392,
     392,   392,     0,  -388,     0,   392,     0,     0,   393,   393,
     393,     0,     0,     0,   393,   176,     0,   395,   110,   394,
     111,   394,     0,   112,   394,   394,     0,     0,   113,   395,
       0,     0,    78,     0,   114,   394,   394,   394,   396,   397,
     115,   394,   116,     0,     0,   197,   397,     0,   398,     0,
     396,     0,   117,     0,   395,   398,     0,   198,   199,   397,
     200,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,   397,     0,     0,     0,   396,   201,     0,    36,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,   395,     0,   395,
     395,   395,     0,     0,   395,     0,     0,     0,    41,    42,
      43,     0,     0,    45,     0,    46,    47,     0,   396,     0,
     396,   396,   396,    48,    49,   396,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,   395,     0,     0,   395,   395,     0,     0,     0,    20,
     189,   190,   191,     0,     0,   395,   395,   395,     0,   192,
     396,   395,   396,   193,   194,   396,   396,   195,   196,     0,
       0,     0,   397,     0,     0,     0,   396,   396,   396,     0,
       0,   398,   396,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,   110,     0,   111,
       0,     0,   112,     0,     0,     0,     0,   113,     0,   397,
       0,     0,     0,   114,     0,     0,     0,     0,   398,   115,
       0,   116,   197,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   198,   199,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,   201,   397,   397,   397,     0,     0,   397,
       0,   398,     0,   398,   398,   398,     0,     0,   398,    20,
     189,   190,   191,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,   193,   194,     0,     0,   195,   196,     0,
       0,     0,     0,     0,   397,     0,   397,     0,     0,   397,
     397,     0,     0,   398,     0,   398,     0,     0,   398,   398,
     397,   397,   397,     0,     0,     0,   397,     0,     0,   398,
     398,   398,     0,     0,     0,   398,    20,   189,   190,   191,
       0,     0,     0,     0,     0,     0,   192,     0,     0,     0,
     193,   194,   197,     0,   195,   196,    20,   189,   190,   191,
       0,     0,     0,     0,   198,   199,   192,   200,   351,     0,
     193,   194,     0,     0,   195,   196,     0,     0,   253,     0,
       0,     0,     0,   201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   339,   189,
     190,     0,     0,     0,     0,     0,     0,     0,   340,   197,
       0,     0,     0,   194,     0,     0,     0,   196,     0,     0,
       0,   198,   199,     0,   200,     0,   341,     0,     0,   197,
       0,     0,     0,     0,     0,   497,     0,     0,     0,     0,
     201,   198,   199,     0,   200,   342,   110,   343,   111,  -210,
       0,   112,     0,   344,  -210,   345,   113,     0,     0,     0,
     201,     0,   114,   346,   347,     0,     0,     0,   115,     0,
     116,   197,     0,     0,     0,     0,     0,     0,   348,     0,
     117,     0,     0,   198,   349,   350,   200,   351,   339,   189,
     190,   352,   353,     0,    36,   354,   355,   253,   340,     0,
       0,  -210,    37,   194,     0,     0,     0,   196,    38,     0,
      39,     0,     0,     0,     0,     0,   341,     0,     0,    40,
       0,     0,     0,     0,    41,    42,    43,    44,     0,    45,
       0,    46,    47,     0,     0,   342,   110,   343,   111,    48,
      49,   112,     0,   344,    50,   345,   113,     0,     0,     0,
       0,     0,   114,   346,   347,     0,     0,     0,   115,     0,
     116,   197,     0,     0,     0,     0,     0,     0,   348,     0,
     117,     0,     0,   198,   349,   350,   200,   351,   339,   189,
     190,   352,   353,     0,     0,   354,   355,   253,   340,     0,
       0,  -153,     0,   194,     0,     0,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,   110,   343,   111,   618,
       0,   112,     0,   344,   619,   345,   113,     0,     0,     0,
       0,     0,   114,   346,   347,     0,     0,     0,   115,     0,
     116,   197,     0,     0,     0,     0,     0,     0,   348,     0,
     117,     0,     0,   198,   349,   350,   200,   351,   466,   189,
     190,   352,   353,     0,     0,   354,   355,   253,   340,     0,
       0,     0,     0,   194,     0,     0,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,   633,   189,   190,     0,     0,     0,     0,
       0,     0,     0,   340,     0,   342,     0,   343,   194,     0,
       0,     0,   196,   344,     0,   345,     0,     0,     0,     0,
       0,   341,     0,   346,   347,     0,     0,     0,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,   348,     0,
     342,     0,   343,   198,   349,   350,   200,   351,   344,     0,
     345,   352,     0,     0,    78,   354,   355,   253,   634,   635,
       0,     0,     0,     0,     0,     0,   197,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,     0,   198,   349,
     350,   200,   351,    62,     0,     0,   352,     0,     0,     0,
     636,   355,   253,     0,   399,     0,     0,     0,     0,     0,
      36,     0,   110,     0,   111,     0,     0,   112,    37,     0,
       0,     0,   113,     0,    38,     0,    39,     0,   114,     0,
       0,     0,     0,    62,   115,    40,   116,     0,     0,     0,
      41,    42,    43,    44,    78,    45,   117,    46,    47,     0,
      36,     0,   110,     0,   111,    48,    49,   112,    37,   334,
      50,     0,   113,     0,    38,     0,    39,     0,   114,     0,
       0,     0,     0,     0,   115,    40,   116,     0,     0,     0,
      41,    42,    43,    44,     0,    45,   117,    46,    47,     0,
      36,     0,   110,     0,   111,    48,    49,   112,     0,   334,
      50,     0,   113,     0,     0,     0,    39,     0,   114,     0,
       0,     0,     0,     0,   115,     0,   116,     0,     0,     0,
      41,    42,    43,     0,     0,    45,   117,    46,    47,     0,
       0,     0,     0,     0,  -386,    48,    49,  -386,   288,     0,
      50,  -386,     0,     0,  -386,     0,     0,     0,  -386,     0,
     289,     0,     0,  -386,     0,   290,     0,   297,     0,  -386,
     298,  -386,     0,     0,   299,     0,  -386,   300,  -386,     0,
     291,   301,     0,  -386,     0,     0,   302,     0,    78,   189,
     190,     0,   303,     0,   304,    78,   189,   190,   340,   305,
       0,   306,     0,   194,     0,   340,   307,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,   111,  -386,
       0,   112,     0,   110,     0,   111,   113,     0,   112,     0,
       0,     0,   114,   113,     0,     0,     0,     0,   115,   114,
     116,   197,   308,     0,     0,   115,     0,   116,   197,     0,
     117,     0,     0,   198,     0,     0,   200,   117,     0,     0,
     198,     0,   353,   200,     0,     0,     0,     0,     0,   353
};

static const yytype_int16 yycheck[] =
{
      11,    65,   521,   174,   138,   288,   558,   475,   179,   253,
      21,    75,   183,    17,   412,   594,   620,   593,   124,    13,
      84,     3,    31,    31,    13,    89,    13,     3,   610,    87,
      44,   179,    45,   137,   191,   183,   193,   194,   195,   196,
       7,    14,     3,    32,   201,   460,   192,     3,   676,     0,
      77,    17,   246,     3,    65,    13,    31,   161,    31,    20,
       3,   255,   666,     3,    75,   468,    54,    25,     0,   240,
      37,    59,    30,    84,   268,   139,    87,   322,    89,    54,
      31,   185,   186,    44,    59,   483,    26,    45,    44,   102,
      64,   105,   240,    29,   102,    31,   107,   106,   677,   618,
      76,    51,   684,    53,    86,   733,    56,   522,   102,     3,
     662,    61,   716,   102,    88,   102,   180,    67,   106,     3,
     178,     3,   133,    73,     3,    75,   137,   410,   139,    13,
      57,    58,    26,   197,    18,    85,    15,    25,    22,     3,
     286,    25,   721,   722,   720,   291,    30,    71,    98,   295,
     161,   285,    25,   732,     3,   734,   290,    45,    31,   738,
     294,    45,    14,   309,   310,   345,    13,   178,    20,   180,
     174,   328,   329,   330,   185,   186,   282,   283,    25,    31,
     191,   649,   193,   194,   195,   196,   197,    25,   246,   337,
     201,    25,     8,    31,   340,   714,   342,   255,    45,    15,
       3,    25,   348,   253,   352,   351,    30,     3,   174,   355,
     268,    27,    76,   179,     3,    25,     3,   183,   322,    15,
      30,     3,   505,   468,    88,   677,   509,    91,   631,   627,
     475,    13,   243,    13,   517,   246,   191,   481,   193,   194,
     195,   196,   253,    25,   255,    25,   201,   404,    30,   493,
      25,     3,   400,    54,   192,    30,    76,   268,    59,   197,
     406,    31,   191,    45,   193,   194,   195,   196,    88,   721,
     722,    14,   201,   676,   240,   678,    29,    20,   336,    32,
     732,   461,   734,   429,    32,    32,   738,    35,    31,    33,
      38,    39,    70,   102,    31,   345,    40,   106,    42,    31,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       3,   492,    64,   469,    72,   336,   472,   473,     3,   477,
     733,   102,   478,    17,   102,   106,    64,    21,    18,   102,
     253,   624,    22,   106,    18,    13,    18,    64,    22,   253,
      22,   497,   523,    38,   418,    32,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    25,   323,   324,
     325,   326,   327,   328,   329,   330,   253,   407,   512,    25,
     526,   411,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   404,   323,   324,   325,   326,   327,   328,
     329,   330,   289,     3,   649,    78,   293,   418,   323,   324,
     325,   461,   558,    20,   594,   316,   317,    78,   468,   318,
     319,   320,   321,   326,   327,   489,   606,    38,     3,   600,
     576,   481,   345,   678,    20,     3,    45,    20,   102,   102,
      14,   345,   102,   493,   590,   591,    38,   593,   596,   404,
      13,    31,     9,   601,    20,    12,     3,   468,    46,    16,
      45,    20,    19,   106,   475,    10,    23,    20,   345,    46,
     481,    28,   716,    13,    45,   404,    14,    34,   489,    36,
      11,   103,   493,    47,    41,    10,    43,    14,    14,    45,
     661,    48,     3,     3,   674,    46,   253,   677,    20,     3,
      13,   681,   106,    31,    13,    13,   564,    13,    13,     3,
     521,    31,    93,    13,    13,    45,   662,   253,     3,    14,
     475,    14,   670,    13,   670,     3,    13,    46,     3,    46,
       3,    29,    13,   679,   680,    31,     3,   685,   718,    31,
      29,   721,   722,    31,   594,   100,   475,   104,   461,    31,
       3,    31,   732,   564,   734,   468,   606,   461,   738,   102,
       3,     4,     5,   102,   468,    36,   521,    14,   481,    55,
      13,    13,    46,   719,   720,    18,    45,   481,    14,    22,
     493,   631,    31,    29,   461,    14,   650,   102,   345,   493,
      14,   468,   521,    14,   658,    13,    31,    14,    51,   106,
      53,    66,    66,    56,   481,    20,    14,   618,    61,   345,
      14,    14,    13,     3,    67,    14,   493,    14,    31,    31,
      73,    14,    75,   106,   674,    20,   676,   677,   678,    20,
      24,   681,    85,    76,    20,    20,    14,    14,   649,   650,
      13,    29,    31,    13,    97,    88,    13,   658,    91,    14,
       3,   253,    62,    62,    29,    14,    20,    31,    29,   723,
     253,    29,    31,   618,    14,    31,   716,   678,   718,    14,
      14,   721,   722,   103,    14,    31,    14,   132,    62,    84,
     157,   594,   732,   733,   734,   161,   134,   607,   738,   618,
     594,   336,   246,   606,   649,   179,   455,   169,   523,   661,
     400,   658,   606,   714,   461,   716,   268,   490,   493,   172,
     573,   468,   723,   578,   716,   481,   178,   594,   631,   595,
     649,   693,   669,   714,   481,   461,   678,   631,     9,   606,
     733,    12,   468,   670,   344,    16,   493,   552,    19,   552,
     649,   603,    23,   345,   604,   481,   283,    28,   313,    -1,
     501,   311,   345,    34,   631,    36,   314,   493,    -1,   714,
      41,   674,    43,   676,   677,   678,   312,    48,   681,    -1,
     674,   315,   676,   677,   678,    -1,    -1,   681,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   714,    -1,    -1,    -1,    -1,
       3,    -1,     3,     4,     5,     6,    -1,   674,    -1,   676,
     677,   678,    13,   716,   681,   718,    17,    18,   721,   722,
      21,    22,   716,    -1,   718,    -1,    -1,   721,   722,   732,
     733,   734,    -1,   104,    -1,   738,    -1,    -1,   732,   733,
     734,    -1,    -1,    -1,   738,    46,    -1,   594,    51,   716,
      53,   718,    -1,    56,   721,   722,    -1,    -1,    61,   606,
      -1,    -1,     3,    -1,    67,   732,   733,   734,   594,   461,
      73,   738,    75,    -1,    -1,    76,   468,    -1,   461,    -1,
     606,    -1,    85,    -1,   631,   468,    -1,    88,    89,   481,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,
      -1,   493,    -1,    -1,    -1,   631,   107,    -1,    49,    -1,
     493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,   674,    -1,   676,
     677,   678,    -1,    -1,   681,    -1,    -1,    -1,    79,    80,
      81,    -1,    -1,    84,    -1,    86,    87,    -1,   674,    -1,
     676,   677,   678,    94,    95,   681,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   716,
      -1,   718,    -1,    -1,   721,   722,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,   732,   733,   734,    -1,    13,
     716,   738,   718,    17,    18,   721,   722,    21,    22,    -1,
      -1,    -1,   594,    -1,    -1,    -1,   732,   733,   734,    -1,
      -1,   594,   738,    -1,   606,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   606,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,   631,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,   631,    73,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   674,   107,   676,   677,   678,    -1,    -1,   681,
      -1,   674,    -1,   676,   677,   678,    -1,    -1,   681,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,   716,    -1,   718,    -1,    -1,   721,
     722,    -1,    -1,   716,    -1,   718,    -1,    -1,   721,   722,
     732,   733,   734,    -1,    -1,    -1,   738,    -1,    -1,   732,
     733,   734,    -1,    -1,    -1,   738,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    76,    -1,    21,    22,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    88,    89,    13,    91,    92,    -1,
      17,    18,    -1,    -1,    21,    22,    -1,    -1,   102,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    76,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    88,    89,    -1,    91,    -1,    31,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
     107,    88,    89,    -1,    91,    50,    51,    52,    53,    54,
      -1,    56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
     107,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    88,    89,    90,    91,    92,     3,     4,
       5,    96,    97,    -1,    49,   100,   101,   102,    13,    -1,
      -1,   106,    57,    18,    -1,    -1,    -1,    22,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    -1,    -1,    50,    51,    52,    53,    94,
      95,    56,    -1,    58,    99,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    88,    89,    90,    91,    92,     3,     4,
       5,    96,    97,    -1,    -1,   100,   101,   102,    13,    -1,
      -1,   106,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    88,    89,    90,    91,    92,     3,     4,
       5,    96,    97,    -1,    -1,   100,   101,   102,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    50,    -1,    52,    18,    -1,
      -1,    -1,    22,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      50,    -1,    52,    88,    89,    90,    91,    92,    58,    -1,
      60,    96,    -1,    -1,     3,   100,   101,   102,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    32,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,    32,    73,    74,    75,    -1,    -1,    -1,
      79,    80,    81,    82,     3,    84,    85,    86,    87,    -1,
      49,    -1,    51,    -1,    53,    94,    95,    56,    57,    98,
      99,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    85,    86,    87,    -1,
      49,    -1,    51,    -1,    53,    94,    95,    56,    -1,    98,
      99,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,     9,    94,    95,    12,    13,    -1,
      99,    16,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,
      25,    -1,    -1,    28,    -1,    30,    -1,     9,    -1,    34,
      12,    36,    -1,    -1,    16,    -1,    41,    19,    43,    -1,
      45,    23,    -1,    48,    -1,    -1,    28,    -1,     3,     4,
       5,    -1,    34,    -1,    36,     3,     4,     5,    13,    41,
      -1,    43,    -1,    18,    -1,    13,    48,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,   104,
      -1,    56,    -1,    51,    -1,    53,    61,    -1,    56,    -1,
      -1,    -1,    67,    61,    -1,    -1,    -1,    -1,    73,    67,
      75,    76,   104,    -1,    -1,    73,    -1,    75,    76,    -1,
      85,    -1,    -1,    88,    -1,    -1,    91,    85,    -1,    -1,
      88,    -1,    97,    91,    -1,    -1,    -1,    -1,    -1,    97
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    77,   109,   134,   135,   136,   137,     3,     0,   138,
     112,    71,   139,   140,   141,   142,   143,   144,    25,    31,
       3,    86,   133,    31,   110,   145,   147,   148,   195,   205,
     216,   217,     3,   133,    25,    31,    49,    57,    63,    65,
      74,    79,    80,    81,    82,    84,    86,    87,    94,    95,
      99,   111,    25,     3,    15,     3,     3,     3,     3,     3,
      15,    31,    32,   149,   153,    70,   151,   157,   149,   149,
      31,    31,     3,   122,   154,    64,   150,   156,     3,   119,
     133,   158,   102,   196,    64,   218,   220,    13,   206,    64,
     123,   124,   155,    38,   119,   151,    32,   126,   172,    25,
     159,    25,     3,   199,   200,   202,   158,    78,   219,   221,
      51,    53,    56,    61,    67,    73,    75,    85,   113,   114,
     115,   116,   117,   118,   119,   120,   207,   208,   210,   211,
     151,   119,    20,    78,   152,   160,   127,   128,     3,    20,
      45,    20,   197,   201,   133,   102,   222,     3,    26,    45,
     121,    14,   209,   102,   212,   342,   122,   133,   102,   161,
      38,    20,    44,   118,   129,   130,   172,   119,    13,    31,
     198,   204,    20,   146,   223,     3,    46,    45,    20,   213,
      10,   125,   146,   162,   129,    64,    88,   131,   132,     4,
       5,     6,    13,    17,    18,    21,    22,    76,    88,    89,
      91,   107,   133,   194,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   312,   313,   317,   318,   319,   320,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   343,
     162,   106,   202,    20,    31,   106,   110,   147,   216,   224,
     225,    46,   210,   102,   106,   110,   147,   163,   164,   173,
     188,   189,   214,   215,   216,   230,   119,   106,   110,   163,
     118,   118,   133,   307,   308,   334,   114,   317,   334,   334,
     334,   334,   114,   119,    25,    30,    13,   334,    13,    25,
      30,    45,    14,    25,    30,    45,   311,     9,    12,    16,
      19,    23,    28,    34,    36,    41,    43,    48,   104,   321,
      44,   105,    11,   103,    47,    10,     7,    37,    32,    35,
      38,    39,    72,    33,    40,    42,    17,    21,     8,    15,
      27,    18,    22,   133,    98,   113,   153,   174,   176,     3,
      13,    31,    50,    52,    58,    60,    68,    69,    83,    89,
      90,    92,    96,    97,   100,   101,   113,   133,   147,   193,
     217,   230,   231,   233,   234,   235,   236,   237,   238,   240,
     241,   242,   244,   245,   246,   247,   249,   250,   260,   262,
     263,   265,   274,   276,   278,   279,   280,   281,   282,   283,
     292,   305,   309,   319,   335,   336,   338,   339,   340,     3,
     174,   190,   191,   191,    14,    14,    45,   121,   314,   316,
      13,   121,   314,     3,   172,   317,   194,     3,    76,    88,
      91,   306,   172,   317,    46,     3,   306,   172,   317,    20,
     317,   317,   324,   325,   326,   327,   328,   329,   329,   331,
     331,   331,   331,   118,   236,   300,   301,   332,   332,   332,
     333,   333,   334,   334,   334,   176,    31,   187,   230,     3,
     177,    29,   317,     3,   277,   277,     3,   238,    13,    13,
     267,   317,    13,    13,   317,    13,   230,   294,    13,   317,
     106,   232,    31,     3,   165,   167,   169,    31,   187,    93,
     175,   183,    13,   102,   192,   334,   317,   102,   226,   121,
     170,   315,   194,   226,   170,    13,     3,    14,    14,    13,
     119,    25,    30,     3,    46,   161,   203,    13,     3,    46,
     317,    29,   177,    13,   175,   238,    29,    31,    31,    31,
     100,   236,   245,   266,   270,   272,   317,    31,   317,   317,
      31,   133,   236,   296,   298,   299,   302,   307,    55,   284,
     285,   287,   230,   317,    31,   233,   170,   166,    36,   168,
     119,   184,   186,   192,   110,   178,   179,   181,   182,   193,
      46,   171,   226,   227,   228,   317,    45,   316,    14,   194,
     102,   251,   194,     3,   172,   194,   322,   175,   178,   317,
      13,    29,   273,    31,    14,    14,    14,    31,   295,   297,
      13,    66,   291,   286,   284,   285,    14,    20,   171,   185,
     113,    14,   180,   106,   229,   197,   203,    14,    54,    59,
     253,   255,   257,    14,    13,     3,    14,    14,    31,   317,
     317,    20,   267,     3,    68,    69,   100,   238,   239,   240,
     243,   248,   261,   264,   269,   275,   251,   230,    14,    31,
     110,   288,   230,   287,   291,   293,   238,   167,    20,    26,
     169,    20,    20,   106,   259,   322,   254,   256,   257,   252,
      24,   194,   170,    14,    14,   245,    31,    29,    13,    13,
      13,    62,   298,   119,   289,    14,   186,     3,   181,   171,
     258,   106,   257,    29,    31,   255,   230,   281,   317,    14,
      31,   238,   268,   271,   272,   239,   236,   266,   317,   317,
     238,   290,   169,   230,    20,    29,   254,    31,    14,    29,
      31,    14,    14,   103,   259,   231,   238,   317,   267,   239,
     239,   119,    14,    31,    62,   239,   268,   239,    14,   239
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   108,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   120,   121,   121,   122,
     123,   123,   124,   125,   126,   127,   127,   128,   128,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   134,   135,
     136,   136,   137,   138,   138,   139,   139,   139,   139,   140,
     141,   142,   143,   144,   144,   145,   145,   145,   146,   146,
     147,   147,   147,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   154,   155,   155,   156,   157,   158,   159,
     159,   160,   161,   162,   162,   163,   163,   163,   164,   164,
     164,   165,   166,   166,   167,   168,   168,   169,   170,   170,
     171,   171,   172,   172,   173,   174,   174,   175,   175,   176,
     176,   177,   178,   178,   179,   180,   180,   181,   181,   182,
     183,   184,   185,   185,   186,   187,   187,   188,   189,   190,
     191,   192,   193,   193,   194,   194,   195,   196,   197,   197,
     198,   198,   199,   199,   200,   201,   201,   202,   203,   203,
     204,   205,   206,   207,   207,   208,   209,   209,   210,   210,
     211,   212,   213,   213,   214,   214,   215,   216,   217,   218,
     218,   219,   219,   220,   221,   222,   223,   223,   224,   224,
     224,   224,   225,   226,   227,   227,   228,   229,   229,   230,
     231,   232,   232,   233,   233,   233,   234,   234,   235,   236,
     237,   237,   238,   238,   238,   238,   238,   238,   239,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   242,   243,   244,
     245,   245,   245,   245,   245,   245,   245,   246,   247,   248,
     249,   249,   250,   251,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   255,   256,   257,   257,   258,   258,   259,
     260,   261,   262,   263,   263,   264,   264,   265,   266,   266,
     267,   267,   268,   268,   269,   270,   270,   271,   272,   273,
     273,   274,   275,   276,   277,   277,   278,   279,   280,   281,
     282,   283,   283,   283,   284,   284,   285,   286,   286,   287,
     288,   289,   290,   290,   291,   292,   293,   293,   294,   295,
     295,   296,   297,   297,   298,   298,   299,   299,   300,   301,
     302,   302,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   304,   304,   305,   305,   305,   306,   307,   307,   307,
     308,   308,   309,   309,   309,   309,   309,   310,   311,   311,
     312,   312,   312,   312,   313,   313,   313,   313,   314,   315,
     315,   316,   317,   318,   318,   319,   320,   320,   320,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   322,   322,   323,   323,   324,   324,   325,   325,   326,
     326,   327,   327,   328,   328,   328,   329,   329,   329,   329,
     329,   329,   330,   330,   331,   331,   331,   331,   332,   332,
     332,   333,   333,   333,   333,   334,   334,   334,   334,   334,
     335,   336,   337,   337,   337,   337,   337,   338,   338,   338,
     338,   339,   340,   341,   342,   342,   343
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     2,     2,     3,     2,
       1,     0,     3,     2,     3,     2,     0,     3,     0,     1,
       1,     2,     1,     0,     2,     2,     1,     3,     1,     3,
       1,     0,     4,     2,     0,     1,     1,     1,     1,     3,
       5,     6,     6,     2,     0,     1,     1,     1,     3,     0,
       1,     1,     1,     8,     1,     0,     1,     0,     1,     0,
       1,     0,     3,     2,     3,     0,     2,     2,     2,     3,
       0,     3,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     3,     0,     2,     2,     0,     2,     1,     0,
       1,     1,     1,     0,     3,     3,     4,     1,     0,     1,
       1,     5,     1,     0,     2,     3,     0,     3,     1,     4,
       2,     2,     3,     0,     1,     1,     1,     1,     4,     4,
       1,     3,     1,     0,     1,     0,     5,     5,     1,     0,
       1,     0,     1,     0,     2,     3,     0,     7,     1,     0,
       2,     7,     3,     1,     0,     2,     3,     0,     2,     1,
       3,     3,     2,     0,     1,     1,     3,     1,     7,     1,
       0,     1,     0,     2,     3,     3,     2,     0,     1,     1,
       1,     1,     3,     4,     1,     0,     2,     3,     0,     3,
       2,     2,     0,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       3,     5,     5,     4,     4,     2,     0,     2,     0,     3,
       0,     4,     3,     3,     4,     3,     1,     3,     0,     1,
       5,     5,     7,     1,     1,     1,     1,     9,     1,     0,
       1,     0,     1,     0,     9,     1,     1,     1,     2,     3,
       0,     7,     7,     3,     1,     0,     3,     3,     3,     3,
       5,     3,     4,     1,     1,     0,     2,     2,     0,     5,
       3,     2,     3,     0,     2,     5,     1,     0,     4,     1,
       0,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     6,     3,     3,     5,
       4,     4,     4,     6,     6,     6,     8,     2,     3,     0,
       4,     4,     4,     6,     4,     4,     4,     4,     2,     2,
       0,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     2,     0,     5
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






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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
      yychar = yylex (&yylval);
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
  case 2: /* input: compilation_unit  */
#line 387 "parser.y"
                                        {(yyval.i)=createNode("input");startNode=(yyval.i);if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2316 "parser.tab.c"
    break;

  case 3: /* modifier.multiopt: modifier.multiopt modifier  */
#line 390 "parser.y"
                                                {(yyval.i)=createNode("modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2322 "parser.tab.c"
    break;

  case 4: /* modifier.multiopt: %empty  */
#line 391 "parser.y"
                                {(yyval.i)=-1;}
#line 2328 "parser.tab.c"
    break;

  case 5: /* modifier: "public"  */
#line 394 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2334 "parser.tab.c"
    break;

  case 6: /* modifier: "protected"  */
#line 395 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2340 "parser.tab.c"
    break;

  case 7: /* modifier: "private"  */
#line 396 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2346 "parser.tab.c"
    break;

  case 8: /* modifier: "abstract"  */
#line 397 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2352 "parser.tab.c"
    break;

  case 9: /* modifier: "static"  */
#line 398 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2358 "parser.tab.c"
    break;

  case 10: /* modifier: "final"  */
#line 399 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2364 "parser.tab.c"
    break;

  case 11: /* modifier: "sealed"  */
#line 400 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2370 "parser.tab.c"
    break;

  case 12: /* modifier: "strictfp"  */
#line 401 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2376 "parser.tab.c"
    break;

  case 13: /* modifier: "transitive"  */
#line 402 "parser.y"
                                        {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2382 "parser.tab.c"
    break;

  case 14: /* modifier: "transient"  */
#line 403 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2388 "parser.tab.c"
    break;

  case 15: /* modifier: "volatile"  */
#line 404 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2394 "parser.tab.c"
    break;

  case 16: /* dot_ind.multiopt: dot_ind.multiopt "." TOK_IDENTIFIER  */
#line 407 "parser.y"
                                                                {(yyval.i)=createNode("dot_ind.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2400 "parser.tab.c"
    break;

  case 17: /* dot_ind.multiopt: %empty  */
#line 408 "parser.y"
                                {(yyval.i)=-1;}
#line 2406 "parser.tab.c"
    break;

  case 18: /* type: primitive_type  */
#line 412 "parser.y"
                                        {(yyval.i)=createNode("type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2412 "parser.tab.c"
    break;

  case 19: /* type: reference_type  */
#line 413 "parser.y"
                                        {(yyval.i)=createNode("type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2418 "parser.tab.c"
    break;

  case 20: /* primitive_type: numeric_type  */
#line 416 "parser.y"
                                {(yyval.i)=createNode("primitive_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2424 "parser.tab.c"
    break;

  case 21: /* primitive_type: "boolean"  */
#line 417 "parser.y"
                                {(yyval.i)=createNode("primitive_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2430 "parser.tab.c"
    break;

  case 22: /* numeric_type: integral_type  */
#line 420 "parser.y"
                                {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2436 "parser.tab.c"
    break;

  case 23: /* numeric_type: floating_point_type  */
#line 421 "parser.y"
                                        {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2442 "parser.tab.c"
    break;

  case 24: /* integral_type: "byte"  */
#line 424 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "byte";}
#line 2448 "parser.tab.c"
    break;

  case 25: /* integral_type: "short"  */
#line 425 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "short";}
#line 2454 "parser.tab.c"
    break;

  case 26: /* integral_type: "int"  */
#line 426 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "int";}
#line 2460 "parser.tab.c"
    break;

  case 27: /* integral_type: "long"  */
#line 427 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "long";}
#line 2466 "parser.tab.c"
    break;

  case 28: /* integral_type: "char"  */
#line 428 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "char";}
#line 2472 "parser.tab.c"
    break;

  case 29: /* floating_point_type: "float"  */
#line 431 "parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "float";}
#line 2478 "parser.tab.c"
    break;

  case 30: /* floating_point_type: "double"  */
#line 432 "parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = "double";}
#line 2484 "parser.tab.c"
    break;

  case 31: /* reference_type: class_or_interface_type  */
#line 435 "parser.y"
                                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2490 "parser.tab.c"
    break;

  case 32: /* reference_type: array_type  */
#line 436 "parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2496 "parser.tab.c"
    break;

  case 33: /* class_or_interface_type: TOK_IDENTIFIER type_arguments.opt  */
#line 439 "parser.y"
                                                        {(yyval.i)=createNode("class_or_interface_type");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2502 "parser.tab.c"
    break;

  case 34: /* class_or_interface_type: class_or_interface_type "." TOK_IDENTIFIER type_arguments.opt  */
#line 440 "parser.y"
                                                                                        {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2508 "parser.tab.c"
    break;

  case 35: /* class_or_interface_type: un_name  */
#line 441 "parser.y"
                                {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2514 "parser.tab.c"
    break;

  case 36: /* array_type: class_or_interface_type dims  */
#line 444 "parser.y"
                                                {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2520 "parser.tab.c"
    break;

  case 37: /* dims: "[" "]"  */
#line 447 "parser.y"
                                {(yyval.i)=createNode("dims");addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2526 "parser.tab.c"
    break;

  case 38: /* dims: dims "[" "]"  */
#line 448 "parser.y"
                                        {(yyval.i)=createNode("dims");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2532 "parser.tab.c"
    break;

  case 39: /* type_parameter: TOK_IDENTIFIER type_bound.opt  */
#line 451 "parser.y"
                                                        {(yyval.i)=createNode("type_parameter");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2538 "parser.tab.c"
    break;

  case 40: /* type_bound.opt: type_bound  */
#line 454 "parser.y"
                                {(yyval.i)=createNode("type_bound.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2544 "parser.tab.c"
    break;

  case 41: /* type_bound.opt: %empty  */
#line 455 "parser.y"
                                {(yyval.i)=-1;}
#line 2550 "parser.tab.c"
    break;

  case 42: /* type_bound: "extends" class_or_interface_type additional_bound.multiopt  */
#line 458 "parser.y"
                                                                                        {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2556 "parser.tab.c"
    break;

  case 43: /* additional_bound: "&" class_or_interface_type  */
#line 461 "parser.y"
                                                        {(yyval.i)=createNode("additional_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2562 "parser.tab.c"
    break;

  case 44: /* type_arguments: "<" type_argument_list ">"  */
#line 464 "parser.y"
                                                        {(yyval.i)=createNode("type_arguments");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2568 "parser.tab.c"
    break;

  case 45: /* type_argument_list: type_argument.multiopt type_argument  */
#line 467 "parser.y"
                                                        {(yyval.i)=createNode("type_argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2574 "parser.tab.c"
    break;

  case 46: /* type_argument_list: %empty  */
#line 468 "parser.y"
                                {(yyval.i)=-1;}
#line 2580 "parser.tab.c"
    break;

  case 47: /* type_argument.multiopt: type_argument.multiopt "," type_argument  */
#line 471 "parser.y"
                                                                {(yyval.i)=createNode("type_argument.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2586 "parser.tab.c"
    break;

  case 48: /* type_argument.multiopt: %empty  */
#line 472 "parser.y"
                                {(yyval.i)=-1;}
#line 2592 "parser.tab.c"
    break;

  case 49: /* type_argument: reference_type  */
#line 475 "parser.y"
                                        {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2598 "parser.tab.c"
    break;

  case 50: /* type_argument: wildcard  */
#line 476 "parser.y"
                                {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2604 "parser.tab.c"
    break;

  case 51: /* wildcard: "?" wildcard_bounds.opt  */
#line 479 "parser.y"
                                                {(yyval.i)=createNode("wildcard");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2610 "parser.tab.c"
    break;

  case 52: /* wildcard_bounds.opt: wildcard_bounds  */
#line 482 "parser.y"
                                        {(yyval.i)=createNode("wildcard_bounds.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2616 "parser.tab.c"
    break;

  case 53: /* wildcard_bounds.opt: %empty  */
#line 483 "parser.y"
                                {(yyval.i)=-1;}
#line 2622 "parser.tab.c"
    break;

  case 54: /* wildcard_bounds: "extends" reference_type  */
#line 486 "parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2628 "parser.tab.c"
    break;

  case 55: /* wildcard_bounds: "super" reference_type  */
#line 487 "parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2634 "parser.tab.c"
    break;

  case 56: /* un_name: TOK_IDENTIFIER  */
#line 492 "parser.y"
                                        {(yyval.i)=createNode("un_name");addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = string((yyvsp[0].s));}
#line 2640 "parser.tab.c"
    break;

  case 57: /* un_name: un_name "." TOK_IDENTIFIER  */
#line 493 "parser.y"
                                                {(yyval.i)=createNode("un_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s))); curr_type = string((yyvsp[0].s));}
#line 2646 "parser.tab.c"
    break;

  case 58: /* compilation_unit: ordinary_compilation_unit  */
#line 499 "parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2652 "parser.tab.c"
    break;

  case 59: /* ordinary_compilation_unit: package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt  */
#line 502 "parser.y"
                                                                                                                        {(yyval.i)=createNode("ordinary_compilation_unit");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2658 "parser.tab.c"
    break;

  case 60: /* package_declaration.opt: package_declaration  */
#line 505 "parser.y"
                                        {(yyval.i)=createNode("package_declaration.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2664 "parser.tab.c"
    break;

  case 61: /* package_declaration.opt: %empty  */
#line 506 "parser.y"
                                {(yyval.i)=-1;}
#line 2670 "parser.tab.c"
    break;

  case 62: /* package_declaration: "package" TOK_IDENTIFIER dot_ind.multiopt ";"  */
#line 509 "parser.y"
                                                                        {(yyval.i)=createNode("package_declaration");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2676 "parser.tab.c"
    break;

  case 63: /* import_declaration.multiopt: import_declaration.multiopt import_declaration  */
#line 512 "parser.y"
                                                                        {(yyval.i)=createNode("import_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2682 "parser.tab.c"
    break;

  case 64: /* import_declaration.multiopt: %empty  */
#line 513 "parser.y"
                                {(yyval.i)=-1;}
#line 2688 "parser.tab.c"
    break;

  case 65: /* import_declaration: single_type_import_declaration  */
#line 516 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2694 "parser.tab.c"
    break;

  case 66: /* import_declaration: type_import_on_demand_declaration  */
#line 517 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2700 "parser.tab.c"
    break;

  case 67: /* import_declaration: single_static_import_declaration  */
#line 518 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2706 "parser.tab.c"
    break;

  case 68: /* import_declaration: static_import_on_demand_declaration  */
#line 519 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2712 "parser.tab.c"
    break;

  case 69: /* single_type_import_declaration: "import" un_name ";"  */
#line 522 "parser.y"
                                                {(yyval.i)=createNode("single_type_import_declaration");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2718 "parser.tab.c"
    break;

  case 70: /* type_import_on_demand_declaration: "import" un_name "." "*" ";"  */
#line 525 "parser.y"
                                                                {(yyval.i)=createNode("type_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2724 "parser.tab.c"
    break;

  case 71: /* single_static_import_declaration: "import" "static" un_name "." TOK_IDENTIFIER ";"  */
#line 528 "parser.y"
                                                                                {(yyval.i)=createNode("single_static_import_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2730 "parser.tab.c"
    break;

  case 72: /* static_import_on_demand_declaration: "import" "static" un_name "." "*" ";"  */
#line 531 "parser.y"
                                                                        {(yyval.i)=createNode("static_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2736 "parser.tab.c"
    break;

  case 73: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration  */
#line 534 "parser.y"
                                                                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2742 "parser.tab.c"
    break;

  case 74: /* top_level_class_or_interface_declaration.multiopt: %empty  */
#line 535 "parser.y"
                                {(yyval.i)=-1;}
#line 2748 "parser.tab.c"
    break;

  case 75: /* top_level_class_or_interface_declaration: class_declaration  */
#line 538 "parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2754 "parser.tab.c"
    break;

  case 76: /* top_level_class_or_interface_declaration: interface_declaration  */
#line 539 "parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2760 "parser.tab.c"
    break;

  case 77: /* top_level_class_or_interface_declaration: ";"  */
#line 540 "parser.y"
                                {(yyval.i)=createNode("top_level_class_or_interface_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2766 "parser.tab.c"
    break;

  case 78: /* com_type_name.multiopt: com_type_name.multiopt "," un_name  */
#line 543 "parser.y"
                                                        {(yyval.i)=createNode("com_type_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2772 "parser.tab.c"
    break;

  case 79: /* com_type_name.multiopt: %empty  */
#line 544 "parser.y"
                                {(yyval.i)=-1;}
#line 2778 "parser.tab.c"
    break;

  case 80: /* class_declaration: normal_class_declaration  */
#line 549 "parser.y"
                                                {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2784 "parser.tab.c"
    break;

  case 81: /* class_declaration: enum_declaration  */
#line 550 "parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2790 "parser.tab.c"
    break;

  case 82: /* class_declaration: record_declaration  */
#line 551 "parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2796 "parser.tab.c"
    break;

  case 83: /* normal_class_declaration: modifier.multiopt "class" TOK_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body  */
#line 554 "parser.y"
                                                                                                                                                        {(yyval.i)=createNode("normal_class_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2802 "parser.tab.c"
    break;

  case 84: /* type_parameters.opt: type_parameters  */
#line 557 "parser.y"
                                        {(yyval.i)=createNode("type_parameters.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2808 "parser.tab.c"
    break;

  case 85: /* type_parameters.opt: %empty  */
#line 558 "parser.y"
                                {(yyval.i)=-1;}
#line 2814 "parser.tab.c"
    break;

  case 86: /* class_extends.opt: class_extends  */
#line 561 "parser.y"
                                {(yyval.i)=createNode("class_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2820 "parser.tab.c"
    break;

  case 87: /* class_extends.opt: %empty  */
#line 562 "parser.y"
                                {(yyval.i)=-1;}
#line 2826 "parser.tab.c"
    break;

  case 88: /* class_implements.opt: class_implements  */
#line 565 "parser.y"
                                        {(yyval.i)=createNode("class_implements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2832 "parser.tab.c"
    break;

  case 89: /* class_implements.opt: %empty  */
#line 566 "parser.y"
                                {(yyval.i)=-1;}
#line 2838 "parser.tab.c"
    break;

  case 90: /* class_permits.opt: class_permits  */
#line 569 "parser.y"
                                {(yyval.i)=createNode("class_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2844 "parser.tab.c"
    break;

  case 91: /* class_permits.opt: %empty  */
#line 570 "parser.y"
                                {(yyval.i)=-1;}
#line 2850 "parser.tab.c"
    break;

  case 92: /* type_parameters: "<" type_parameter_list ">"  */
#line 573 "parser.y"
                                                        {(yyval.i)=createNode("type_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2856 "parser.tab.c"
    break;

  case 93: /* type_parameter_list: type_parameter com_type_parameter.multiopt  */
#line 576 "parser.y"
                                                                {(yyval.i)=createNode("type_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2862 "parser.tab.c"
    break;

  case 94: /* com_type_parameter.multiopt: com_type_parameter.multiopt "," type_parameter  */
#line 579 "parser.y"
                                                                        {(yyval.i)=createNode("com_type_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2868 "parser.tab.c"
    break;

  case 95: /* com_type_parameter.multiopt: %empty  */
#line 580 "parser.y"
                                {(yyval.i)=-1;}
#line 2874 "parser.tab.c"
    break;

  case 96: /* class_extends: "extends" class_or_interface_type  */
#line 583 "parser.y"
                                                        {(yyval.i)=createNode("class_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2880 "parser.tab.c"
    break;

  case 97: /* class_implements: "implements" interface_type_list  */
#line 586 "parser.y"
                                                        {(yyval.i)=createNode("class_implements");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2886 "parser.tab.c"
    break;

  case 98: /* interface_type_list: class_or_interface_type com_interface_type.multiopt  */
#line 589 "parser.y"
                                                                        {(yyval.i)=createNode("interface_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2892 "parser.tab.c"
    break;

  case 99: /* com_interface_type.multiopt: com_interface_type.multiopt "," class_or_interface_type  */
#line 592 "parser.y"
                                                                                {(yyval.i)=createNode("com_interface_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2898 "parser.tab.c"
    break;

  case 100: /* com_interface_type.multiopt: %empty  */
#line 593 "parser.y"
                                {(yyval.i)=-1;}
#line 2904 "parser.tab.c"
    break;

  case 101: /* class_permits: "permits" un_name com_type_name.multiopt  */
#line 596 "parser.y"
                                                                {(yyval.i)=createNode("class_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2910 "parser.tab.c"
    break;

  case 102: /* class_body: "{" class_body_declaration.multiopt "}"  */
#line 599 "parser.y"
                                                                        {(yyval.i)=createNode("class_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2916 "parser.tab.c"
    break;

  case 103: /* class_body_declaration.multiopt: class_body_declaration.multiopt class_body_declaration  */
#line 602 "parser.y"
                                                                                {(yyval.i)=createNode("class_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2922 "parser.tab.c"
    break;

  case 104: /* class_body_declaration.multiopt: %empty  */
#line 603 "parser.y"
                                {(yyval.i)=-1;}
#line 2928 "parser.tab.c"
    break;

  case 105: /* class_body_declaration: class_member_declaration  */
#line 606 "parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2934 "parser.tab.c"
    break;

  case 106: /* class_body_declaration: instance_initializer  */
#line 607 "parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2940 "parser.tab.c"
    break;

  case 107: /* class_body_declaration: constructor_declaration  */
#line 608 "parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2946 "parser.tab.c"
    break;

  case 108: /* class_member_declaration: method_declaration  */
#line 611 "parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2952 "parser.tab.c"
    break;

  case 109: /* class_member_declaration: class_declaration  */
#line 612 "parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2958 "parser.tab.c"
    break;

  case 110: /* class_member_declaration: interface_declaration  */
#line 613 "parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2964 "parser.tab.c"
    break;

  case 111: /* variable_declarator_list: variable_declarator com_variable_declarator.multiopt  */
#line 616 "parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2970 "parser.tab.c"
    break;

  case 112: /* com_variable_declarator.multiopt: com_variable_declarator.multiopt "," variable_declarator  */
#line 619 "parser.y"
                                                                                {(yyval.i)=createNode("com_variable_declarator.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2976 "parser.tab.c"
    break;

  case 113: /* com_variable_declarator.multiopt: %empty  */
#line 620 "parser.y"
                                {(yyval.i)=-1;}
#line 2982 "parser.tab.c"
    break;

  case 114: /* variable_declarator: variable_declarator_id eq_variable_initializer.opt  */
#line 623 "parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2988 "parser.tab.c"
    break;

  case 115: /* eq_variable_initializer.opt: "=" variable_initializer  */
#line 626 "parser.y"
                                                {(yyval.i)=createNode("eq_variable_initializer.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2994 "parser.tab.c"
    break;

  case 116: /* eq_variable_initializer.opt: %empty  */
#line 627 "parser.y"
                                {(yyval.i)=-1;}
#line 3000 "parser.tab.c"
    break;

  case 117: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 630 "parser.y"
                                                {(yyval.i)=createNode("variable_declarator_id");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));block_table[block_count][(yyvsp[-1].s)] = curr_type; }
#line 3006 "parser.tab.c"
    break;

  case 118: /* dims.opt: dims  */
#line 633 "parser.y"
                        {(yyval.i)=createNode("dims.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3012 "parser.tab.c"
    break;

  case 119: /* dims.opt: %empty  */
#line 634 "parser.y"
                                {(yyval.i)=-1;}
#line 3018 "parser.tab.c"
    break;

  case 120: /* variable_initializer: expression  */
#line 637 "parser.y"
                                {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3024 "parser.tab.c"
    break;

  case 121: /* variable_initializer: array_initializer  */
#line 638 "parser.y"
                                        {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3030 "parser.tab.c"
    break;

  case 122: /* type_arguments.opt: type_arguments  */
#line 641 "parser.y"
                                        {(yyval.i)=createNode("type_arguments.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3036 "parser.tab.c"
    break;

  case 123: /* type_arguments.opt: %empty  */
#line 642 "parser.y"
                                {(yyval.i)=-1;}
#line 3042 "parser.tab.c"
    break;

  case 124: /* method_declaration: modifier.multiopt method_header method_body  */
#line 645 "parser.y"
                                                                {(yyval.i)=createNode("method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3048 "parser.tab.c"
    break;

  case 125: /* method_header: result method_declarator throws.opt  */
#line 648 "parser.y"
                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3054 "parser.tab.c"
    break;

  case 126: /* method_header: type_parameters result method_declarator throws.opt  */
#line 649 "parser.y"
                                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3060 "parser.tab.c"
    break;

  case 127: /* throws.opt: throws  */
#line 652 "parser.y"
                                {(yyval.i)=createNode("throws.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3066 "parser.tab.c"
    break;

  case 128: /* throws.opt: %empty  */
#line 653 "parser.y"
                                {(yyval.i)=-1;}
#line 3072 "parser.tab.c"
    break;

  case 129: /* result: type  */
#line 656 "parser.y"
                        {(yyval.i)=createNode("result");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3078 "parser.tab.c"
    break;

  case 130: /* result: "void"  */
#line 657 "parser.y"
                                {(yyval.i)=createNode("result");addChild((yyval.i),createNode((yyvsp[0].s)));curr_type = "void";}
#line 3084 "parser.tab.c"
    break;

  case 131: /* method_declarator: TOK_IDENTIFIER "(" formal_parameter_list.opt ")" dims.opt  */
#line 660 "parser.y"
                                                                                        {(yyval.i)=createNode("method_declarator");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i)); block_table[block_count][(yyvsp[-4].s)] = "<>";}
#line 3090 "parser.tab.c"
    break;

  case 132: /* formal_parameter_list.opt: formal_parameter_list  */
#line 663 "parser.y"
                                        {(yyval.i)=createNode("formal_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3096 "parser.tab.c"
    break;

  case 133: /* formal_parameter_list.opt: %empty  */
#line 664 "parser.y"
                                {(yyval.i)=-1;}
#line 3102 "parser.tab.c"
    break;

  case 134: /* formal_parameter_list: formal_parameter com_formal_parameter.multiopt  */
#line 667 "parser.y"
                                                                        {(yyval.i)=createNode("formal_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3108 "parser.tab.c"
    break;

  case 135: /* com_formal_parameter.multiopt: com_formal_parameter.multiopt "," formal_parameter  */
#line 670 "parser.y"
                                                                        {(yyval.i)=createNode("com_formal_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3114 "parser.tab.c"
    break;

  case 136: /* com_formal_parameter.multiopt: %empty  */
#line 671 "parser.y"
                                {(yyval.i)=-1;}
#line 3120 "parser.tab.c"
    break;

  case 137: /* formal_parameter: modifier.multiopt type variable_declarator_id  */
#line 674 "parser.y"
                                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3126 "parser.tab.c"
    break;

  case 138: /* formal_parameter: variable_arity_parameter  */
#line 675 "parser.y"
                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3132 "parser.tab.c"
    break;

  case 139: /* variable_arity_parameter: modifier.multiopt type "..." TOK_IDENTIFIER  */
#line 678 "parser.y"
                                                                        {(yyval.i)=createNode("variable_arity_parameter");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3138 "parser.tab.c"
    break;

  case 140: /* throws: "throws" exception_type_list  */
#line 681 "parser.y"
                                                        {(yyval.i)=createNode("throws");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3144 "parser.tab.c"
    break;

  case 141: /* exception_type_list: exception_type com_exception_type.multiopt  */
#line 684 "parser.y"
                                                                {(yyval.i)=createNode("exception_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3150 "parser.tab.c"
    break;

  case 142: /* com_exception_type.multiopt: com_exception_type.multiopt "," exception_type  */
#line 687 "parser.y"
                                                                        {(yyval.i)=createNode("com_exception_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3156 "parser.tab.c"
    break;

  case 143: /* com_exception_type.multiopt: %empty  */
#line 688 "parser.y"
                                {(yyval.i)=-1;}
#line 3162 "parser.tab.c"
    break;

  case 144: /* exception_type: class_or_interface_type  */
#line 691 "parser.y"
                                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3168 "parser.tab.c"
    break;

  case 145: /* method_body: block  */
#line 694 "parser.y"
                        {(yyval.i)=createNode("method_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3174 "parser.tab.c"
    break;

  case 146: /* method_body: ";"  */
#line 695 "parser.y"
                                {(yyval.i)=createNode("method_body");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3180 "parser.tab.c"
    break;

  case 147: /* instance_initializer: block  */
#line 698 "parser.y"
                        {(yyval.i)=createNode("instance_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3186 "parser.tab.c"
    break;

  case 148: /* constructor_declaration: modifier.multiopt constructor_declarator throws.opt constructor_body  */
#line 701 "parser.y"
                                                                                        {(yyval.i)=createNode("constructor_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3192 "parser.tab.c"
    break;

  case 149: /* constructor_declarator: simple_type_name "(" formal_parameter_list.opt ")"  */
#line 704 "parser.y"
                                                                                {(yyval.i)=createNode("constructor_declarator");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3198 "parser.tab.c"
    break;

  case 150: /* simple_type_name: TOK_IDENTIFIER  */
#line 707 "parser.y"
                                        {(yyval.i)=createNode("simple_type_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3204 "parser.tab.c"
    break;

  case 151: /* constructor_body: "{" block_statements.opt "}"  */
#line 710 "parser.y"
                                                        {(yyval.i)=createNode("constructor_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3210 "parser.tab.c"
    break;

  case 152: /* block_statements.opt: block_statements  */
#line 713 "parser.y"
                                        {(yyval.i)=createNode("block_statements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3216 "parser.tab.c"
    break;

  case 153: /* block_statements.opt: %empty  */
#line 714 "parser.y"
                                {(yyval.i)=-1;}
#line 3222 "parser.tab.c"
    break;

  case 154: /* argument_list.opt: argument_list  */
#line 717 "parser.y"
                                {(yyval.i)=createNode("argument_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3228 "parser.tab.c"
    break;

  case 155: /* argument_list.opt: %empty  */
#line 718 "parser.y"
                                {(yyval.i)=-1;}
#line 3234 "parser.tab.c"
    break;

  case 156: /* enum_declaration: modifier.multiopt "enum" TOK_IDENTIFIER class_implements.opt enum_body  */
#line 721 "parser.y"
                                                                                                {(yyval.i)=createNode("enum_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3240 "parser.tab.c"
    break;

  case 157: /* enum_body: "{" enum_constant_list.opt com.opt enum_body_declarations.opt "}"  */
#line 724 "parser.y"
                                                                                                {(yyval.i)=createNode("enum_body");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3246 "parser.tab.c"
    break;

  case 158: /* com.opt: ","  */
#line 727 "parser.y"
                                {(yyval.i)=createNode("com.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3252 "parser.tab.c"
    break;

  case 159: /* com.opt: %empty  */
#line 728 "parser.y"
                                {(yyval.i)=-1;}
#line 3258 "parser.tab.c"
    break;

  case 160: /* enum_body_declarations.opt: enum_body_declarations  */
#line 731 "parser.y"
                                                {(yyval.i)=createNode("enum_body_declarations.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3264 "parser.tab.c"
    break;

  case 161: /* enum_body_declarations.opt: %empty  */
#line 732 "parser.y"
                                {(yyval.i)=-1;}
#line 3270 "parser.tab.c"
    break;

  case 162: /* enum_constant_list.opt: enum_constant_list  */
#line 735 "parser.y"
                                        {(yyval.i)=createNode("enum_constant_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3276 "parser.tab.c"
    break;

  case 163: /* enum_constant_list.opt: %empty  */
#line 736 "parser.y"
                                {(yyval.i)=-1;}
#line 3282 "parser.tab.c"
    break;

  case 164: /* enum_constant_list: enum_constant com_enum_constant.multiopt  */
#line 739 "parser.y"
                                                                {(yyval.i)=createNode("enum_constant_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3288 "parser.tab.c"
    break;

  case 165: /* com_enum_constant.multiopt: com_enum_constant.multiopt "," enum_constant  */
#line 742 "parser.y"
                                                                        {(yyval.i)=createNode("com_enum_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3294 "parser.tab.c"
    break;

  case 166: /* com_enum_constant.multiopt: %empty  */
#line 743 "parser.y"
                                {(yyval.i)=-1;}
#line 3300 "parser.tab.c"
    break;

  case 167: /* enum_constant: TOK_IDENTIFIER "[" "(" argument_list.opt ")" "]" class_body.opt  */
#line 746 "parser.y"
                                                                                                {(yyval.i)=createNode("enum_constant");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3306 "parser.tab.c"
    break;

  case 168: /* class_body.opt: class_body  */
#line 750 "parser.y"
                                {(yyval.i)=createNode("class_body.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3312 "parser.tab.c"
    break;

  case 169: /* class_body.opt: %empty  */
#line 751 "parser.y"
                                {(yyval.i)=-1;}
#line 3318 "parser.tab.c"
    break;

  case 170: /* enum_body_declarations: ";" class_body_declaration.multiopt  */
#line 755 "parser.y"
                                                                {(yyval.i)=createNode("enum_body_declarations");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3324 "parser.tab.c"
    break;

  case 171: /* record_declaration: modifier.multiopt "record" TOK_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body  */
#line 758 "parser.y"
                                                                                                                                        {(yyval.i)=createNode("record_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3330 "parser.tab.c"
    break;

  case 172: /* record_header: "(" record_component_list.opt ")"  */
#line 761 "parser.y"
                                                                {(yyval.i)=createNode("record_header");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3336 "parser.tab.c"
    break;

  case 173: /* record_component_list.opt: record_component_list  */
#line 764 "parser.y"
                                        {(yyval.i)=createNode("record_component_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3342 "parser.tab.c"
    break;

  case 174: /* record_component_list.opt: %empty  */
#line 765 "parser.y"
                                {(yyval.i)=-1;}
#line 3348 "parser.tab.c"
    break;

  case 175: /* record_component_list: record_component com_record_component.multiopt  */
#line 768 "parser.y"
                                                                        {(yyval.i)=createNode("record_component_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3354 "parser.tab.c"
    break;

  case 176: /* com_record_component.multiopt: com_record_component.multiopt "," record_component  */
#line 771 "parser.y"
                                                                        {(yyval.i)=createNode("com_record_component.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3360 "parser.tab.c"
    break;

  case 177: /* com_record_component.multiopt: %empty  */
#line 772 "parser.y"
                                {(yyval.i)=-1;}
#line 3366 "parser.tab.c"
    break;

  case 178: /* record_component: type TOK_IDENTIFIER  */
#line 776 "parser.y"
                                        {(yyval.i)=createNode("record_component");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3372 "parser.tab.c"
    break;

  case 179: /* record_component: variable_arity_record_component  */
#line 777 "parser.y"
                                                        {(yyval.i)=createNode("record_component");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3378 "parser.tab.c"
    break;

  case 180: /* variable_arity_record_component: type "..." TOK_IDENTIFIER  */
#line 781 "parser.y"
                                                        {(yyval.i)=createNode("variable_arity_record_component");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3384 "parser.tab.c"
    break;

  case 181: /* record_body: "{" record_body_declaration.multiopt "}"  */
#line 784 "parser.y"
                                                                        {(yyval.i)=createNode("record_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3390 "parser.tab.c"
    break;

  case 182: /* record_body_declaration.multiopt: record_body_declaration.multiopt record_body_declaration  */
#line 787 "parser.y"
                                                                                {(yyval.i)=createNode("record_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3396 "parser.tab.c"
    break;

  case 183: /* record_body_declaration.multiopt: %empty  */
#line 788 "parser.y"
                                {(yyval.i)=-1;}
#line 3402 "parser.tab.c"
    break;

  case 184: /* record_body_declaration: class_body_declaration  */
#line 791 "parser.y"
                                                {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3408 "parser.tab.c"
    break;

  case 185: /* record_body_declaration: compact_constructor_declaration  */
#line 792 "parser.y"
                                                        {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3414 "parser.tab.c"
    break;

  case 186: /* compact_constructor_declaration: modifier.multiopt simple_type_name constructor_body  */
#line 795 "parser.y"
                                                                        {(yyval.i)=createNode("compact_constructor_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3420 "parser.tab.c"
    break;

  case 187: /* interface_declaration: normal_interface_declaration  */
#line 801 "parser.y"
                                                {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3426 "parser.tab.c"
    break;

  case 188: /* normal_interface_declaration: modifier.multiopt "interface" TOK_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body  */
#line 804 "parser.y"
                                                                                                                                                {(yyval.i)=createNode("normal_interface_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3432 "parser.tab.c"
    break;

  case 189: /* interface_extends.opt: interface_extends  */
#line 807 "parser.y"
                                        {(yyval.i)=createNode("interface_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3438 "parser.tab.c"
    break;

  case 190: /* interface_extends.opt: %empty  */
#line 808 "parser.y"
                                {(yyval.i)=-1;}
#line 3444 "parser.tab.c"
    break;

  case 191: /* interface_permits.opt: interface_permits  */
#line 811 "parser.y"
                                        {(yyval.i)=createNode("interface_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3450 "parser.tab.c"
    break;

  case 192: /* interface_permits.opt: %empty  */
#line 812 "parser.y"
                                {(yyval.i)=-1;}
#line 3456 "parser.tab.c"
    break;

  case 193: /* interface_extends: "extends" interface_type_list  */
#line 815 "parser.y"
                                                        {(yyval.i)=createNode("interface_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3462 "parser.tab.c"
    break;

  case 194: /* interface_permits: "permits" un_name com_type_name.multiopt  */
#line 818 "parser.y"
                                                                {(yyval.i)=createNode("interface_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3468 "parser.tab.c"
    break;

  case 195: /* interface_body: "{" interface_member_declaration.multiopt "}"  */
#line 821 "parser.y"
                                                                        {(yyval.i)=createNode("interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3474 "parser.tab.c"
    break;

  case 196: /* interface_member_declaration.multiopt: interface_member_declaration.multiopt interface_member_declaration  */
#line 824 "parser.y"
                                                                                        {(yyval.i)=createNode("interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3480 "parser.tab.c"
    break;

  case 197: /* interface_member_declaration.multiopt: %empty  */
#line 825 "parser.y"
                                {(yyval.i)=-1;}
#line 3486 "parser.tab.c"
    break;

  case 198: /* interface_member_declaration: interface_method_declaration  */
#line 828 "parser.y"
                                                {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3492 "parser.tab.c"
    break;

  case 199: /* interface_member_declaration: class_declaration  */
#line 829 "parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3498 "parser.tab.c"
    break;

  case 200: /* interface_member_declaration: interface_declaration  */
#line 830 "parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3504 "parser.tab.c"
    break;

  case 201: /* interface_member_declaration: ";"  */
#line 831 "parser.y"
                                {(yyval.i)=createNode("interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3510 "parser.tab.c"
    break;

  case 202: /* interface_method_declaration: modifier.multiopt method_header method_body  */
#line 837 "parser.y"
                                                                {(yyval.i)=createNode("interface_method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3516 "parser.tab.c"
    break;

  case 203: /* array_initializer: "{" variable_initializer_list.opt com.opt "}"  */
#line 843 "parser.y"
                                                                        {(yyval.i)=createNode("array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3522 "parser.tab.c"
    break;

  case 204: /* variable_initializer_list.opt: variable_initializer_list  */
#line 846 "parser.y"
                                                {(yyval.i)=createNode("variable_initializer_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3528 "parser.tab.c"
    break;

  case 205: /* variable_initializer_list.opt: %empty  */
#line 847 "parser.y"
                                {(yyval.i)=-1;}
#line 3534 "parser.tab.c"
    break;

  case 206: /* variable_initializer_list: variable_initializer com_variable_initializer.multiopt  */
#line 850 "parser.y"
                                                                                {(yyval.i)=createNode("variable_initializer_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3540 "parser.tab.c"
    break;

  case 207: /* com_variable_initializer.multiopt: com_variable_initializer.multiopt "," variable_initializer  */
#line 853 "parser.y"
                                                                                {(yyval.i)=createNode("com_variable_initializer.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3546 "parser.tab.c"
    break;

  case 208: /* com_variable_initializer.multiopt: %empty  */
#line 854 "parser.y"
                                {(yyval.i)=-1;}
#line 3552 "parser.tab.c"
    break;

  case 209: /* block: "{" block_statements.opt "}"  */
#line 859 "parser.y"
                                                        {(yyval.i)=createNode("block");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s))); block_count++; }
#line 3558 "parser.tab.c"
    break;

  case 210: /* block_statements: block_statement block_statement.multiopt  */
#line 862 "parser.y"
                                                                {(yyval.i)=createNode("block_statements");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3564 "parser.tab.c"
    break;

  case 211: /* block_statement.multiopt: block_statement.multiopt block_statement  */
#line 865 "parser.y"
                                                                {(yyval.i)=createNode("block_statement.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3570 "parser.tab.c"
    break;

  case 212: /* block_statement.multiopt: %empty  */
#line 866 "parser.y"
                                {(yyval.i)=-1;}
#line 3576 "parser.tab.c"
    break;

  case 213: /* block_statement: local_class_or_interface_declaration  */
#line 869 "parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3582 "parser.tab.c"
    break;

  case 214: /* block_statement: local_variable_declaration_statement  */
#line 870 "parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3588 "parser.tab.c"
    break;

  case 215: /* block_statement: statement  */
#line 871 "parser.y"
                                {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3594 "parser.tab.c"
    break;

  case 216: /* local_class_or_interface_declaration: class_declaration  */
#line 874 "parser.y"
                                        {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3600 "parser.tab.c"
    break;

  case 217: /* local_class_or_interface_declaration: normal_interface_declaration  */
#line 875 "parser.y"
                                                {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3606 "parser.tab.c"
    break;

  case 218: /* local_variable_declaration_statement: local_variable_declaration ";"  */
#line 878 "parser.y"
                                                        {(yyval.i)=createNode("local_variable_declaration_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3612 "parser.tab.c"
    break;

  case 219: /* local_variable_declaration: local_variable_type variable_declarator_list  */
#line 881 "parser.y"
                                                                {(yyval.i)=createNode("local_variable_declaration");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3618 "parser.tab.c"
    break;

  case 220: /* local_variable_type: type  */
#line 884 "parser.y"
                        {(yyval.i)=createNode("local_variable_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3624 "parser.tab.c"
    break;

  case 221: /* local_variable_type: "var"  */
#line 885 "parser.y"
                                {(yyval.i)=createNode("local_variable_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3630 "parser.tab.c"
    break;

  case 222: /* statement: statement_without_trailing_substatement  */
#line 888 "parser.y"
                                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3636 "parser.tab.c"
    break;

  case 223: /* statement: labeled_statement  */
#line 889 "parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3642 "parser.tab.c"
    break;

  case 224: /* statement: if_then_statement  */
#line 890 "parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3648 "parser.tab.c"
    break;

  case 225: /* statement: if_then_else_statement  */
#line 891 "parser.y"
                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3654 "parser.tab.c"
    break;

  case 226: /* statement: while_statement  */
#line 892 "parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3660 "parser.tab.c"
    break;

  case 227: /* statement: for_statement  */
#line 893 "parser.y"
                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3666 "parser.tab.c"
    break;

  case 228: /* statement_no_short_if: statement_without_trailing_substatement  */
#line 896 "parser.y"
                                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3672 "parser.tab.c"
    break;

  case 229: /* statement_no_short_if: labeled_statement_no_short_if  */
#line 897 "parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3678 "parser.tab.c"
    break;

  case 230: /* statement_no_short_if: if_then_else_statement_no_short_if  */
#line 898 "parser.y"
                                                        {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3684 "parser.tab.c"
    break;

  case 231: /* statement_no_short_if: while_statement_no_short_if  */
#line 899 "parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3690 "parser.tab.c"
    break;

  case 232: /* statement_no_short_if: for_statement_no_short_if  */
#line 900 "parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3696 "parser.tab.c"
    break;

  case 233: /* statement_without_trailing_substatement: block  */
#line 903 "parser.y"
                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3702 "parser.tab.c"
    break;

  case 234: /* statement_without_trailing_substatement: empty_statement  */
#line 904 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3708 "parser.tab.c"
    break;

  case 235: /* statement_without_trailing_substatement: expression_statement  */
#line 905 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3714 "parser.tab.c"
    break;

  case 236: /* statement_without_trailing_substatement: assert_statement  */
#line 906 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3720 "parser.tab.c"
    break;

  case 237: /* statement_without_trailing_substatement: switch_statement  */
#line 907 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3726 "parser.tab.c"
    break;

  case 238: /* statement_without_trailing_substatement: do_statement  */
#line 908 "parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3732 "parser.tab.c"
    break;

  case 239: /* statement_without_trailing_substatement: break_statement  */
#line 909 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3738 "parser.tab.c"
    break;

  case 240: /* statement_without_trailing_substatement: continue_statement  */
#line 910 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3744 "parser.tab.c"
    break;

  case 241: /* statement_without_trailing_substatement: return_statement  */
#line 911 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3750 "parser.tab.c"
    break;

  case 242: /* statement_without_trailing_substatement: synchronized_statement  */
#line 912 "parser.y"
                                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3756 "parser.tab.c"
    break;

  case 243: /* statement_without_trailing_substatement: throw_statement  */
#line 913 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3762 "parser.tab.c"
    break;

  case 244: /* statement_without_trailing_substatement: try_statement  */
#line 914 "parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3768 "parser.tab.c"
    break;

  case 245: /* statement_without_trailing_substatement: yield_statement  */
#line 915 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3774 "parser.tab.c"
    break;

  case 246: /* empty_statement: ";"  */
#line 918 "parser.y"
                                {(yyval.i)=createNode("empty_statement");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3780 "parser.tab.c"
    break;

  case 247: /* labeled_statement: TOK_IDENTIFIER ":" statement  */
#line 921 "parser.y"
                                                        {(yyval.i)=createNode("labeled_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3786 "parser.tab.c"
    break;

  case 248: /* labeled_statement_no_short_if: TOK_IDENTIFIER ":" statement_no_short_if  */
#line 924 "parser.y"
                                                                {(yyval.i)=createNode("labeled_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3792 "parser.tab.c"
    break;

  case 249: /* expression_statement: statement_expression ";"  */
#line 927 "parser.y"
                                                {(yyval.i)=createNode("expression_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3798 "parser.tab.c"
    break;

  case 250: /* statement_expression: assignment  */
#line 930 "parser.y"
                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3804 "parser.tab.c"
    break;

  case 251: /* statement_expression: pre_increment_expression  */
#line 931 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3810 "parser.tab.c"
    break;

  case 252: /* statement_expression: pre_decrement_expression  */
#line 932 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3816 "parser.tab.c"
    break;

  case 253: /* statement_expression: post_increment_expression  */
#line 933 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3822 "parser.tab.c"
    break;

  case 254: /* statement_expression: post_decrement_expression  */
#line 934 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3828 "parser.tab.c"
    break;

  case 255: /* statement_expression: method_invocation  */
#line 935 "parser.y"
                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3834 "parser.tab.c"
    break;

  case 256: /* statement_expression: class_instance_creation_expression  */
#line 936 "parser.y"
                                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3840 "parser.tab.c"
    break;

  case 257: /* if_then_statement: "if" "(" expression ")" statement  */
#line 939 "parser.y"
                                                                {(yyval.i)=createNode("if_then_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3846 "parser.tab.c"
    break;

  case 258: /* if_then_else_statement: "if" "(" expression ")" statement_no_short_if "else" statement  */
#line 942 "parser.y"
                                                                                                {(yyval.i)=createNode("if_then_else_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3852 "parser.tab.c"
    break;

  case 259: /* if_then_else_statement_no_short_if: "if" "(" expression ")" statement_no_short_if "else" statement_no_short_if  */
#line 945 "parser.y"
                                                                                                        {(yyval.i)=createNode("if_then_else_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3858 "parser.tab.c"
    break;

  case 260: /* assert_statement: "assert" expression ";"  */
#line 948 "parser.y"
                                                {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3864 "parser.tab.c"
    break;

  case 261: /* assert_statement: "assert" expression ":" expression ";"  */
#line 949 "parser.y"
                                                                        {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3870 "parser.tab.c"
    break;

  case 262: /* switch_statement: "switch" "(" expression ")" switch_block  */
#line 952 "parser.y"
                                                                        {(yyval.i)=createNode("switch_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3876 "parser.tab.c"
    break;

  case 263: /* switch_block: "{" switch_rule switch_rule.multiopt ";"  */
#line 955 "parser.y"
                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3882 "parser.tab.c"
    break;

  case 264: /* switch_block: "{" switch_block_statement_group.multiopt switch_label_col.multiopt "}"  */
#line 956 "parser.y"
                                                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3888 "parser.tab.c"
    break;

  case 265: /* switch_rule.multiopt: switch_rule.multiopt switch_rule  */
#line 959 "parser.y"
                                                        {(yyval.i)=createNode("switch_rule.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3894 "parser.tab.c"
    break;

  case 266: /* switch_rule.multiopt: %empty  */
#line 960 "parser.y"
                                {(yyval.i)=-1;}
#line 3900 "parser.tab.c"
    break;

  case 267: /* switch_block_statement_group.multiopt: switch_block_statement_group.multiopt switch_block_statement_group  */
#line 963 "parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3906 "parser.tab.c"
    break;

  case 268: /* switch_block_statement_group.multiopt: %empty  */
#line 964 "parser.y"
                                {(yyval.i)=-1;}
#line 3912 "parser.tab.c"
    break;

  case 269: /* switch_label_col.multiopt: switch_label_col.multiopt switch_label ":"  */
#line 967 "parser.y"
                                                                {(yyval.i)=createNode("switch_label_col.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3918 "parser.tab.c"
    break;

  case 270: /* switch_label_col.multiopt: %empty  */
#line 968 "parser.y"
                                {(yyval.i)=-1;}
#line 3924 "parser.tab.c"
    break;

  case 271: /* switch_rule: switch_label "->" expression ";"  */
#line 971 "parser.y"
                                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3930 "parser.tab.c"
    break;

  case 272: /* switch_rule: switch_label "->" block  */
#line 972 "parser.y"
                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3936 "parser.tab.c"
    break;

  case 273: /* switch_rule: switch_label "->" throw_statement  */
#line 973 "parser.y"
                                                        {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3942 "parser.tab.c"
    break;

  case 274: /* switch_block_statement_group: switch_label ":" switch_label_col.multiopt block_statements  */
#line 976 "parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3948 "parser.tab.c"
    break;

  case 275: /* switch_label: "case" case_constant com_case_constant.multiopt  */
#line 979 "parser.y"
                                                                        {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3954 "parser.tab.c"
    break;

  case 276: /* switch_label: "default"  */
#line 980 "parser.y"
                                {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3960 "parser.tab.c"
    break;

  case 277: /* com_case_constant.multiopt: com_case_constant.multiopt "," case_constant  */
#line 983 "parser.y"
                                                                        {(yyval.i)=createNode("com_case_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3966 "parser.tab.c"
    break;

  case 278: /* com_case_constant.multiopt: %empty  */
#line 984 "parser.y"
                                {(yyval.i)=-1;}
#line 3972 "parser.tab.c"
    break;

  case 279: /* case_constant: conditional_expression  */
#line 987 "parser.y"
                                                {(yyval.i)=createNode("case_constant");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3978 "parser.tab.c"
    break;

  case 280: /* while_statement: "while" "(" expression ")" statement  */
#line 990 "parser.y"
                                                                {(yyval.i)=createNode("while_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3984 "parser.tab.c"
    break;

  case 281: /* while_statement_no_short_if: "while" "(" expression ")" statement_no_short_if  */
#line 993 "parser.y"
                                                                                {(yyval.i)=createNode("while_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3990 "parser.tab.c"
    break;

  case 282: /* do_statement: "do" statement "while" "(" expression ")" ";"  */
#line 996 "parser.y"
                                                                                {(yyval.i)=createNode("do_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3996 "parser.tab.c"
    break;

  case 283: /* for_statement: basic_for_statement  */
#line 999 "parser.y"
                                        {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4002 "parser.tab.c"
    break;

  case 284: /* for_statement: enhanced_for_statement  */
#line 1000 "parser.y"
                                                {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4008 "parser.tab.c"
    break;

  case 285: /* for_statement_no_short_if: basic_for_statement_no_short_if  */
#line 1003 "parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4014 "parser.tab.c"
    break;

  case 286: /* for_statement_no_short_if: enhanced_for_statement_no_short_if  */
#line 1004 "parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4020 "parser.tab.c"
    break;

  case 287: /* basic_for_statement: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement  */
#line 1007 "parser.y"
                                                                                                                {(yyval.i)=createNode("basic_for_statement");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4026 "parser.tab.c"
    break;

  case 288: /* for_init.opt: for_init  */
#line 1010 "parser.y"
                                {(yyval.i)=createNode("for_init.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4032 "parser.tab.c"
    break;

  case 289: /* for_init.opt: %empty  */
#line 1011 "parser.y"
                                {(yyval.i)=-1;}
#line 4038 "parser.tab.c"
    break;

  case 290: /* expression.opt: expression  */
#line 1014 "parser.y"
                                {(yyval.i)=createNode("expression.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4044 "parser.tab.c"
    break;

  case 291: /* expression.opt: %empty  */
#line 1015 "parser.y"
                                {(yyval.i)=-1;}
#line 4050 "parser.tab.c"
    break;

  case 292: /* for_update.opt: for_update  */
#line 1018 "parser.y"
                                {(yyval.i)=createNode("for_update.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4056 "parser.tab.c"
    break;

  case 293: /* for_update.opt: %empty  */
#line 1019 "parser.y"
                                {(yyval.i)=-1;}
#line 4062 "parser.tab.c"
    break;

  case 294: /* basic_for_statement_no_short_if: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement_no_short_if  */
#line 1022 "parser.y"
                                                                                                                        {(yyval.i)=createNode("basic_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4068 "parser.tab.c"
    break;

  case 295: /* for_init: statement_expression_list  */
#line 1025 "parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4074 "parser.tab.c"
    break;

  case 296: /* for_init: local_variable_declaration  */
#line 1026 "parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4080 "parser.tab.c"
    break;

  case 297: /* for_update: statement_expression_list  */
#line 1029 "parser.y"
                                                {(yyval.i)=createNode("for_update");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4086 "parser.tab.c"
    break;

  case 298: /* statement_expression_list: statement_expression com_statement_expression.multiopt  */
#line 1032 "parser.y"
                                                                                {(yyval.i)=createNode("statement_expression_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4092 "parser.tab.c"
    break;

  case 299: /* com_statement_expression.multiopt: com_statement_expression.multiopt "," statement_expression  */
#line 1035 "parser.y"
                                                                                {(yyval.i)=createNode("com_statement_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4098 "parser.tab.c"
    break;

  case 300: /* com_statement_expression.multiopt: %empty  */
#line 1036 "parser.y"
                                {(yyval.i)=-1;}
#line 4104 "parser.tab.c"
    break;

  case 301: /* enhanced_for_statement: "for" "(" local_variable_declaration ":" expression ")" statement  */
#line 1039 "parser.y"
                                                                                                {(yyval.i)=createNode("enhanced_for_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4110 "parser.tab.c"
    break;

  case 302: /* enhanced_for_statement_no_short_if: "for" "(" local_variable_declaration ":" expression ")" statement_no_short_if  */
#line 1042 "parser.y"
                                                                                                                {(yyval.i)=createNode("enhanced_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4116 "parser.tab.c"
    break;

  case 303: /* break_statement: "break" IDENTIFIER.opt ";"  */
#line 1045 "parser.y"
                                                        {(yyval.i)=createNode("break_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4122 "parser.tab.c"
    break;

  case 304: /* IDENTIFIER.opt: TOK_IDENTIFIER  */
#line 1048 "parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4128 "parser.tab.c"
    break;

  case 305: /* IDENTIFIER.opt: %empty  */
#line 1049 "parser.y"
                                {(yyval.i)=-1;}
#line 4134 "parser.tab.c"
    break;

  case 306: /* yield_statement: "yield" expression ";"  */
#line 1052 "parser.y"
                                                {(yyval.i)=createNode("yield_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4140 "parser.tab.c"
    break;

  case 307: /* continue_statement: "continue" IDENTIFIER.opt ";"  */
#line 1055 "parser.y"
                                                        {(yyval.i)=createNode("continue_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4146 "parser.tab.c"
    break;

  case 308: /* return_statement: "return" expression.opt ";"  */
#line 1058 "parser.y"
                                                        {(yyval.i)=createNode("return_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4152 "parser.tab.c"
    break;

  case 309: /* throw_statement: "throw" expression ";"  */
#line 1061 "parser.y"
                                                {(yyval.i)=createNode("throw_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4158 "parser.tab.c"
    break;

  case 310: /* synchronized_statement: "synchronized" "(" expression ")" block  */
#line 1064 "parser.y"
                                                                        {(yyval.i)=createNode("synchronized_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4164 "parser.tab.c"
    break;

  case 311: /* try_statement: "try" block catches  */
#line 1067 "parser.y"
                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4170 "parser.tab.c"
    break;

  case 312: /* try_statement: "try" block catches.opt finally  */
#line 1068 "parser.y"
                                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4176 "parser.tab.c"
    break;

  case 313: /* try_statement: try_with_resources_statement  */
#line 1069 "parser.y"
                                                {(yyval.i)=createNode("try_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4182 "parser.tab.c"
    break;

  case 314: /* catches.opt: catches  */
#line 1072 "parser.y"
                                {(yyval.i)=createNode("catches.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4188 "parser.tab.c"
    break;

  case 315: /* catches.opt: %empty  */
#line 1073 "parser.y"
                                {(yyval.i)=-1;}
#line 4194 "parser.tab.c"
    break;

  case 316: /* catches: catch_clause catch_clause.multiopt  */
#line 1076 "parser.y"
                                                        {(yyval.i)=createNode("catches");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4200 "parser.tab.c"
    break;

  case 317: /* catch_clause.multiopt: catch_clause.multiopt catch_clause  */
#line 1079 "parser.y"
                                                        {(yyval.i)=createNode("catch_clause.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4206 "parser.tab.c"
    break;

  case 318: /* catch_clause.multiopt: %empty  */
#line 1080 "parser.y"
                                {(yyval.i)=-1;}
#line 4212 "parser.tab.c"
    break;

  case 319: /* catch_clause: "catch" "(" catch_formal_parameter ")" block  */
#line 1083 "parser.y"
                                                                        {(yyval.i)=createNode("catch_clause");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4218 "parser.tab.c"
    break;

  case 320: /* catch_formal_parameter: modifier.multiopt catch_type variable_declarator_id  */
#line 1086 "parser.y"
                                                                        {(yyval.i)=createNode("catch_formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4224 "parser.tab.c"
    break;

  case 321: /* catch_type: class_or_interface_type vt_class_type.multiopt  */
#line 1089 "parser.y"
                                                                        {(yyval.i)=createNode("catch_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4230 "parser.tab.c"
    break;

  case 322: /* vt_class_type.multiopt: vt_class_type.multiopt "|" class_or_interface_type  */
#line 1092 "parser.y"
                                                                                {(yyval.i)=createNode("vt_class_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4236 "parser.tab.c"
    break;

  case 323: /* vt_class_type.multiopt: %empty  */
#line 1093 "parser.y"
                                {(yyval.i)=-1;}
#line 4242 "parser.tab.c"
    break;

  case 324: /* finally: "finally" block  */
#line 1096 "parser.y"
                                        {(yyval.i)=createNode("finally");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4248 "parser.tab.c"
    break;

  case 325: /* try_with_resources_statement: "try" resource_specification block catches.opt finally.opt  */
#line 1099 "parser.y"
                                                                                {(yyval.i)=createNode("try_with_resources_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4254 "parser.tab.c"
    break;

  case 326: /* finally.opt: finally  */
#line 1102 "parser.y"
                                {(yyval.i)=createNode("finally.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4260 "parser.tab.c"
    break;

  case 327: /* finally.opt: %empty  */
#line 1103 "parser.y"
                                {(yyval.i)=-1;}
#line 4266 "parser.tab.c"
    break;

  case 328: /* resource_specification: "(" resource_list semcol.opt ")"  */
#line 1106 "parser.y"
                                                                {(yyval.i)=createNode("resource_specification");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4272 "parser.tab.c"
    break;

  case 329: /* semcol.opt: ";"  */
#line 1109 "parser.y"
                                {(yyval.i)=createNode("semcol.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4278 "parser.tab.c"
    break;

  case 330: /* semcol.opt: %empty  */
#line 1110 "parser.y"
                                {(yyval.i)=-1;}
#line 4284 "parser.tab.c"
    break;

  case 331: /* resource_list: resource semcol_resource.multiopt  */
#line 1113 "parser.y"
                                                        {(yyval.i)=createNode("resource_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4290 "parser.tab.c"
    break;

  case 332: /* semcol_resource.multiopt: semcol_resource.multiopt ";" resource  */
#line 1116 "parser.y"
                                                                {(yyval.i)=createNode("semcol_resource.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4296 "parser.tab.c"
    break;

  case 333: /* semcol_resource.multiopt: %empty  */
#line 1117 "parser.y"
                                {(yyval.i)=-1;}
#line 4302 "parser.tab.c"
    break;

  case 334: /* resource: local_variable_declaration  */
#line 1120 "parser.y"
                                                {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4308 "parser.tab.c"
    break;

  case 335: /* resource: variable_access  */
#line 1121 "parser.y"
                                        {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4314 "parser.tab.c"
    break;

  case 336: /* variable_access: un_name  */
#line 1124 "parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4320 "parser.tab.c"
    break;

  case 337: /* variable_access: field_access  */
#line 1125 "parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4326 "parser.tab.c"
    break;

  case 338: /* pattern: type_pattern  */
#line 1128 "parser.y"
                                {(yyval.i)=createNode("pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4332 "parser.tab.c"
    break;

  case 339: /* type_pattern: local_variable_declaration  */
#line 1131 "parser.y"
                                                {(yyval.i)=createNode("type_pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4338 "parser.tab.c"
    break;

  case 340: /* primary: primary_no_new_array  */
#line 1136 "parser.y"
                                        {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4344 "parser.tab.c"
    break;

  case 341: /* primary: array_creation_expression  */
#line 1137 "parser.y"
                                                {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4350 "parser.tab.c"
    break;

  case 342: /* primary_no_new_array: hold_Literal  */
#line 1140 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),(yyvsp[0].i));}
#line 4356 "parser.tab.c"
    break;

  case 343: /* primary_no_new_array: "this"  */
#line 1141 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4362 "parser.tab.c"
    break;

  case 344: /* primary_no_new_array: un_name "." "this"  */
#line 1142 "parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4368 "parser.tab.c"
    break;

  case 345: /* primary_no_new_array: "(" expression ")"  */
#line 1143 "parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4374 "parser.tab.c"
    break;

  case 346: /* primary_no_new_array: class_instance_creation_expression  */
#line 1144 "parser.y"
                                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4380 "parser.tab.c"
    break;

  case 347: /* primary_no_new_array: field_access  */
#line 1145 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4386 "parser.tab.c"
    break;

  case 348: /* primary_no_new_array: array_access  */
#line 1146 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4392 "parser.tab.c"
    break;

  case 349: /* primary_no_new_array: method_invocation  */
#line 1147 "parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4398 "parser.tab.c"
    break;

  case 350: /* primary_no_new_array: method_reference  */
#line 1148 "parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4404 "parser.tab.c"
    break;

  case 351: /* hold_Literal: TOK_NUMERICLITERAL  */
#line 1152 "parser.y"
                          {(yyval.i)=createNode("hold_Literal");addChild((yyval.i),createNode("Numeric" + string((yyvsp[0].s))));}
#line 4410 "parser.tab.c"
    break;

  case 352: /* hold_Literal: TOK_NONNUMERICLITERAL  */
#line 1153 "parser.y"
                            {(yyval.i)=createNode("hold_Literal");addChild((yyval.i),createNode("NonNumeric" + string((yyvsp[0].s))));}
#line 4416 "parser.tab.c"
    break;

  case 353: /* class_instance_creation_expression: unqualified_class_instance_creation_expression  */
#line 1157 "parser.y"
                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4422 "parser.tab.c"
    break;

  case 354: /* class_instance_creation_expression: un_name "." unqualified_class_instance_creation_expression  */
#line 1158 "parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4428 "parser.tab.c"
    break;

  case 355: /* class_instance_creation_expression: primary "." unqualified_class_instance_creation_expression  */
#line 1159 "parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4434 "parser.tab.c"
    break;

  case 356: /* unqualified_class_instance_creation_expression: "new" class_or_interface_type "(" argument_list.opt ")" class_body.opt  */
#line 1162 "parser.y"
                                                                                                        {(yyval.i)=createNode("unqualified_class_instance_creation_expression");addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4440 "parser.tab.c"
    break;

  case 357: /* field_access: primary "." TOK_IDENTIFIER  */
#line 1165 "parser.y"
                                                {(yyval.i)=createNode("field_access");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4446 "parser.tab.c"
    break;

  case 358: /* field_access: "super" "." TOK_IDENTIFIER  */
#line 1166 "parser.y"
                                                        {(yyval.i)=createNode("field_access");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4452 "parser.tab.c"
    break;

  case 359: /* field_access: un_name "." "super" "." TOK_IDENTIFIER  */
#line 1167 "parser.y"
                                                                        {(yyval.i)=createNode("field_access");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4458 "parser.tab.c"
    break;

  case 360: /* array_access: un_name "[" expression "]"  */
#line 1170 "parser.y"
                                                        {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4464 "parser.tab.c"
    break;

  case 361: /* array_access: primary_no_new_array "[" expression "]"  */
#line 1171 "parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4470 "parser.tab.c"
    break;

  case 362: /* method_invocation: un_name "(" argument_list.opt ")"  */
#line 1174 "parser.y"
                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4476 "parser.tab.c"
    break;

  case 363: /* method_invocation: un_name "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1175 "parser.y"
                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4482 "parser.tab.c"
    break;

  case 364: /* method_invocation: primary "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1176 "parser.y"
                                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4488 "parser.tab.c"
    break;

  case 365: /* method_invocation: "super" "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1177 "parser.y"
                                                                                        {(yyval.i)=createNode("method_invocation");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4494 "parser.tab.c"
    break;

  case 366: /* method_invocation: un_name "." "super" "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1178 "parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4500 "parser.tab.c"
    break;

  case 367: /* argument_list: expression com_expression.multiopt  */
#line 1181 "parser.y"
                                                        {(yyval.i)=createNode("argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4506 "parser.tab.c"
    break;

  case 368: /* com_expression.multiopt: com_expression.multiopt "," expression  */
#line 1184 "parser.y"
                                                                {(yyval.i)=createNode("com_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4512 "parser.tab.c"
    break;

  case 369: /* com_expression.multiopt: %empty  */
#line 1185 "parser.y"
                                {(yyval.i)=-1;}
#line 4518 "parser.tab.c"
    break;

  case 370: /* method_reference: un_name "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1188 "parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4524 "parser.tab.c"
    break;

  case 371: /* method_reference: primary "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1189 "parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4530 "parser.tab.c"
    break;

  case 372: /* method_reference: "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1190 "parser.y"
                                                                        {(yyval.i)=createNode("method_reference");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4536 "parser.tab.c"
    break;

  case 373: /* method_reference: un_name "." "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1191 "parser.y"
                                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4542 "parser.tab.c"
    break;

  case 374: /* array_creation_expression: "new" primitive_type dim_exprs dims.opt  */
#line 1194 "parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4548 "parser.tab.c"
    break;

  case 375: /* array_creation_expression: "new" class_or_interface_type dim_exprs dims.opt  */
#line 1195 "parser.y"
                                                                        {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4554 "parser.tab.c"
    break;

  case 376: /* array_creation_expression: "new" primitive_type dims array_initializer  */
#line 1196 "parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4560 "parser.tab.c"
    break;

  case 377: /* array_creation_expression: "new" class_or_interface_type dims array_initializer  */
#line 1197 "parser.y"
                                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4566 "parser.tab.c"
    break;

  case 378: /* dim_exprs: dim_expr dim_expr.multiopt  */
#line 1200 "parser.y"
                                                {(yyval.i)=createNode("dim_exprs");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4572 "parser.tab.c"
    break;

  case 379: /* dim_expr.multiopt: dim_expr.multiopt dim_expr  */
#line 1203 "parser.y"
                                                {(yyval.i)=createNode("dim_expr.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4578 "parser.tab.c"
    break;

  case 380: /* dim_expr.multiopt: %empty  */
#line 1204 "parser.y"
                                {(yyval.i)=-1;}
#line 4584 "parser.tab.c"
    break;

  case 381: /* dim_expr: "[" expression "]"  */
#line 1207 "parser.y"
                                                {(yyval.i)=createNode("dim_expr");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4590 "parser.tab.c"
    break;

  case 382: /* expression: assignment_expression  */
#line 1210 "parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4596 "parser.tab.c"
    break;

  case 383: /* assignment_expression: conditional_expression  */
#line 1213 "parser.y"
                                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4602 "parser.tab.c"
    break;

  case 384: /* assignment_expression: assignment  */
#line 1214 "parser.y"
                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4608 "parser.tab.c"
    break;

  case 385: /* assignment: left_hand_side assignment_operator expression  */
#line 1217 "parser.y"
                                                                {(yyval.i)=createNode("assignment");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4614 "parser.tab.c"
    break;

  case 386: /* left_hand_side: un_name  */
#line 1220 "parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4620 "parser.tab.c"
    break;

  case 387: /* left_hand_side: field_access  */
#line 1221 "parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4626 "parser.tab.c"
    break;

  case 388: /* left_hand_side: array_access  */
#line 1222 "parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4632 "parser.tab.c"
    break;

  case 389: /* assignment_operator: "="  */
#line 1225 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4638 "parser.tab.c"
    break;

  case 390: /* assignment_operator: "*="  */
#line 1226 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4644 "parser.tab.c"
    break;

  case 391: /* assignment_operator: "/="  */
#line 1227 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4650 "parser.tab.c"
    break;

  case 392: /* assignment_operator: "%="  */
#line 1228 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4656 "parser.tab.c"
    break;

  case 393: /* assignment_operator: "+="  */
#line 1229 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4662 "parser.tab.c"
    break;

  case 394: /* assignment_operator: "-="  */
#line 1230 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4668 "parser.tab.c"
    break;

  case 395: /* assignment_operator: "<<="  */
#line 1231 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4674 "parser.tab.c"
    break;

  case 396: /* assignment_operator: ">>="  */
#line 1232 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4680 "parser.tab.c"
    break;

  case 397: /* assignment_operator: ">>>="  */
#line 1233 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4686 "parser.tab.c"
    break;

  case 398: /* assignment_operator: "&="  */
#line 1234 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4692 "parser.tab.c"
    break;

  case 399: /* assignment_operator: "^="  */
#line 1235 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4698 "parser.tab.c"
    break;

  case 400: /* assignment_operator: "|="  */
#line 1236 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4704 "parser.tab.c"
    break;

  case 401: /* conditional_expression: conditional_or_expression  */
#line 1239 "parser.y"
                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4710 "parser.tab.c"
    break;

  case 402: /* conditional_expression: conditional_or_expression "?" expression ":" conditional_expression  */
#line 1240 "parser.y"
                                                                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4716 "parser.tab.c"
    break;

  case 403: /* conditional_or_expression: conditional_and_expression  */
#line 1243 "parser.y"
                                                {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4722 "parser.tab.c"
    break;

  case 404: /* conditional_or_expression: conditional_or_expression "||" conditional_and_expression  */
#line 1244 "parser.y"
                                                                                        {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4728 "parser.tab.c"
    break;

  case 405: /* conditional_and_expression: inclusive_or_expression  */
#line 1247 "parser.y"
                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4734 "parser.tab.c"
    break;

  case 406: /* conditional_and_expression: conditional_and_expression "&&" inclusive_or_expression  */
#line 1248 "parser.y"
                                                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4740 "parser.tab.c"
    break;

  case 407: /* inclusive_or_expression: exclusive_or_expression  */
#line 1251 "parser.y"
                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4746 "parser.tab.c"
    break;

  case 408: /* inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression  */
#line 1252 "parser.y"
                                                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4752 "parser.tab.c"
    break;

  case 409: /* exclusive_or_expression: and_expression  */
#line 1255 "parser.y"
                                        {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4758 "parser.tab.c"
    break;

  case 410: /* exclusive_or_expression: exclusive_or_expression "^" and_expression  */
#line 1256 "parser.y"
                                                                {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4764 "parser.tab.c"
    break;

  case 411: /* and_expression: equality_expression  */
#line 1259 "parser.y"
                                        {(yyval.i)=createNode("and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4770 "parser.tab.c"
    break;

  case 412: /* and_expression: and_expression "&" equality_expression  */
#line 1260 "parser.y"
                                                                {(yyval.i)=createNode("and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4776 "parser.tab.c"
    break;

  case 413: /* equality_expression: relational_expression  */
#line 1263 "parser.y"
                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4782 "parser.tab.c"
    break;

  case 414: /* equality_expression: equality_expression "==" relational_expression  */
#line 1264 "parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4788 "parser.tab.c"
    break;

  case 415: /* equality_expression: equality_expression "!=" relational_expression  */
#line 1265 "parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4794 "parser.tab.c"
    break;

  case 416: /* relational_expression: shift_expression  */
#line 1268 "parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4800 "parser.tab.c"
    break;

  case 417: /* relational_expression: relational_expression "<" shift_expression  */
#line 1269 "parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4806 "parser.tab.c"
    break;

  case 418: /* relational_expression: relational_expression ">" shift_expression  */
#line 1270 "parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4812 "parser.tab.c"
    break;

  case 419: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1271 "parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4818 "parser.tab.c"
    break;

  case 420: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1272 "parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4824 "parser.tab.c"
    break;

  case 421: /* relational_expression: instanceof_expression  */
#line 1273 "parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4830 "parser.tab.c"
    break;

  case 422: /* instanceof_expression: relational_expression "instanceof" reference_type  */
#line 1276 "parser.y"
                                                                        {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4836 "parser.tab.c"
    break;

  case 423: /* instanceof_expression: relational_expression "instanceof" pattern  */
#line 1277 "parser.y"
                                                                {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4842 "parser.tab.c"
    break;

  case 424: /* shift_expression: additive_expression  */
#line 1280 "parser.y"
                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4848 "parser.tab.c"
    break;

  case 425: /* shift_expression: shift_expression "<<" additive_expression  */
#line 1281 "parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4854 "parser.tab.c"
    break;

  case 426: /* shift_expression: shift_expression ">>" additive_expression  */
#line 1282 "parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4860 "parser.tab.c"
    break;

  case 427: /* shift_expression: shift_expression ">>>" additive_expression  */
#line 1283 "parser.y"
                                                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4866 "parser.tab.c"
    break;

  case 428: /* additive_expression: multiplicative_expression  */
#line 1286 "parser.y"
                                                {(yyval.i)=createNode("additive_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4872 "parser.tab.c"
    break;

  case 429: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1287 "parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4878 "parser.tab.c"
    break;

  case 430: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1288 "parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4884 "parser.tab.c"
    break;

  case 431: /* multiplicative_expression: unary_expression  */
#line 1291 "parser.y"
                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4890 "parser.tab.c"
    break;

  case 432: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1292 "parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4896 "parser.tab.c"
    break;

  case 433: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1293 "parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4902 "parser.tab.c"
    break;

  case 434: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1294 "parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4908 "parser.tab.c"
    break;

  case 435: /* unary_expression: pre_increment_expression  */
#line 1297 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4914 "parser.tab.c"
    break;

  case 436: /* unary_expression: pre_decrement_expression  */
#line 1298 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4920 "parser.tab.c"
    break;

  case 437: /* unary_expression: "+" unary_expression  */
#line 1299 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4926 "parser.tab.c"
    break;

  case 438: /* unary_expression: "-" unary_expression  */
#line 1300 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4932 "parser.tab.c"
    break;

  case 439: /* unary_expression: unary_expression_not_plus_minus  */
#line 1301 "parser.y"
                                                        {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4938 "parser.tab.c"
    break;

  case 440: /* pre_increment_expression: "++" unary_expression  */
#line 1304 "parser.y"
                                                {(yyval.i)=createNode("pre_increment_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4944 "parser.tab.c"
    break;

  case 441: /* pre_decrement_expression: "--" unary_expression  */
#line 1306 "parser.y"
                                                {(yyval.i)=createNode("pre_decrement_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4950 "parser.tab.c"
    break;

  case 442: /* unary_expression_not_plus_minus: postfix_expression  */
#line 1308 "parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4956 "parser.tab.c"
    break;

  case 443: /* unary_expression_not_plus_minus: "~" unary_expression  */
#line 1309 "parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4962 "parser.tab.c"
    break;

  case 444: /* unary_expression_not_plus_minus: "!" unary_expression  */
#line 1310 "parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4968 "parser.tab.c"
    break;

  case 445: /* unary_expression_not_plus_minus: cast_expression  */
#line 1311 "parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4974 "parser.tab.c"
    break;

  case 446: /* unary_expression_not_plus_minus: switch_expression  */
#line 1312 "parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4980 "parser.tab.c"
    break;

  case 447: /* postfix_expression: primary  */
#line 1315 "parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4986 "parser.tab.c"
    break;

  case 448: /* postfix_expression: un_name  */
#line 1316 "parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4992 "parser.tab.c"
    break;

  case 449: /* postfix_expression: post_increment_expression  */
#line 1317 "parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4998 "parser.tab.c"
    break;

  case 450: /* postfix_expression: post_decrement_expression  */
#line 1318 "parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5004 "parser.tab.c"
    break;

  case 451: /* post_increment_expression: postfix_expression "++"  */
#line 1321 "parser.y"
                                                {(yyval.i)=createNode("post_increment_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5010 "parser.tab.c"
    break;

  case 452: /* post_decrement_expression: postfix_expression "--"  */
#line 1324 "parser.y"
                                                {(yyval.i)=createNode("post_decrement_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5016 "parser.tab.c"
    break;

  case 453: /* cast_expression: "(" primitive_type ")" unary_expression  */
#line 1327 "parser.y"
                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5022 "parser.tab.c"
    break;

  case 454: /* additional_bound.multiopt: additional_bound.multiopt additional_bound  */
#line 1330 "parser.y"
                                                                {(yyval.i)=createNode("additional_bound.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5028 "parser.tab.c"
    break;

  case 455: /* additional_bound.multiopt: %empty  */
#line 1331 "parser.y"
                                {(yyval.i)=-1;}
#line 5034 "parser.tab.c"
    break;

  case 456: /* switch_expression: "switch" "(" expression ")" switch_block  */
#line 1334 "parser.y"
                                                                        {(yyval.i)=createNode("switch_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5040 "parser.tab.c"
    break;


#line 5044 "parser.tab.c"

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

#line 1337 "parser.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

string fix_escape_chars(string s) {
	string res = "";
	char prev = ' ';
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		char next = (i+1 < s.length()) ? s[i+1] : ' ';
		if (c == '\\' && prev != '\\' && next != '"') {
			res += "\\\\";
		} else {
			res += c;
		}
		prev = c;
	}
	return res;
}

string replace_quotes(string s) {
	string res = "";
	char prev = ' ';
	for (char c: s) {
		if (c == '"' && prev != '\\') {
			res += "\\\"";
		} else {
			res += c;
		}
		prev = c;
	}
	return res;
}

int createNode(string lbl) {
	vector<int> v;
	nodes.push_back({replace_quotes(fix_escape_chars(lbl)), v});
	// cout << "Node Created - " << lbl << endl;
	return nodes.size()-1;
}

void addChild(int parent, int child) {
	nodes[parent].second.push_back(child);
	// cout << "Added Child - " << label[parent] << "->" << label[child] << endl;
}

int get_leaf_or_multi_child_node(int node) {
	if (nodes[node].second.size() == 1) {
		return get_leaf_or_multi_child_node(nodes[node].second[0]);
	}
	return node;
}

void fix_ast(int node) {
	// if child node has only one child remove the child node and add the child of child node to parent node
	for (int i = 0; i < nodes[node].second.size(); i++) {
		int child = nodes[node].second[i];
		fix_ast(child);
		int final_child = get_leaf_or_multi_child_node(child);
		if (final_child != child) {
			// if (nodes[final_child].second.size() != 0) {
			// 	nodes[final_child].first = nodes[child].first;
			// }
			nodes[node].second[i] = final_child;
			// cout << "----Fixed AST - " << nodes[node].first << "->" << nodes[child].first << " to " << nodes[node].first << "->" << nodes[final_child].first << endl;
		}
	}
}

void build_graph() {
	freopen("out.dot", "w", stdout);
	cout << "// dot -Tps out.dot -o out.ps\n\n"
		 << "graph \"Abstract Syntax Tree\"\n"
		 << "{\n"
    	 << "\tfontname=\"Helvetica,Arial,sans-serif\"\n"
    	 << "\tnode [fontsize=10, width=\".2\", height=\".2\", margin=0]\n"
		 << "\tedge [fontsize=6]\n"
    	 << "\tgraph[fontsize=8];\n\n"
    	 << "\tlabel=\"Abstract Syntax Tree\"\n\n";

	queue<int> nodesQueue;
	nodesQueue.push(startNode);
	while (!nodesQueue.empty()) {
		int node = nodesQueue.front();
		nodesQueue.pop();
		cout << "\tn" << node << " ;\n";
		cout << "\tn" << node << " [label=\"" << nodes[node].first << "\"] ;\n";
		for (int child: nodes[node].second) {
			cout << "\tn" << node << " -- " << 'n' << child << " ;\n";
			nodesQueue.push(child);
		}
		cout << endl;
	}

	cout << "}" << endl;
  fclose(stdout);
}

void print_symbol_table(){
  freopen("symbole_table.txt", "w", stdout);
  cout<<"Symbol      Type\n";
  for(int i = 0; i < block_count-1; i++) {
    for(auto itr = block_table[i].begin(); itr != block_table[i].end(); itr++) {
      cout<< itr->first <<" "<<itr->second<<"\n";
    }
    cout<< "--------------------------------\n";
  }
  cout<<"Number of Blocks : "<<block_count<<"\n";
  fclose(stdout);
  return;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
	yyparse();
	fclose(yyin);
	// fix_ast(startNode);
	build_graph();
  // print_symbol_table();
	return 0;
}
