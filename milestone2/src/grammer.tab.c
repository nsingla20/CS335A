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
#line 1 "grammer.y"


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
vector<map<string,string>> block_table(10);
vector<map<string,string>> cum_table;
map<string,string> symbol_table;
int current_stack = 0;
string curr_type;
string modifier = "public";
string parent_class = "";
int class_dec_flag = 0;
int method_dec_flag = 0;

vector<string> mod_list;
string lhs_type = "";
string rhs_type = "";
int lhs_record = 1;
int rhs_record = 1;
int halt_type_check = 0;
string pre_var = "";

struct var_info{
  string name;
  int size;
  int offset;
  string type;
};

vector<var_info> database;
struct var_info* filler;


void yyerror(char const *);
int createNode(string);
string probe_type(string);
void addChild(int, int);


#line 122 "grammer.tab.c"

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

#include "grammer.tab.h"
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
  YYSYMBOL_149_1 = 149,                    /* $@1  */
  YYSYMBOL_150_2 = 150,                    /* $@2  */
  YYSYMBOL_151_type_parameters_opt = 151,  /* type_parameters.opt  */
  YYSYMBOL_152_class_extends_opt = 152,    /* class_extends.opt  */
  YYSYMBOL_153_class_implements_opt = 153, /* class_implements.opt  */
  YYSYMBOL_154_class_permits_opt = 154,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 155,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 156,      /* type_parameter_list  */
  YYSYMBOL_157_com_type_parameter_multiopt = 157, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 158,            /* class_extends  */
  YYSYMBOL_class_implements = 159,         /* class_implements  */
  YYSYMBOL_interface_type_list = 160,      /* interface_type_list  */
  YYSYMBOL_161_com_interface_type_multiopt = 161, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 162,            /* class_permits  */
  YYSYMBOL_class_body = 163,               /* class_body  */
  YYSYMBOL_164_class_body_declaration_multiopt = 164, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 165,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 166, /* class_member_declaration  */
  YYSYMBOL_variable_declarator_list = 167, /* variable_declarator_list  */
  YYSYMBOL_168_com_variable_declarator_multiopt = 168, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 169,      /* variable_declarator  */
  YYSYMBOL_170_eq_variable_initializer_opt = 170, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 171,   /* variable_declarator_id  */
  YYSYMBOL_172_dims_opt = 172,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 173,     /* variable_initializer  */
  YYSYMBOL_174_type_arguments_opt = 174,   /* type_arguments.opt  */
  YYSYMBOL_method_declaration = 175,       /* method_declaration  */
  YYSYMBOL_method_header = 176,            /* method_header  */
  YYSYMBOL_177_throws_opt = 177,           /* throws.opt  */
  YYSYMBOL_result = 178,                   /* result  */
  YYSYMBOL_method_declarator = 179,        /* method_declarator  */
  YYSYMBOL_180_3 = 180,                    /* $@3  */
  YYSYMBOL_181_4 = 181,                    /* $@4  */
  YYSYMBOL_hold_TOK_IDENTIFIER = 182,      /* hold_TOK_IDENTIFIER  */
  YYSYMBOL_183_formal_parameter_list_opt = 183, /* formal_parameter_list.opt  */
  YYSYMBOL_formal_parameter_list = 184,    /* formal_parameter_list  */
  YYSYMBOL_185_com_formal_parameter_multiopt = 185, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 186,         /* formal_parameter  */
  YYSYMBOL_variable_arity_parameter = 187, /* variable_arity_parameter  */
  YYSYMBOL_throws = 188,                   /* throws  */
  YYSYMBOL_exception_type_list = 189,      /* exception_type_list  */
  YYSYMBOL_190_com_exception_type_multiopt = 190, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 191,           /* exception_type  */
  YYSYMBOL_method_body = 192,              /* method_body  */
  YYSYMBOL_instance_initializer = 193,     /* instance_initializer  */
  YYSYMBOL_constructor_declaration = 194,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 195,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 196,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 197,         /* constructor_body  */
  YYSYMBOL_198_block_statements_opt = 198, /* block_statements.opt  */
  YYSYMBOL_199_argument_list_opt = 199,    /* argument_list.opt  */
  YYSYMBOL_200_5 = 200,                    /* $@5  */
  YYSYMBOL_enum_declaration = 201,         /* enum_declaration  */
  YYSYMBOL_enum_body = 202,                /* enum_body  */
  YYSYMBOL_203_com_opt = 203,              /* com.opt  */
  YYSYMBOL_204_enum_body_declarations_opt = 204, /* enum_body_declarations.opt  */
  YYSYMBOL_205_enum_constant_list_opt = 205, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 206,       /* enum_constant_list  */
  YYSYMBOL_207_com_enum_constant_multiopt = 207, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 208,            /* enum_constant  */
  YYSYMBOL_209_class_body_opt = 209,       /* class_body.opt  */
  YYSYMBOL_enum_body_declarations = 210,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 211,       /* record_declaration  */
  YYSYMBOL_record_header = 212,            /* record_header  */
  YYSYMBOL_213_record_component_list_opt = 213, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 214,    /* record_component_list  */
  YYSYMBOL_215_com_record_component_multiopt = 215, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 216,         /* record_component  */
  YYSYMBOL_variable_arity_record_component = 217, /* variable_arity_record_component  */
  YYSYMBOL_record_body = 218,              /* record_body  */
  YYSYMBOL_219_record_body_declaration_multiopt = 219, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 220,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 221, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 222,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 223, /* normal_interface_declaration  */
  YYSYMBOL_224_interface_extends_opt = 224, /* interface_extends.opt  */
  YYSYMBOL_225_interface_permits_opt = 225, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 226,        /* interface_extends  */
  YYSYMBOL_interface_permits = 227,        /* interface_permits  */
  YYSYMBOL_interface_body = 228,           /* interface_body  */
  YYSYMBOL_229_interface_member_declaration_multiopt = 229, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 230, /* interface_member_declaration  */
  YYSYMBOL_interface_method_declaration = 231, /* interface_method_declaration  */
  YYSYMBOL_array_initializer = 232,        /* array_initializer  */
  YYSYMBOL_233_variable_initializer_list_opt = 233, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 234, /* variable_initializer_list  */
  YYSYMBOL_235_com_variable_initializer_multiopt = 235, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 236,                    /* block  */
  YYSYMBOL_block_statements = 237,         /* block_statements  */
  YYSYMBOL_238_block_statement_multiopt = 238, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 239,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 240, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 241, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 242, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 243,      /* local_variable_type  */
  YYSYMBOL_statement = 244,                /* statement  */
  YYSYMBOL_statement_no_short_if = 245,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 246, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 247,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 248,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 249, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 250,     /* expression_statement  */
  YYSYMBOL_statement_expression = 251,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 252,        /* if_then_statement  */
  YYSYMBOL_hold_TOK_if = 253,              /* hold_TOK_if  */
  YYSYMBOL_if_then_else_statement = 254,   /* if_then_else_statement  */
  YYSYMBOL_255_6 = 255,                    /* $@6  */
  YYSYMBOL_if_then_else_statement_no_short_if = 256, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_257_7 = 257,                    /* $@7  */
  YYSYMBOL_assert_statement = 258,         /* assert_statement  */
  YYSYMBOL_switch_statement = 259,         /* switch_statement  */
  YYSYMBOL_switch_block = 260,             /* switch_block  */
  YYSYMBOL_261_switch_rule_multiopt = 261, /* switch_rule.multiopt  */
  YYSYMBOL_262_switch_block_statement_group_multiopt = 262, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_263_switch_label_col_multiopt = 263, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 264,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 265, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 266,             /* switch_label  */
  YYSYMBOL_267_com_case_constant_multiopt = 267, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 268,            /* case_constant  */
  YYSYMBOL_while_statement = 269,          /* while_statement  */
  YYSYMBOL_hold_TOK_while = 270,           /* hold_TOK_while  */
  YYSYMBOL_while_statement_no_short_if = 271, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 272,             /* do_statement  */
  YYSYMBOL_for_statement = 273,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 274, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 275,      /* basic_for_statement  */
  YYSYMBOL_hold_TOK_for = 276,             /* hold_TOK_for  */
  YYSYMBOL_277_for_init_opt = 277,         /* for_init.opt  */
  YYSYMBOL_278_expression_opt = 278,       /* expression.opt  */
  YYSYMBOL_279_for_update_opt = 279,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 280, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 281,                 /* for_init  */
  YYSYMBOL_for_update = 282,               /* for_update  */
  YYSYMBOL_statement_expression_list = 283, /* statement_expression_list  */
  YYSYMBOL_284_com_statement_expression_multiopt = 284, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 285,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 286, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 287,          /* break_statement  */
  YYSYMBOL_288_IDENTIFIER_opt = 288,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 289,          /* yield_statement  */
  YYSYMBOL_continue_statement = 290,       /* continue_statement  */
  YYSYMBOL_return_statement = 291,         /* return_statement  */
  YYSYMBOL_throw_statement = 292,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 293,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 294,            /* try_statement  */
  YYSYMBOL_295_catches_opt = 295,          /* catches.opt  */
  YYSYMBOL_catches = 296,                  /* catches  */
  YYSYMBOL_297_catch_clause_multiopt = 297, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 298,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 299,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 300,               /* catch_type  */
  YYSYMBOL_301_vt_class_type_multiopt = 301, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 302,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 303, /* try_with_resources_statement  */
  YYSYMBOL_304_finally_opt = 304,          /* finally.opt  */
  YYSYMBOL_resource_specification = 305,   /* resource_specification  */
  YYSYMBOL_306_semcol_opt = 306,           /* semcol.opt  */
  YYSYMBOL_resource_list = 307,            /* resource_list  */
  YYSYMBOL_308_semcol_resource_multiopt = 308, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 309,                 /* resource  */
  YYSYMBOL_variable_access = 310,          /* variable_access  */
  YYSYMBOL_pattern = 311,                  /* pattern  */
  YYSYMBOL_type_pattern = 312,             /* type_pattern  */
  YYSYMBOL_primary = 313,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 314,     /* primary_no_new_array  */
  YYSYMBOL_hold_Literal = 315,             /* hold_Literal  */
  YYSYMBOL_class_instance_creation_expression = 316, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 317, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_field_access = 318,             /* field_access  */
  YYSYMBOL_array_access = 319,             /* array_access  */
  YYSYMBOL_method_invocation = 320,        /* method_invocation  */
  YYSYMBOL_argument_list = 321,            /* argument_list  */
  YYSYMBOL_322_com_expression_multiopt = 322, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 323,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 324, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 325,                /* dim_exprs  */
  YYSYMBOL_326_dim_expr_multiopt = 326,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 327,                 /* dim_expr  */
  YYSYMBOL_expression = 328,               /* expression  */
  YYSYMBOL_assignment_expression = 329,    /* assignment_expression  */
  YYSYMBOL_assignment = 330,               /* assignment  */
  YYSYMBOL_left_hand_side = 331,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 332,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 333,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 334, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 335, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 336,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 337,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 338,           /* and_expression  */
  YYSYMBOL_equality_expression = 339,      /* equality_expression  */
  YYSYMBOL_relational_expression = 340,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 341,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 342,         /* shift_expression  */
  YYSYMBOL_additive_expression = 343,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 344, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 345,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 346, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 347, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 348, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 349,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 350, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 351, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 352,          /* cast_expression  */
  YYSYMBOL_353_additional_bound_multiopt = 353, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 354         /* switch_expression  */
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
#define YYLAST   2178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  247
/* YYNRULES -- Number of rules.  */
#define YYNRULES  467
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  775

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
       0,   409,   409,   412,   413,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   429,   430,   434,   435,
     438,   439,   442,   443,   446,   447,   448,   449,   450,   453,
     454,   457,   458,   461,   462,   463,   466,   469,   470,   473,
     476,   477,   480,   483,   486,   489,   490,   493,   494,   497,
     498,   501,   504,   505,   508,   509,   514,   536,   542,   545,
     548,   549,   552,   555,   556,   559,   560,   561,   562,   565,
     568,   571,   574,   577,   578,   581,   582,   583,   586,   587,
     592,   604,   605,   608,   608,   608,   611,   612,   615,   616,
     619,   620,   623,   624,   627,   630,   633,   634,   637,   640,
     643,   646,   647,   650,   653,   656,   657,   660,   661,   662,
     665,   666,   667,   670,   673,   674,   677,   680,   681,   684,
     689,   690,   693,   694,   697,   698,   701,   704,   705,   708,
     709,   712,   713,   716,   716,   716,   719,   748,   749,   752,
     755,   756,   759,   760,   763,   766,   769,   772,   773,   776,
     779,   780,   783,   786,   789,   792,   795,   798,   799,   802,
     802,   803,   806,   809,   812,   813,   816,   817,   820,   821,
     824,   827,   828,   831,   835,   836,   840,   843,   846,   849,
     850,   853,   856,   857,   861,   862,   866,   869,   872,   873,
     876,   877,   880,   886,   889,   892,   893,   896,   897,   900,
     903,   906,   909,   910,   913,   914,   915,   916,   922,   928,
     931,   932,   935,   938,   939,   944,   947,   950,   951,   954,
     955,   956,   959,   960,   963,   966,   969,   970,   973,   974,
     975,   976,   977,   978,   981,   982,   983,   984,   985,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1003,  1006,  1009,  1012,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1035,  1038,  1041,  1041,  1044,  1044,  1047,
    1048,  1051,  1054,  1055,  1058,  1059,  1062,  1063,  1066,  1067,
    1070,  1071,  1072,  1075,  1078,  1079,  1082,  1083,  1086,  1089,
    1092,  1094,  1097,  1100,  1101,  1104,  1105,  1108,  1111,  1114,
    1115,  1118,  1119,  1122,  1123,  1126,  1129,  1130,  1133,  1136,
    1139,  1140,  1143,  1146,  1149,  1152,  1153,  1156,  1159,  1162,
    1165,  1168,  1171,  1172,  1173,  1176,  1177,  1180,  1183,  1184,
    1187,  1190,  1193,  1196,  1197,  1200,  1203,  1206,  1207,  1210,
    1213,  1214,  1217,  1220,  1221,  1224,  1225,  1228,  1229,  1232,
    1235,  1240,  1241,  1244,  1245,  1246,  1247,  1248,  1249,  1250,
    1251,  1252,  1256,  1258,  1264,  1265,  1266,  1269,  1272,  1273,
    1274,  1277,  1281,  1284,  1285,  1286,  1287,  1288,  1291,  1294,
    1295,  1298,  1299,  1300,  1301,  1304,  1305,  1306,  1307,  1310,
    1313,  1314,  1317,  1320,  1323,  1324,  1327,  1330,  1331,  1332,
    1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,
    1345,  1346,  1349,  1350,  1353,  1354,  1357,  1358,  1361,  1362,
    1365,  1366,  1369,  1370,  1373,  1374,  1375,  1378,  1379,  1384,
    1389,  1394,  1399,  1402,  1403,  1406,  1407,  1408,  1409,  1412,
    1413,  1414,  1417,  1418,  1419,  1420,  1423,  1424,  1425,  1426,
    1427,  1430,  1432,  1434,  1435,  1436,  1437,  1438,  1441,  1442,
    1443,  1444,  1447,  1450,  1453,  1456,  1457,  1460
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
  "class_declaration", "normal_class_declaration", "$@1", "$@2",
  "type_parameters.opt", "class_extends.opt", "class_implements.opt",
  "class_permits.opt", "type_parameters", "type_parameter_list",
  "com_type_parameter.multiopt", "class_extends", "class_implements",
  "interface_type_list", "com_interface_type.multiopt", "class_permits",
  "class_body", "class_body_declaration.multiopt",
  "class_body_declaration", "class_member_declaration",
  "variable_declarator_list", "com_variable_declarator.multiopt",
  "variable_declarator", "eq_variable_initializer.opt",
  "variable_declarator_id", "dims.opt", "variable_initializer",
  "type_arguments.opt", "method_declaration", "method_header",
  "throws.opt", "result", "method_declarator", "$@3", "$@4",
  "hold_TOK_IDENTIFIER", "formal_parameter_list.opt",
  "formal_parameter_list", "com_formal_parameter.multiopt",
  "formal_parameter", "variable_arity_parameter", "throws",
  "exception_type_list", "com_exception_type.multiopt", "exception_type",
  "method_body", "instance_initializer", "constructor_declaration",
  "constructor_declarator", "simple_type_name", "constructor_body",
  "block_statements.opt", "argument_list.opt", "$@5", "enum_declaration",
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
  "hold_TOK_if", "if_then_else_statement", "$@6",
  "if_then_else_statement_no_short_if", "$@7", "assert_statement",
  "switch_statement", "switch_block", "switch_rule.multiopt",
  "switch_block_statement_group.multiopt", "switch_label_col.multiopt",
  "switch_rule", "switch_block_statement_group", "switch_label",
  "com_case_constant.multiopt", "case_constant", "while_statement",
  "hold_TOK_while", "while_statement_no_short_if", "do_statement",
  "for_statement", "for_statement_no_short_if", "basic_for_statement",
  "hold_TOK_for", "for_init.opt", "expression.opt", "for_update.opt",
  "basic_for_statement_no_short_if", "for_init", "for_update",
  "statement_expression_list", "com_statement_expression.multiopt",
  "enhanced_for_statement", "enhanced_for_statement_no_short_if",
  "break_statement", "IDENTIFIER.opt", "yield_statement",
  "continue_statement", "return_statement", "throw_statement",
  "synchronized_statement", "try_statement", "catches.opt", "catches",
  "catch_clause.multiopt", "catch_clause", "catch_formal_parameter",
  "catch_type", "vt_class_type.multiopt", "finally",
  "try_with_resources_statement", "finally.opt", "resource_specification",
  "semcol.opt", "resource_list", "semcol_resource.multiopt", "resource",
  "variable_access", "pattern", "type_pattern", "primary",
  "primary_no_new_array", "hold_Literal",
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

#define YYPACT_NINF (-672)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-462)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   107,   141,  -672,  -672,  -672,  -672,  -672,  -672,    94,
      58,    26,  -672,  -672,  -672,  -672,  -672,    43,   186,  -672,
    -672,   193,   142,  -672,  1538,  -672,  -672,  -672,  -672,  -672,
    -672,  -672,  -672,   196,    64,  -672,  -672,  -672,   242,  -672,
     253,  -672,  -672,  -672,   273,  -672,  -672,  -672,  -672,  -672,
    -672,  -672,   180,  -672,   294,   325,   259,   303,   303,   311,
     314,  -672,  -672,  -672,   344,   249,  -672,   355,   300,  -672,
     354,  -672,  -672,   303,   333,   348,   351,  -672,   394,  -672,
     334,  -672,   361,   344,   326,  -672,   446,   259,   342,   369,
    -672,  -672,   406,   390,   408,   370,   396,  -672,  -672,   344,
    -672,  -672,   400,  -672,  -672,   193,   312,  -672,  -672,  -672,
    -672,  -672,  -672,  -672,  -672,  -672,    77,  -672,  -672,  -672,
    -672,  -672,   110,  -672,   414,  -672,  -672,  -672,   327,   344,
     259,  -672,   392,    67,   333,   344,   418,  -672,   405,   419,
     348,   355,   351,  -672,  -672,  -672,   438,   398,   397,  -672,
     425,  -672,  -672,   348,   373,  -672,    38,    72,  -672,  -672,
    -672,  -672,   348,   441,  -672,   353,  -672,   394,   444,  -672,
     443,   -13,  -672,  -672,   412,   446,   122,   193,   358,  -672,
    -672,   344,   344,  -672,  -672,   452,  1445,   148,  -672,  -672,
     344,  -672,   193,  -672,  -672,  1928,  -672,  -672,  -672,  -672,
    -672,  -672,  1578,  -672,  1968,  -672,  -672,  -672,  -672,  -672,
    -672,  -672,  -672,  -672,  -672,   351,  -672,  -672,  -672,  -672,
     421,  -672,  -672,  1445,  1314,  1445,  1445,  1445,  1445,   446,
     112,   456,  -672,  1445,   318,   174,   426,  -672,  -672,  -672,
      28,   246,  -672,  -672,  -672,  -672,  -672,  -672,  -672,   539,
    -672,    21,   462,   372,   431,   469,    47,   162,  -672,   269,
     251,   256,  -672,  -672,  -672,  -672,   277,  -672,  -672,  -672,
    -672,  1968,  -672,   348,   351,  -672,  -672,   352,    32,  -672,
     238,  1445,  -672,  1445,   480,   480,  1758,  -672,  -672,  1445,
     471,   475,  1445,    13,  -672,  -672,  1445,  -672,   589,  -672,
     381,  -672,  -672,  -672,  -672,  -672,  -672,   463,   490,  -672,
    -672,  -672,  -672,  -672,   465,  -672,   487,  -672,  -672,  -672,
    -672,   492,  -672,  -672,  -672,   495,  -672,  -672,  -672,  -672,
    -672,  -672,  -672,  -672,  -672,   149,   217,  -672,  -672,  -672,
     277,   278,   279,    17,    32,   416,    15,   443,   204,   358,
     195,  -672,  -672,  -672,   496,   497,  -672,  -672,  -672,  -672,
     467,    23,   514,   333,  1445,  -672,   441,    99,   333,  1445,
      57,   333,  1445,   500,  -672,  -672,  -672,  -672,  -672,  -672,
    -672,  -672,  -672,  -672,  -672,  -672,  1445,  1445,  1445,  1445,
    1445,  1445,  1445,  1445,  1445,  1445,  1445,  1445,  1445,   474,
    1445,  1445,  1445,  1445,  1445,  1445,  1445,  1445,  -672,  -672,
     505,  -672,  -672,  -672,  -672,   416,   325,  1758,   255,  -672,
     491,   502,   499,   429,   506,  -672,  1445,  1445,   508,  2081,
     501,   424,   511,  -672,  1488,  -672,   509,  -672,  -672,   510,
    -672,  1445,  1445,  2055,  -672,   344,   448,  -672,   531,  1578,
    -672,  -672,  -672,  -672,  1445,  -672,  1340,   -10,   509,  -672,
     441,   -10,   509,   540,   554,   547,   549,   553,   344,   177,
    -672,  -672,   565,   524,   559,  -672,   573,   532,  1445,  -672,
     548,   462,   372,   431,   469,    47,   162,   162,   269,   269,
     269,   269,   576,  -672,  -672,  -672,   251,   251,   251,   256,
     256,  -672,  -672,  -672,   416,  -672,   570,  -672,  1445,  -672,
    -672,  -672,   572,  -672,   574,   575,  -672,   260,  -672,   555,
    -672,  -672,   174,   172,   578,   529,   534,  -672,   501,  -672,
    -672,   397,  -672,   577,  1420,  -672,   590,   591,   580,  -672,
     579,  -672,  -672,   348,  -672,  -672,  -672,  1403,   592,  -672,
    -672,  -672,   507,  -672,   557,  1420,  -672,  -672,   581,   601,
    -672,  -672,   441,  -672,   516,  -672,   441,   234,   617,   333,
    -672,  -672,   441,  -672,  -672,  -672,  1445,  -672,  -672,   593,
    1445,   516,   424,  -672,   611,   598,  -672,   424,  -672,   501,
     529,  -672,   490,  -672,  -672,  -672,  1793,  1758,  1445,   610,
    1445,   613,   125,  -672,   615,  -672,  -672,  -672,   396,  -672,
    1445,  -672,   358,   622,   173,  -672,   623,   618,   635,   625,
    -672,   531,  -672,   626,  -672,  -672,  -672,  2081,   865,   632,
    -672,  -672,  -672,  -672,  -672,   621,  -672,  -672,   585,  -672,
     639,  -672,   640,  -672,  -672,   641,  -672,  -672,  -672,   642,
     135,   624,   344,   654,  -672,  -672,   638,   560,  -672,  -672,
    1445,  -672,   173,  -672,   636,  -672,   441,  -672,  -672,   645,
     630,  -672,   348,   490,   424,  1793,   603,  1445,  1445,  2055,
    1758,  -672,   135,  -672,  -672,  -672,  1420,  -672,  -672,  -672,
       7,  -672,   643,   100,  1320,   653,   509,  -672,   566,  -672,
    -672,  -672,  1758,   656,   661,   647,   649,  -672,   664,  -672,
    -672,  -672,   662,  -672,   658,  -672,  -672,  -672,  -672,  -672,
     663,  -672,  -672,   344,  -672,  1793,  1793,  1445,  1445,  1758,
    1445,  -672,  1668,  -672,   348,  -672,  -672,   675,   665,  -672,
    -672,  -672,   633,  1793,   135,  1874,  -672,   678,   669,  -672,
    -672,   686,   688,   689,  1793,  1874,  1445,  1445,  2055,  -672,
     690,   693,   679,   683,  1874,  1874,  1445,  1445,  -672,   695,
     684,  1874,   135,   702,  1874
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      61,     0,     0,     2,    58,    64,    60,    17,     1,    74,
       0,     0,    63,    65,    66,    67,    68,     4,     0,    62,
      56,     0,     0,    77,     0,    73,    75,    80,    81,    82,
      76,   193,    16,     0,     0,    69,     8,    83,     0,    10,
       0,     7,     6,     5,     0,    11,     9,    12,    14,    13,
      15,     3,     0,    57,     0,     0,    91,    87,    87,    57,
       0,    70,   136,    84,     0,     0,    90,     0,   196,    86,
       0,    71,    72,    87,    56,   102,    35,    99,   169,   162,
      41,    97,     0,     0,   198,   195,   180,    91,    89,    48,
     124,    33,     0,   100,     0,     0,   165,   168,   172,     0,
      39,    40,    95,    94,   199,     0,     0,   197,    21,    24,
      28,    30,    29,    26,    27,    25,     0,    18,    20,    22,
      23,    19,    31,    32,     0,   179,   183,   185,     0,     0,
      91,    88,     0,     0,   125,     0,     0,   164,   167,   170,
     466,     0,    79,   203,   194,   184,     0,     0,    36,   178,
     181,   189,   177,    98,    93,    44,     0,    53,    49,    45,
      50,    34,   101,   159,   106,     0,   166,     0,    42,    96,
     200,     4,   186,    37,     0,     0,     4,     0,     0,    92,
      47,     0,     0,    51,    52,     0,     0,     4,   163,   171,
       0,   465,     0,   207,   201,     0,   205,   206,   202,   204,
      38,   182,     4,   187,     0,   111,   190,   107,   110,   108,
     109,   188,   191,   112,   152,    79,   106,    85,    54,    55,
       0,   362,   363,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   459,   458,   351,   353,   357,   364,
     358,   359,   360,   160,   361,   352,   380,   393,   395,     0,
     394,   412,   414,   416,   418,   420,   422,   424,   432,   427,
     435,   439,   442,   446,   447,   450,   453,   460,   461,   456,
     457,     0,   105,    43,    78,   132,   131,     0,     0,   133,
      56,     0,   252,     0,   316,   316,     0,   298,   264,   302,
       0,     0,     0,     0,   227,   290,     0,   226,   397,   222,
       0,   223,   239,   157,   218,   219,   220,     0,     0,   221,
     228,   240,   229,   241,     0,   230,     0,   231,   242,   243,
     232,     0,   244,   233,   293,     0,   294,   245,   251,   246,
     247,   249,   248,   250,   324,   357,   360,   256,   257,   258,
       0,   259,   260,    56,     0,   130,     0,   103,     4,   175,
     459,   358,   359,   455,     0,     0,   448,   451,   449,   452,
       0,     0,     0,   125,     0,   454,   159,     0,   125,     0,
       0,   125,     0,   378,   403,   409,   401,   404,   405,   402,
     406,   400,   407,   408,   410,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   462,   463,
       0,   133,   151,   208,   150,   130,     0,     0,     0,   315,
       0,     0,    56,     0,     0,   301,     0,     0,     0,     0,
     326,     0,     0,   215,     4,   224,   121,   225,   115,   118,
     255,     0,     0,   300,   126,     0,     0,   129,     4,     4,
     192,   104,   174,   173,     0,   356,     0,     0,   121,   391,
     159,     0,   121,   369,     0,     0,     0,    57,     0,     0,
     355,   365,     0,     0,   368,   366,     0,     0,     0,   396,
       0,   415,   417,   419,   421,   423,   426,   425,   428,   430,
     429,   431,   433,   350,   434,   349,   436,   437,   438,   440,
     441,   445,   443,   444,   130,   127,     0,   253,     0,   269,
     314,   318,     0,   319,     0,     0,   320,   347,   345,   341,
     344,   346,     0,   358,     0,     0,   322,   329,   326,   317,
     217,   120,   119,   113,     0,   116,     0,     0,   307,   311,
       0,   299,   306,   149,   145,   148,   153,     0,     0,   137,
     141,   143,     0,   464,     0,   211,   387,   385,   389,     0,
     388,   386,   159,   383,     0,   373,   159,     0,     0,   125,
     381,   371,   159,   382,   372,   379,     0,   128,   134,     0,
       0,     0,     0,   340,     0,   342,     4,     0,   323,   327,
     338,   325,     0,   117,   123,   122,     0,     0,     0,   309,
     302,   146,     0,   154,   139,   156,   392,   214,   165,   210,
       0,   390,   175,     0,   277,   467,     0,   370,     0,     0,
     413,     4,   270,     0,   271,   321,   339,     0,     0,     0,
     335,   328,   337,   336,   114,    56,   263,   265,   228,   235,
       0,   236,     0,   237,   238,     0,   295,   296,   289,     0,
       0,     0,     0,     0,   142,     4,   212,     0,   367,   376,
       0,   285,   279,   275,     0,   374,   159,   384,   375,     0,
       0,   343,   334,     0,     0,     0,     0,     0,     0,   300,
       0,   310,   304,   147,   144,   140,     0,   209,   287,   288,
       0,   276,     0,     0,     0,     0,   121,   292,   332,   331,
     330,   254,     0,     0,     0,   307,     0,   312,     0,   303,
     308,   213,   284,   273,     0,   279,   272,   274,   281,   282,
       0,   377,   135,     0,   266,     0,     0,     0,   302,     0,
       0,   278,     4,   280,   333,   265,   291,     0,     0,   297,
     286,   283,     0,     0,   304,     0,   313,     0,    56,   268,
     234,     0,     0,     0,     0,     0,     0,     0,   300,   305,
       0,     0,   307,     0,     0,     0,     0,   302,   267,     0,
       0,     0,   304,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -672,  -672,  -160,  -672,  -672,   -79,    74,  -672,  -672,  -672,
    -124,   -44,  -672,  -117,   582,  -672,  -672,  -672,  -672,  -672,
    -672,   561,  -672,  -672,  -672,   -11,  -672,  -672,  -672,  -672,
    -672,  -672,  -672,  -672,  -672,  -672,  -672,  -672,   503,   -15,
    -672,  -672,  -672,    71,  -672,   -53,  -672,  -162,  -672,  -672,
    -672,  -672,   637,  -672,  -672,   546,   512,   551,  -672,  -672,
    -672,   133,  -672,  -543,  -439,  -534,  -122,  -672,   535,  -377,
     455,   323,  -672,  -672,   319,   108,  -672,  -672,    81,  -672,
    -672,  -672,  -672,    86,   401,  -672,  -672,  -672,   477,   304,
     291,  -353,  -672,  -672,  -672,   138,  -672,  -672,  -672,  -672,
     584,   137,  -672,  -672,  -672,  -672,  -672,  -672,   583,  -672,
    -672,  -672,  -672,  -672,    -3,  -198,  -672,  -672,  -672,  -672,
    -672,  -672,  -672,  -672,  -145,  -672,  -672,  -672,  -170,    20,
    -672,   320,  -672,  -672,  -398,  -672,  -240,    16,   313,  -672,
    -672,  -672,  -672,  -440,  -672,   380,  -672,  -672,  -672,  -672,
    -672,  -672,   181,  -672,  -672,    40,    60,  -672,  -612,  -672,
      35,  -672,  -273,  -672,  -672,  -672,  -672,  -672,   483,  -654,
    -585,  -671,  -672,  -672,  -672,  -658,  -672,  -672,  -672,  -672,
     481,  -672,  -672,  -672,    73,  -672,  -672,   244,   245,  -672,
     188,  -672,  -672,  -672,   189,  -672,  -672,  -672,  -672,  -672,
    -672,   151,  -672,  -672,  -672,  -421,  -672,  -672,   -81,   -46,
     885,   905,    31,  -672,  -672,  -672,  -672,   422,  -672,   224,
    -134,  -672,    89,  -672,  -672,  -554,  -672,   404,   399,   403,
     407,   402,   -74,  -672,   -26,   -62,   -89,  -128,   147,   254,
    -672,   288,   440,   498,  -672,  -672,  -672
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    24,    51,    10,   297,   117,   118,   119,   120,
     121,   122,   123,   531,    81,   100,   101,   191,    90,   132,
     133,   159,   160,   183,   184,   234,     3,     4,     5,     6,
       9,    12,    13,    14,    15,    16,    17,    25,   170,   299,
      27,    55,    73,    68,   130,    65,   178,    69,    82,   102,
     131,    66,    77,    93,   179,   452,   187,   272,   207,   437,
     533,   438,   535,   439,   532,   593,    91,   208,   344,   446,
     279,   415,   416,   621,    63,   548,   549,   604,   550,   551,
     447,   544,   601,   545,   413,   209,   210,   345,   346,   450,
     300,   185,   186,    28,    79,   138,   165,    96,    97,   139,
      98,   453,   166,    29,    87,   124,   125,   150,   126,   127,
     152,   176,   211,   212,   213,    31,    84,   106,    85,   107,
     144,   171,   198,   199,   594,   608,   609,   656,   302,   303,
     434,   304,   305,   306,   307,   308,   309,   701,   310,   311,
     312,   639,   313,   314,   315,   316,   317,   676,   641,   742,
     318,   319,   615,   693,   662,   690,   663,   691,   664,   712,
     688,   320,   321,   643,   322,   323,   644,   324,   325,   540,
     424,   708,   646,   541,   709,   542,   599,   326,   647,   327,
     420,   328,   329,   330,   331,   332,   333,   525,   526,   589,
     527,   629,   673,   698,   588,   334,   633,   431,   584,   519,
     585,   520,   521,   494,   495,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   373,   244,   245,   458,   558,   459,
     425,   247,   248,   249,   386,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   168,   270
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   493,    26,   539,   301,   148,   214,   116,   522,   158,
      33,   195,   161,   466,    30,   651,   204,   214,   193,   557,
      75,   607,   620,   561,   710,   706,   429,   271,   448,    20,
    -155,   518,   158,   277,   128,   174,   460,  -398,   505,    75,
    -398,    74,   277,   -59,  -398,   538,   423,  -398,    92,    89,
     692,  -398,   246,    76,   393,   140,  -398,   218,   219,   654,
     474,   660,  -398,   412,  -398,   387,   661,    53,   456,  -398,
      74,  -398,    76,   747,    23,    76,  -398,   154,   714,    54,
     145,     1,   157,    18,   394,   153,   710,   156,    76,    19,
     355,   162,   555,   194,   142,   353,   116,   356,   357,   358,
     359,   773,   467,   146,   763,   365,   689,   559,   414,   277,
       7,   157,    21,   713,   710,   202,   276,   449,    76,  -155,
     714,   335,    76,   430,    76,   276,   388,   577,   436,    70,
     699,   716,  -398,   468,   202,    92,   181,   362,    20,   221,
     222,     8,   363,   738,    88,    76,   273,   355,   281,   418,
     512,   653,   711,   226,   660,   147,   196,   228,   428,   661,
     182,   205,   432,  -262,    76,    11,   215,    34,   197,  -262,
      76,    76,   205,    35,   414,   468,   689,   507,   214,    76,
    -262,   274,   770,    59,    76,   361,  -348,   469,   271,    32,
     470,   298,   276,    76,   395,    60,    20,   396,   276,   370,
     397,   398,   568,  -348,   371,   335,   522,   569,   366,   613,
     681,   229,   350,   616,   350,   350,   350,   350,    76,   619,
     367,    52,   350,   230,   202,   368,   232,   660,   203,   518,
     465,  -261,   661,   336,   399,   473,   301,  -261,   477,   539,
     369,   464,   539,   457,   461,    56,   472,   460,  -261,   476,
     202,   301,   479,   480,  -176,  -399,    57,   722,  -399,    92,
      76,   528,  -399,   -35,   405,  -399,    76,   417,   403,  -399,
      89,   406,   404,   366,  -399,   492,    58,   501,   502,   503,
    -399,   705,  -399,   407,   508,   367,   509,  -399,   547,  -399,
     368,   337,   514,   515,  -399,   408,  -460,  -461,   354,   409,
    -460,  -461,   400,   360,   539,   369,   202,   536,   537,   401,
     451,   402,   556,   695,   499,   500,   560,   336,   539,   486,
     487,   471,   554,   642,   475,    61,   553,  -397,    62,    64,
    -397,   366,   539,   205,  -397,    67,   335,  -397,   496,   497,
     498,  -397,    71,   367,   575,    72,  -397,    74,   368,   338,
    -399,    78,  -397,   335,  -397,    74,   636,   648,    80,  -397,
     762,  -397,   335,   369,    83,    89,  -397,    86,   335,   488,
     489,   490,   491,    92,   579,   337,    94,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,    76,   350,
     350,   350,   350,   350,   350,   350,   350,    95,    99,   103,
     595,   543,   642,   108,   105,   109,   129,   -46,   110,   134,
     135,    53,   625,   111,   143,   136,   137,   630,   517,   112,
     141,   595,  -397,   298,   567,   113,   628,   114,   149,   151,
     155,   163,   298,   338,    76,   507,   164,   115,   298,   167,
     707,   172,   174,   350,   173,   175,   623,   618,   336,    74,
     275,   177,   642,   642,   190,  -161,   339,    76,   200,   188,
     216,   547,   724,   192,   649,   336,   220,   349,   602,   364,
     642,   372,   752,   389,   336,   390,   554,    74,   391,   392,
     336,   642,   752,   419,   426,   636,   648,   433,   427,   739,
     340,   752,   752,   436,   435,   547,   440,   108,   752,   109,
     441,   752,   110,   707,   700,   442,   337,   111,   443,   445,
     454,   455,   456,   112,   739,   335,   335,   463,   448,   113,
     478,   114,   510,   337,   718,   108,   202,   109,   417,   295,
     110,   115,   337,   511,   301,   111,    76,   513,   337,   516,
     339,   112,   529,   703,   704,  -138,   534,   113,   374,   114,
     449,   375,   595,   562,   147,   376,   524,   563,   377,   115,
     720,   564,   378,   565,   338,   350,   566,   379,   570,   335,
     571,   294,   572,   380,   340,   381,   573,   576,   574,   -19,
     382,   338,   383,   578,   672,   580,   583,   384,   581,   582,
     338,   586,   -35,   737,   335,   587,   338,   592,   335,   335,
    -325,   335,   366,   606,   596,   597,   603,  -459,   543,   598,
     600,  -459,   637,   605,   367,   612,   517,    76,   614,   368,
     617,   335,   760,   761,   622,   626,   610,   336,   336,   627,
     650,   666,   769,   652,   369,   655,   659,   665,   667,   668,
     670,    76,   341,   385,   335,   335,   674,  -234,   335,   350,
     675,   335,   677,   678,   679,   682,   680,   684,   686,   696,
     694,   697,   335,   335,   335,   702,   687,   721,   298,   723,
     725,   339,   715,   335,   335,   726,   727,   335,   729,   734,
     728,   336,   730,   335,   335,   337,   337,   731,   339,   743,
     335,   335,   754,   335,   733,   745,   744,   339,   755,   756,
     342,   757,   758,   339,   764,   340,   336,   765,   766,   771,
     336,   336,    76,   336,   767,   772,   774,   180,   347,   350,
     104,   298,   340,   169,   217,   634,   341,   206,   348,   669,
     278,   340,   411,   336,   504,   506,   685,   340,   683,   337,
     552,   735,   736,   338,   338,   444,   657,   298,   410,   658,
     546,   189,   741,   717,   530,   732,   336,   336,   201,   746,
     336,   749,   624,   336,   337,   740,   421,   719,   337,   337,
     759,   337,   590,   591,   336,   336,   336,   631,   671,   632,
     768,   736,   611,   462,   342,   336,   336,   746,   482,   336,
     759,   337,   481,   483,   485,   336,   336,   338,   484,     0,
       0,     0,   336,   336,     0,   336,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   337,     0,     0,   337,     0,
       0,   337,   338,     0,     0,     0,   338,   338,     0,   338,
       0,     0,   337,   337,   337,     0,     0,     0,     0,     0,
       0,     0,     0,   337,   337,     0,     0,   337,     0,   338,
     339,   339,     0,   337,   337,     0,     0,   341,     0,     0,
     337,   337,     0,   337,     0,     0,     0,     0,    74,     0,
       0,     0,   338,   338,   341,     0,   338,     0,     0,   338,
       0,     0,     0,   341,   340,   340,     0,     0,     0,   341,
     338,   338,   338,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   338,     0,   339,   338,     0,     0,     0,   638,
       0,   338,   338,     0,    36,   342,     0,     0,   338,   338,
       0,   338,     0,     0,     0,     0,     0,     0,     0,   339,
      39,     0,   342,   339,   339,     0,   339,     0,   340,     0,
       0,   342,     0,     0,    41,    42,    43,   342,     0,    45,
       0,    46,    47,     0,     0,     0,   339,     0,     0,    48,
      49,     0,     0,   340,    50,     0,     0,   340,   340,     0,
     340,     0,     0,     0,     0,     0,   640,     0,     0,   339,
     339,     0,     0,   339,     0,     0,   339,     0,   638,     0,
     340,     0,     0,     0,     0,     0,     0,   339,   339,   339,
       0,     0,     0,     0,     0,     0,     0,     0,   339,   339,
       0,     0,   339,   340,   340,     0,     0,   340,   339,   339,
     340,     0,     0,     0,     0,   339,   339,     0,   339,     0,
       0,   340,   340,   340,     0,     0,   341,   341,   638,   638,
       0,     0,   340,   340,     0,     0,   340,     0,     0,     0,
       0,     0,   340,   340,     0,   640,   638,     0,   750,   340,
     340,     0,   340,     0,     0,     0,     0,   638,   750,     0,
       0,     0,     0,     0,     0,     0,     0,   750,   750,   645,
       0,     0,     0,     0,   750,     0,     0,   750,     0,     0,
     341,     0,     0,     0,   342,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   640,   640,     0,   351,     0,
     351,   351,   351,   351,     0,   341,     0,     0,   351,   341,
     341,     0,   341,   640,     0,   751,     0,     0,   352,     0,
     352,   352,   352,   352,   640,   751,     0,     0,   352,     0,
       0,     0,   341,     0,   751,   751,     0,     0,   342,     0,
       0,   751,     0,     0,   751,     0,     0,     0,   645,     0,
       0,     0,     0,     0,     0,   341,   341,     0,     0,   341,
       0,     0,   341,   342,     0,     0,     0,   342,   342,     0,
     342,     0,     0,   341,   341,   341,     0,     0,     0,     0,
       0,     0,     0,     0,   341,   341,     0,     0,   341,     0,
     342,     0,     0,     0,   341,   341,     0,     0,   645,   645,
       0,   341,   341,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   342,   342,     0,   645,   342,   753,     0,
     342,     0,     0,     0,     0,     0,     0,   645,   753,     0,
       0,   342,   342,   342,     0,     0,     0,   753,   753,     0,
       0,     0,   342,   342,   753,     0,   342,   753,     0,     0,
       0,     0,   342,   342,     0,     0,     0,     0,     0,   342,
     342,     0,   342,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,     0,   351,   351,   351,   351,   351,
     351,   351,   351,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,     0,   352,   352,   352,   352,   352,
     352,   352,   352,     0,   523,     0,     0,    20,   221,   222,
     223,     0,     0,    20,   221,   222,   223,   224,     0,     0,
       0,   225,   226,   224,   352,   227,   228,   225,   226,   351,
       0,   227,   228,    20,   221,   222,   223,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,   225,   226,   352,
       0,   227,   228,     0,     0,   108,     0,   109,     0,     0,
     110,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,   173,   113,     0,   114,
     229,     0,     0,     0,     0,     0,   229,     0,     0,   115,
       0,     0,   230,   231,     0,   232,    74,     0,   230,   231,
       0,   232,   292,     0,     0,     0,   229,     0,     0,     0,
       0,   233,   202,    20,   221,   222,   223,   233,   230,   231,
       0,   232,     0,   224,     0,     0,     0,   225,   226,     0,
       0,   227,   228,     0,     0,     0,     0,   233,    20,   221,
     222,   223,    36,     0,   108,     0,   109,     0,   224,   110,
       0,   351,   225,   226,   111,     0,   227,   228,    39,     0,
     112,     0,     0,     0,     0,     0,   113,     0,   114,     0,
       0,   352,    41,    42,    43,     0,     0,    45,   115,    46,
      47,   280,   221,   222,     0,     0,   229,    48,    49,     0,
       0,   281,    50,     0,     0,     0,   226,     0,   230,   231,
     228,   232,   523,     0,     0,     0,     0,     0,     0,   282,
       0,   229,   555,     0,     0,     0,     0,   233,     0,     0,
       0,     0,   352,   230,   231,     0,   232,     0,   283,   108,
     284,   109,  -216,     0,   110,   351,   285,  -216,   286,   111,
       0,     0,   233,     0,     0,   112,   287,   288,     0,     0,
       0,   113,     0,   114,   229,   352,     0,     0,     0,     0,
       0,   289,     0,   115,     0,     0,   230,   290,   291,   232,
     292,   280,   221,   222,   293,   294,     0,    36,   295,   296,
     202,   281,     0,     0,  -216,    37,   226,     0,     0,     0,
     228,    38,     0,    39,     0,     0,     0,     0,     0,   282,
       0,     0,    40,     0,     0,   351,     0,    41,    42,    43,
      44,     0,    45,     0,    46,    47,     0,     0,   283,   108,
     284,   109,    48,    49,   110,   352,   285,    50,   286,   111,
       0,     0,     0,     0,     0,   112,   287,   288,     0,     0,
       0,   113,     0,   114,   229,     0,     0,     0,     0,     0,
       0,   289,     0,   115,     0,     0,   230,   290,   291,   232,
     292,   280,   221,   222,   293,   294,     0,     0,   295,   296,
     202,   281,     0,     0,  -158,     0,   226,     0,     0,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,   108,
     284,   109,   660,     0,   110,     0,   285,   661,   286,   111,
       0,     0,     0,     0,     0,   112,   287,   288,     0,     0,
       0,   113,     0,   114,   229,     0,     0,     0,     0,     0,
       0,   289,     0,   115,     0,     0,   230,   290,   291,   232,
     292,   422,   221,   222,   293,   294,     0,     0,   295,   296,
     202,   281,     0,     0,     0,     0,   226,     0,     0,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,     0,   635,   221,   222,     0,
       0,     0,     0,     0,     0,     0,   281,     0,   283,     0,
     284,   226,     0,     0,     0,   228,   285,     0,   286,     0,
       0,     0,     0,     0,   282,     0,   287,   288,     0,     0,
       0,     0,     0,     0,   229,     0,     0,     0,     0,     0,
       0,   289,     0,   283,     0,   284,   230,   290,   291,   232,
     292,   285,     0,   286,   293,     0,     0,     0,   295,   296,
     202,   287,   288,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,     0,     0,   289,   748,   221,   222,
       0,   230,   290,   291,   232,   292,     0,   281,     0,   293,
       0,     0,   226,   295,   296,   202,   228,     0,     0,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   283,     0,   284,     0,     0,     0,
       0,    74,   285,     0,   286,     0,     0,     0,     0,     0,
       0,     0,   287,   288,     0,     0,     0,     0,     0,     0,
     229,     0,     0,     0,     0,     0,     0,   289,     0,     0,
      67,     0,   230,   290,   291,   232,   292,     0,     0,     0,
     293,   343,     0,     0,   295,   296,   202,    36,     0,   108,
       0,   109,     0,     0,   110,    37,     0,     0,     0,   111,
       0,    38,     0,    39,     0,   112,     0,     0,     0,     0,
      67,   113,    40,   114,     0,     0,     0,    41,    42,    43,
      44,     0,    45,   115,    46,    47,     0,    36,     0,   108,
       0,   109,    48,    49,   110,    37,   275,    50,     0,   111,
       0,    38,     0,    39,     0,   112,     0,     0,     0,     0,
       0,   113,    40,   114,     0,     0,     0,    41,    42,    43,
      44,     0,    45,   115,    46,    47,     0,     0,    74,   221,
     222,     0,    48,    49,     0,     0,   275,    50,   281,     0,
       0,     0,     0,   226,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,    74,   221,   222,     0,     0,     0,
       0,     0,     0,     0,   281,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,   110,     0,     0,     0,     0,   111,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,   113,     0,
     114,   229,   108,     0,   109,     0,     0,   110,     0,     0,
     115,     0,   111,   230,     0,     0,   232,     0,   112,     0,
       0,     0,   294,     0,   113,     0,   114,   229,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,   230,
       0,     0,   232,     0,     0,     0,     0,     0,   294
};

static const yytype_int16 yycheck[] =
{
      11,   399,    17,   443,   202,   122,   176,    86,   429,   133,
      21,   171,   134,   366,    17,   600,   176,   187,    31,   458,
      64,   555,   576,   462,   682,   679,    13,   187,    13,     3,
      13,   429,   156,   195,    87,    45,    13,     9,   415,    83,
      12,     3,   204,     0,    16,   443,   286,    19,    25,    32,
     662,    23,   186,    64,     7,    99,    28,   181,   182,   602,
       3,    54,    34,    31,    36,    44,    59,     3,    45,    41,
       3,    43,    83,   744,    31,    86,    48,   130,   690,    15,
       3,    77,    44,    25,    37,   129,   744,    20,    99,    31,
     224,   135,   102,   106,   105,   223,   175,   225,   226,   227,
     228,   772,     3,    26,   758,   233,   660,   460,   278,   271,
       3,    44,    86,   106,   772,   102,   195,   102,   129,   102,
     732,   202,   133,   293,   135,   204,   105,   504,     3,    58,
     673,    31,   104,    76,   102,    25,    64,    25,     3,     4,
       5,     0,    30,   728,    73,   156,   190,   281,    13,   283,
     423,    26,   686,    18,    54,    45,   171,    22,   292,    59,
      88,   176,   296,    14,   175,    71,   177,    25,   171,    20,
     181,   182,   187,    31,   344,    76,   730,   417,   348,   190,
      31,   192,   767,     3,   195,   229,    14,    88,   348,     3,
      91,   202,   271,   204,    32,    15,     3,    35,   277,    25,
      38,    39,    25,    31,    30,   286,   627,    30,    13,   562,
     650,    76,   223,   566,   225,   226,   227,   228,   229,   572,
      25,    25,   233,    88,   102,    30,    91,    54,   106,   627,
     364,    14,    59,   202,    72,   369,   434,    20,   372,   679,
      45,   363,   682,   360,   361,     3,   368,    13,    31,   371,
     102,   449,   386,   387,   106,     9,     3,   696,    12,    25,
     271,   431,    16,     3,     8,    19,   277,    29,    17,    23,
      32,    15,    21,    13,    28,   399,     3,   405,   406,   407,
      34,   679,    36,    27,    29,    25,    31,    41,   448,    43,
      30,   202,   426,   427,    48,    18,    18,    18,   224,    22,
      22,    22,    33,   229,   744,    45,   102,   441,   442,    40,
     106,    42,   457,   666,   403,   404,   461,   286,   758,   393,
     394,   367,   456,   596,   370,    31,   454,     9,     3,    70,
      12,    13,   772,   348,    16,    32,   417,    19,   400,   401,
     402,    23,    31,    25,   478,    31,    28,     3,    30,   202,
     104,   102,    34,   434,    36,     3,   596,   597,     3,    41,
     758,    43,   443,    45,    64,    32,    48,    13,   449,   395,
     396,   397,   398,    25,   508,   286,    25,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,     3,    64,    38,
     534,   445,   675,    51,    78,    53,    64,    38,    56,     3,
      20,     3,   582,    61,   102,    45,    20,   587,   429,    67,
      20,   555,   104,   434,   468,    73,   586,    75,    14,   102,
      38,    13,   443,   286,   445,   675,    31,    85,   449,    20,
     680,     3,    45,   454,    46,    20,   580,   569,   417,     3,
      98,    78,   725,   726,    10,    14,   202,   468,    46,   106,
     102,   621,   702,    20,   598,   434,    14,    46,   547,    13,
     743,    45,   745,    11,   443,   103,   610,     3,    47,    10,
     449,   754,   755,     3,    13,   725,   726,   106,    13,   729,
     202,   764,   765,     3,    31,   655,    31,    51,   771,    53,
      13,   774,    56,   743,   674,    13,   417,    61,    13,    93,
      14,    14,    45,    67,   754,   596,   597,     3,    13,    73,
      20,    75,    31,   434,   694,    51,   102,    53,    29,   100,
      56,    85,   443,    31,   732,    61,   547,    31,   449,    31,
     286,    67,    31,   677,   678,    14,    36,    73,     9,    75,
     102,    12,   686,    13,    45,    16,    55,     3,    19,    85,
     694,    14,    23,    14,   417,   576,    13,    28,     3,   650,
      46,    97,    13,    34,   286,    36,     3,    29,    46,     3,
      41,   434,    43,    13,   628,    13,    31,    48,    14,    14,
     443,    13,     3,   727,   675,    66,   449,    20,   679,   680,
      66,   682,    13,    46,    14,    14,    14,    18,   652,    29,
      31,    22,   596,   106,    25,    14,   627,   628,   102,    30,
       3,   702,   756,   757,    31,    14,    45,   596,   597,    31,
      20,    13,   766,    20,    45,    20,    14,    14,     3,    14,
      14,   652,   202,   104,   725,   726,    14,    62,   729,   660,
      29,   732,    13,    13,    13,    31,    14,     3,    20,    14,
      24,    31,   743,   744,   745,    62,   106,    14,   679,   103,
      14,   417,    29,   754,   755,    14,    29,   758,    14,   723,
      31,   650,    20,   764,   765,   596,   597,    29,   434,    14,
     771,   772,    14,   774,    31,    62,    31,   443,    29,    13,
     202,    13,    13,   449,    14,   417,   675,    14,    29,    14,
     679,   680,   723,   682,    31,    31,    14,   156,   215,   730,
      83,   732,   434,   141,   178,   592,   286,   176,   216,   621,
     195,   443,   277,   702,   411,   416,   655,   449,   652,   650,
     449,   725,   726,   596,   597,   344,   608,   758,   271,   612,
     446,   167,   732,   693,   434,   715,   725,   726,   175,   743,
     729,   745,   581,   732,   675,   730,   285,   694,   679,   680,
     754,   682,   528,   528,   743,   744,   745,   589,   627,   590,
     764,   765,   558,   361,   286,   754,   755,   771,   389,   758,
     774,   702,   388,   390,   392,   764,   765,   650,   391,    -1,
      -1,    -1,   771,   772,    -1,   774,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   725,   726,    -1,    -1,   729,    -1,
      -1,   732,   675,    -1,    -1,    -1,   679,   680,    -1,   682,
      -1,    -1,   743,   744,   745,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   754,   755,    -1,    -1,   758,    -1,   702,
     596,   597,    -1,   764,   765,    -1,    -1,   417,    -1,    -1,
     771,   772,    -1,   774,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,   725,   726,   434,    -1,   729,    -1,    -1,   732,
      -1,    -1,    -1,   443,   596,   597,    -1,    -1,    -1,   449,
     743,   744,   745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   754,   755,    -1,   650,   758,    -1,    -1,    -1,   596,
      -1,   764,   765,    -1,    49,   417,    -1,    -1,   771,   772,
      -1,   774,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,
      65,    -1,   434,   679,   680,    -1,   682,    -1,   650,    -1,
      -1,   443,    -1,    -1,    79,    80,    81,   449,    -1,    84,
      -1,    86,    87,    -1,    -1,    -1,   702,    -1,    -1,    94,
      95,    -1,    -1,   675,    99,    -1,    -1,   679,   680,    -1,
     682,    -1,    -1,    -1,    -1,    -1,   596,    -1,    -1,   725,
     726,    -1,    -1,   729,    -1,    -1,   732,    -1,   675,    -1,
     702,    -1,    -1,    -1,    -1,    -1,    -1,   743,   744,   745,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   754,   755,
      -1,    -1,   758,   725,   726,    -1,    -1,   729,   764,   765,
     732,    -1,    -1,    -1,    -1,   771,   772,    -1,   774,    -1,
      -1,   743,   744,   745,    -1,    -1,   596,   597,   725,   726,
      -1,    -1,   754,   755,    -1,    -1,   758,    -1,    -1,    -1,
      -1,    -1,   764,   765,    -1,   675,   743,    -1,   745,   771,
     772,    -1,   774,    -1,    -1,    -1,    -1,   754,   755,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   764,   765,   596,
      -1,    -1,    -1,    -1,   771,    -1,    -1,   774,    -1,    -1,
     650,    -1,    -1,    -1,   596,   597,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   725,   726,    -1,   223,    -1,
     225,   226,   227,   228,    -1,   675,    -1,    -1,   233,   679,
     680,    -1,   682,   743,    -1,   745,    -1,    -1,   223,    -1,
     225,   226,   227,   228,   754,   755,    -1,    -1,   233,    -1,
      -1,    -1,   702,    -1,   764,   765,    -1,    -1,   650,    -1,
      -1,   771,    -1,    -1,   774,    -1,    -1,    -1,   675,    -1,
      -1,    -1,    -1,    -1,    -1,   725,   726,    -1,    -1,   729,
      -1,    -1,   732,   675,    -1,    -1,    -1,   679,   680,    -1,
     682,    -1,    -1,   743,   744,   745,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   754,   755,    -1,    -1,   758,    -1,
     702,    -1,    -1,    -1,   764,   765,    -1,    -1,   725,   726,
      -1,   771,   772,    -1,   774,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   725,   726,    -1,   743,   729,   745,    -1,
     732,    -1,    -1,    -1,    -1,    -1,    -1,   754,   755,    -1,
      -1,   743,   744,   745,    -1,    -1,    -1,   764,   765,    -1,
      -1,    -1,   754,   755,   771,    -1,   758,   774,    -1,    -1,
      -1,    -1,   764,   765,    -1,    -1,    -1,    -1,    -1,   771,
     772,    -1,   774,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    -1,   400,   401,   402,   403,   404,
     405,   406,   407,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    -1,   400,   401,   402,   403,   404,
     405,   406,   407,    -1,   429,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,     3,     4,     5,     6,    13,    -1,    -1,
      -1,    17,    18,    13,   429,    21,    22,    17,    18,   454,
      -1,    21,    22,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,   454,
      -1,    21,    22,    -1,    -1,    51,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    46,    73,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    85,
      -1,    -1,    88,    89,    -1,    91,     3,    -1,    88,    89,
      -1,    91,    92,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,   107,   102,     3,     4,     5,     6,   107,    88,    89,
      -1,    91,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,   107,     3,     4,
       5,     6,    49,    -1,    51,    -1,    53,    -1,    13,    56,
      -1,   576,    17,    18,    61,    -1,    21,    22,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,   576,    79,    80,    81,    -1,    -1,    84,    85,    86,
      87,     3,     4,     5,    -1,    -1,    76,    94,    95,    -1,
      -1,    13,    99,    -1,    -1,    -1,    18,    -1,    88,    89,
      22,    91,   627,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    76,   102,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,   627,    88,    89,    -1,    91,    -1,    50,    51,
      52,    53,    54,    -1,    56,   660,    58,    59,    60,    61,
      -1,    -1,   107,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    75,    76,   660,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,     3,     4,     5,    96,    97,    -1,    49,   100,   101,
     102,    13,    -1,    -1,   106,    57,    18,    -1,    -1,    -1,
      22,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    74,    -1,    -1,   730,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    87,    -1,    -1,    50,    51,
      52,    53,    94,    95,    56,   730,    58,    99,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,     3,     4,     5,    96,    97,    -1,    -1,   100,   101,
     102,    13,    -1,    -1,   106,    -1,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,     3,     4,     5,    96,    97,    -1,    -1,   100,   101,
     102,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    50,    -1,
      52,    18,    -1,    -1,    -1,    22,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    50,    -1,    52,    88,    89,    90,    91,
      92,    58,    -1,    60,    96,    -1,    -1,    -1,   100,   101,
     102,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,     3,     4,     5,
      -1,    88,    89,    90,    91,    92,    -1,    13,    -1,    96,
      -1,    -1,    18,   100,   101,   102,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,
      -1,     3,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      32,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      96,     3,    -1,    -1,   100,   101,   102,    49,    -1,    51,
      -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      32,    73,    74,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    -1,    49,    -1,    51,
      -1,    53,    94,    95,    56,    57,    98,    99,    -1,    61,
      -1,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    -1,    -1,     3,     4,
       5,    -1,    94,    95,    -1,    -1,    98,    99,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    76,    51,    -1,    53,    -1,    -1,    56,    -1,    -1,
      85,    -1,    61,    88,    -1,    -1,    91,    -1,    67,    -1,
      -1,    -1,    97,    -1,    73,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    77,   109,   134,   135,   136,   137,     3,     0,   138,
     112,    71,   139,   140,   141,   142,   143,   144,    25,    31,
       3,    86,   133,    31,   110,   145,   147,   148,   201,   211,
     222,   223,     3,   133,    25,    31,    49,    57,    63,    65,
      74,    79,    80,    81,    82,    84,    86,    87,    94,    95,
      99,   111,    25,     3,    15,   149,     3,     3,     3,     3,
      15,    31,     3,   182,    70,   153,   159,    32,   151,   155,
     151,    31,    31,   150,     3,   119,   133,   160,   102,   202,
       3,   122,   156,    64,   224,   226,    13,   212,   151,    32,
     126,   174,    25,   161,    25,     3,   205,   206,   208,    64,
     123,   124,   157,    38,   160,    78,   225,   227,    51,    53,
      56,    61,    67,    73,    75,    85,   113,   114,   115,   116,
     117,   118,   119,   120,   213,   214,   216,   217,   153,    64,
     152,   158,   127,   128,     3,    20,    45,    20,   203,   207,
     119,    20,   133,   102,   228,     3,    26,    45,   121,    14,
     215,   102,   218,   119,   153,    38,    20,    44,   118,   129,
     130,   174,   119,    13,    31,   204,   210,    20,   353,   122,
     146,   229,     3,    46,    45,    20,   219,    78,   154,   162,
     129,    64,    88,   131,   132,   199,   200,   164,   106,   208,
      10,   125,    20,    31,   106,   110,   147,   222,   230,   231,
      46,   216,   102,   106,   110,   147,   165,   166,   175,   193,
     194,   220,   221,   222,   236,   133,   102,   163,   118,   118,
      14,     4,     5,     6,    13,    17,    18,    21,    22,    76,
      88,    89,    91,   107,   133,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   323,   324,   328,   329,   330,   331,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     354,   110,   165,   119,   133,    98,   113,   155,   176,   178,
       3,    13,    31,    50,    52,    58,    60,    68,    69,    83,
      89,    90,    92,    96,    97,   100,   101,   113,   133,   147,
     198,   223,   236,   237,   239,   240,   241,   242,   243,   244,
     246,   247,   248,   250,   251,   252,   253,   254,   258,   259,
     269,   270,   272,   273,   275,   276,   285,   287,   289,   290,
     291,   292,   293,   294,   303,   316,   320,   330,   346,   347,
     349,   350,   351,     3,   176,   195,   196,   146,   164,    46,
     133,   318,   319,   345,   114,   328,   345,   345,   345,   345,
     114,   119,    25,    30,    13,   345,    13,    25,    30,    45,
      25,    30,    45,   322,     9,    12,    16,    19,    23,    28,
      34,    36,    41,    43,    48,   104,   332,    44,   105,    11,
     103,    47,    10,     7,    37,    32,    35,    38,    39,    72,
      33,    40,    42,    17,    21,     8,    15,    27,    18,    22,
     196,   178,    31,   192,   236,   179,   180,    29,   328,     3,
     288,   288,     3,   244,   278,   328,    13,    13,   328,    13,
     236,   305,   328,   106,   238,    31,     3,   167,   169,   171,
      31,    13,    13,    13,   192,    93,   177,   188,    13,   102,
     197,   106,   163,   209,    14,    14,    45,   121,   325,   327,
      13,   121,   325,     3,   174,   328,   199,     3,    76,    88,
      91,   317,   174,   328,     3,   317,   174,   328,    20,   328,
     328,   335,   336,   337,   338,   339,   340,   340,   342,   342,
     342,   342,   118,   242,   311,   312,   343,   343,   343,   344,
     344,   345,   345,   345,   179,   177,   182,   244,    29,    31,
      31,    31,   270,    31,   328,   328,    31,   133,   242,   307,
     309,   310,   313,   318,    55,   295,   296,   298,   236,    31,
     239,   121,   172,   168,    36,   170,   328,   328,   242,   251,
     277,   281,   283,   119,   189,   191,   197,   110,   183,   184,
     186,   187,   198,   345,   328,   102,   232,   172,   326,   199,
     232,   172,    13,     3,    14,    14,    13,   119,    25,    30,
       3,    46,    13,     3,    46,   328,    29,   177,    13,   328,
      13,    14,    14,    31,   306,   308,    13,    66,   302,   297,
     295,   296,    20,   173,   232,   328,    14,    14,    29,   284,
      31,   190,   113,    14,   185,   106,    46,   173,   233,   234,
      45,   327,    14,   199,   102,   260,   199,     3,   174,   199,
     333,   181,    31,   328,   260,   236,    14,    31,   110,   299,
     236,   298,   302,   304,   169,     3,   244,   245,   246,   249,
     253,   256,   270,   271,   274,   276,   280,   286,   244,   328,
      20,   278,    20,    26,   171,    20,   235,   203,   209,    14,
      54,    59,   262,   264,   266,    14,    13,     3,    14,   183,
      14,   309,   119,   300,    14,    29,   255,    13,    13,    13,
      14,   251,    31,   191,     3,   186,    20,   106,   268,   333,
     263,   265,   266,   261,    24,   199,    14,    31,   301,   171,
     236,   245,    62,   328,   328,   242,   277,   244,   279,   282,
     283,   173,   267,   106,   266,    29,    31,   264,   236,   292,
     328,    14,   172,   103,   244,    14,    14,    29,    31,    14,
      20,    29,   263,    31,   119,   245,   245,   328,   278,   244,
     268,   237,   257,    14,    31,    62,   245,   279,     3,   245,
     246,   253,   270,   276,    14,    29,    13,    13,    13,   245,
     328,   328,   242,   277,    14,    14,    29,    31,   245,   328,
     278,    14,    31,   279,    14
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
     147,   147,   147,   149,   150,   148,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   156,   157,   157,   158,   159,
     160,   161,   161,   162,   163,   164,   164,   165,   165,   165,
     166,   166,   166,   167,   168,   168,   169,   170,   170,   171,
     172,   172,   173,   173,   174,   174,   175,   176,   176,   177,
     177,   178,   178,   180,   181,   179,   182,   183,   183,   184,
     185,   185,   186,   186,   187,   188,   189,   190,   190,   191,
     192,   192,   193,   194,   195,   196,   197,   198,   198,   200,
     199,   199,   201,   202,   203,   203,   204,   204,   205,   205,
     206,   207,   207,   208,   209,   209,   210,   211,   212,   213,
     213,   214,   215,   215,   216,   216,   217,   218,   219,   219,
     220,   220,   221,   222,   223,   224,   224,   225,   225,   226,
     227,   228,   229,   229,   230,   230,   230,   230,   231,   232,
     233,   233,   234,   235,   235,   236,   237,   238,   238,   239,
     239,   239,   240,   240,   241,   242,   243,   243,   244,   244,
     244,   244,   244,   244,   245,   245,   245,   245,   245,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   247,   248,   249,   250,   251,   251,   251,   251,
     251,   251,   251,   252,   253,   255,   254,   257,   256,   258,
     258,   259,   260,   260,   261,   261,   262,   262,   263,   263,
     264,   264,   264,   265,   266,   266,   267,   267,   268,   269,
     270,   271,   272,   273,   273,   274,   274,   275,   276,   277,
     277,   278,   278,   279,   279,   280,   281,   281,   282,   283,
     284,   284,   285,   286,   287,   288,   288,   289,   290,   291,
     292,   293,   294,   294,   294,   295,   295,   296,   297,   297,
     298,   299,   300,   301,   301,   302,   303,   304,   304,   305,
     306,   306,   307,   308,   308,   309,   309,   310,   310,   311,
     312,   313,   313,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   315,   315,   316,   316,   316,   317,   318,   318,
     318,   319,   319,   320,   320,   320,   320,   320,   321,   322,
     322,   323,   323,   323,   323,   324,   324,   324,   324,   325,
     326,   326,   327,   328,   329,   329,   330,   331,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   333,   334,   334,   335,   335,   336,   336,
     337,   337,   338,   338,   339,   339,   339,   340,   340,   340,
     340,   340,   340,   341,   341,   342,   342,   342,   342,   343,
     343,   343,   344,   344,   344,   344,   345,   345,   345,   345,
     345,   346,   347,   348,   348,   348,   348,   348,   349,   349,
     349,   349,   350,   351,   352,   353,   353,   354
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
       1,     1,     1,     0,     0,    10,     1,     0,     1,     0,
       1,     0,     1,     0,     3,     2,     3,     0,     2,     2,
       2,     3,     0,     3,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     2,     2,     0,     2,
       1,     0,     1,     1,     1,     0,     3,     3,     4,     1,
       0,     1,     1,     0,     0,     7,     1,     1,     0,     2,
       3,     0,     3,     1,     4,     2,     2,     3,     0,     1,
       1,     1,     1,     4,     4,     1,     3,     1,     0,     0,
       2,     0,     5,     5,     1,     0,     1,     0,     1,     0,
       2,     3,     0,     7,     1,     0,     2,     7,     3,     1,
       0,     2,     3,     0,     2,     1,     3,     3,     2,     0,
       1,     1,     3,     1,     7,     1,     0,     1,     0,     2,
       3,     3,     2,     0,     1,     1,     1,     1,     3,     4,
       1,     0,     2,     3,     0,     3,     2,     2,     0,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     0,     8,     0,     8,     3,
       5,     5,     4,     4,     2,     0,     2,     0,     3,     0,
       4,     3,     3,     4,     3,     1,     3,     0,     1,     5,
       1,     5,     7,     1,     1,     1,     1,     9,     1,     1,
       0,     1,     0,     1,     0,     9,     1,     1,     1,     2,
       3,     0,     7,     7,     3,     1,     0,     3,     3,     3,
       3,     5,     3,     4,     1,     1,     0,     2,     2,     0,
       5,     3,     2,     3,     0,     2,     5,     1,     0,     4,
       1,     0,     2,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     6,     3,     3,
       5,     4,     4,     4,     6,     6,     6,     8,     2,     3,
       0,     4,     4,     4,     6,     4,     4,     4,     4,     2,
       2,     0,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     2,     0,     5
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
  case 5: /* modifier: "public"  */
#line 416 "grammer.y"
                                {modifier = "public";}
#line 2427 "grammer.tab.c"
    break;

  case 6: /* modifier: "protected"  */
#line 417 "grammer.y"
                        {modifier = "protected";}
#line 2433 "grammer.tab.c"
    break;

  case 7: /* modifier: "private"  */
#line 418 "grammer.y"
                                {modifier = "private";}
#line 2439 "grammer.tab.c"
    break;

  case 24: /* integral_type: "byte"  */
#line 446 "grammer.y"
                                { curr_type = "Numeric";}
#line 2445 "grammer.tab.c"
    break;

  case 25: /* integral_type: "short"  */
#line 447 "grammer.y"
                                { curr_type = "Numeric";}
#line 2451 "grammer.tab.c"
    break;

  case 26: /* integral_type: "int"  */
#line 448 "grammer.y"
                                { curr_type = "Numeric";}
#line 2457 "grammer.tab.c"
    break;

  case 27: /* integral_type: "long"  */
#line 449 "grammer.y"
                                { curr_type = "Numeric";}
#line 2463 "grammer.tab.c"
    break;

  case 28: /* integral_type: "char"  */
#line 450 "grammer.y"
                                { curr_type = "Numeric";}
#line 2469 "grammer.tab.c"
    break;

  case 29: /* floating_point_type: "float"  */
#line 453 "grammer.y"
                                {curr_type = "Numeric";}
#line 2475 "grammer.tab.c"
    break;

  case 30: /* floating_point_type: "double"  */
#line 454 "grammer.y"
                                {curr_type = "Numeric";}
#line 2481 "grammer.tab.c"
    break;

  case 56: /* un_name: TOK_IDENTIFIER  */
#line 514 "grammer.y"
                                        { curr_type = string((yyvsp[0].s));
                        string iden_type = probe_type(curr_type);

                        if(iden_type == ""){
                          cout<<"Error at line no "<<yylineno<<": Undefined reference "<<(yyvsp[0].s)<<"\n";
                        }
                        cout<<string((yyvsp[0].s))<<" "<<lhs_type<<" "<<rhs_type<<" "<<halt_type_check<<"\n";
                        if(halt_type_check == 0){
                          if(lhs_record == 1){
                            lhs_type = iden_type;
                            cout<<lhs_type<<" -- "<<(yyval.s)<<"\n";
                          }
                          if(rhs_record == 1){
                            rhs_type = iden_type;
                          }
                        }else{
                          lhs_type = "";
                          rhs_type = "";
                        }
                        cout<<string((yyvsp[0].s))<<" "<<lhs_type<<" "<<rhs_type<<" "<<halt_type_check<<"\n";
                        pre_var = string((yyvsp[0].s));
                      }
#line 2508 "grammer.tab.c"
    break;

  case 57: /* un_name: un_name "." TOK_IDENTIFIER  */
#line 536 "grammer.y"
                                                {curr_type = curr_type + '.' + string((yyvsp[0].s));}
#line 2514 "grammer.tab.c"
    break;

  case 80: /* class_declaration: normal_class_declaration  */
#line 592 "grammer.y"
                                                {cum_table.push_back(block_table[current_stack]);
                                block_table[current_stack].clear();
                                current_stack--;
                                // cout<<parent_class<<"1\n";
                                int i = parent_class.size() - 1;
                                while(i>=0 && parent_class[i]!='.') i--;
                                if(i != -1)
                                parent_class = parent_class.substr(0,i);
                                else parent_class = "";
                                // cout<<i<<" "<<parent_class<<"2\n";
                                }
#line 2530 "grammer.tab.c"
    break;

  case 83: /* $@1: %empty  */
#line 608 "grammer.y"
                              {curr_type = "class";class_dec_flag = 1;}
#line 2536 "grammer.tab.c"
    break;

  case 84: /* $@2: %empty  */
#line 608 "grammer.y"
                                                                                            {current_stack++;}
#line 2542 "grammer.tab.c"
    break;

  case 119: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 684 "grammer.y"
                                                {block_table[current_stack][(yyvsp[-1].s)] = curr_type;
                                filler = new var_info;
                               }
#line 2550 "grammer.tab.c"
    break;

  case 126: /* method_declaration: modifier.multiopt method_header method_body  */
#line 701 "grammer.y"
                                                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2556 "grammer.tab.c"
    break;

  case 132: /* result: "void"  */
#line 713 "grammer.y"
                                {curr_type = "void";}
#line 2562 "grammer.tab.c"
    break;

  case 133: /* $@3: %empty  */
#line 716 "grammer.y"
  {method_dec_flag = 1;}
#line 2568 "grammer.tab.c"
    break;

  case 134: /* $@4: %empty  */
#line 716 "grammer.y"
                                                   {method_dec_flag = 0; current_stack++;halt_type_check = 1;}
#line 2574 "grammer.tab.c"
    break;

  case 135: /* method_declarator: $@3 hold_TOK_IDENTIFIER "(" $@4 formal_parameter_list.opt ")" dims.opt  */
#line 716 "grammer.y"
                                                                                                                                                         {halt_type_check = 0;}
#line 2580 "grammer.tab.c"
    break;

  case 136: /* hold_TOK_IDENTIFIER: TOK_IDENTIFIER  */
#line 719 "grammer.y"
                  { if(class_dec_flag){
                      string hold = string((yyvsp[0].s));
                      if(parent_class!=""){
                        hold = parent_class + '.' + hold;
                      }
                      parent_class = hold;

                      // can improve by making an array of class modifiers
                      if(modifier == "public" && current_stack>0){
                        block_table[current_stack-1][hold] = curr_type;
                      }
                      else{
                        block_table[current_stack][hold] = curr_type;
                      }
                      class_dec_flag = 0;
                    }
                    else if(method_dec_flag){
                      curr_type = parent_class + '.' + string((yyvsp[0].s));
                      if(modifier == "public" && current_stack>0){
                        block_table[current_stack-1][curr_type] = "method";
                      }
                      else{
                        block_table[current_stack][curr_type] = "method";
                      }
                    }
                    else
                    block_table[current_stack][(yyvsp[0].s)] = curr_type;}
#line 2612 "grammer.tab.c"
    break;

  case 159: /* $@5: %empty  */
#line 802 "grammer.y"
  {halt_type_check = 1;}
#line 2618 "grammer.tab.c"
    break;

  case 160: /* argument_list.opt: $@5 argument_list  */
#line 802 "grammer.y"
                                                        {halt_type_check = 0; }
#line 2624 "grammer.tab.c"
    break;

  case 232: /* statement: while_statement  */
#line 977 "grammer.y"
                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2630 "grammer.tab.c"
    break;

  case 233: /* statement: for_statement  */
#line 978 "grammer.y"
                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2636 "grammer.tab.c"
    break;

  case 255: /* expression_statement: statement_expression ";"  */
#line 1012 "grammer.y"
                                                {
                                  if(halt_type_check == 0){
                                    if(lhs_type!=rhs_type){
                                      cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be assigned "<<rhs_type<<" type\n";
                                    }
                                    else{
                                      cout<<"Correct :"<<yylineno<<" "<<lhs_type<<" "<<rhs_type<<"\n";
                                    }
                                  }
                                  lhs_record = 1;
                                  rhs_record = 1;
                                  }
#line 2653 "grammer.tab.c"
    break;

  case 263: /* if_then_statement: hold_TOK_if "(" expression ")" statement  */
#line 1035 "grammer.y"
                                                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2659 "grammer.tab.c"
    break;

  case 264: /* hold_TOK_if: "if"  */
#line 1038 "grammer.y"
              {current_stack++;}
#line 2665 "grammer.tab.c"
    break;

  case 265: /* $@6: %empty  */
#line 1041 "grammer.y"
                                                             {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;current_stack++;}
#line 2671 "grammer.tab.c"
    break;

  case 266: /* if_then_else_statement: hold_TOK_if "(" expression ")" statement_no_short_if $@6 "else" statement  */
#line 1041 "grammer.y"
                                                                                                                                                                                                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2677 "grammer.tab.c"
    break;

  case 267: /* $@7: %empty  */
#line 1044 "grammer.y"
                                                             {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;current_stack++;}
#line 2683 "grammer.tab.c"
    break;

  case 268: /* if_then_else_statement_no_short_if: hold_TOK_if "(" expression ")" statement_no_short_if $@7 "else" statement_no_short_if  */
#line 1044 "grammer.y"
                                                                                                                                                                                                                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2689 "grammer.tab.c"
    break;

  case 290: /* hold_TOK_while: "while"  */
#line 1092 "grammer.y"
                   {current_stack++;}
#line 2695 "grammer.tab.c"
    break;

  case 298: /* hold_TOK_for: "for"  */
#line 1111 "grammer.y"
              {current_stack++;}
#line 2701 "grammer.tab.c"
    break;

  case 362: /* hold_Literal: TOK_NUMERICLITERAL  */
#line 1256 "grammer.y"
                        {if(halt_type_check == 0)rhs_type = "Numeric";
                          else rhs_type = "";}
#line 2708 "grammer.tab.c"
    break;

  case 363: /* hold_Literal: TOK_NONNUMERICLITERAL  */
#line 1258 "grammer.y"
                             {if(halt_type_check == 0)rhs_type = "String";
                              else rhs_type = "";
                              cout<<rhs_type<<" "<<halt_type_check<<" ====\n";}
#line 2716 "grammer.tab.c"
    break;

  case 371: /* array_access: un_name "[" expression "]"  */
#line 1277 "grammer.y"
                                                  {if(halt_type_check == 0){
                                          rhs_type = probe_type(pre_var);
                                        }
                                        else rhs_type = "";}
#line 2725 "grammer.tab.c"
    break;

  case 396: /* assignment: left_hand_side assignment_operator expression  */
#line 1327 "grammer.y"
                                                                {rhs_record = 1;lhs_record = 1;}
#line 2731 "grammer.tab.c"
    break;

  case 397: /* left_hand_side: un_name  */
#line 1330 "grammer.y"
                {lhs_record = 0;}
#line 2737 "grammer.tab.c"
    break;

  case 428: /* relational_expression: relational_expression "<" shift_expression  */
#line 1379 "grammer.y"
                                                                {cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
#line 2747 "grammer.tab.c"
    break;

  case 429: /* relational_expression: relational_expression ">" shift_expression  */
#line 1384 "grammer.y"
                                                                {cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
#line 2757 "grammer.tab.c"
    break;

  case 430: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1389 "grammer.y"
                                                                {cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
#line 2767 "grammer.tab.c"
    break;

  case 431: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1394 "grammer.y"
                                                                {cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
#line 2777 "grammer.tab.c"
    break;

  case 442: /* multiplicative_expression: unary_expression  */
#line 1417 "grammer.y"
                                        {cout<<lhs_type<<" "<<rhs_type<<" ++++\n";}
#line 2783 "grammer.tab.c"
    break;

  case 459: /* postfix_expression: un_name  */
#line 1442 "grammer.y"
                {rhs_record = 0;}
#line 2789 "grammer.tab.c"
    break;


#line 2793 "grammer.tab.c"

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

#line 1463 "grammer.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

void print_stack(){
  for(int i = block_table.size() -1; i>=0; i--){
    for(auto itr = block_table[i].begin(); itr != block_table[i].end(); itr++){
      cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"--------------------------------\n";
  }
  return;
}

string probe_type(string var){
  for(int i = block_table.size() -1; i>=0; i--){
    if(block_table[i][var]!=""){
      return block_table[i][var];
    }
  }
  // if(var!="String")
  // print_stack();
  // cout<<yylineno<<" "<<var<<"\n";
  return "";
}

void print_symbol_table(){
  freopen("symbole_table.txt", "w", stdout);
  cout<<"Symbol      Type\n";
  cum_table.push_back(block_table[0]);
  for(int i = 0; i < cum_table.size(); i++) {
    for(auto itr = cum_table[i].begin(); itr != cum_table[i].end(); itr++) {
      cout<< itr->first <<" "<<itr->second<<"\n";
    }
    cout<< "--------------------------------\n";
  }
  fclose(stdout);
  return;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
	yyparse();
	fclose(yyin);
  print_symbol_table();
	return 0;
}
