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
#line 1 "src/parser.y"


/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1
// Data structures to store the tree
vector<pair<string,vector<int>>> nodes;
int startNode;


void yyerror(char const *);
int createNode(string);
void addChild(int, int);


#line 92 "src/parser.tab.c"

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
  YYSYMBOL_TOK_LITERAL = 4,                /* TOK_LITERAL  */
  YYSYMBOL_TOK_33 = 5,                     /* "!"  */
  YYSYMBOL_TOK_3361 = 6,                   /* "!="  */
  YYSYMBOL_TOK_37 = 7,                     /* "%"  */
  YYSYMBOL_TOK_3761 = 8,                   /* "%="  */
  YYSYMBOL_TOK_38 = 9,                     /* "&"  */
  YYSYMBOL_TOK_3838 = 10,                  /* "&&"  */
  YYSYMBOL_TOK_3861 = 11,                  /* "&="  */
  YYSYMBOL_TOK_40 = 12,                    /* "("  */
  YYSYMBOL_TOK_41 = 13,                    /* ")"  */
  YYSYMBOL_TOK_42 = 14,                    /* "*"  */
  YYSYMBOL_TOK_4261 = 15,                  /* "*="  */
  YYSYMBOL_TOK_43 = 16,                    /* "+"  */
  YYSYMBOL_TOK_4343 = 17,                  /* "++"  */
  YYSYMBOL_TOK_4361 = 18,                  /* "+="  */
  YYSYMBOL_TOK_44 = 19,                    /* ","  */
  YYSYMBOL_TOK_45 = 20,                    /* "-"  */
  YYSYMBOL_TOK_4545 = 21,                  /* "--"  */
  YYSYMBOL_TOK_4561 = 22,                  /* "-="  */
  YYSYMBOL_TOK_4562 = 23,                  /* "->"  */
  YYSYMBOL_TOK_46 = 24,                    /* "."  */
  YYSYMBOL_TOK_464646 = 25,                /* "..."  */
  YYSYMBOL_TOK_47 = 26,                    /* "/"  */
  YYSYMBOL_TOK_4761 = 27,                  /* "/="  */
  YYSYMBOL_TOK_58 = 28,                    /* ":"  */
  YYSYMBOL_TOK_5858 = 29,                  /* "::"  */
  YYSYMBOL_TOK_59 = 30,                    /* ";"  */
  YYSYMBOL_TOK_60 = 31,                    /* "<"  */
  YYSYMBOL_TOK_6060 = 32,                  /* "<<"  */
  YYSYMBOL_TOK_606061 = 33,                /* "<<="  */
  YYSYMBOL_TOK_6061 = 34,                  /* "<="  */
  YYSYMBOL_TOK_61 = 35,                    /* "="  */
  YYSYMBOL_TOK_6161 = 36,                  /* "=="  */
  YYSYMBOL_TOK_62 = 37,                    /* ">"  */
  YYSYMBOL_TOK_6261 = 38,                  /* ">="  */
  YYSYMBOL_TOK_6262 = 39,                  /* ">>"  */
  YYSYMBOL_TOK_626261 = 40,                /* ">>="  */
  YYSYMBOL_TOK_626262 = 41,                /* ">>>"  */
  YYSYMBOL_TOK_62626261 = 42,              /* ">>>="  */
  YYSYMBOL_TOK_63 = 43,                    /* "?"  */
  YYSYMBOL_TOK_64 = 44,                    /* "@"  */
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
  YYSYMBOL_TOK_exports = 64,               /* "exports"  */
  YYSYMBOL_TOK_extends = 65,               /* "extends"  */
  YYSYMBOL_TOK_final = 66,                 /* "final"  */
  YYSYMBOL_TOK_finally = 67,               /* "finally"  */
  YYSYMBOL_TOK_float = 68,                 /* "float"  */
  YYSYMBOL_TOK_for = 69,                   /* "for"  */
  YYSYMBOL_TOK_if = 70,                    /* "if"  */
  YYSYMBOL_TOK_implements = 71,            /* "implements"  */
  YYSYMBOL_TOK_import = 72,                /* "import"  */
  YYSYMBOL_TOK_instanceof = 73,            /* "instanceof"  */
  YYSYMBOL_TOK_int = 74,                   /* "int"  */
  YYSYMBOL_TOK_interface = 75,             /* "interface"  */
  YYSYMBOL_TOK_long = 76,                  /* "long"  */
  YYSYMBOL_TOK_module = 77,                /* "module"  */
  YYSYMBOL_TOK_new = 78,                   /* "new"  */
  YYSYMBOL_TOK_open = 79,                  /* "open"  */
  YYSYMBOL_TOK_opens = 80,                 /* "opens"  */
  YYSYMBOL_TOK_package = 81,               /* "package"  */
  YYSYMBOL_TOK_permits = 82,               /* "permits"  */
  YYSYMBOL_TOK_private = 83,               /* "private"  */
  YYSYMBOL_TOK_protected = 84,             /* "protected"  */
  YYSYMBOL_TOK_provides = 85,              /* "provides"  */
  YYSYMBOL_TOK_public = 86,                /* "public"  */
  YYSYMBOL_TOK_record = 87,                /* "record"  */
  YYSYMBOL_TOK_requires = 88,              /* "requires"  */
  YYSYMBOL_TOK_return = 89,                /* "return"  */
  YYSYMBOL_TOK_sealed = 90,                /* "sealed"  */
  YYSYMBOL_TOK_short = 91,                 /* "short"  */
  YYSYMBOL_TOK_static = 92,                /* "static"  */
  YYSYMBOL_TOK_strictfp = 93,              /* "strictfp"  */
  YYSYMBOL_TOK_super = 94,                 /* "super"  */
  YYSYMBOL_TOK_switch = 95,                /* "switch"  */
  YYSYMBOL_TOK_synchronized = 96,          /* "synchronized"  */
  YYSYMBOL_TOK_this = 97,                  /* "this"  */
  YYSYMBOL_TOK_throw = 98,                 /* "throw"  */
  YYSYMBOL_TOK_throws = 99,                /* "throws"  */
  YYSYMBOL_TOK_to = 100,                   /* "to"  */
  YYSYMBOL_TOK_transient = 101,            /* "transient"  */
  YYSYMBOL_TOK_transitive = 102,           /* "transitive"  */
  YYSYMBOL_TOK_try = 103,                  /* "try"  */
  YYSYMBOL_TOK_uses = 104,                 /* "uses"  */
  YYSYMBOL_TOK_var = 105,                  /* "var"  */
  YYSYMBOL_TOK_void = 106,                 /* "void"  */
  YYSYMBOL_TOK_volatile = 107,             /* "volatile"  */
  YYSYMBOL_TOK_while = 108,                /* "while"  */
  YYSYMBOL_TOK_with = 109,                 /* "with"  */
  YYSYMBOL_TOK_yield = 110,                /* "yield"  */
  YYSYMBOL_TOK_123 = 111,                  /* "{"  */
  YYSYMBOL_TOK_124 = 112,                  /* "|"  */
  YYSYMBOL_TOK_12461 = 113,                /* "|="  */
  YYSYMBOL_TOK_124124 = 114,               /* "||"  */
  YYSYMBOL_TOK_125 = 115,                  /* "}"  */
  YYSYMBOL_TOK_126 = 116,                  /* "~"  */
  YYSYMBOL_YYACCEPT = 117,                 /* $accept  */
  YYSYMBOL_input = 118,                    /* input  */
  YYSYMBOL_119_modifier_multiopt = 119,    /* modifier.multiopt  */
  YYSYMBOL_modifier = 120,                 /* modifier  */
  YYSYMBOL_121_dot_ind_multiopt = 121,     /* dot_ind.multiopt  */
  YYSYMBOL_type_IDENTIFIER = 122,          /* type_IDENTIFIER  */
  YYSYMBOL_unqualified_method_IDENTIFIER = 123, /* unqualified_method_IDENTIFIER  */
  YYSYMBOL_primitive_type = 124,           /* primitive_type  */
  YYSYMBOL_numeric_type = 125,             /* numeric_type  */
  YYSYMBOL_integral_type = 126,            /* integral_type  */
  YYSYMBOL_floating_point_type = 127,      /* floating_point_type  */
  YYSYMBOL_reference_type = 128,           /* reference_type  */
  YYSYMBOL_class_or_interface_type = 129,  /* class_or_interface_type  */
  YYSYMBOL_class_type = 130,               /* class_type  */
  YYSYMBOL_interface_type = 131,           /* interface_type  */
  YYSYMBOL_type_variable = 132,            /* type_variable  */
  YYSYMBOL_array_type = 133,               /* array_type  */
  YYSYMBOL_dims = 134,                     /* dims  */
  YYSYMBOL_135_an_sp_multiopt = 135,       /* an_sp.multiopt  */
  YYSYMBOL_type_parameter = 136,           /* type_parameter  */
  YYSYMBOL_137_type_parameter_modifier_multiopt = 137, /* type_parameter_modifier.multiopt  */
  YYSYMBOL_type_parameter_modifier = 138,  /* type_parameter_modifier  */
  YYSYMBOL_139_type_bound_opt = 139,       /* type_bound.opt  */
  YYSYMBOL_type_bound = 140,               /* type_bound  */
  YYSYMBOL_additional_bound = 141,         /* additional_bound  */
  YYSYMBOL_type_arguments = 142,           /* type_arguments  */
  YYSYMBOL_type_argument_list = 143,       /* type_argument_list  */
  YYSYMBOL_144_type_argument_multiopt = 144, /* type_argument.multiopt  */
  YYSYMBOL_type_argument = 145,            /* type_argument  */
  YYSYMBOL_wildcard = 146,                 /* wildcard  */
  YYSYMBOL_147_wildcard_bounds_opt = 147,  /* wildcard_bounds.opt  */
  YYSYMBOL_wildcard_bounds = 148,          /* wildcard_bounds  */
  YYSYMBOL_module_name = 149,              /* module_name  */
  YYSYMBOL_package_name = 150,             /* package_name  */
  YYSYMBOL_type_name = 151,                /* type_name  */
  YYSYMBOL_expression_name = 152,          /* expression_name  */
  YYSYMBOL_method_name = 153,              /* method_name  */
  YYSYMBOL_package_or_type_name = 154,     /* package_or_type_name  */
  YYSYMBOL_ambiguous_name = 155,           /* ambiguous_name  */
  YYSYMBOL_compilation_unit = 156,         /* compilation_unit  */
  YYSYMBOL_ordinary_compilation_unit = 157, /* ordinary_compilation_unit  */
  YYSYMBOL_modular_compilation_unit = 158, /* modular_compilation_unit  */
  YYSYMBOL_159_package_declaration_opt = 159, /* package_declaration.opt  */
  YYSYMBOL_package_declaration = 160,      /* package_declaration  */
  YYSYMBOL_161_package_modifier_multiopt = 161, /* package_modifier.multiopt  */
  YYSYMBOL_package_modifier = 162,         /* package_modifier  */
  YYSYMBOL_163_import_declaration_multiopt = 163, /* import_declaration.multiopt  */
  YYSYMBOL_import_declaration = 164,       /* import_declaration  */
  YYSYMBOL_single_type_import_declaration = 165, /* single_type_import_declaration  */
  YYSYMBOL_type_import_on_demand_declaration = 166, /* type_import_on_demand_declaration  */
  YYSYMBOL_single_static_import_declaration = 167, /* single_static_import_declaration  */
  YYSYMBOL_static_import_on_demand_declaration = 168, /* static_import_on_demand_declaration  */
  YYSYMBOL_169_top_level_class_or_interface_declaration_multiopt = 169, /* top_level_class_or_interface_declaration.multiopt  */
  YYSYMBOL_top_level_class_or_interface_declaration = 170, /* top_level_class_or_interface_declaration  */
  YYSYMBOL_module_declaration = 171,       /* module_declaration  */
  YYSYMBOL_172_open_opt = 172,             /* open.opt  */
  YYSYMBOL_173_module_directive_multiopt = 173, /* module_directive.multiopt  */
  YYSYMBOL_module_directive = 174,         /* module_directive  */
  YYSYMBOL_175_com_type_name_multiopt = 175, /* com_type_name.multiopt  */
  YYSYMBOL_176_to_module_names_opt = 176,  /* to_module_names.opt  */
  YYSYMBOL_177_com_module_name_multiopt = 177, /* com_module_name.multiopt  */
  YYSYMBOL_class_declaration = 178,        /* class_declaration  */
  YYSYMBOL_normal_class_declaration = 179, /* normal_class_declaration  */
  YYSYMBOL_180_type_parameters_opt = 180,  /* type_parameters.opt  */
  YYSYMBOL_181_class_extends_opt = 181,    /* class_extends.opt  */
  YYSYMBOL_182_class_implements_opt = 182, /* class_implements.opt  */
  YYSYMBOL_183_class_permits_opt = 183,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 184,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 185,      /* type_parameter_list  */
  YYSYMBOL_186_com_type_parameter_multiopt = 186, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 187,            /* class_extends  */
  YYSYMBOL_class_implements = 188,         /* class_implements  */
  YYSYMBOL_interface_type_list = 189,      /* interface_type_list  */
  YYSYMBOL_190_com_interface_type_multiopt = 190, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 191,            /* class_permits  */
  YYSYMBOL_class_body = 192,               /* class_body  */
  YYSYMBOL_193_class_body_declaration_multiopt = 193, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 194,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 195, /* class_member_declaration  */
  YYSYMBOL_field_declaration = 196,        /* field_declaration  */
  YYSYMBOL_variable_declarator_list = 197, /* variable_declarator_list  */
  YYSYMBOL_198_com_variable_declarator_multiopt = 198, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 199,      /* variable_declarator  */
  YYSYMBOL_200_eq_variable_initializer_opt = 200, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 201,   /* variable_declarator_id  */
  YYSYMBOL_202_dims_opt = 202,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 203,     /* variable_initializer  */
  YYSYMBOL_unann_type = 204,               /* unann_type  */
  YYSYMBOL_unann_primitive_type = 205,     /* unann_primitive_type  */
  YYSYMBOL_unann_reference_type = 206,     /* unann_reference_type  */
  YYSYMBOL_unann_class_or_interface_type = 207, /* unann_class_or_interface_type  */
  YYSYMBOL_unann_class_type = 208,         /* unann_class_type  */
  YYSYMBOL_209_type_arguments_opt = 209,   /* type_arguments.opt  */
  YYSYMBOL_unann_interface_type = 210,     /* unann_interface_type  */
  YYSYMBOL_unann_type_variable = 211,      /* unann_type_variable  */
  YYSYMBOL_unann_array_type = 212,         /* unann_array_type  */
  YYSYMBOL_method_declaration = 213,       /* method_declaration  */
  YYSYMBOL_method_header = 214,            /* method_header  */
  YYSYMBOL_215_throws_opt = 215,           /* throws.opt  */
  YYSYMBOL_result = 216,                   /* result  */
  YYSYMBOL_method_declarator = 217,        /* method_declarator  */
  YYSYMBOL_218_receiver_parameter_com_opt = 218, /* receiver_parameter_com.opt  */
  YYSYMBOL_219_formal_parameter_list_opt = 219, /* formal_parameter_list.opt  */
  YYSYMBOL_receiver_parameter = 220,       /* receiver_parameter  */
  YYSYMBOL_221_IDENTIFIER_dot_opt = 221,   /* IDENTIFIER_dot.opt  */
  YYSYMBOL_formal_parameter_list = 222,    /* formal_parameter_list  */
  YYSYMBOL_223_com_formal_parameter_multiopt = 223, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 224,         /* formal_parameter  */
  YYSYMBOL_225_variable_modifier_multiopt = 225, /* variable_modifier.multiopt  */
  YYSYMBOL_variable_arity_parameter = 226, /* variable_arity_parameter  */
  YYSYMBOL_variable_modifier = 227,        /* variable_modifier  */
  YYSYMBOL_throws = 228,                   /* throws  */
  YYSYMBOL_exception_type_list = 229,      /* exception_type_list  */
  YYSYMBOL_230_com_exception_type_multiopt = 230, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 231,           /* exception_type  */
  YYSYMBOL_method_body = 232,              /* method_body  */
  YYSYMBOL_instance_initializer = 233,     /* instance_initializer  */
  YYSYMBOL_static_initializer = 234,       /* static_initializer  */
  YYSYMBOL_constructor_declaration = 235,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 236,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 237,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 238,         /* constructor_body  */
  YYSYMBOL_239_explicit_constructor_invocation_opt = 239, /* explicit_constructor_invocation.opt  */
  YYSYMBOL_240_block_statements_opt = 240, /* block_statements.opt  */
  YYSYMBOL_explicit_constructor_invocation = 241, /* explicit_constructor_invocation  */
  YYSYMBOL_242_argument_list_opt = 242,    /* argument_list.opt  */
  YYSYMBOL_enum_declaration = 243,         /* enum_declaration  */
  YYSYMBOL_enum_body = 244,                /* enum_body  */
  YYSYMBOL_245_com_opt = 245,              /* com.opt  */
  YYSYMBOL_246_enum_body_declarations_opt = 246, /* enum_body_declarations.opt  */
  YYSYMBOL_247_enum_constant_list_opt = 247, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 248,       /* enum_constant_list  */
  YYSYMBOL_249_com_enum_constant_multiopt = 249, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 250,            /* enum_constant  */
  YYSYMBOL_251_enum_modifier_multiopt = 251, /* enum_modifier.multiopt  */
  YYSYMBOL_252_class_body_opt = 252,       /* class_body.opt  */
  YYSYMBOL_enum_modifier = 253,            /* enum_modifier  */
  YYSYMBOL_enum_body_declarations = 254,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 255,       /* record_declaration  */
  YYSYMBOL_record_header = 256,            /* record_header  */
  YYSYMBOL_257_record_component_list_opt = 257, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 258,    /* record_component_list  */
  YYSYMBOL_259_com_record_component_multiopt = 259, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 260,         /* record_component  */
  YYSYMBOL_261_record_component_modifier_multiopt = 261, /* record_component_modifier.multiopt  */
  YYSYMBOL_variable_arity_record_component = 262, /* variable_arity_record_component  */
  YYSYMBOL_record_component_modifier = 263, /* record_component_modifier  */
  YYSYMBOL_record_body = 264,              /* record_body  */
  YYSYMBOL_265_record_body_declaration_multiopt = 265, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 266,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 267, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 268,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 269, /* normal_interface_declaration  */
  YYSYMBOL_270_interface_extends_opt = 270, /* interface_extends.opt  */
  YYSYMBOL_271_interface_permits_opt = 271, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 272,        /* interface_extends  */
  YYSYMBOL_interface_permits = 273,        /* interface_permits  */
  YYSYMBOL_interface_body = 274,           /* interface_body  */
  YYSYMBOL_275_interface_member_declaration_multiopt = 275, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 276, /* interface_member_declaration  */
  YYSYMBOL_constant_declaration = 277,     /* constant_declaration  */
  YYSYMBOL_interface_method_declaration = 278, /* interface_method_declaration  */
  YYSYMBOL_annotation_interface_declaration = 279, /* annotation_interface_declaration  */
  YYSYMBOL_annotation_interface_body = 280, /* annotation_interface_body  */
  YYSYMBOL_281_annotation_interface_member_declaration_multiopt = 281, /* annotation_interface_member_declaration.multiopt  */
  YYSYMBOL_annotation_interface_member_declaration = 282, /* annotation_interface_member_declaration  */
  YYSYMBOL_annotation_interface_element_declaration = 283, /* annotation_interface_element_declaration  */
  YYSYMBOL_284_default_value_opt = 284,    /* default_value.opt  */
  YYSYMBOL_default_value = 285,            /* default_value  */
  YYSYMBOL_annotation = 286,               /* annotation  */
  YYSYMBOL_normal_annotation = 287,        /* normal_annotation  */
  YYSYMBOL_288_element_value_pair_list_opt = 288, /* element_value_pair_list.opt  */
  YYSYMBOL_element_value_pair_list = 289,  /* element_value_pair_list  */
  YYSYMBOL_290_com_element_value_pair_multiopt = 290, /* com_element_value_pair.multiopt  */
  YYSYMBOL_element_value_pair = 291,       /* element_value_pair  */
  YYSYMBOL_element_value = 292,            /* element_value  */
  YYSYMBOL_element_value_array_initializer = 293, /* element_value_array_initializer  */
  YYSYMBOL_294_element_valueList_opt = 294, /* element_valueList.opt  */
  YYSYMBOL_element_valueList = 295,        /* element_valueList  */
  YYSYMBOL_296_com_element_value_multiopt = 296, /* com_element_value.multiopt  */
  YYSYMBOL_marker_annotation = 297,        /* marker_annotation  */
  YYSYMBOL_single_element_annotation = 298, /* single_element_annotation  */
  YYSYMBOL_299_annotation_multiopt = 299,  /* annotation.multiopt  */
  YYSYMBOL_array_initializer = 300,        /* array_initializer  */
  YYSYMBOL_301_variable_initializer_list_opt = 301, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 302, /* variable_initializer_list  */
  YYSYMBOL_303_com_variable_initializer_multiopt = 303, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 304,                    /* block  */
  YYSYMBOL_block_statements = 305,         /* block_statements  */
  YYSYMBOL_306_block_statement_multiopt = 306, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 307,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 308, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 309, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 310, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 311,      /* local_variable_type  */
  YYSYMBOL_statement = 312,                /* statement  */
  YYSYMBOL_statement_no_short_if = 313,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 314, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 315,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 316,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 317, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 318,     /* expression_statement  */
  YYSYMBOL_statement_expression = 319,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 320,        /* if_then_statement  */
  YYSYMBOL_if_then_else_statement = 321,   /* if_then_else_statement  */
  YYSYMBOL_if_then_else_statement_no_short_if = 322, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_assert_statement = 323,         /* assert_statement  */
  YYSYMBOL_switch_statement = 324,         /* switch_statement  */
  YYSYMBOL_switch_block = 325,             /* switch_block  */
  YYSYMBOL_326_switch_rule_multiopt = 326, /* switch_rule.multiopt  */
  YYSYMBOL_327_switch_block_statement_group_multiopt = 327, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_328_switch_label_col_multiopt = 328, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 329,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 330, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 331,             /* switch_label  */
  YYSYMBOL_332_com_case_constant_multiopt = 332, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 333,            /* case_constant  */
  YYSYMBOL_while_statement = 334,          /* while_statement  */
  YYSYMBOL_while_statement_no_short_if = 335, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 336,             /* do_statement  */
  YYSYMBOL_for_statement = 337,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 338, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 339,      /* basic_for_statement  */
  YYSYMBOL_340_for_init_opt = 340,         /* for_init.opt  */
  YYSYMBOL_341_expression_opt = 341,       /* expression.opt  */
  YYSYMBOL_342_for_update_opt = 342,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 343, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 344,                 /* for_init  */
  YYSYMBOL_for_update = 345,               /* for_update  */
  YYSYMBOL_statement_expression_list = 346, /* statement_expression_list  */
  YYSYMBOL_347_com_statement_expression_multiopt = 347, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 348,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 349, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 350,          /* break_statement  */
  YYSYMBOL_351_IDENTIFIER_opt = 351,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 352,          /* yield_statement  */
  YYSYMBOL_continue_statement = 353,       /* continue_statement  */
  YYSYMBOL_return_statement = 354,         /* return_statement  */
  YYSYMBOL_throw_statement = 355,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 356,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 357,            /* try_statement  */
  YYSYMBOL_358_catches_opt = 358,          /* catches.opt  */
  YYSYMBOL_catches = 359,                  /* catches  */
  YYSYMBOL_360_catch_clause_multiopt = 360, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 361,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 362,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 363,               /* catch_type  */
  YYSYMBOL_364_vt_class_type_multiopt = 364, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 365,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 366, /* try_with_resources_statement  */
  YYSYMBOL_367_finally_opt = 367,          /* finally.opt  */
  YYSYMBOL_resource_specification = 368,   /* resource_specification  */
  YYSYMBOL_369_semcol_opt = 369,           /* semcol.opt  */
  YYSYMBOL_resource_list = 370,            /* resource_list  */
  YYSYMBOL_371_semcol_resource_multiopt = 371, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 372,                 /* resource  */
  YYSYMBOL_variable_access = 373,          /* variable_access  */
  YYSYMBOL_pattern = 374,                  /* pattern  */
  YYSYMBOL_type_pattern = 375,             /* type_pattern  */
  YYSYMBOL_primary = 376,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 377,     /* primary_no_new_array  */
  YYSYMBOL_class_literal = 378,            /* class_literal  */
  YYSYMBOL_379_dm_multiopt = 379,          /* dm.multiopt  */
  YYSYMBOL_class_instance_creation_expression = 380, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 381, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_class_or_interface_type_to_instantiate = 382, /* class_or_interface_type_to_instantiate  */
  YYSYMBOL_383_dot_annotation_multiopt_IDENTIFIER_multiopt = 383, /* dot_annotation.multiopt_IDENTIFIER.multiopt  */
  YYSYMBOL_384_type_arguments_or_diamond_opt = 384, /* type_arguments_or_diamond.opt  */
  YYSYMBOL_type_arguments_or_diamond = 385, /* type_arguments_or_diamond  */
  YYSYMBOL_field_access = 386,             /* field_access  */
  YYSYMBOL_array_access = 387,             /* array_access  */
  YYSYMBOL_method_invocation = 388,        /* method_invocation  */
  YYSYMBOL_argument_list = 389,            /* argument_list  */
  YYSYMBOL_390_com_expression_multiopt = 390, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 391,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 392, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 393,                /* dim_exprs  */
  YYSYMBOL_394_dim_expr_multiopt = 394,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 395,                 /* dim_expr  */
  YYSYMBOL_expression = 396,               /* expression  */
  YYSYMBOL_lambda_expression = 397,        /* lambda_expression  */
  YYSYMBOL_lambda_parameters = 398,        /* lambda_parameters  */
  YYSYMBOL_399_lambda_parameter_list_opt = 399, /* lambda_parameter_list.opt  */
  YYSYMBOL_lambda_parameter_list = 400,    /* lambda_parameter_list  */
  YYSYMBOL_401_com_IDENTIFIER_multiopt = 401, /* com_IDENTIFIER.multiopt  */
  YYSYMBOL_402_com_lambda_parameter_multiopt = 402, /* com_lambda_parameter.multiopt  */
  YYSYMBOL_lambda_parameter = 403,         /* lambda_parameter  */
  YYSYMBOL_lambda_parameter_type = 404,    /* lambda_parameter_type  */
  YYSYMBOL_lambda_body = 405,              /* lambda_body  */
  YYSYMBOL_assignment_expression = 406,    /* assignment_expression  */
  YYSYMBOL_assignment = 407,               /* assignment  */
  YYSYMBOL_left_hand_side = 408,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 409,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 410,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 411, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 412, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 413,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 414,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 415,           /* and_expression  */
  YYSYMBOL_equality_expression = 416,      /* equality_expression  */
  YYSYMBOL_relational_expression = 417,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 418,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 419,         /* shift_expression  */
  YYSYMBOL_additive_expression = 420,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 421, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 422,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 423, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 424, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 425, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 426,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 427, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 428, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 429,          /* cast_expression  */
  YYSYMBOL_430_additional_bound_multiopt = 430, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 431         /* switch_expression  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  315
/* YYNRULES -- Number of rules.  */
#define YYNRULES  622
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1065

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   371


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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   470,   470,   473,   474,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   491,   492,   495,
     498,   506,   507,   510,   511,   514,   515,   516,   517,   518,
     521,   522,   525,   526,   527,   530,   531,   534,   535,   536,
     539,   542,   545,   546,   547,   550,   553,   554,   557,   560,
     561,   562,   564,   567,   568,   571,   572,   575,   578,   581,
     584,   585,   586,   588,   589,   592,   595,   596,   599,   600,
     605,   606,   609,   610,   613,   614,   617,   618,   621,   624,
     625,   628,   629,   635,   636,   639,   642,   645,   646,   649,
     652,   653,   656,   659,   660,   663,   664,   665,   666,   669,
     672,   675,   678,   681,   682,   683,   686,   687,   688,   691,
     694,   695,   698,   699,   700,   703,   704,   705,   706,   707,
     710,   711,   714,   715,   716,   718,   719,   724,   725,   726,
     729,   732,   733,   736,   737,   740,   741,   744,   745,   748,
     751,   754,   755,   758,   761,   764,   767,   768,   771,   774,
     777,   778,   781,   782,   783,   784,   787,   788,   789,   790,
     793,   796,   799,   800,   803,   806,   807,   810,   813,   814,
     817,   818,   821,   822,   825,   826,   829,   830,   831,   834,
     835,   838,   839,   840,   843,   844,   847,   850,   853,   854,
     855,   858,   861,   862,   865,   866,   869,   870,   873,   876,
     877,   880,   881,   884,   887,   888,   891,   894,   895,   898,
     899,   902,   903,   906,   909,   910,   913,   916,   919,   920,
     923,   924,   927,   928,   931,   934,   937,   940,   943,   946,
     949,   950,   953,   954,   957,   958,   959,   960,   963,   964,
     967,   970,   973,   974,   977,   978,   981,   982,   985,   988,
     989,   992,   995,   996,   999,  1000,  1003,  1006,  1009,  1012,
    1015,  1016,  1019,  1022,  1023,  1027,  1028,  1031,  1032,  1035,
    1038,  1041,  1044,  1045,  1048,  1049,  1052,  1058,  1059,  1062,
    1065,  1066,  1069,  1070,  1073,  1076,  1079,  1082,  1083,  1086,
    1087,  1088,  1089,  1090,  1093,  1096,  1099,  1102,  1105,  1106,
    1109,  1110,  1111,  1112,  1113,  1116,  1119,  1120,  1123,  1126,
    1127,  1128,  1131,  1134,  1135,  1138,  1141,  1142,  1145,  1148,
    1149,  1150,  1153,  1156,  1157,  1160,  1163,  1164,  1167,  1170,
    1173,  1174,  1178,  1181,  1182,  1185,  1188,  1189,  1194,  1197,
    1200,  1201,  1204,  1205,  1206,  1209,  1210,  1213,  1216,  1219,
    1220,  1223,  1224,  1225,  1226,  1227,  1228,  1231,  1232,  1233,
    1234,  1235,  1238,  1239,  1240,  1241,  1242,  1243,  1244,  1245,
    1246,  1247,  1248,  1249,  1250,  1253,  1256,  1259,  1262,  1265,
    1266,  1267,  1268,  1269,  1270,  1271,  1274,  1277,  1280,  1283,
    1284,  1287,  1290,  1291,  1294,  1295,  1298,  1299,  1302,  1303,
    1306,  1307,  1308,  1311,  1314,  1315,  1318,  1319,  1322,  1325,
    1328,  1331,  1334,  1335,  1338,  1339,  1342,  1345,  1346,  1349,
    1350,  1353,  1354,  1357,  1360,  1361,  1364,  1367,  1370,  1371,
    1374,  1377,  1380,  1383,  1384,  1387,  1390,  1393,  1396,  1399,
    1402,  1403,  1404,  1407,  1408,  1411,  1414,  1415,  1418,  1421,
    1424,  1427,  1428,  1431,  1434,  1437,  1438,  1441,  1444,  1445,
    1448,  1451,  1452,  1455,  1456,  1459,  1460,  1463,  1466,  1471,
    1472,  1475,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1483,
    1484,  1487,  1488,  1489,  1490,  1493,  1494,  1495,  1498,  1499,
    1500,  1503,  1506,  1509,  1510,  1513,  1514,  1517,  1520,  1521,
    1522,  1525,  1526,  1529,  1530,  1531,  1532,  1533,  1534,  1537,
    1540,  1541,  1544,  1545,  1546,  1547,  1548,  1549,  1550,  1553,
    1554,  1555,  1556,  1559,  1562,  1563,  1566,  1569,  1570,  1573,
    1576,  1577,  1580,  1581,  1584,  1585,  1588,  1589,  1592,  1593,
    1596,  1597,  1600,  1601,  1604,  1605,  1608,  1609,  1612,  1615,
    1616,  1617,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,
    1628,  1629,  1630,  1631,  1634,  1635,  1636,  1639,  1640,  1643,
    1644,  1647,  1648,  1651,  1652,  1655,  1656,  1659,  1660,  1661,
    1664,  1665,  1666,  1667,  1668,  1669,  1672,  1673,  1676,  1677,
    1678,  1679,  1682,  1683,  1684,  1687,  1688,  1689,  1690,  1693,
    1694,  1695,  1696,  1697,  1700,  1702,  1704,  1705,  1706,  1707,
    1708,  1711,  1712,  1713,  1714,  1717,  1720,  1723,  1724,  1725,
    1728,  1729,  1732
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
  "TOK_LITERAL", "\"!\"", "\"!=\"", "\"%\"", "\"%=\"", "\"&\"", "\"&&\"",
  "\"&=\"", "\"(\"", "\")\"", "\"*\"", "\"*=\"", "\"+\"", "\"++\"",
  "\"+=\"", "\",\"", "\"-\"", "\"--\"", "\"-=\"", "\"->\"", "\".\"",
  "\"...\"", "\"/\"", "\"/=\"", "\":\"", "\"::\"", "\";\"", "\"<\"",
  "\"<<\"", "\"<<=\"", "\"<=\"", "\"=\"", "\"==\"", "\">\"", "\">=\"",
  "\">>\"", "\">>=\"", "\">>>\"", "\">>>=\"", "\"?\"", "\"@\"", "\"[\"",
  "\"]\"", "\"^\"", "\"^=\"", "\"abstract\"", "\"assert\"", "\"boolean\"",
  "\"break\"", "\"byte\"", "\"case\"", "\"catch\"", "\"char\"",
  "\"class\"", "\"continue\"", "\"default\"", "\"do\"", "\"double\"",
  "\"else\"", "\"enum\"", "\"exports\"", "\"extends\"", "\"final\"",
  "\"finally\"", "\"float\"", "\"for\"", "\"if\"", "\"implements\"",
  "\"import\"", "\"instanceof\"", "\"int\"", "\"interface\"", "\"long\"",
  "\"module\"", "\"new\"", "\"open\"", "\"opens\"", "\"package\"",
  "\"permits\"", "\"private\"", "\"protected\"", "\"provides\"",
  "\"public\"", "\"record\"", "\"requires\"", "\"return\"", "\"sealed\"",
  "\"short\"", "\"static\"", "\"strictfp\"", "\"super\"", "\"switch\"",
  "\"synchronized\"", "\"this\"", "\"throw\"", "\"throws\"", "\"to\"",
  "\"transient\"", "\"transitive\"", "\"try\"", "\"uses\"", "\"var\"",
  "\"void\"", "\"volatile\"", "\"while\"", "\"with\"", "\"yield\"",
  "\"{\"", "\"|\"", "\"|=\"", "\"||\"", "\"}\"", "\"~\"", "$accept",
  "input", "modifier.multiopt", "modifier", "dot_ind.multiopt",
  "type_IDENTIFIER", "unqualified_method_IDENTIFIER", "primitive_type",
  "numeric_type", "integral_type", "floating_point_type", "reference_type",
  "class_or_interface_type", "class_type", "interface_type",
  "type_variable", "array_type", "dims", "an_sp.multiopt",
  "type_parameter", "type_parameter_modifier.multiopt",
  "type_parameter_modifier", "type_bound.opt", "type_bound",
  "additional_bound", "type_arguments", "type_argument_list",
  "type_argument.multiopt", "type_argument", "wildcard",
  "wildcard_bounds.opt", "wildcard_bounds", "module_name", "package_name",
  "type_name", "expression_name", "method_name", "package_or_type_name",
  "ambiguous_name", "compilation_unit", "ordinary_compilation_unit",
  "modular_compilation_unit", "package_declaration.opt",
  "package_declaration", "package_modifier.multiopt", "package_modifier",
  "import_declaration.multiopt", "import_declaration",
  "single_type_import_declaration", "type_import_on_demand_declaration",
  "single_static_import_declaration",
  "static_import_on_demand_declaration",
  "top_level_class_or_interface_declaration.multiopt",
  "top_level_class_or_interface_declaration", "module_declaration",
  "open.opt", "module_directive.multiopt", "module_directive",
  "com_type_name.multiopt", "to_module_names.opt",
  "com_module_name.multiopt", "class_declaration",
  "normal_class_declaration", "type_parameters.opt", "class_extends.opt",
  "class_implements.opt", "class_permits.opt", "type_parameters",
  "type_parameter_list", "com_type_parameter.multiopt", "class_extends",
  "class_implements", "interface_type_list", "com_interface_type.multiopt",
  "class_permits", "class_body", "class_body_declaration.multiopt",
  "class_body_declaration", "class_member_declaration",
  "field_declaration", "variable_declarator_list",
  "com_variable_declarator.multiopt", "variable_declarator",
  "eq_variable_initializer.opt", "variable_declarator_id", "dims.opt",
  "variable_initializer", "unann_type", "unann_primitive_type",
  "unann_reference_type", "unann_class_or_interface_type",
  "unann_class_type", "type_arguments.opt", "unann_interface_type",
  "unann_type_variable", "unann_array_type", "method_declaration",
  "method_header", "throws.opt", "result", "method_declarator",
  "receiver_parameter_com.opt", "formal_parameter_list.opt",
  "receiver_parameter", "IDENTIFIER_dot.opt", "formal_parameter_list",
  "com_formal_parameter.multiopt", "formal_parameter",
  "variable_modifier.multiopt", "variable_arity_parameter",
  "variable_modifier", "throws", "exception_type_list",
  "com_exception_type.multiopt", "exception_type", "method_body",
  "instance_initializer", "static_initializer", "constructor_declaration",
  "constructor_declarator", "simple_type_name", "constructor_body",
  "explicit_constructor_invocation.opt", "block_statements.opt",
  "explicit_constructor_invocation", "argument_list.opt",
  "enum_declaration", "enum_body", "com.opt", "enum_body_declarations.opt",
  "enum_constant_list.opt", "enum_constant_list",
  "com_enum_constant.multiopt", "enum_constant", "enum_modifier.multiopt",
  "class_body.opt", "enum_modifier", "enum_body_declarations",
  "record_declaration", "record_header", "record_component_list.opt",
  "record_component_list", "com_record_component.multiopt",
  "record_component", "record_component_modifier.multiopt",
  "variable_arity_record_component", "record_component_modifier",
  "record_body", "record_body_declaration.multiopt",
  "record_body_declaration", "compact_constructor_declaration",
  "interface_declaration", "normal_interface_declaration",
  "interface_extends.opt", "interface_permits.opt", "interface_extends",
  "interface_permits", "interface_body",
  "interface_member_declaration.multiopt", "interface_member_declaration",
  "constant_declaration", "interface_method_declaration",
  "annotation_interface_declaration", "annotation_interface_body",
  "annotation_interface_member_declaration.multiopt",
  "annotation_interface_member_declaration",
  "annotation_interface_element_declaration", "default_value.opt",
  "default_value", "annotation", "normal_annotation",
  "element_value_pair_list.opt", "element_value_pair_list",
  "com_element_value_pair.multiopt", "element_value_pair", "element_value",
  "element_value_array_initializer", "element_valueList.opt",
  "element_valueList", "com_element_value.multiopt", "marker_annotation",
  "single_element_annotation", "annotation.multiopt", "array_initializer",
  "variable_initializer_list.opt", "variable_initializer_list",
  "com_variable_initializer.multiopt", "block", "block_statements",
  "block_statement.multiopt", "block_statement",
  "local_class_or_interface_declaration",
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
  "type_pattern", "primary", "primary_no_new_array", "class_literal",
  "dm.multiopt", "class_instance_creation_expression",
  "unqualified_class_instance_creation_expression",
  "class_or_interface_type_to_instantiate",
  "dot_annotation.multiopt_IDENTIFIER.multiopt",
  "type_arguments_or_diamond.opt", "type_arguments_or_diamond",
  "field_access", "array_access", "method_invocation", "argument_list",
  "com_expression.multiopt", "method_reference",
  "array_creation_expression", "dim_exprs", "dim_expr.multiopt",
  "dim_expr", "expression", "lambda_expression", "lambda_parameters",
  "lambda_parameter_list.opt", "lambda_parameter_list",
  "com_IDENTIFIER.multiopt", "com_lambda_parameter.multiopt",
  "lambda_parameter", "lambda_parameter_type", "lambda_body",
  "assignment_expression", "assignment", "left_hand_side",
  "assignment_operator", "conditional_expression",
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

#define YYPACT_NINF (-906)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-615)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     472,    91,  -906,  -906,  -906,  -906,  -906,   156,    37,  -906,
     179,   169,   192,  -906,  -906,  -906,  -906,  -906,    52,  -906,
    -906,  -906,  -906,  -906,  -906,   149,  -906,  2985,    93,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,   190,
     202,  -906,   169,   232,   254,  -906,   209,  -906,    89,  -906,
     300,   300,  -906,   300,  -906,  -906,  -906,   300,  -906,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,  1526,   315,    45,
     341,  -906,   322,   419,   300,  -906,   441,   424,   441,   441,
     275,  -906,  2199,  2266,  2199,  2199,  2199,  2199,   452,  -906,
    -906,  -906,  -906,  -906,  -906,   180,  -906,   198,   509,  -906,
     460,  1594,  2199,  -906,  -906,   452,  -906,  -906,   525,   303,
     539,  -906,   496,   549,   532,   240,    49,   572,   569,  -906,
     583,  -906,  -906,   587,  -906,  1578,   314,   559,  -906,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,    62,   617,   518,
     586,   627,    61,   319,  -906,   506,   415,   475,  -906,  -906,
    -906,  -906,   439,  -906,  -906,  -906,  -906,  -906,  -906,   637,
    -906,   337,   612,  -906,   540,   606,   589,  -906,   649,   545,
    -906,   592,   647,  1594,   211,  -906,   211,  1796,   648,   525,
     304,   580,   982,   651,  -906,   642,  -906,  -906,  2082,  -906,
    -906,  -906,  -906,  -906,   621,   271,  -906,   649,  -906,   646,
     200,  -906,  -906,  1578,    87,   640,  2266,   616,  -906,   657,
    -906,  -906,  -906,   573,   310,   640,  -906,  -906,   640,  -906,
     607,   684,    88,   339,    25,   640,  2266,  1863,   689,  -906,
     675,  -906,  -906,   461,  -906,   103,   640,  2266,  2266,  2199,
    2199,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  2199,
     649,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  2199,  -906,
    -906,  -906,   665,   666,  -906,    47,  -906,  -906,  -906,    67,
    -906,   668,  -906,   649,   424,  -906,   646,   678,  -906,    67,
     148,  -906,   649,   625,  -906,   690,   424,  -906,   256,  1132,
    -906,   696,  -906,  -906,  2199,   511,  -906,  1930,  -906,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,
    2266,  -906,   653,   667,  -906,  -906,   674,   693,  -906,  1311,
     603,   579,   496,  -906,   603,   496,   166,   703,   640,  -906,
     715,   716,   707,  -906,   702,  -906,   608,   676,   672,   722,
      67,   654,  -906,  -906,    67,   383,  -906,   730,   677,   640,
     734,  -906,   735,   694,   729,  -906,  -906,  -906,   740,  -906,
    -906,   741,  -906,   743,   701,   720,   617,   518,   586,   627,
      61,   319,   319,   506,   506,   506,   506,  -906,  1199,  -906,
    -906,  -906,   415,   415,   415,   475,   475,  -906,  -906,  -906,
    -906,  -906,   345,    58,   731,   686,  -906,  -906,   725,   671,
     738,   657,  -906,  -906,   172,  -906,   169,   652,  -906,   746,
    -906,  -906,  1646,  -906,   661,   749,  -906,  -906,  -906,  -906,
     640,  -906,   736,   759,   739,  -906,   352,  -906,  -906,   739,
    -906,  -906,  -906,   772,  -906,   760,  -906,   649,  2297,  -906,
    2435,  -906,  -906,  -906,  -906,  -906,  -906,  -906,   649,   761,
     248,  1662,  -906,  1997,  -906,  -906,   496,  -906,  -906,  -906,
    1863,   769,  -906,   680,  1594,  -906,  -906,  -906,  -906,   640,
    -906,   640,   203,   640,   773,  -906,   774,  -906,  -906,  -906,
     768,   754,  -906,   780,  -906,  -906,  2266,  -906,  -906,   772,
     649,   649,   169,  -906,   169,   217,  -906,  -906,  -906,  2745,
    -906,  -906,  -906,  -906,  -906,   606,   649,  -906,  -906,   169,
     682,  -906,   649,   764,   778,   753,  -906,  -906,  -906,  -906,
    -906,  -906,   781,   796,  -906,  -906,  -906,  -906,   798,  -906,
     684,   171,  -906,  -906,  -906,  -906,   496,  -906,  -906,   678,
    -906,  -906,   317,  2266,  -906,  2266,   799,   799,  2567,   791,
     795,  2065,   801,   803,  2266,    29,   804,  2266,  3013,  -906,
     695,  -906,  -906,  -906,  -906,  -906,  -906,   787,  -906,  -906,
    -906,  -906,  -906,   789,  -906,  -906,  -906,  -906,  -906,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,
    -906,   483,   516,  -906,  -906,  -906,   439,   562,   568,  -906,
     649,   649,   649,  -906,  -906,  -906,  -906,   657,  -906,  -906,
     777,   581,  -906,   495,   807,  1863,   387,  -906,  -906,   739,
    -906,  -906,  -906,   823,   824,  1863,  1863,  2266,  1863,  -906,
    -906,  -906,  -906,   793,    24,    24,   721,  1409,   802,  -906,
    -906,   828,  -906,   646,  -906,    67,  -906,  -906,  -906,   678,
    -906,   718,  -906,  -906,   834,   836,    59,  -906,  -906,   233,
     243,  -906,    67,   854,    67,  -906,  -906,  2567,   429,  -906,
     830,   832,   750,  2813,  2266,   835,  -906,  2266,  2266,   837,
    2967,   809,   755,  2266,   839,  -906,  2366,  -906,  -906,  -906,
    -906,  -906,   851,   758,  -906,  2266,  -906,  -906,  -906,  -906,
     682,   861,  2199,  -906,   387,  -906,   855,   600,   867,  -906,
     868,   869,  -906,   870,   866,  2132,  -906,   684,   885,    20,
      78,   169,  -906,   363,  -906,   228,   859,   882,   836,   268,
     299,  -906,  -906,  1863,   169,  -906,  -906,  2686,  -906,  -906,
    -906,  -906,  -906,  -906,   889,   755,  -906,  2686,  -906,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,
     640,  -906,   640,  -906,  2266,  -906,  -906,  -906,   881,   872,
    -906,   864,  -906,  -906,   883,  -906,   890,   891,  -906,    49,
    -906,   865,  -906,  -906,   314,   237,   894,   842,   843,  -906,
     809,   898,  -906,  -906,  2132,  -906,   185,  -906,  -906,  -906,
    -906,  -906,    53,  -906,   884,   239,  1729,   871,  1863,  -906,
    -906,  -906,   772,  -906,   892,  -906,   885,  -906,  -906,   911,
    -906,   902,  -906,  -906,  2686,  -906,   909,  -906,  -906,  -906,
     772,    38,   920,  -906,  -906,    15,   300,   922,   772,    38,
     827,   816,  -906,  -906,   901,  2266,  2266,   916,  2065,  2630,
     680,   755,  -906,   923,   907,  -906,   755,  -906,   809,   842,
    -906,  2567,  -906,  -906,   919,  -906,   913,  -906,  -906,  -906,
    -906,  -906,   914,  -906,   926,  -906,   924,   892,   413,  -906,
     496,   899,   905,  -906,  -906,  -906,   934,   827,  -906,   938,
     932,  -906,   649,   816,  -906,  2933,  -906,  -906,   941,   952,
    2891,   940,   349,   956,   960,   962,  -906,   918,   925,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  2967,   181,
     963,  -906,  -906,  -906,  -906,  -906,  2199,  -906,  2504,  -906,
    -906,   885,   924,  -906,   927,   682,  -906,   920,  -906,  -906,
    -906,  -906,   725,  -906,  -906,  -906,  -906,   410,   389,  2435,
    -906,   519,   945,  2567,  -906,  2837,  2630,  2813,  2266,  2266,
    2567,  -906,   640,   958,   961,   772,   755,  -906,  -906,   892,
    1594,   954,  -906,  -906,   827,   975,   970,  1646,   975,   972,
      25,   980,   983,   879,   103,  -906,  -906,   988,  -906,  -906,
    -906,   977,   973,   994,   995,  -906,   900,  -906,  -906,  -906,
    -906,  -906,  1005,  -906,  -906,  1025,  -906,  -906,  1016,  1008,
     649,    42,  1863,  1863,  -906,    54,  2567,  2266,  2065,  2630,
    2630,   649,   496,  1006,   772,  1007,   935,  -906,  -906,  1017,
    1020,  1022,  1024,  -906,  1026,  1010,   979,  -906,   725,  -906,
    -906,  -906,  -906,  -906,  1863,  1012,  1013,  1863,  2630,  2837,
    2630,  -906,  1031,  -906,  -906,  1032,  -906,  1033,  -906,  1018,
    1019,  2630,  -906,  -906,  -906
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      88,     0,     2,    83,    84,    94,    87,     0,   331,     1,
       4,     0,     0,    90,    92,   309,   310,   311,     0,    93,
      95,    96,    97,    98,    86,   111,   108,     0,     4,   103,
     106,   127,   128,   129,   107,   277,   278,    19,    74,   328,
       0,    18,     0,     0,     0,   110,     0,   330,     0,     9,
       0,     0,    11,     0,     8,     7,     6,     0,    12,    10,
      13,    15,    14,    16,     3,     5,   104,   314,     0,     0,
       0,    99,     0,     0,     0,    19,   132,   136,   132,   132,
      76,   471,   331,   331,   331,   331,   331,   331,   487,    25,
      29,    31,    30,    27,    28,   331,    26,     0,     0,   473,
       0,   324,   331,    78,   331,   487,    23,    24,     0,    32,
      35,    36,    33,    34,     0,     0,   612,     0,     0,   321,
       0,   313,   317,     0,   320,     0,   611,   469,   472,   476,
     488,   477,   478,   479,   480,   470,   319,   564,   567,   569,
     571,   573,   575,   577,   585,   580,   588,   592,   595,   599,
     600,   603,   606,   613,   614,   609,   610,    19,    75,     0,
      89,     0,     0,    18,     0,    51,   134,   131,   331,     0,
     135,   281,     0,     0,    76,   608,    76,   212,   331,   621,
     612,   477,   478,     0,   527,     0,   528,   547,     0,   546,
     601,   604,   602,   605,     0,     0,    72,   331,   331,   331,
      35,   184,   331,     0,     0,   185,   331,     0,   327,   243,
     323,   607,    42,     0,     0,   185,   331,    43,   185,    44,
       0,   331,   185,     0,   185,   185,   331,   239,     0,   312,
     315,   329,    22,    41,    21,     0,   185,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     212,   331,   331,   331,   331,   331,   331,   331,   331,   615,
     616,    17,     0,     0,   100,     0,   299,   296,   142,     0,
      49,     0,    52,   331,   136,   133,     0,   147,   144,     0,
     247,   240,   331,   283,   280,   268,   136,   318,    76,     0,
     541,     0,   532,   539,   331,     0,   475,   331,   555,   561,
     553,   556,   557,   554,   558,   552,   559,   560,   562,   563,
     331,   485,     0,     0,    63,    34,     0,    62,    64,     0,
       0,     0,   169,   525,     0,   169,     0,     0,   185,   499,
       0,     0,     0,   484,   325,   242,     0,     0,     0,     0,
       0,     0,   518,    73,     0,     0,   474,     0,     0,   185,
       0,   489,     0,     0,     0,   238,   511,    77,     0,    37,
     498,     0,   490,     0,     0,     0,   568,   570,   572,   574,
     576,   579,   578,   581,   583,   582,   584,   586,     0,   468,
     587,   467,   589,   590,   591,   593,   594,   598,   596,   597,
     101,   102,   114,     4,   140,    54,    50,   139,   143,   138,
     145,   243,   246,   250,     0,   284,     0,     0,   282,     0,
     260,   264,     0,   266,     0,   535,    19,   175,   215,   543,
     185,   174,     0,   331,   172,   173,   176,   179,   180,   177,
     178,   211,   214,     0,   530,   534,   617,   331,   331,   620,
       4,   545,   544,   529,   548,   483,   486,    58,   331,    59,
      67,   334,   521,   331,   168,   519,   523,   522,   520,   494,
     239,     0,   515,     0,     0,   322,    47,   482,   514,   185,
     517,   185,     0,   185,     0,   481,     0,   512,   501,   503,
     509,     0,   316,     0,   513,   502,   331,   350,   349,     0,
       0,     0,     0,     4,     0,     0,   112,   304,   297,     0,
     302,   303,   301,   298,   300,    51,   331,    48,    53,     0,
       0,   137,   331,   245,   248,     0,   252,   256,   121,   288,
     279,   259,   262,   331,   267,   270,   273,   258,     0,   181,
     331,     0,   188,   331,   189,   190,   169,   540,   212,    57,
     619,   618,    76,   331,   375,   331,   434,   434,   331,     0,
       0,   331,     0,     0,   331,     0,     0,   331,     0,   345,
       0,   346,   362,   232,   341,   342,   343,     0,   344,   351,
     363,   352,   364,     0,   353,   354,   365,   366,   355,   367,
     356,   412,   413,   368,   374,   369,   370,   372,   371,   373,
     442,   476,   479,   379,   380,   381,     0,   382,   383,    60,
     331,   331,   331,    65,    66,   337,   171,   243,   333,   170,
       0,     0,   524,   496,     0,   239,   397,   622,   326,    45,
      39,    38,   500,     0,     0,   239,   239,   331,   239,   566,
     565,   348,   163,   166,   124,   124,     0,     0,     0,   109,
     113,     0,   141,   621,    55,     0,   121,   151,   130,   146,
     151,     0,   244,   253,     0,   285,     4,   268,   265,     0,
       4,   536,     0,     0,     0,   167,   538,   331,     0,   433,
       0,     0,     0,   212,   331,     0,   419,   331,   331,     0,
     212,   444,     0,   331,     0,   338,     4,   347,   378,    61,
      68,    69,   335,     0,   526,   331,   331,   497,   492,   495,
     255,     0,   331,   405,   399,   395,     0,     0,     0,   516,
       0,     0,   510,     0,   161,   331,   164,     0,     0,     0,
       0,     0,    70,     0,   118,   169,     0,    56,   148,     4,
       4,   241,   249,   239,     0,   293,   286,     0,   291,   292,
     287,   289,   290,   263,     0,     0,   271,     0,   158,   274,
     152,   156,   157,   153,   154,   155,   272,   275,   159,   224,
     185,   213,   185,   376,   331,   389,   432,   436,     0,   425,
     429,     0,   417,   424,     0,   437,     0,     0,   438,   465,
     463,   459,   462,   464,     0,   477,     0,     0,   440,   447,
     444,     0,   435,   340,   331,   332,     0,   254,   491,   507,
     407,   408,     0,   396,     0,     0,   331,     0,   239,   504,
     505,   506,     0,   165,   126,   116,     0,   117,   121,     0,
     115,     0,   294,   149,     0,   150,     0,   120,   197,   331,
       0,     0,     0,   269,   225,   185,     0,   331,     0,     0,
     195,     0,   182,   183,     0,   331,   331,   427,   331,   331,
       0,     0,   458,     0,   460,   212,     0,   441,   445,   456,
     443,   331,   336,   493,   404,   393,     0,   399,   392,   394,
     401,   402,     0,    46,     0,   162,   122,   126,     0,    71,
     169,     0,     0,   223,   295,   222,     0,   195,   228,     0,
       0,   191,   331,     0,   194,   231,   276,   390,     0,     0,
     331,     0,    76,     0,     0,     0,   386,     0,   351,   358,
     359,   360,   361,   414,   415,   391,   439,   457,   212,     0,
       0,   453,   446,   455,   454,   409,   331,   398,     4,   400,
     508,     0,   123,   119,   307,   255,   196,     0,   200,   192,
     200,   160,   220,   221,   216,   219,   226,     0,     0,     4,
     230,     0,     0,   331,   428,   331,   331,   212,   331,   331,
     331,   461,   185,     0,   452,     0,     0,   406,   403,   125,
       0,     0,   306,   251,   195,   212,     0,     0,   212,   217,
     185,     0,     0,     0,   185,   411,   430,     0,   421,   426,
     377,   425,     0,     0,     0,   387,   450,   449,   448,   308,
     305,   193,     0,   201,   208,     0,   210,   199,   205,     0,
     331,     0,   239,   239,   229,     0,   331,   331,   331,   331,
     331,   331,   169,   206,   331,     0,     0,   227,   218,     0,
       0,     0,     0,   416,     0,     0,     0,   410,   451,   198,
     212,   209,   204,   203,   239,     0,     0,   239,   331,   331,
     331,   207,     0,   235,   234,     0,   431,     0,   388,     0,
       0,   331,   236,   237,   423
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -906,  -906,    44,  -906,   874,   -48,  -906,   -31,  -118,  -906,
    -906,   -20,   -68,   -70,  -153,  -466,  -148,    21,  -906,   542,
    -906,   782,  -906,  -906,  -906,   437,  -906,  -906,  -413,  -906,
    -906,  -906,  -699,  -247,    18,   222,  -906,  1035,  -906,  -906,
    -906,  -906,  -906,  -906,  -906,  -906,  1049,  -906,  -906,  -906,
    -906,  -906,  -906,  1036,  -906,  -906,  -906,   566,  -614,   438,
     195,     6,  -906,   527,  -906,   122,  -906,  -661,  -906,  -906,
    -906,  -906,   797,  -906,  -906,   565,   427,   420,  -906,  -906,
    -472,  -906,   272,  -906,  -423,  -294,  -656,  -250,  -906,  -906,
     164,   168,   -83,  -906,  -906,  -906,  -906,   348,  -813,   207,
     153,   152,   118,  -906,  -906,  -906,  -906,    57,  -164,  -163,
    -906,  -906,  -906,  -906,    90,   259,  -906,  -906,  -906,  -906,
     267,   212,  -906,   155,  -906,   -92,  -906,  -906,  -368,  -906,
    -906,  -906,  -906,   453,  -906,   174,  -906,  -906,  -906,  -906,
    -906,  -906,  -906,   454,  -906,  -906,  -906,  -906,  -906,  -906,
    -906,    34,  -410,  -906,  -906,  -906,  -906,  -906,  -906,  -906,
     456,  -906,  -906,  -906,  -906,  -906,  -906,  -906,  -906,    -6,
    -906,  -906,  -906,  -906,   756,   -93,  -906,  -906,  -906,  -906,
    -906,  -906,    -8,   270,  -906,  -906,  -906,   -61,   187,  -906,
     432,  -906,  -906,  -192,  -906,     7,  -905,  -802,  -906,  -906,
    -906,  -906,  -667,  -906,  -906,  -906,  -906,  -906,   269,  -906,
    -906,   253,   323,  -906,  -686,  -906,   197,  -906,  -906,  -906,
    -906,  -906,  -906,   167,  -811,    83,  -906,  -906,  -906,  -902,
    -906,  -906,  -906,  -906,   590,  -906,  -906,  -906,   321,  -906,
    -906,   343,   344,  -906,   278,  -906,  -906,  -906,   279,  -906,
    -906,  -906,  -906,  -906,  -906,   221,  -906,  -906,  -906,  -657,
    -906,  -906,   265,   110,  -213,  -906,  -906,  -906,  -906,   318,
     596,   213,  -906,  -906,  -906,  -906,   943,  -906,   687,   -40,
    -373,  -906,  -906,  -906,  -906,  -906,   609,  -906,  -906,  -906,
     261,  -906,  -906,   -63,  -906,   906,   910,   908,   904,   912,
     402,  -906,   260,   357,   394,    -3,   385,   421,   713,   435,
     458,   508,  -906,   510,  -906
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   558,    64,    69,    38,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   454,   619,   268,
     269,   270,   507,   508,   439,   201,   316,   449,   317,   318,
     603,   604,   723,   114,   115,   180,   117,    40,   118,     2,
       3,     4,     5,     6,     7,    13,     8,    19,    20,    21,
      22,    23,    28,    29,    24,    46,   495,   496,   655,   719,
     876,   559,    31,   836,   274,   169,   510,   167,   271,   394,
     275,   170,   278,   400,   511,   797,   729,   825,   750,   751,
     726,   714,   632,   716,   633,   665,   605,   838,   424,   425,
     426,   427,   529,   428,   429,   430,   752,   839,   893,   832,
     887,   975,  1002,   976,  1026,  1003,  1023,  1004,   378,  1006,
     431,   894,   944,   979,   945,   884,   753,   754,   755,   840,
     841,   896,   949,   560,   950,   354,    32,   281,   336,   651,
     401,   402,   514,   403,   404,   798,   516,   652,    33,   286,
     409,   410,   522,   411,   412,   413,   524,   527,   660,   756,
     757,   758,    35,   283,   407,   284,   408,   520,   656,   740,
     502,   742,    36,   267,   393,   503,   504,   971,   972,    47,
      15,   120,   121,   230,   122,   123,   124,   209,   210,   334,
      16,    17,   125,   606,   607,   608,   692,   562,   563,   686,
     564,   565,   566,   567,   489,   568,   907,   569,   570,   571,
     909,   572,   573,   574,   575,   910,   576,   577,   617,   805,
     704,   802,   705,   803,   706,   864,   800,   578,   911,   579,
     580,   912,   581,   771,   675,   987,   913,   772,   988,   773,
     847,   582,   914,   583,   670,   584,   585,   586,   587,   588,
     589,   787,   788,   858,   789,   920,   965,   996,   857,   590,
     924,   682,   853,   781,   854,   782,   783,   380,   381,   126,
     127,   128,   195,   129,   130,   327,   613,   698,   699,   181,
     182,   133,   355,   480,   134,   135,   322,   456,   323,   356,
     184,   185,   291,   292,   415,   435,   293,   433,   443,   186,
     187,   188,   310,   189,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   295,   156
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    14,    76,    77,   136,    78,   770,   234,   208,    79,
     537,   351,   202,   289,   290,   277,    30,   631,   804,   814,
     158,    65,   362,   784,   158,   200,   164,   199,   455,    39,
     561,   458,   728,   513,    30,   599,    43,   901,   136,   423,
     644,   680,   422,   183,    34,   476,   197,   908,   717,   315,
     815,   990,   178,   989,    27,    37,   197,   483,   379,   813,
      70,   119,    34,   179,   198,   540,    39,   244,   883,   159,
      75,   159,    27,   224,   939,   160,   829,   233,   225,   175,
     287,   190,   191,   192,   193,   234,   837,   203,   497,   735,
     329,     9,    37,   -85,   226,   119,   213,   245,   200,   211,
     276,   213,   315,   349,   213,   238,   360,   702,   817,    18,
     136,    11,   703,   629,  1036,  1037,   866,   877,   197,   197,
     816,   330,   331,    26,   718,   212,  -228,   200,   488,   277,
     217,   422,   339,   219,   197,   341,  1029,   183,   862,   347,
     440,   350,   352,  1056,    42,  1058,   178,   989,  1032,   440,
     359,  -253,   361,   363,   908,   328,  1064,   179,   392,   272,
     279,  1001,   523,   837,    74,   422,   332,   119,   865,   459,
     213,   421,    37,   498,   736,   515,   239,   314,   816,  -105,
     200,   349,   345,   196,   416,   346,   353,   689,   863,   319,
     321,   321,  -253,    11,   326,    41,   663,   364,   365,   212,
      11,   234,    67,   398,   878,   276,   622,  1035,   340,    26,
      11,   197,   200,   344,   276,    11,    11,   908,   908,   320,
     324,   395,   204,   -20,  -185,    11,    68,   205,    45,    11,
     377,   328,   969,   954,   197,   -19,   441,    12,   951,   693,
     821,   420,   866,   634,   635,   359,   908,   418,   908,   641,
    -466,    18,   422,   387,   388,   389,   -19,   442,   744,   908,
     421,   784,    71,   272,   222,   279,   202,  -466,   -20,   868,
     444,   233,  -331,  -331,   279,  -537,   561,    11,    72,  -531,
     -19,   490,   -40,   432,   539,   194,    73,   -20,   770,   116,
     770,   436,   469,   702,   421,   312,   471,   491,   703,   -19,
     315,   -19,   492,    75,   116,   493,   116,   116,   116,   116,
     173,   -40,  -549,   601,   213,  -549,   313,   213,   157,  -549,
     -19,   494,  -549,   116,   116,   157,  -549,   216,   224,   -20,
     420,  -549,   639,   225,   338,   745,   162,  -549,   235,  -549,
     262,   -19,   602,   236,  -549,   667,  -549,  -331,  -331,   226,
     246,   263,  -549,   247,   440,   313,   248,   249,   746,   649,
     745,   -20,   -19,   348,   420,   161,   890,   200,   614,   276,
     214,   618,   432,   -19,   289,   290,   533,   956,   200,   440,
     223,   421,   770,   823,   313,   131,   620,   819,   621,   623,
     624,   745,   250,   820,   -19,   116,   399,  -331,   517,   500,
     131,   136,   131,   131,   131,   131,   525,   472,   414,   490,
     440,   609,   473,   610,  -257,   531,   213,  -549,   213,   131,
     131,   213,   163,   630,   518,   491,   943,   501,   314,   279,
     492,   254,   734,   493,   980,   255,   200,   499,   643,   225,
     319,   702,   200,   933,   276,   532,   703,   534,   611,   494,
     535,   420,   315,   315,   315,   226,   259,   764,   119,   765,
     260,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   165,   116,   116,   116,   116,   116,   116,   116,
     116,   769,   256,   981,   207,  -185,   982,   830,   780,   257,
     422,   131,   197,    65,   681,   168,  -385,   194,   645,   272,
     422,   258,  -385,   183,   279,   668,   373,   374,   375,   376,
     636,   676,   638,  -385,   679,   659,   116,   684,   561,   696,
     437,   206,   662,   701,   438,   664,   197,   646,   213,  -384,
     200,   200,   200,   710,   711,  -384,   713,   637,   251,   561,
    -331,  -331,   997,   984,   943,   252,  -384,   253,   236,   -94,
     591,   -94,    65,   -91,   215,   672,   221,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   218,   131,
     131,   131,   131,   131,   131,   131,   131,   422,   220,  -613,
     314,   690,   691,  -613,   227,  -614,   934,   712,  -550,  -614,
     452,  -550,   319,   228,   457,  -550,   229,   233,  -550,   759,
     231,  1041,  -550,   166,   237,   171,   172,  -550,   382,   383,
     384,   707,   131,  -550,   760,  -550,   762,    11,   337,   421,
    -550,   790,  -550,    11,   453,    11,   695,   240,  -550,   421,
     241,    65,   936,   242,   774,   422,   243,   776,   777,   801,
     261,   826,   264,   791,    11,   807,   371,   372,   385,   386,
      11,   266,   196,   592,   273,   610,   280,   282,   591,   285,
     116,   294,   738,   132,   296,   297,   748,   311,   759,   759,
     216,   197,   422,   333,   763,   609,   335,   842,   132,   843,
     132,   132,   132,   132,   834,   342,   116,   343,   796,   420,
     739,   919,   357,  -550,   358,   390,   391,   132,   132,   835,
     737,   593,   -36,  -261,   747,   397,   421,   406,   116,   434,
     445,   447,   448,   446,   451,   460,   874,   213,   461,   462,
     463,   464,   466,   465,   844,   468,   780,  1008,  1039,   467,
     422,    65,   470,   474,   475,   748,   748,   476,   477,   818,
     478,    65,   479,   481,   483,   870,   484,   485,   486,   -35,
     505,   506,   827,   509,   609,  1024,   131,   512,   422,   521,
     530,   592,  -542,   519,   421,   991,   872,   351,   528,   132,
     885,   362,   526,   824,   824,   536,   420,   591,   885,   538,
     600,   615,   131,   591,  -331,   625,   626,   627,   888,   173,
     916,   616,   628,   647,   650,   921,   591,   653,   654,   658,
     657,   661,   669,   673,   131,   898,   899,   674,   676,   593,
     685,  1005,   948,   677,  1005,   678,   683,   687,    65,   688,
     700,   882,   942,   694,   276,   594,   708,   709,   715,   882,
     721,   725,   724,   731,   420,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   733,   132,   132,   132,
     132,   132,   132,   132,   132,   734,   906,   761,   768,   421,
     766,   595,   767,   801,   786,   775,   440,   778,   925,   792,
     794,   962,   213,   795,   799,   596,  1005,   999,   806,   808,
     592,   809,   810,   811,   645,   812,   592,   421,   722,   822,
     132,   437,   833,   845,   848,   852,   849,  1011,   597,   592,
     846,  1015,   779,   850,   851,   998,   855,   136,   416,   856,
    -443,   861,   867,   432,   879,   880,   819,   873,   993,   994,
    1030,  1031,   881,   886,   116,  -131,   892,   895,   593,   420,
     977,   897,   977,   594,   593,   900,   917,   918,   926,   930,
     942,   927,   276,   931,   929,   935,   938,   593,   598,    11,
     940,  1038,  1052,   276,   952,  1055,   417,   420,    89,   591,
     986,    90,   941,   763,   119,   953,    91,   995,   957,   595,
     955,   591,   958,    92,   959,   985,   966,  1034,   676,    93,
     960,    94,   533,   596,  1000,  -179,   970,  -357,  -202,  1007,
    -551,  1010,  1012,  -551,  1014,  1013,    96,  -551,   785,   432,
    -551,  1016,   645,  1018,  -551,  1017,   597,  1019,  1020,  -551,
     591,   828,  1021,   279,   213,  -551,   531,  -551,  1022,  1025,
     131,  1027,  -551,  1033,  -551,  1040,   906,   925,   416,  1044,
    -551,  1042,  1043,  1045,   132,  1046,  1047,   265,   591,  1048,
    1049,  1050,  1053,  1054,  1059,  1060,  1061,   642,  1062,  1063,
     697,   396,   594,    44,    10,   986,   598,   995,   594,   591,
     132,   640,   592,   591,    66,   591,   591,   591,  1033,    11,
     591,   594,   932,   720,   592,   648,   417,   730,    89,   405,
     749,    90,   132,   963,   875,   831,    91,   964,   595,   937,
     974,   418,   978,    92,   595,  -551,  1009,  1051,   891,    93,
    1028,    94,   596,   889,   983,   946,   732,   595,   596,   973,
     593,   743,   741,   592,   482,   968,    96,   947,   793,   915,
     928,   596,   593,   967,   992,   597,   591,   871,   869,   591,
     591,   597,  1057,   859,   860,   416,   922,   671,   923,   961,
     779,   592,   325,   612,   597,   366,   369,   666,   116,   368,
     367,   541,     0,   727,     0,   370,     0,     0,   591,   591,
     591,   593,   592,     0,     0,     0,   592,     0,   592,   592,
     592,   591,     0,   592,     0,   598,    11,     0,     0,     0,
       0,   598,     0,   417,     0,    89,     0,     0,    90,   593,
       0,     0,   116,    91,   598,     0,     0,     0,   418,     0,
      92,     0,   416,     0,     0,     0,    93,     0,    94,     0,
     593,     0,     0,   131,   593,     0,   593,   593,   593,     0,
       0,   593,     0,    96,     0,     0,     0,     0,     0,   592,
       0,     0,   592,   592,   594,     0,   785,   419,     0,     0,
       0,     0,     0,    11,   131,     0,   594,     0,     0,     0,
     417,     0,    89,     0,     0,    90,     0,     0,     0,     0,
      91,   592,   592,   592,     0,   418,     0,    92,     0,     0,
     595,     0,     0,    93,   592,    94,   132,   593,     0,     0,
     593,   593,   595,     0,   596,   594,     0,     0,   131,     0,
      96,     0,     0,     0,     0,     0,   596,     0,   132,     0,
       0,     0,     0,     0,   487,     0,     0,   597,     0,   593,
     593,   593,     0,   594,    75,     0,     0,     0,     0,   597,
       0,   595,   593,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   594,   596,     0,     0,   594,     0,
     594,   594,   594,     0,     0,   594,     0,     0,     0,   595,
       0,     0,     0,     0,   450,    11,     0,   598,   597,     0,
       0,     0,   232,   596,    89,     0,     0,    90,     0,   598,
     595,     0,    91,     0,   595,     0,   595,   595,   595,    92,
       0,   595,     0,     0,   596,    93,   597,    94,   596,     0,
     596,   596,   596,     0,     0,   596,     0,     0,     0,     0,
       0,   594,    96,     0,   594,   594,     0,   597,   598,     0,
       0,   597,   722,   597,   597,   597,     0,     0,   597,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   594,   594,   594,   598,   595,     0,     0,
     595,   595,     0,     0,     0,     0,   594,     0,     0,     0,
       0,   596,     0,    11,   596,   596,     0,   598,    49,     0,
       0,   598,     0,   598,   598,   598,     0,     0,   598,   595,
     595,   595,     0,     0,   597,    52,     0,   597,   597,     0,
       0,     0,   595,   596,   596,   596,     0,     0,     0,     0,
       0,   132,    54,    55,     0,    56,   596,     0,     0,    58,
       0,    59,    60,     0,     0,     0,   597,   597,   597,     0,
      61,    62,     0,     0,   132,     0,    63,     0,     0,   597,
       0,     0,   132,     0,   598,     0,     0,   598,   598,    80,
      81,    82,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,    84,    85,     0,     0,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,   598,   598,   598,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,   598,
      11,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,    75,    90,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,    92,     0,     0,   174,    81,    82,
      93,     0,    94,     0,    95,     0,    83,     0,     0,     0,
      84,    85,     0,     0,    86,    87,     0,    96,     0,     0,
      97,    98,    11,    99,     0,     0,     0,     0,     0,   232,
       0,    89,   100,     0,    90,     0,     0,   101,    11,    91,
       0,     0,   102,     0,     0,    88,    92,    89,     0,   416,
      90,     0,    93,     0,    94,    91,     0,     0,     0,     0,
       0,     0,    92,     0,     0,   176,    81,    82,    93,    96,
      94,     0,    95,     0,   177,     0,     0,     0,    84,    85,
       0,     0,    86,    87,     0,    96,     0,     0,    97,    98,
      11,    99,     0,     0,     0,     0,     0,   417,     0,    89,
     100,     0,    90,     0,     0,   101,  -331,    91,     0,     0,
     102,     0,     0,    88,    92,    89,     0,     0,    90,     0,
      93,     0,    94,    91,     0,     0,     0,     0,     0,     0,
      92,     0,   176,    81,    82,     0,    93,    96,    94,     0,
      95,   177,     0,     0,     0,    84,    85,     0,     0,    86,
      87,     0,     0,    96,     0,     0,    97,    98,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   451,     0,     0,     0,     0,   102,     0,
      88,     0,    89,     0,     0,    90,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,    92,     0,   288,
      81,    82,     0,    93,     0,    94,     0,    95,   177,  -533,
       0,     0,    84,    85,     0,     0,    86,    87,     0,     0,
      96,     0,     0,    97,    98,     0,    99,   554,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
     440,     0,     0,     0,     0,   102,     0,    88,     0,    89,
       0,     0,    90,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,    92,     0,   176,    81,    82,     0,
      93,     0,    94,     0,    95,   177,     0,     0,     0,    84,
      85,     0,     0,    86,    87,     0,     0,    96,     0,     0,
      97,    98,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,  -331,     0,     0,
       0,     0,   102,     0,    88,     0,    89,     0,     0,    90,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,    92,     0,   176,    81,    82,     0,    93,     0,    94,
       0,    95,   177,     0,     0,     0,    84,    85,     0,     0,
      86,    87,     0,     0,    96,     0,     0,    97,    98,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,    88,     0,    89,     0,     0,    90,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,    92,     0,
     176,    81,    82,     0,    93,     0,    94,     0,    95,   177,
       0,     0,     0,    84,    85,     0,     0,    86,    87,     0,
       0,    96,     0,     0,    97,    98,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,   440,     0,   466,     0,     0,   102,     0,    88,     0,
      89,     0,     0,    90,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,    92,     0,     0,   176,    81,
      82,    93,     0,    94,     0,    95,     0,   177,     0,     0,
       0,    84,    85,     0,     0,    86,    87,     0,    96,     0,
     298,    97,    98,   299,    99,  -420,     0,   300,     0,     0,
     301,     0,     0,   100,   302,     0,     0,     0,     0,   303,
       0,     0,     0,   102,     0,   304,    88,   305,    89,     0,
       0,    90,   306,     0,   307,     0,    91,     0,     0,     0,
     308,     0,     0,    92,     0,   176,    81,    82,     0,    93,
       0,    94,     0,    95,   177,     0,     0,     0,    84,    85,
       0,     0,    86,    87,     0,     0,    96,     0,     0,    97,
      98,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,    88,     0,    89,     0,     0,    90,     0,
       0,     0,     0,    91,     0,   309,     0,     0,     0,     0,
      92,     0,   174,    81,    82,     0,    93,     0,    94,     0,
      95,    83,     0,     0,     0,    84,    85,     0,     0,    86,
      87,     0,     0,    96,     0,     0,    97,    98,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   451,     0,     0,     0,     0,   102,     0,
      88,     0,    89,     0,     0,    90,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,    92,     0,   176,
      81,    82,     0,    93,     0,    94,     0,    95,   177,     0,
       0,     0,    84,    85,     0,     0,    86,    87,     0,     0,
      96,     0,     0,    97,    98,     0,    99,     0,     0,     0,
     176,    81,    82,     0,     0,   100,     0,     0,     0,   177,
       0,     0,     0,     0,     0,   102,     0,    88,     0,    89,
       0,     0,    90,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
      93,     0,    94,     0,    95,     0,     0,     0,    88,     0,
      89,     0,     0,    90,     0,     0,     0,    96,    91,     0,
      97,    98,     0,    99,     0,    92,     0,     0,     0,   542,
      81,    93,   100,    94,     0,    95,     0,     0,   543,     0,
       0,     0,   102,    85,     0,     0,     0,    87,    96,     0,
       0,    97,    98,     0,    99,     0,   544,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   545,    88,   546,    89,
    -339,     0,    90,     0,   547,  -339,   548,    91,     0,     0,
       0,     0,     0,     0,    92,   549,   550,     0,   542,    81,
      93,     0,    94,     0,    95,     0,     0,   543,     0,     0,
       0,     0,    85,     0,     0,   551,    87,    96,     0,     0,
      97,   552,   553,    99,   554,   544,     0,     0,     0,   555,
       0,  -212,   100,     0,   556,     0,   557,   440,     0,     0,
       0,  -339,     0,     0,     0,   545,    88,   546,    89,     0,
       0,    90,     0,   547,     0,   548,    91,     0,     0,     0,
       0,     0,     0,    92,   549,   550,     0,   542,    81,    93,
       0,    94,     0,    95,     0,     0,   543,     0,     0,     0,
       0,    85,     0,     0,   551,    87,    96,     0,     0,    97,
     552,   553,    99,   554,   544,     0,     0,     0,   555,     0,
    -212,   100,     0,   556,     0,   557,   440,     0,     0,     0,
    -233,     0,     0,     0,   545,    88,   546,    89,   702,     0,
      90,     0,   547,   703,   548,    91,     0,     0,     0,     0,
     542,    81,    92,   549,   550,     0,     0,     0,    93,   543,
      94,     0,    95,     0,    85,     0,     0,     0,    87,     0,
       0,     0,     0,   551,     0,    96,     0,   544,    97,   552,
     553,    99,   554,     0,     0,     0,     0,   555,     0,  -212,
     100,     0,   556,     0,   557,   440,     0,   545,    88,   546,
      89,     0,     0,    90,     0,   547,     0,   548,    91,     0,
       0,     0,     0,   902,    81,    92,   549,   550,     0,     0,
       0,    93,   543,    94,     0,    95,     0,    85,     0,     0,
       0,    87,     0,     0,     0,     0,   551,     0,    96,     0,
     544,    97,   552,   553,    99,   554,     0,     0,     0,     0,
     555,     0,     0,   100,     0,   556,     0,   557,   440,     0,
     545,    88,   546,    89,     0,     0,    90,     0,   547,   416,
     548,    91,     0,     0,     0,     0,     0,     0,    92,   903,
     904,     0,     0,     0,    93,     0,    94,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,   165,     0,   551,
       0,    96,     0,     0,    97,   552,   553,    99,   554,     0,
      48,     0,     0,   555,     0,    49,   100,   417,   905,    89,
     557,   440,    90,    50,     0,     0,     0,    91,   416,    51,
       0,     0,    52,     0,    92,     0,     0,     0,     0,     0,
      93,    53,    94,     0,     0,     0,     0,     0,     0,    54,
      55,     0,    56,    57,     0,     0,    58,    96,    59,    60,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    48,
       0,     0,   828,    63,    49,     0,   417,     0,    89,     0,
       0,    90,    50,     0,     0,     0,    91,     0,    51,     0,
       0,    52,     0,    92,     0,     0,   174,    81,     0,    93,
      53,    94,     0,     0,     0,   543,     0,     0,    54,    55,
      85,    56,    57,     0,    87,    58,    96,    59,    60,     0,
     174,    81,     0,  -418,     0,     0,    61,    62,     0,   543,
    -422,     0,    63,     0,    85,     0,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,    89,     0,     0,    90,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,    88,    94,
      89,    95,     0,    90,   174,    81,     0,     0,    91,     0,
       0,     0,     0,   543,    96,    92,     0,    97,    85,     0,
      99,    93,    87,    94,     0,    95,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    97,     0,     0,    99,     0,   174,    81,     0,     0,
       0,     0,    88,   100,    89,   543,     0,    90,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   197,    93,     0,    94,     0,    95,
     174,    81,     0,     0,     0,     0,     0,     0,     0,   543,
       0,     0,    96,     0,    88,    97,    89,     0,    99,    90,
       0,     0,     0,     0,    91,     0,     0,   100,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,     0,    94,
       0,    95,     0,     0,     0,     0,     0,     0,    88,     0,
      89,     0,     0,    90,    96,     0,     0,    97,    91,    48,
      99,     0,     0,     0,    49,    92,     0,     0,     0,   100,
       0,    93,    50,    94,     0,    95,     0,     0,    51,     0,
       0,    52,     0,     0,     0,     0,     0,    11,    96,     0,
      53,    97,    49,     0,    99,     0,     0,     0,    54,    55,
      50,    56,    57,   100,     0,    58,    51,    59,    60,    52,
       0,     0,     0,     0,     0,     0,    61,    62,    53,     0,
       0,     0,    63,     0,     0,     0,    54,    55,     0,    56,
      57,     0,     0,    58,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     0,
      63
};

static const yytype_int16 yycheck[] =
{
       8,     7,    50,    51,    67,    53,   673,   125,   101,    57,
     433,   224,    95,   177,   177,   168,    10,   489,   704,   718,
      68,    27,   235,   680,    72,    95,    74,    95,   322,    11,
     440,   325,   646,   401,    28,   448,    18,   848,   101,   289,
     506,    12,   289,    83,    10,     3,    31,   849,    24,   197,
      30,   956,    83,   955,    10,     3,    31,     3,   250,   715,
      42,    67,    28,    83,    95,   438,    48,     6,    30,    24,
       3,    24,    28,    24,   887,    30,   737,   125,    29,    82,
     173,    84,    85,    86,    87,   203,   747,    95,    30,    30,
       3,     0,     3,     0,    45,   101,   104,    36,   168,   102,
     168,   109,   250,    78,   112,    43,     3,    54,    30,    72,
     173,    44,    59,   486,  1019,  1020,   802,   816,    31,    31,
     100,   204,   205,    30,   100,   104,   111,   197,   378,   282,
     109,   378,   215,   112,    31,   218,    94,   177,   794,   222,
     111,   224,   225,  1048,    92,  1050,   177,  1049,    94,   111,
     233,     3,   235,   236,   956,   203,  1061,   177,   111,   165,
     168,   974,   412,   824,    75,   412,   206,   173,   115,     3,
     178,   289,     3,   115,   115,     3,   114,   197,   100,     0,
     250,    78,    94,     3,     3,    97,   226,   600,     3,   197,
     198,   199,    44,    44,   202,     3,    25,   237,   238,   178,
      44,   319,    12,   273,   818,   273,     3,  1018,   216,    30,
      44,    31,   282,   221,   282,    44,    44,  1019,  1020,   198,
     199,   269,    24,    12,    44,    44,    24,    29,    79,    44,
     250,   279,   931,   900,    31,    24,   297,    81,   895,   607,
      12,   289,   928,   490,   491,   328,  1048,    66,  1050,   499,
      13,    72,   499,   256,   257,   258,    45,   297,    25,  1061,
     378,   918,    30,   269,    24,   273,   349,    30,    12,    30,
     310,   319,    44,    45,   282,    19,   686,    44,    24,    23,
      24,    64,    82,   289,   437,    45,    77,    12,   955,    67,
     957,   294,   340,    54,   412,    24,   344,    80,    59,    24,
     448,    45,    85,     3,    82,    88,    84,    85,    86,    87,
      35,   111,     8,    65,   322,    11,    45,   325,     3,    15,
      45,   104,    18,   101,   102,     3,    22,    24,    24,    12,
     378,    27,   115,    29,    24,    92,    14,    33,    24,    35,
       3,    24,    94,    29,    40,    28,    42,    44,    45,    45,
      31,    14,    48,    34,   111,    45,    37,    38,   115,   512,
      92,    12,    45,    24,   412,    24,   838,   437,   460,   437,
     105,   464,   378,    24,   538,   538,    24,    28,   448,   111,
     115,   499,  1049,   115,    45,    67,   469,    24,   471,   472,
     473,    92,    73,    30,    45,   173,   274,    45,   404,   393,
      82,   464,    84,    85,    86,    87,   412,    24,   286,    64,
     111,   451,    29,   453,   115,   423,   424,   113,   426,   101,
     102,   429,     3,   486,   406,    80,   892,   393,   448,   437,
      85,    16,    19,    88,    24,    20,   506,   393,   506,    29,
     448,    54,   512,    30,   512,   424,    59,   426,   456,   104,
     429,   499,   600,   601,   602,    45,    17,    28,   464,    30,
      21,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    31,   251,   252,   253,   254,   255,   256,   257,
     258,   673,     7,    94,    24,    24,    97,   737,   680,    14,
     737,   173,    31,   499,   555,    71,    13,    45,   506,   505,
     747,    26,    19,   543,   512,   545,   246,   247,   248,   249,
     492,   551,   494,    30,   554,   523,   294,   557,   928,    24,
       9,    12,   530,   615,    13,   533,    31,   509,   536,    13,
     600,   601,   602,   625,   626,    19,   628,   493,    32,   949,
      44,    45,   965,    24,  1010,    39,    30,    41,    29,    77,
     440,    79,   558,    81,    29,   548,    24,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    29,   251,
     252,   253,   254,   255,   256,   257,   258,   824,    29,    17,
     600,   601,   602,    21,    12,    17,   880,   627,     8,    21,
     320,    11,   600,    24,   324,    15,    13,   645,    18,   660,
      13,  1024,    22,    76,    45,    78,    79,    27,   251,   252,
     253,   619,   294,    33,   662,    35,   664,    44,    45,   737,
      40,   682,    42,    44,    45,    44,    45,    10,    48,   747,
     112,   637,   882,    47,   674,   882,     9,   677,   678,   702,
       3,   733,    30,   683,    44,    45,   244,   245,   254,   255,
      44,   111,     3,   440,    65,   695,   111,    65,   548,    12,
     438,    13,   656,    67,    13,    23,   660,    46,   729,   730,
      24,    31,   919,    57,   667,   715,    19,   760,    82,   762,
      84,    85,    86,    87,   745,    78,   464,     3,   696,   737,
     656,   855,     3,   113,    19,    30,    30,   101,   102,   747,
     656,   440,    24,    13,   660,    37,   824,    82,   486,    13,
      57,    37,    19,    46,   111,    12,   808,   725,     3,     3,
      13,    19,    46,   115,   764,     3,   918,   977,  1022,    57,
     977,   737,    78,     3,    57,   729,   730,     3,     3,   721,
      46,   747,    13,     3,     3,   806,     3,    46,    28,    24,
      19,    65,   734,    82,   794,  1005,   438,    19,  1005,    13,
      24,   548,     3,   111,   882,   957,   806,   980,    19,   173,
     831,   984,   111,   729,   730,     3,   824,   667,   839,    19,
      19,    12,   464,   673,    45,    12,    12,    19,   836,    35,
     851,   111,    12,   111,    30,   856,   686,    19,    45,     3,
      19,     3,     3,    12,   486,   845,   846,    12,   848,   548,
     115,   975,   895,    12,   978,    12,    12,    30,   824,    30,
      13,   829,   892,    46,   892,   440,     3,     3,    35,   837,
     109,     3,    30,   115,   882,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    12,   251,   252,   253,
     254,   255,   256,   257,   258,    19,   849,     3,   108,   977,
      30,   440,    30,   926,    55,    30,   111,    30,   861,    30,
      19,   919,   880,   115,    13,   440,  1040,   970,    23,    12,
     667,    13,    13,    13,   892,    19,   673,  1005,     3,    30,
     294,     9,     3,    12,    30,    30,    13,   980,   440,   686,
      28,   984,   680,    13,    13,   966,    12,   970,     3,    67,
      67,    13,    28,   919,     3,    13,    24,    46,   958,   959,
    1012,  1013,    13,     3,   702,     3,    99,   111,   667,   977,
     938,    30,   940,   548,   673,    19,    13,    30,    19,    13,
    1010,    28,  1010,    19,    30,    46,    12,   686,   440,    44,
      12,  1021,  1044,  1021,    13,  1047,    51,  1005,    53,   849,
     953,    56,    30,   956,   970,    13,    61,   960,    12,   548,
      30,   861,    12,    68,    12,    30,    13,  1017,  1018,    74,
      62,    76,    24,   548,    30,    24,    59,    62,    13,    19,
       8,    19,    12,    11,   115,    12,    91,    15,   680,  1005,
      18,    13,  1010,    30,    22,    28,   548,    13,    13,    27,
     900,   106,   112,  1021,  1022,    33,  1024,    35,    13,     3,
     702,    13,    40,  1016,    42,    19,  1019,  1020,     3,    12,
      48,    24,    97,    13,   438,    13,    12,   163,   928,    13,
      30,    62,    30,    30,    13,    13,    13,   505,    30,    30,
     613,   269,   667,    18,     5,  1048,   548,  1050,   673,   949,
     464,   495,   849,   953,    28,   955,   956,   957,  1061,    44,
     960,   686,   877,   635,   861,   510,    51,   650,    53,   282,
     660,    56,   486,   919,   812,   737,    61,   919,   667,   882,
     937,    66,   940,    68,   673,   113,   978,  1040,   839,    74,
    1010,    76,   667,   836,   949,   893,   653,   686,   673,   935,
     849,   657,   656,   900,   358,   928,    91,   895,   686,   850,
     867,   686,   861,   926,   957,   667,  1016,   806,   805,  1019,
    1020,   673,  1049,   790,   790,     3,   858,   547,   859,   918,
     918,   928,   199,   456,   686,   239,   242,   538,   926,   241,
     240,   438,    -1,   643,    -1,   243,    -1,    -1,  1048,  1049,
    1050,   900,   949,    -1,    -1,    -1,   953,    -1,   955,   956,
     957,  1061,    -1,   960,    -1,   667,    44,    -1,    -1,    -1,
      -1,   673,    -1,    51,    -1,    53,    -1,    -1,    56,   928,
      -1,    -1,   970,    61,   686,    -1,    -1,    -1,    66,    -1,
      68,    -1,     3,    -1,    -1,    -1,    74,    -1,    76,    -1,
     949,    -1,    -1,   895,   953,    -1,   955,   956,   957,    -1,
      -1,   960,    -1,    91,    -1,    -1,    -1,    -1,    -1,  1016,
      -1,    -1,  1019,  1020,   849,    -1,   918,   105,    -1,    -1,
      -1,    -1,    -1,    44,   926,    -1,   861,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      61,  1048,  1049,  1050,    -1,    66,    -1,    68,    -1,    -1,
     849,    -1,    -1,    74,  1061,    76,   680,  1016,    -1,    -1,
    1019,  1020,   861,    -1,   849,   900,    -1,    -1,   970,    -1,
      91,    -1,    -1,    -1,    -1,    -1,   861,    -1,   702,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,   849,    -1,  1048,
    1049,  1050,    -1,   928,     3,    -1,    -1,    -1,    -1,   861,
      -1,   900,  1061,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   949,   900,    -1,    -1,   953,    -1,
     955,   956,   957,    -1,    -1,   960,    -1,    -1,    -1,   928,
      -1,    -1,    -1,    -1,    43,    44,    -1,   849,   900,    -1,
      -1,    -1,    51,   928,    53,    -1,    -1,    56,    -1,   861,
     949,    -1,    61,    -1,   953,    -1,   955,   956,   957,    68,
      -1,   960,    -1,    -1,   949,    74,   928,    76,   953,    -1,
     955,   956,   957,    -1,    -1,   960,    -1,    -1,    -1,    -1,
      -1,  1016,    91,    -1,  1019,  1020,    -1,   949,   900,    -1,
      -1,   953,     3,   955,   956,   957,    -1,    -1,   960,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1048,  1049,  1050,   928,  1016,    -1,    -1,
    1019,  1020,    -1,    -1,    -1,    -1,  1061,    -1,    -1,    -1,
      -1,  1016,    -1,    44,  1019,  1020,    -1,   949,    49,    -1,
      -1,   953,    -1,   955,   956,   957,    -1,    -1,   960,  1048,
    1049,  1050,    -1,    -1,  1016,    66,    -1,  1019,  1020,    -1,
      -1,    -1,  1061,  1048,  1049,  1050,    -1,    -1,    -1,    -1,
      -1,   895,    83,    84,    -1,    86,  1061,    -1,    -1,    90,
      -1,    92,    93,    -1,    -1,    -1,  1048,  1049,  1050,    -1,
     101,   102,    -1,    -1,   918,    -1,   107,    -1,    -1,  1061,
      -1,    -1,   926,    -1,  1016,    -1,    -1,  1019,  1020,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1048,  1049,  1050,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   970,    -1,    -1,  1061,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,     3,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,     3,     4,     5,
      74,    -1,    76,    -1,    78,    -1,    12,    -1,    -1,    -1,
      16,    17,    -1,    -1,    20,    21,    -1,    91,    -1,    -1,
      94,    95,    44,    97,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,   106,    -1,    56,    -1,    -1,   111,    44,    61,
      -1,    -1,   116,    -1,    -1,    51,    68,    53,    -1,     3,
      56,    -1,    74,    -1,    76,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,     3,     4,     5,    74,    91,
      76,    -1,    78,    -1,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    -1,    91,    -1,    -1,    94,    95,
      44,    97,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
     106,    -1,    56,    -1,    -1,   111,    44,    61,    -1,    -1,
     116,    -1,    -1,    51,    68,    53,    -1,    -1,    56,    -1,
      74,    -1,    76,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,     3,     4,     5,    -1,    74,    91,    76,    -1,
      78,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    91,    -1,    -1,    94,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,   116,    -1,
      51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,     3,
       4,     5,    -1,    74,    -1,    76,    -1,    78,    12,    13,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      91,    -1,    -1,    94,    95,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,   116,    -1,    51,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,     3,     4,     5,    -1,
      74,    -1,    76,    -1,    78,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    91,    -1,    -1,
      94,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,   116,    -1,    51,    -1,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,     3,     4,     5,    -1,    74,    -1,    76,
      -1,    78,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    91,    -1,    -1,    94,    95,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
       3,     4,     5,    -1,    74,    -1,    76,    -1,    78,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,
      -1,    91,    -1,    -1,    94,    95,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    46,    -1,    -1,   116,    -1,    51,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,     3,     4,
       5,    74,    -1,    76,    -1,    78,    -1,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    91,    -1,
       8,    94,    95,    11,    97,    30,    -1,    15,    -1,    -1,
      18,    -1,    -1,   106,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,   116,    -1,    33,    51,    35,    53,    -1,
      -1,    56,    40,    -1,    42,    -1,    61,    -1,    -1,    -1,
      48,    -1,    -1,    68,    -1,     3,     4,     5,    -1,    74,
      -1,    76,    -1,    78,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    -1,    -1,    91,    -1,    -1,    94,
      95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,   113,    -1,    -1,    -1,    -1,
      68,    -1,     3,     4,     5,    -1,    74,    -1,    76,    -1,
      78,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    91,    -1,    -1,    94,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,   116,    -1,
      51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,     3,
       4,     5,    -1,    74,    -1,    76,    -1,    78,    12,    -1,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      91,    -1,    -1,    94,    95,    -1,    97,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,   106,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    51,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    91,    61,    -1,
      94,    95,    -1,    97,    -1,    68,    -1,    -1,    -1,     3,
       4,    74,   106,    76,    -1,    78,    -1,    -1,    12,    -1,
      -1,    -1,   116,    17,    -1,    -1,    -1,    21,    91,    -1,
      -1,    94,    95,    -1,    97,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    50,    51,    52,    53,
      54,    -1,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,     3,     4,
      74,    -1,    76,    -1,    78,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    89,    21,    91,    -1,    -1,
      94,    95,    96,    97,    98,    30,    -1,    -1,    -1,   103,
      -1,   105,   106,    -1,   108,    -1,   110,   111,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,     3,     4,    74,
      -1,    76,    -1,    78,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    89,    21,    91,    -1,    -1,    94,
      95,    96,    97,    98,    30,    -1,    -1,    -1,   103,    -1,
     105,   106,    -1,   108,    -1,   110,   111,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
       3,     4,    68,    69,    70,    -1,    -1,    -1,    74,    12,
      76,    -1,    78,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    89,    -1,    91,    -1,    30,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,   103,    -1,   105,
     106,    -1,   108,    -1,   110,   111,    -1,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    -1,    60,    61,    -1,
      -1,    -1,    -1,     3,     4,    68,    69,    70,    -1,    -1,
      -1,    74,    12,    76,    -1,    78,    -1,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    89,    -1,    91,    -1,
      30,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
     103,    -1,    -1,   106,    -1,   108,    -1,   110,   111,    -1,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    58,     3,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    89,
      -1,    91,    -1,    -1,    94,    95,    96,    97,    98,    -1,
      44,    -1,    -1,   103,    -1,    49,   106,    51,   108,    53,
     110,   111,    56,    57,    -1,    -1,    -1,    61,     3,    63,
      -1,    -1,    66,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    86,    87,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    44,
      -1,    -1,   106,   107,    49,    -1,    51,    -1,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    66,    -1,    68,    -1,    -1,     3,     4,    -1,    74,
      75,    76,    -1,    -1,    -1,    12,    -1,    -1,    83,    84,
      17,    86,    87,    -1,    21,    90,    91,    92,    93,    -1,
       3,     4,    -1,    30,    -1,    -1,   101,   102,    -1,    12,
      13,    -1,   107,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    51,    76,
      53,    78,    -1,    56,     3,     4,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    12,    91,    68,    -1,    94,    17,    -1,
      97,    74,    21,    76,    -1,    78,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,     3,     4,    -1,    -1,
      -1,    -1,    51,   106,    53,    12,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    31,    74,    -1,    76,    -1,    78,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    91,    -1,    51,    94,    53,    -1,    97,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,   106,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    56,    91,    -1,    -1,    94,    61,    44,
      97,    -1,    -1,    -1,    49,    68,    -1,    -1,    -1,   106,
      -1,    74,    57,    76,    -1,    78,    -1,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    44,    91,    -1,
      75,    94,    49,    -1,    97,    -1,    -1,    -1,    83,    84,
      57,    86,    87,   106,    -1,    90,    63,    92,    93,    66,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    75,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    83,    84,    -1,    86,
      87,    -1,    -1,    90,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,
     107
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   118,   156,   157,   158,   159,   160,   161,   163,     0,
     163,    44,    81,   162,   286,   287,   297,   298,    72,   164,
     165,   166,   167,   168,   171,   299,    30,   119,   169,   170,
     178,   179,   243,   255,   268,   269,   279,     3,   122,   151,
     154,     3,    92,   151,   154,    79,   172,   286,    44,    49,
      57,    63,    66,    75,    83,    84,    86,    87,    90,    92,
      93,   101,   102,   107,   120,   286,   170,    12,    24,   121,
     151,    30,    24,    77,    75,     3,   122,   122,   122,   122,
       3,     4,     5,    12,    16,    17,    20,    21,    51,    53,
      56,    61,    68,    74,    76,    78,    91,    94,    95,    97,
     106,   111,   116,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   150,   151,   152,   153,   155,   286,
     288,   289,   291,   292,   293,   299,   376,   377,   378,   380,
     381,   386,   387,   388,   391,   392,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   431,     3,   122,    24,
      30,    24,    14,     3,   122,    31,   180,   184,    71,   182,
     188,   180,   180,    35,     3,   422,     3,    12,   124,   128,
     152,   386,   387,   396,   397,   398,   406,   407,   408,   410,
     422,   422,   422,   422,    45,   379,     3,    31,   124,   129,
     130,   142,   209,   299,    24,    29,    12,    24,   292,   294,
     295,   422,   134,   299,   379,    29,    24,   134,    29,   134,
      29,    24,    24,   379,    24,    29,    45,    12,    24,    13,
     290,    13,    51,   122,   125,    24,    29,    45,    43,   114,
      10,   112,    47,     9,     6,    36,    31,    34,    37,    38,
      73,    32,    39,    41,    16,    20,     7,    14,    26,    17,
      21,     3,     3,    14,    30,   121,   111,   280,   136,   137,
     138,   185,   286,    65,   181,   187,   129,   131,   189,   299,
     111,   244,    65,   270,   272,    12,   256,   292,     3,   225,
     226,   399,   400,   403,    13,   430,    13,    23,     8,    11,
      15,    18,    22,    27,    33,    35,    40,    42,    48,   113,
     409,    46,    24,    45,   128,   133,   143,   145,   146,   299,
     134,   299,   393,   395,   134,   393,   299,   382,   122,     3,
     209,   209,   396,    57,   296,    19,   245,    45,    24,   209,
     299,   209,    78,     3,   299,    94,    97,   209,    24,    78,
     209,   381,   209,   396,   242,   389,   396,     3,    19,   209,
       3,   209,   381,   209,   396,   396,   412,   413,   414,   415,
     416,   417,   417,   419,   419,   419,   419,   128,   225,   310,
     374,   375,   420,   420,   420,   421,   421,   422,   422,   422,
      30,    30,   111,   281,   186,   122,   138,    37,   130,   182,
     190,   247,   248,   250,   251,   189,    82,   271,   273,   257,
     258,   260,   261,   262,   182,   401,     3,    51,    66,   105,
     122,   125,   150,   204,   205,   206,   207,   208,   210,   211,
     212,   227,   286,   404,    13,   402,   422,     9,    13,   141,
     111,   304,   396,   405,   396,    57,    46,    37,    19,   144,
      43,   111,   300,    45,   134,   202,   394,   300,   202,     3,
      12,     3,     3,    13,    19,   115,    46,    57,     3,   122,
      78,   122,    24,    29,     3,    57,     3,     3,    46,    13,
     390,     3,   291,     3,     3,    46,    28,   105,   204,   311,
      64,    80,    85,    88,   104,   173,   174,    30,   115,   119,
     178,   268,   277,   282,   283,    19,    65,   139,   140,    82,
     183,   191,    19,   245,   249,     3,   253,   286,   151,   111,
     274,    13,   259,   204,   263,   286,   111,   264,    19,   209,
      24,   299,   134,    24,   134,   134,     3,   201,    19,   131,
     397,   425,     3,    12,    30,    50,    52,    58,    60,    69,
      70,    89,    95,    96,    98,   103,   108,   110,   119,   178,
     240,   269,   304,   305,   307,   308,   309,   310,   312,   314,
     315,   316,   318,   319,   320,   321,   323,   324,   334,   336,
     337,   339,   348,   350,   352,   353,   354,   355,   356,   357,
     366,   380,   388,   407,   423,   424,   426,   427,   428,   145,
      19,    65,    94,   147,   148,   203,   300,   301,   302,   396,
     396,   299,   395,   383,   242,    12,   111,   325,   292,   135,
     209,   209,     3,   209,   209,    12,    12,    19,    12,   397,
     410,   197,   199,   201,   150,   150,   151,   119,   151,   115,
     174,   204,   136,   129,   132,   299,   151,   111,   192,   131,
      30,   246,   254,    19,    45,   175,   275,    19,     3,   299,
     265,     3,   299,    25,   299,   202,   403,    28,   396,     3,
     351,   351,   312,    12,    12,   341,   396,    12,    12,   396,
      12,   304,   368,    12,   396,   115,   306,    30,    30,   145,
     128,   128,   303,   245,    46,    45,    24,   142,   384,   385,
      13,   242,    54,    59,   327,   329,   331,   299,     3,     3,
     242,   242,   396,   242,   198,    35,   200,    24,   100,   176,
     176,   109,     3,   149,    30,     3,   197,   430,   175,   193,
     193,   115,   250,    12,    19,    30,   115,   119,   178,   268,
     276,   277,   278,   260,    25,    92,   115,   119,   178,   194,
     195,   196,   213,   233,   234,   235,   266,   267,   268,   304,
     122,     3,   122,   312,    28,    30,    30,    30,   108,   310,
     319,   340,   344,   346,   396,    30,   396,   396,    30,   152,
     310,   370,   372,   373,   376,   386,    55,   358,   359,   361,
     304,   396,    30,   307,    19,   115,   299,   192,   252,    13,
     333,   410,   328,   330,   331,   326,    23,    45,    12,    13,
      13,    13,    19,   203,   149,    30,   100,    30,   151,    24,
      30,    12,    30,   115,   119,   194,   242,   151,   106,   184,
     204,   214,   216,     3,   304,   122,   180,   184,   204,   214,
     236,   237,   209,   209,   396,    12,    28,   347,    30,    13,
      13,    13,    30,   369,   371,    12,    67,   365,   360,   358,
     359,    13,   203,     3,   332,   115,   331,    28,    30,   329,
     304,   355,   396,    46,   242,   199,   177,   149,   175,     3,
      13,    13,   299,    30,   232,   304,     3,   217,   122,   237,
     197,   232,    99,   215,   228,   111,   238,    30,   396,   396,
      19,   341,     3,    69,    70,   108,   312,   313,   314,   317,
     322,   335,   338,   343,   349,   325,   304,    13,    30,   225,
     362,   304,   361,   365,   367,   312,    19,    28,   328,    30,
      13,    19,   177,    30,   202,    46,   204,   216,    12,   215,
      12,    30,   130,   132,   229,   231,   238,   152,   209,   239,
     241,   376,    13,    13,   319,    30,    28,    12,    12,    12,
      62,   372,   122,   207,   208,   363,    13,   333,   305,   149,
      59,   284,   285,   252,   217,   218,   220,   299,   218,   230,
      24,    94,    97,   240,    24,    30,   312,   342,   345,   346,
     313,   310,   340,   396,   396,   312,   364,   201,   304,   292,
      30,   215,   219,   222,   224,   225,   226,    19,   204,   219,
      19,   209,    12,    12,   115,   209,    13,    28,    30,    13,
      13,   112,    13,   223,   204,     3,   221,    13,   231,    94,
     242,   242,    94,   312,   396,   341,   313,   313,   130,   202,
      19,   201,    24,    97,    12,    13,    13,    12,    13,    30,
      62,   224,   242,    30,    30,   242,   313,   342,   313,    13,
      13,    13,    30,    30,   313
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   117,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   121,   121,   122,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   130,   130,   130,
     131,   132,   133,   133,   133,   134,   135,   135,   136,   137,
     137,   137,   138,   139,   139,   140,   140,   141,   142,   143,
     144,   144,   144,   145,   145,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   157,   158,   159,   159,   160,
     161,   161,   162,   163,   163,   164,   164,   164,   164,   165,
     166,   167,   168,   169,   169,   169,   170,   170,   170,   171,
     172,   172,   173,   173,   173,   174,   174,   174,   174,   174,
     175,   175,   176,   176,   176,   177,   177,   178,   178,   178,
     179,   180,   180,   181,   181,   182,   182,   183,   183,   184,
     185,   186,   186,   187,   188,   189,   190,   190,   191,   192,
     193,   193,   194,   194,   194,   194,   195,   195,   195,   195,
     196,   197,   198,   198,   199,   200,   200,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   206,   207,
     207,   208,   208,   208,   209,   209,   210,   211,   212,   212,
     212,   213,   214,   214,   215,   215,   216,   216,   217,   218,
     218,   219,   219,   220,   221,   221,   222,   223,   223,   224,
     224,   225,   225,   226,   227,   227,   228,   229,   230,   230,
     231,   231,   232,   232,   233,   234,   235,   236,   237,   238,
     239,   239,   240,   240,   241,   241,   241,   241,   242,   242,
     243,   244,   245,   245,   246,   246,   247,   247,   248,   249,
     249,   250,   251,   251,   252,   252,   253,   254,   255,   256,
     257,   257,   258,   259,   259,   260,   260,   261,   261,   262,
     263,   264,   265,   265,   266,   266,   267,   268,   268,   269,
     270,   270,   271,   271,   272,   273,   274,   275,   275,   276,
     276,   276,   276,   276,   277,   278,   279,   280,   281,   281,
     282,   282,   282,   282,   282,   283,   284,   284,   285,   286,
     286,   286,   287,   288,   288,   289,   290,   290,   291,   292,
     292,   292,   293,   294,   294,   295,   296,   296,   297,   298,
     299,   299,   300,   301,   301,   302,   303,   303,   304,   305,
     306,   306,   307,   307,   307,   308,   308,   309,   310,   311,
     311,   312,   312,   312,   312,   312,   312,   313,   313,   313,
     313,   313,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   315,   316,   317,   318,   319,
     319,   319,   319,   319,   319,   319,   320,   321,   322,   323,
     323,   324,   325,   325,   326,   326,   327,   327,   328,   328,
     329,   329,   329,   330,   331,   331,   332,   332,   333,   334,
     335,   336,   337,   337,   338,   338,   339,   340,   340,   341,
     341,   342,   342,   343,   344,   344,   345,   346,   347,   347,
     348,   349,   350,   351,   351,   352,   353,   354,   355,   356,
     357,   357,   357,   358,   358,   359,   360,   360,   361,   362,
     363,   364,   364,   365,   366,   367,   367,   368,   369,   369,
     370,   371,   371,   372,   372,   373,   373,   374,   375,   376,
     376,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   378,   378,   378,   378,   379,   379,   379,   380,   380,
     380,   381,   382,   383,   383,   384,   384,   385,   386,   386,
     386,   387,   387,   388,   388,   388,   388,   388,   388,   389,
     390,   390,   391,   391,   391,   391,   391,   391,   391,   392,
     392,   392,   392,   393,   394,   394,   395,   396,   396,   397,
     398,   398,   399,   399,   400,   400,   401,   401,   402,   402,
     403,   403,   404,   404,   405,   405,   406,   406,   407,   408,
     408,   408,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   410,   410,   410,   411,   411,   412,
     412,   413,   413,   414,   414,   415,   415,   416,   416,   416,
     417,   417,   417,   417,   417,   417,   418,   418,   419,   419,
     419,   419,   420,   420,   420,   421,   421,   421,   421,   422,
     422,   422,   422,   422,   423,   424,   425,   425,   425,   425,
     425,   426,   426,   426,   426,   427,   428,   429,   429,   429,
     430,   430,   431
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     5,
       1,     2,     2,     2,     2,     4,     4,     0,     3,     1,
       2,     0,     1,     1,     0,     2,     3,     2,     3,     2,
       2,     3,     0,     1,     1,     3,     1,     0,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     3,     1,     1,     3,     2,     1,     0,     5,
       2,     0,     1,     2,     0,     1,     1,     1,     1,     3,
       5,     6,     6,     1,     2,     0,     1,     1,     1,     8,
       1,     0,     1,     2,     0,     4,     4,     4,     3,     6,
       3,     0,     3,     4,     0,     3,     0,     1,     1,     1,
       8,     1,     0,     1,     0,     1,     0,     1,     0,     3,
       2,     3,     0,     2,     2,     2,     3,     0,     3,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     3,     0,     2,     2,     0,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     5,     1,     0,     1,     1,     2,     2,
       2,     3,     3,     5,     1,     0,     1,     1,     6,     2,
       0,     1,     0,     4,     2,     0,     2,     3,     0,     3,
       1,     2,     0,     5,     1,     1,     2,     2,     3,     0,
       1,     1,     1,     1,     1,     2,     4,     6,     1,     4,
       1,     0,     1,     0,     6,     6,     8,     8,     1,     0,
       5,     5,     1,     0,     1,     0,     1,     0,     2,     3,
       0,     8,     2,     0,     1,     0,     1,     2,     7,     3,
       1,     0,     2,     3,     0,     3,     1,     2,     0,     5,
       1,     3,     2,     0,     1,     1,     3,     1,     1,     7,
       1,     0,     1,     0,     2,     3,     3,     2,     0,     1,
       1,     1,     1,     1,     4,     3,     5,     3,     2,     0,
       1,     1,     1,     1,     1,     8,     1,     0,     2,     1,
       1,     1,     5,     1,     0,     2,     3,     0,     3,     1,
       1,     1,     4,     1,     0,     2,     3,     0,     2,     5,
       2,     0,     4,     1,     0,     2,     3,     0,     3,     2,
       2,     0,     1,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     7,     3,
       5,     5,     4,     4,     2,     0,     2,     0,     3,     0,
       4,     3,     3,     4,     3,     1,     3,     0,     1,     5,
       5,     7,     1,     1,     1,     1,     9,     1,     0,     1,
       0,     1,     0,     9,     1,     1,     1,     2,     3,     0,
       7,     7,     3,     1,     0,     3,     3,     3,     3,     5,
       3,     4,     1,     1,     0,     2,     2,     0,     5,     3,
       2,     3,     0,     2,     5,     1,     0,     4,     1,     0,
       2,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     4,     4,     4,     3,     2,     3,     0,     1,     3,
       3,     7,     4,     4,     0,     1,     0,     1,     3,     3,
       5,     4,     4,     4,     7,     7,     7,     7,     9,     2,
       3,     0,     4,     4,     4,     4,     6,     4,     3,     4,
       4,     4,     4,     2,     2,     0,     4,     1,     1,     3,
       3,     1,     1,     0,     2,     2,     3,     0,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     5,     5,
       2,     0,     5
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
#line 470 "src/parser.y"
                                        {(yyval.i)=createNode("input");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i)); startNode=(yyval.i);}
#line 2847 "src/parser.tab.c"
    break;

  case 3: /* modifier.multiopt: modifier.multiopt modifier  */
#line 473 "src/parser.y"
                                                {(yyval.i)=createNode("modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2853 "src/parser.tab.c"
    break;

  case 4: /* modifier.multiopt: %empty  */
#line 474 "src/parser.y"
                                {(yyval.i)=-1;}
#line 2859 "src/parser.tab.c"
    break;

  case 5: /* modifier: annotation  */
#line 477 "src/parser.y"
                                {(yyval.i)=createNode("modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2865 "src/parser.tab.c"
    break;

  case 6: /* modifier: "public"  */
#line 478 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2871 "src/parser.tab.c"
    break;

  case 7: /* modifier: "protected"  */
#line 479 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2877 "src/parser.tab.c"
    break;

  case 8: /* modifier: "private"  */
#line 480 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2883 "src/parser.tab.c"
    break;

  case 9: /* modifier: "abstract"  */
#line 481 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2889 "src/parser.tab.c"
    break;

  case 10: /* modifier: "static"  */
#line 482 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2895 "src/parser.tab.c"
    break;

  case 11: /* modifier: "final"  */
#line 483 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2901 "src/parser.tab.c"
    break;

  case 12: /* modifier: "sealed"  */
#line 484 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2907 "src/parser.tab.c"
    break;

  case 13: /* modifier: "strictfp"  */
#line 485 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2913 "src/parser.tab.c"
    break;

  case 14: /* modifier: "transitive"  */
#line 486 "src/parser.y"
                                        {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2919 "src/parser.tab.c"
    break;

  case 15: /* modifier: "transient"  */
#line 487 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2925 "src/parser.tab.c"
    break;

  case 16: /* modifier: "volatile"  */
#line 488 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2931 "src/parser.tab.c"
    break;

  case 17: /* dot_ind.multiopt: dot_ind.multiopt "." TOK_IDENTIFIER  */
#line 491 "src/parser.y"
                                                                {(yyval.i)=createNode("dot_ind.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2937 "src/parser.tab.c"
    break;

  case 18: /* dot_ind.multiopt: %empty  */
#line 492 "src/parser.y"
                                {(yyval.i)=-1;}
#line 2943 "src/parser.tab.c"
    break;

  case 19: /* type_IDENTIFIER: TOK_IDENTIFIER  */
#line 495 "src/parser.y"
                                        {(yyval.i)=createNode("type_IDENTIFIER");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2949 "src/parser.tab.c"
    break;

  case 20: /* unqualified_method_IDENTIFIER: TOK_IDENTIFIER  */
#line 498 "src/parser.y"
                                        {(yyval.i)=createNode("unqualified_method_IDENTIFIER");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2955 "src/parser.tab.c"
    break;

  case 21: /* primitive_type: annotation.multiopt numeric_type  */
#line 506 "src/parser.y"
                                                        {(yyval.i)=createNode("primitive_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2961 "src/parser.tab.c"
    break;

  case 22: /* primitive_type: annotation.multiopt "boolean"  */
#line 507 "src/parser.y"
                                                        {(yyval.i)=createNode("primitive_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2967 "src/parser.tab.c"
    break;

  case 23: /* numeric_type: integral_type  */
#line 510 "src/parser.y"
                                {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2973 "src/parser.tab.c"
    break;

  case 24: /* numeric_type: floating_point_type  */
#line 511 "src/parser.y"
                                        {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2979 "src/parser.tab.c"
    break;

  case 25: /* integral_type: "byte"  */
#line 514 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2985 "src/parser.tab.c"
    break;

  case 26: /* integral_type: "short"  */
#line 515 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2991 "src/parser.tab.c"
    break;

  case 27: /* integral_type: "int"  */
#line 516 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2997 "src/parser.tab.c"
    break;

  case 28: /* integral_type: "long"  */
#line 517 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3003 "src/parser.tab.c"
    break;

  case 29: /* integral_type: "char"  */
#line 518 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3009 "src/parser.tab.c"
    break;

  case 30: /* floating_point_type: "float"  */
#line 521 "src/parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3015 "src/parser.tab.c"
    break;

  case 31: /* floating_point_type: "double"  */
#line 522 "src/parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3021 "src/parser.tab.c"
    break;

  case 32: /* reference_type: class_or_interface_type  */
#line 525 "src/parser.y"
                                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3027 "src/parser.tab.c"
    break;

  case 33: /* reference_type: type_variable  */
#line 526 "src/parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3033 "src/parser.tab.c"
    break;

  case 34: /* reference_type: array_type  */
#line 527 "src/parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3039 "src/parser.tab.c"
    break;

  case 35: /* class_or_interface_type: class_type  */
#line 530 "src/parser.y"
                                {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3045 "src/parser.tab.c"
    break;

  case 36: /* class_or_interface_type: interface_type  */
#line 531 "src/parser.y"
                                        {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3051 "src/parser.tab.c"
    break;

  case 37: /* class_type: annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 534 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_type");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3057 "src/parser.tab.c"
    break;

  case 38: /* class_type: package_name "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 535 "src/parser.y"
                                                                                                {(yyval.i)=createNode("class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3063 "src/parser.tab.c"
    break;

  case 39: /* class_type: class_or_interface_type "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 536 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3069 "src/parser.tab.c"
    break;

  case 40: /* interface_type: class_type  */
#line 539 "src/parser.y"
                                {(yyval.i)=createNode("interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3075 "src/parser.tab.c"
    break;

  case 41: /* type_variable: annotation.multiopt type_IDENTIFIER  */
#line 542 "src/parser.y"
                                                        {(yyval.i)=createNode("type_variable");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3081 "src/parser.tab.c"
    break;

  case 42: /* array_type: primitive_type dims  */
#line 545 "src/parser.y"
                                        {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3087 "src/parser.tab.c"
    break;

  case 43: /* array_type: class_or_interface_type dims  */
#line 546 "src/parser.y"
                                                {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3093 "src/parser.tab.c"
    break;

  case 44: /* array_type: type_variable dims  */
#line 547 "src/parser.y"
                                        {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3099 "src/parser.tab.c"
    break;

  case 45: /* dims: annotation.multiopt "[" "]" an_sp.multiopt  */
#line 550 "src/parser.y"
                                                                        {(yyval.i)=createNode("dims");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3105 "src/parser.tab.c"
    break;

  case 46: /* an_sp.multiopt: an_sp.multiopt annotation.multiopt "[" "]"  */
#line 553 "src/parser.y"
                                                                        {(yyval.i)=createNode("an_sp.multiopt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3111 "src/parser.tab.c"
    break;

  case 47: /* an_sp.multiopt: %empty  */
#line 554 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3117 "src/parser.tab.c"
    break;

  case 48: /* type_parameter: type_parameter_modifier.multiopt type_IDENTIFIER type_bound.opt  */
#line 557 "src/parser.y"
                                                                                        {(yyval.i)=createNode("type_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3123 "src/parser.tab.c"
    break;

  case 49: /* type_parameter_modifier.multiopt: type_parameter_modifier  */
#line 560 "src/parser.y"
                                                {(yyval.i)=createNode("type_parameter_modifier.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3129 "src/parser.tab.c"
    break;

  case 50: /* type_parameter_modifier.multiopt: type_parameter_modifier.multiopt type_parameter_modifier  */
#line 561 "src/parser.y"
                                                                                {(yyval.i)=createNode("type_parameter_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3135 "src/parser.tab.c"
    break;

  case 51: /* type_parameter_modifier.multiopt: %empty  */
#line 562 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3141 "src/parser.tab.c"
    break;

  case 52: /* type_parameter_modifier: annotation  */
#line 564 "src/parser.y"
                                {(yyval.i)=createNode("type_parameter_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3147 "src/parser.tab.c"
    break;

  case 53: /* type_bound.opt: type_bound  */
#line 567 "src/parser.y"
                                {(yyval.i)=createNode("type_bound.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3153 "src/parser.tab.c"
    break;

  case 54: /* type_bound.opt: %empty  */
#line 568 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3159 "src/parser.tab.c"
    break;

  case 55: /* type_bound: "extends" type_variable  */
#line 571 "src/parser.y"
                                                {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3165 "src/parser.tab.c"
    break;

  case 56: /* type_bound: "extends" class_or_interface_type additional_bound.multiopt  */
#line 572 "src/parser.y"
                                                                                        {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3171 "src/parser.tab.c"
    break;

  case 57: /* additional_bound: "&" interface_type  */
#line 575 "src/parser.y"
                                        {(yyval.i)=createNode("additional_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3177 "src/parser.tab.c"
    break;

  case 58: /* type_arguments: "<" type_argument_list ">"  */
#line 578 "src/parser.y"
                                                        {(yyval.i)=createNode("type_arguments");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3183 "src/parser.tab.c"
    break;

  case 59: /* type_argument_list: type_argument type_argument.multiopt  */
#line 581 "src/parser.y"
                                                        {(yyval.i)=createNode("type_argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3189 "src/parser.tab.c"
    break;

  case 60: /* type_argument.multiopt: "," type_argument  */
#line 584 "src/parser.y"
                                        {(yyval.i)=createNode("type_argument.multiopt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3195 "src/parser.tab.c"
    break;

  case 61: /* type_argument.multiopt: type_argument.multiopt "," type_argument  */
#line 585 "src/parser.y"
                                                                {(yyval.i)=createNode("type_argument.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3201 "src/parser.tab.c"
    break;

  case 62: /* type_argument.multiopt: %empty  */
#line 586 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3207 "src/parser.tab.c"
    break;

  case 63: /* type_argument: reference_type  */
#line 588 "src/parser.y"
                                        {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3213 "src/parser.tab.c"
    break;

  case 64: /* type_argument: wildcard  */
#line 589 "src/parser.y"
                                {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3219 "src/parser.tab.c"
    break;

  case 65: /* wildcard: annotation.multiopt "?" wildcard_bounds.opt  */
#line 592 "src/parser.y"
                                                                        {(yyval.i)=createNode("wildcard");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3225 "src/parser.tab.c"
    break;

  case 66: /* wildcard_bounds.opt: wildcard_bounds  */
#line 595 "src/parser.y"
                                        {(yyval.i)=createNode("wildcard_bounds.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3231 "src/parser.tab.c"
    break;

  case 67: /* wildcard_bounds.opt: %empty  */
#line 596 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3237 "src/parser.tab.c"
    break;

  case 68: /* wildcard_bounds: "extends" reference_type  */
#line 599 "src/parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3243 "src/parser.tab.c"
    break;

  case 69: /* wildcard_bounds: "super" reference_type  */
#line 600 "src/parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3249 "src/parser.tab.c"
    break;

  case 70: /* module_name: TOK_IDENTIFIER  */
#line 605 "src/parser.y"
                                        {(yyval.i)=createNode("module_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3255 "src/parser.tab.c"
    break;

  case 71: /* module_name: module_name "." TOK_IDENTIFIER  */
#line 606 "src/parser.y"
                                                        {(yyval.i)=createNode("module_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3261 "src/parser.tab.c"
    break;

  case 72: /* package_name: TOK_IDENTIFIER  */
#line 609 "src/parser.y"
                                        {(yyval.i)=createNode("package_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3267 "src/parser.tab.c"
    break;

  case 73: /* package_name: package_name "." TOK_IDENTIFIER  */
#line 610 "src/parser.y"
                                                        {(yyval.i)=createNode("package_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3273 "src/parser.tab.c"
    break;

  case 74: /* type_name: type_IDENTIFIER  */
#line 613 "src/parser.y"
                                        {(yyval.i)=createNode("type_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3279 "src/parser.tab.c"
    break;

  case 75: /* type_name: package_or_type_name "." type_IDENTIFIER  */
#line 614 "src/parser.y"
                                                                {(yyval.i)=createNode("type_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3285 "src/parser.tab.c"
    break;

  case 76: /* expression_name: TOK_IDENTIFIER  */
#line 617 "src/parser.y"
                                        {(yyval.i)=createNode("expression_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3291 "src/parser.tab.c"
    break;

  case 77: /* expression_name: ambiguous_name "." TOK_IDENTIFIER  */
#line 618 "src/parser.y"
                                                        {(yyval.i)=createNode("expression_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3297 "src/parser.tab.c"
    break;

  case 78: /* method_name: unqualified_method_IDENTIFIER  */
#line 621 "src/parser.y"
                                                {(yyval.i)=createNode("method_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3303 "src/parser.tab.c"
    break;

  case 79: /* package_or_type_name: TOK_IDENTIFIER  */
#line 624 "src/parser.y"
                                        {(yyval.i)=createNode("package_or_type_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3309 "src/parser.tab.c"
    break;

  case 80: /* package_or_type_name: package_or_type_name "." TOK_IDENTIFIER  */
#line 625 "src/parser.y"
                                                                {(yyval.i)=createNode("package_or_type_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3315 "src/parser.tab.c"
    break;

  case 81: /* ambiguous_name: TOK_IDENTIFIER  */
#line 628 "src/parser.y"
                                        {(yyval.i)=createNode("ambiguous_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3321 "src/parser.tab.c"
    break;

  case 82: /* ambiguous_name: ambiguous_name "." TOK_IDENTIFIER  */
#line 629 "src/parser.y"
                                                        {(yyval.i)=createNode("ambiguous_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3327 "src/parser.tab.c"
    break;

  case 83: /* compilation_unit: ordinary_compilation_unit  */
#line 635 "src/parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3333 "src/parser.tab.c"
    break;

  case 84: /* compilation_unit: modular_compilation_unit  */
#line 636 "src/parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3339 "src/parser.tab.c"
    break;

  case 85: /* ordinary_compilation_unit: package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt  */
#line 639 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("ordinary_compilation_unit");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3345 "src/parser.tab.c"
    break;

  case 86: /* modular_compilation_unit: import_declaration.multiopt module_declaration  */
#line 642 "src/parser.y"
                                                                        {(yyval.i)=createNode("modular_compilation_unit");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3351 "src/parser.tab.c"
    break;

  case 87: /* package_declaration.opt: package_declaration  */
#line 645 "src/parser.y"
                                        {(yyval.i)=createNode("package_declaration.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3357 "src/parser.tab.c"
    break;

  case 88: /* package_declaration.opt: %empty  */
#line 646 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3363 "src/parser.tab.c"
    break;

  case 89: /* package_declaration: package_modifier.multiopt "package" TOK_IDENTIFIER dot_ind.multiopt ";"  */
#line 649 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("package_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3369 "src/parser.tab.c"
    break;

  case 90: /* package_modifier.multiopt: package_modifier.multiopt package_modifier  */
#line 652 "src/parser.y"
                                                                {(yyval.i)=createNode("package_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3375 "src/parser.tab.c"
    break;

  case 91: /* package_modifier.multiopt: %empty  */
#line 653 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3381 "src/parser.tab.c"
    break;

  case 92: /* package_modifier: annotation  */
#line 656 "src/parser.y"
                                {(yyval.i)=createNode("package_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3387 "src/parser.tab.c"
    break;

  case 93: /* import_declaration.multiopt: import_declaration.multiopt import_declaration  */
#line 659 "src/parser.y"
                                                                        {(yyval.i)=createNode("import_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3393 "src/parser.tab.c"
    break;

  case 94: /* import_declaration.multiopt: %empty  */
#line 660 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3399 "src/parser.tab.c"
    break;

  case 95: /* import_declaration: single_type_import_declaration  */
#line 663 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3405 "src/parser.tab.c"
    break;

  case 96: /* import_declaration: type_import_on_demand_declaration  */
#line 664 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3411 "src/parser.tab.c"
    break;

  case 97: /* import_declaration: single_static_import_declaration  */
#line 665 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3417 "src/parser.tab.c"
    break;

  case 98: /* import_declaration: static_import_on_demand_declaration  */
#line 666 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3423 "src/parser.tab.c"
    break;

  case 99: /* single_type_import_declaration: "import" type_name ";"  */
#line 669 "src/parser.y"
                                                        {(yyval.i)=createNode("single_type_import_declaration");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3429 "src/parser.tab.c"
    break;

  case 100: /* type_import_on_demand_declaration: "import" package_or_type_name "." "*" ";"  */
#line 672 "src/parser.y"
                                                                                {(yyval.i)=createNode("type_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3435 "src/parser.tab.c"
    break;

  case 101: /* single_static_import_declaration: "import" "static" type_name "." TOK_IDENTIFIER ";"  */
#line 675 "src/parser.y"
                                                                                        {(yyval.i)=createNode("single_static_import_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3441 "src/parser.tab.c"
    break;

  case 102: /* static_import_on_demand_declaration: "import" "static" type_name "." "*" ";"  */
#line 678 "src/parser.y"
                                                                                {(yyval.i)=createNode("static_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3447 "src/parser.tab.c"
    break;

  case 103: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration  */
#line 681 "src/parser.y"
                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3453 "src/parser.tab.c"
    break;

  case 104: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration  */
#line 682 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3459 "src/parser.tab.c"
    break;

  case 105: /* top_level_class_or_interface_declaration.multiopt: %empty  */
#line 683 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3465 "src/parser.tab.c"
    break;

  case 106: /* top_level_class_or_interface_declaration: class_declaration  */
#line 686 "src/parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3471 "src/parser.tab.c"
    break;

  case 107: /* top_level_class_or_interface_declaration: interface_declaration  */
#line 687 "src/parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3477 "src/parser.tab.c"
    break;

  case 108: /* top_level_class_or_interface_declaration: ";"  */
#line 688 "src/parser.y"
                                {(yyval.i)=createNode("top_level_class_or_interface_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3483 "src/parser.tab.c"
    break;

  case 109: /* module_declaration: annotation.multiopt open.opt "module" TOK_IDENTIFIER dot_ind.multiopt "{" module_directive.multiopt "}"  */
#line 691 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("module_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3489 "src/parser.tab.c"
    break;

  case 110: /* open.opt: "open"  */
#line 694 "src/parser.y"
                                {(yyval.i)=createNode("open.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3495 "src/parser.tab.c"
    break;

  case 111: /* open.opt: %empty  */
#line 695 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3501 "src/parser.tab.c"
    break;

  case 112: /* module_directive.multiopt: module_directive  */
#line 698 "src/parser.y"
                                        {(yyval.i)=createNode("module_directive.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3507 "src/parser.tab.c"
    break;

  case 113: /* module_directive.multiopt: module_directive.multiopt module_directive  */
#line 699 "src/parser.y"
                                                                {(yyval.i)=createNode("module_directive.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3513 "src/parser.tab.c"
    break;

  case 114: /* module_directive.multiopt: %empty  */
#line 700 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3519 "src/parser.tab.c"
    break;

  case 116: /* module_directive: "exports" package_name to_module_names.opt ";"  */
#line 704 "src/parser.y"
                                                                        {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3525 "src/parser.tab.c"
    break;

  case 117: /* module_directive: "opens" package_name to_module_names.opt ";"  */
#line 705 "src/parser.y"
                                                                        {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3531 "src/parser.tab.c"
    break;

  case 118: /* module_directive: "uses" type_name ";"  */
#line 706 "src/parser.y"
                                                {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3537 "src/parser.tab.c"
    break;

  case 119: /* module_directive: "provides" type_name "with" type_name com_type_name.multiopt ";"  */
#line 707 "src/parser.y"
                                                                                                {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3543 "src/parser.tab.c"
    break;

  case 120: /* com_type_name.multiopt: com_type_name.multiopt "," type_name  */
#line 710 "src/parser.y"
                                                                {(yyval.i)=createNode("com_type_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3549 "src/parser.tab.c"
    break;

  case 121: /* com_type_name.multiopt: %empty  */
#line 711 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3555 "src/parser.tab.c"
    break;

  case 122: /* to_module_names.opt: "to" module_name com_module_name.multiopt  */
#line 714 "src/parser.y"
                                                                {(yyval.i)=createNode("to_module_names.opt");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3561 "src/parser.tab.c"
    break;

  case 123: /* to_module_names.opt: to_module_names.opt "to" module_name com_module_name.multiopt  */
#line 715 "src/parser.y"
                                                                                        {(yyval.i)=createNode("to_module_names.opt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3567 "src/parser.tab.c"
    break;

  case 124: /* to_module_names.opt: %empty  */
#line 716 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3573 "src/parser.tab.c"
    break;

  case 125: /* com_module_name.multiopt: com_module_name.multiopt "," module_name  */
#line 718 "src/parser.y"
                                                                {(yyval.i)=createNode("com_module_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3579 "src/parser.tab.c"
    break;

  case 126: /* com_module_name.multiopt: %empty  */
#line 719 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3585 "src/parser.tab.c"
    break;

  case 127: /* class_declaration: normal_class_declaration  */
#line 724 "src/parser.y"
                                                {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3591 "src/parser.tab.c"
    break;

  case 128: /* class_declaration: enum_declaration  */
#line 725 "src/parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3597 "src/parser.tab.c"
    break;

  case 129: /* class_declaration: record_declaration  */
#line 726 "src/parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3603 "src/parser.tab.c"
    break;

  case 130: /* normal_class_declaration: modifier.multiopt "class" type_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body  */
#line 729 "src/parser.y"
                                                                                                                                                                {(yyval.i)=createNode("normal_class_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3609 "src/parser.tab.c"
    break;

  case 131: /* type_parameters.opt: type_parameters  */
#line 732 "src/parser.y"
                                        {(yyval.i)=createNode("type_parameters.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3615 "src/parser.tab.c"
    break;

  case 132: /* type_parameters.opt: %empty  */
#line 733 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3621 "src/parser.tab.c"
    break;

  case 133: /* class_extends.opt: class_extends  */
#line 736 "src/parser.y"
                                {(yyval.i)=createNode("class_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3627 "src/parser.tab.c"
    break;

  case 134: /* class_extends.opt: %empty  */
#line 737 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3633 "src/parser.tab.c"
    break;

  case 135: /* class_implements.opt: class_implements  */
#line 740 "src/parser.y"
                                        {(yyval.i)=createNode("class_implements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3639 "src/parser.tab.c"
    break;

  case 136: /* class_implements.opt: %empty  */
#line 741 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3645 "src/parser.tab.c"
    break;

  case 137: /* class_permits.opt: class_permits  */
#line 744 "src/parser.y"
                                {(yyval.i)=createNode("class_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3651 "src/parser.tab.c"
    break;

  case 138: /* class_permits.opt: %empty  */
#line 745 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3657 "src/parser.tab.c"
    break;

  case 139: /* type_parameters: "<" type_parameter_list ">"  */
#line 748 "src/parser.y"
                                                        {(yyval.i)=createNode("type_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3663 "src/parser.tab.c"
    break;

  case 140: /* type_parameter_list: type_parameter com_type_parameter.multiopt  */
#line 751 "src/parser.y"
                                                                {(yyval.i)=createNode("type_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3669 "src/parser.tab.c"
    break;

  case 141: /* com_type_parameter.multiopt: com_type_parameter.multiopt "," type_parameter  */
#line 754 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_type_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3675 "src/parser.tab.c"
    break;

  case 142: /* com_type_parameter.multiopt: %empty  */
#line 755 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3681 "src/parser.tab.c"
    break;

  case 143: /* class_extends: "extends" class_type  */
#line 758 "src/parser.y"
                                                {(yyval.i)=createNode("class_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3687 "src/parser.tab.c"
    break;

  case 144: /* class_implements: "implements" interface_type_list  */
#line 761 "src/parser.y"
                                                        {(yyval.i)=createNode("class_implements");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3693 "src/parser.tab.c"
    break;

  case 145: /* interface_type_list: interface_type com_interface_type.multiopt  */
#line 764 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3699 "src/parser.tab.c"
    break;

  case 146: /* com_interface_type.multiopt: com_interface_type.multiopt "," interface_type  */
#line 767 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_interface_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3705 "src/parser.tab.c"
    break;

  case 147: /* com_interface_type.multiopt: %empty  */
#line 768 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3711 "src/parser.tab.c"
    break;

  case 148: /* class_permits: "permits" type_name com_type_name.multiopt  */
#line 771 "src/parser.y"
                                                                {(yyval.i)=createNode("class_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3717 "src/parser.tab.c"
    break;

  case 149: /* class_body: "{" class_body_declaration.multiopt "}"  */
#line 774 "src/parser.y"
                                                                        {(yyval.i)=createNode("class_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3723 "src/parser.tab.c"
    break;

  case 150: /* class_body_declaration.multiopt: class_body_declaration.multiopt class_body_declaration  */
#line 777 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3729 "src/parser.tab.c"
    break;

  case 151: /* class_body_declaration.multiopt: %empty  */
#line 778 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3735 "src/parser.tab.c"
    break;

  case 152: /* class_body_declaration: class_member_declaration  */
#line 781 "src/parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3741 "src/parser.tab.c"
    break;

  case 153: /* class_body_declaration: instance_initializer  */
#line 782 "src/parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3747 "src/parser.tab.c"
    break;

  case 154: /* class_body_declaration: static_initializer  */
#line 783 "src/parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3753 "src/parser.tab.c"
    break;

  case 155: /* class_body_declaration: constructor_declaration  */
#line 784 "src/parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3759 "src/parser.tab.c"
    break;

  case 156: /* class_member_declaration: field_declaration  */
#line 787 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3765 "src/parser.tab.c"
    break;

  case 157: /* class_member_declaration: method_declaration  */
#line 788 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3771 "src/parser.tab.c"
    break;

  case 158: /* class_member_declaration: class_declaration  */
#line 789 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3777 "src/parser.tab.c"
    break;

  case 159: /* class_member_declaration: interface_declaration  */
#line 790 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3783 "src/parser.tab.c"
    break;

  case 160: /* field_declaration: modifier.multiopt unann_type variable_declarator_list ";"  */
#line 793 "src/parser.y"
                                                                                {(yyval.i)=createNode("field_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3789 "src/parser.tab.c"
    break;

  case 161: /* variable_declarator_list: variable_declarator com_variable_declarator.multiopt  */
#line 796 "src/parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3795 "src/parser.tab.c"
    break;

  case 162: /* com_variable_declarator.multiopt: com_variable_declarator.multiopt "," variable_declarator  */
#line 799 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_variable_declarator.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3801 "src/parser.tab.c"
    break;

  case 163: /* com_variable_declarator.multiopt: %empty  */
#line 800 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3807 "src/parser.tab.c"
    break;

  case 164: /* variable_declarator: variable_declarator_id eq_variable_initializer.opt  */
#line 803 "src/parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3813 "src/parser.tab.c"
    break;

  case 165: /* eq_variable_initializer.opt: "=" variable_initializer  */
#line 806 "src/parser.y"
                                                {(yyval.i)=createNode("eq_variable_initializer.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3819 "src/parser.tab.c"
    break;

  case 166: /* eq_variable_initializer.opt: %empty  */
#line 807 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3825 "src/parser.tab.c"
    break;

  case 167: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 810 "src/parser.y"
                                                {(yyval.i)=createNode("variable_declarator_id");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3831 "src/parser.tab.c"
    break;

  case 168: /* dims.opt: dims  */
#line 813 "src/parser.y"
                        {(yyval.i)=createNode("dims.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3837 "src/parser.tab.c"
    break;

  case 169: /* dims.opt: %empty  */
#line 814 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3843 "src/parser.tab.c"
    break;

  case 170: /* variable_initializer: expression  */
#line 817 "src/parser.y"
                                {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3849 "src/parser.tab.c"
    break;

  case 171: /* variable_initializer: array_initializer  */
#line 818 "src/parser.y"
                                        {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3855 "src/parser.tab.c"
    break;

  case 172: /* unann_type: unann_primitive_type  */
#line 821 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3861 "src/parser.tab.c"
    break;

  case 173: /* unann_type: unann_reference_type  */
#line 822 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3867 "src/parser.tab.c"
    break;

  case 174: /* unann_primitive_type: numeric_type  */
#line 825 "src/parser.y"
                                {(yyval.i)=createNode("unann_primitive_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3873 "src/parser.tab.c"
    break;

  case 175: /* unann_primitive_type: "boolean"  */
#line 826 "src/parser.y"
                                {(yyval.i)=createNode("unann_primitive_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3879 "src/parser.tab.c"
    break;

  case 176: /* unann_reference_type: unann_class_or_interface_type  */
#line 829 "src/parser.y"
                                                {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3885 "src/parser.tab.c"
    break;

  case 177: /* unann_reference_type: unann_type_variable  */
#line 830 "src/parser.y"
                                        {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3891 "src/parser.tab.c"
    break;

  case 178: /* unann_reference_type: unann_array_type  */
#line 831 "src/parser.y"
                                        {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3897 "src/parser.tab.c"
    break;

  case 179: /* unann_class_or_interface_type: unann_class_type  */
#line 834 "src/parser.y"
                                        {(yyval.i)=createNode("unann_class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3903 "src/parser.tab.c"
    break;

  case 180: /* unann_class_or_interface_type: unann_interface_type  */
#line 835 "src/parser.y"
                                        {(yyval.i)=createNode("unann_class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3909 "src/parser.tab.c"
    break;

  case 181: /* unann_class_type: type_IDENTIFIER type_arguments.opt  */
#line 838 "src/parser.y"
                                                        {(yyval.i)=createNode("unann_class_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3915 "src/parser.tab.c"
    break;

  case 182: /* unann_class_type: package_name "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 839 "src/parser.y"
                                                                                                {(yyval.i)=createNode("unann_class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3921 "src/parser.tab.c"
    break;

  case 183: /* unann_class_type: unann_class_or_interface_type "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 840 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("unann_class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3927 "src/parser.tab.c"
    break;

  case 184: /* type_arguments.opt: type_arguments  */
#line 843 "src/parser.y"
                                        {(yyval.i)=createNode("type_arguments.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3933 "src/parser.tab.c"
    break;

  case 185: /* type_arguments.opt: %empty  */
#line 844 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3939 "src/parser.tab.c"
    break;

  case 186: /* unann_interface_type: unann_class_type  */
#line 847 "src/parser.y"
                                        {(yyval.i)=createNode("unann_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3945 "src/parser.tab.c"
    break;

  case 187: /* unann_type_variable: type_IDENTIFIER  */
#line 850 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type_variable");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3951 "src/parser.tab.c"
    break;

  case 188: /* unann_array_type: unann_primitive_type dims  */
#line 853 "src/parser.y"
                                                {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3957 "src/parser.tab.c"
    break;

  case 189: /* unann_array_type: unann_class_or_interface_type dims  */
#line 854 "src/parser.y"
                                                        {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3963 "src/parser.tab.c"
    break;

  case 190: /* unann_array_type: unann_type_variable dims  */
#line 855 "src/parser.y"
                                                {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3969 "src/parser.tab.c"
    break;

  case 191: /* method_declaration: modifier.multiopt method_header method_body  */
#line 858 "src/parser.y"
                                                                {(yyval.i)=createNode("method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3975 "src/parser.tab.c"
    break;

  case 192: /* method_header: result method_declarator throws.opt  */
#line 861 "src/parser.y"
                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3981 "src/parser.tab.c"
    break;

  case 193: /* method_header: type_parameters annotation.multiopt result method_declarator throws.opt  */
#line 862 "src/parser.y"
                                                                                                {(yyval.i)=createNode("method_header");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3987 "src/parser.tab.c"
    break;

  case 194: /* throws.opt: throws  */
#line 865 "src/parser.y"
                                {(yyval.i)=createNode("throws.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3993 "src/parser.tab.c"
    break;

  case 195: /* throws.opt: %empty  */
#line 866 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3999 "src/parser.tab.c"
    break;

  case 196: /* result: unann_type  */
#line 869 "src/parser.y"
                                {(yyval.i)=createNode("result");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4005 "src/parser.tab.c"
    break;

  case 197: /* result: "void"  */
#line 870 "src/parser.y"
                                {(yyval.i)=createNode("result");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4011 "src/parser.tab.c"
    break;

  case 198: /* method_declarator: TOK_IDENTIFIER "(" receiver_parameter_com.opt formal_parameter_list.opt ")" dims.opt  */
#line 873 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("method_declarator");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4017 "src/parser.tab.c"
    break;

  case 199: /* receiver_parameter_com.opt: receiver_parameter ","  */
#line 876 "src/parser.y"
                                                {(yyval.i)=createNode("receiver_parameter_com.opt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4023 "src/parser.tab.c"
    break;

  case 200: /* receiver_parameter_com.opt: %empty  */
#line 877 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4029 "src/parser.tab.c"
    break;

  case 201: /* formal_parameter_list.opt: formal_parameter_list  */
#line 880 "src/parser.y"
                                        {(yyval.i)=createNode("formal_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4035 "src/parser.tab.c"
    break;

  case 202: /* formal_parameter_list.opt: %empty  */
#line 881 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4041 "src/parser.tab.c"
    break;

  case 203: /* receiver_parameter: annotation.multiopt unann_type IDENTIFIER_dot.opt "this"  */
#line 884 "src/parser.y"
                                                                                {(yyval.i)=createNode("receiver_parameter");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4047 "src/parser.tab.c"
    break;

  case 204: /* IDENTIFIER_dot.opt: TOK_IDENTIFIER "."  */
#line 887 "src/parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER_dot.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4053 "src/parser.tab.c"
    break;

  case 205: /* IDENTIFIER_dot.opt: %empty  */
#line 888 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4059 "src/parser.tab.c"
    break;

  case 206: /* formal_parameter_list: formal_parameter com_formal_parameter.multiopt  */
#line 891 "src/parser.y"
                                                                        {(yyval.i)=createNode("formal_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4065 "src/parser.tab.c"
    break;

  case 207: /* com_formal_parameter.multiopt: com_formal_parameter.multiopt "," formal_parameter  */
#line 894 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_formal_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4071 "src/parser.tab.c"
    break;

  case 208: /* com_formal_parameter.multiopt: %empty  */
#line 895 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4077 "src/parser.tab.c"
    break;

  case 209: /* formal_parameter: variable_modifier.multiopt unann_type variable_declarator_id  */
#line 898 "src/parser.y"
                                                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4083 "src/parser.tab.c"
    break;

  case 210: /* formal_parameter: variable_arity_parameter  */
#line 899 "src/parser.y"
                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4089 "src/parser.tab.c"
    break;

  case 211: /* variable_modifier.multiopt: variable_modifier.multiopt variable_modifier  */
#line 902 "src/parser.y"
                                                                {(yyval.i)=createNode("variable_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4095 "src/parser.tab.c"
    break;

  case 212: /* variable_modifier.multiopt: %empty  */
#line 903 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4101 "src/parser.tab.c"
    break;

  case 213: /* variable_arity_parameter: variable_modifier.multiopt unann_type annotation.multiopt "..." TOK_IDENTIFIER  */
#line 906 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("variable_arity_parameter");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4107 "src/parser.tab.c"
    break;

  case 214: /* variable_modifier: annotation  */
#line 909 "src/parser.y"
                                {(yyval.i)=createNode("variable_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4113 "src/parser.tab.c"
    break;

  case 215: /* variable_modifier: "final"  */
#line 910 "src/parser.y"
                                {(yyval.i)=createNode("variable_modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4119 "src/parser.tab.c"
    break;

  case 216: /* throws: "throws" exception_type_list  */
#line 913 "src/parser.y"
                                                        {(yyval.i)=createNode("throws");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4125 "src/parser.tab.c"
    break;

  case 217: /* exception_type_list: exception_type com_exception_type.multiopt  */
#line 916 "src/parser.y"
                                                                {(yyval.i)=createNode("exception_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4131 "src/parser.tab.c"
    break;

  case 218: /* com_exception_type.multiopt: com_exception_type.multiopt "," exception_type  */
#line 919 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_exception_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4137 "src/parser.tab.c"
    break;

  case 219: /* com_exception_type.multiopt: %empty  */
#line 920 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4143 "src/parser.tab.c"
    break;

  case 220: /* exception_type: class_type  */
#line 923 "src/parser.y"
                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4149 "src/parser.tab.c"
    break;

  case 221: /* exception_type: type_variable  */
#line 924 "src/parser.y"
                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4155 "src/parser.tab.c"
    break;

  case 222: /* method_body: block  */
#line 927 "src/parser.y"
                        {(yyval.i)=createNode("method_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4161 "src/parser.tab.c"
    break;

  case 223: /* method_body: ";"  */
#line 928 "src/parser.y"
                                {(yyval.i)=createNode("method_body");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4167 "src/parser.tab.c"
    break;

  case 224: /* instance_initializer: block  */
#line 931 "src/parser.y"
                        {(yyval.i)=createNode("instance_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4173 "src/parser.tab.c"
    break;

  case 225: /* static_initializer: "static" block  */
#line 934 "src/parser.y"
                                        {(yyval.i)=createNode("static_initializer");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4179 "src/parser.tab.c"
    break;

  case 226: /* constructor_declaration: modifier.multiopt constructor_declarator throws.opt constructor_body  */
#line 937 "src/parser.y"
                                                                                        {(yyval.i)=createNode("constructor_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4185 "src/parser.tab.c"
    break;

  case 227: /* constructor_declarator: type_parameters.opt simple_type_name "(" receiver_parameter_com.opt formal_parameter_list.opt ")"  */
#line 940 "src/parser.y"
                                                                                                                                {(yyval.i)=createNode("constructor_declarator");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4191 "src/parser.tab.c"
    break;

  case 228: /* simple_type_name: type_IDENTIFIER  */
#line 943 "src/parser.y"
                                        {(yyval.i)=createNode("simple_type_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4197 "src/parser.tab.c"
    break;

  case 229: /* constructor_body: "{" explicit_constructor_invocation.opt block_statements.opt "}"  */
#line 946 "src/parser.y"
                                                                                                {(yyval.i)=createNode("constructor_body");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4203 "src/parser.tab.c"
    break;

  case 230: /* explicit_constructor_invocation.opt: explicit_constructor_invocation  */
#line 949 "src/parser.y"
                                                        {(yyval.i)=createNode("explicit_constructor_invocation.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4209 "src/parser.tab.c"
    break;

  case 231: /* explicit_constructor_invocation.opt: %empty  */
#line 950 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4215 "src/parser.tab.c"
    break;

  case 232: /* block_statements.opt: block_statements  */
#line 953 "src/parser.y"
                                        {(yyval.i)=createNode("block_statements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4221 "src/parser.tab.c"
    break;

  case 233: /* block_statements.opt: %empty  */
#line 954 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4227 "src/parser.tab.c"
    break;

  case 234: /* explicit_constructor_invocation: type_arguments.opt "this" "(" argument_list.opt ")" ";"  */
#line 957 "src/parser.y"
                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4233 "src/parser.tab.c"
    break;

  case 235: /* explicit_constructor_invocation: type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 958 "src/parser.y"
                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4239 "src/parser.tab.c"
    break;

  case 236: /* explicit_constructor_invocation: expression_name "." type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 959 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4245 "src/parser.tab.c"
    break;

  case 237: /* explicit_constructor_invocation: primary "." type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 960 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4251 "src/parser.tab.c"
    break;

  case 238: /* argument_list.opt: argument_list  */
#line 963 "src/parser.y"
                                {(yyval.i)=createNode("argument_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4257 "src/parser.tab.c"
    break;

  case 239: /* argument_list.opt: %empty  */
#line 964 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4263 "src/parser.tab.c"
    break;

  case 240: /* enum_declaration: modifier.multiopt "enum" type_IDENTIFIER class_implements.opt enum_body  */
#line 967 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enum_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4269 "src/parser.tab.c"
    break;

  case 241: /* enum_body: "{" enum_constant_list.opt com.opt enum_body_declarations.opt "}"  */
#line 970 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enum_body");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4275 "src/parser.tab.c"
    break;

  case 242: /* com.opt: ","  */
#line 973 "src/parser.y"
                                {(yyval.i)=createNode("com.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4281 "src/parser.tab.c"
    break;

  case 243: /* com.opt: %empty  */
#line 974 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4287 "src/parser.tab.c"
    break;

  case 244: /* enum_body_declarations.opt: enum_body_declarations  */
#line 977 "src/parser.y"
                                                {(yyval.i)=createNode("enum_body_declarations.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4293 "src/parser.tab.c"
    break;

  case 245: /* enum_body_declarations.opt: %empty  */
#line 978 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4299 "src/parser.tab.c"
    break;

  case 246: /* enum_constant_list.opt: enum_constant_list  */
#line 981 "src/parser.y"
                                        {(yyval.i)=createNode("enum_constant_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4305 "src/parser.tab.c"
    break;

  case 247: /* enum_constant_list.opt: %empty  */
#line 982 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4311 "src/parser.tab.c"
    break;

  case 248: /* enum_constant_list: enum_constant com_enum_constant.multiopt  */
#line 985 "src/parser.y"
                                                                {(yyval.i)=createNode("enum_constant_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4317 "src/parser.tab.c"
    break;

  case 249: /* com_enum_constant.multiopt: com_enum_constant.multiopt "," enum_constant  */
#line 988 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_enum_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4323 "src/parser.tab.c"
    break;

  case 250: /* com_enum_constant.multiopt: %empty  */
#line 989 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4329 "src/parser.tab.c"
    break;

  case 251: /* enum_constant: enum_modifier.multiopt TOK_IDENTIFIER "[" "(" argument_list.opt ")" "]" class_body.opt  */
#line 992 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("enum_constant");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4335 "src/parser.tab.c"
    break;

  case 252: /* enum_modifier.multiopt: enum_modifier.multiopt enum_modifier  */
#line 995 "src/parser.y"
                                                        {(yyval.i)=createNode("enum_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4341 "src/parser.tab.c"
    break;

  case 253: /* enum_modifier.multiopt: %empty  */
#line 996 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4347 "src/parser.tab.c"
    break;

  case 254: /* class_body.opt: class_body  */
#line 999 "src/parser.y"
                                {(yyval.i)=createNode("class_body.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4353 "src/parser.tab.c"
    break;

  case 255: /* class_body.opt: %empty  */
#line 1000 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4359 "src/parser.tab.c"
    break;

  case 256: /* enum_modifier: annotation  */
#line 1003 "src/parser.y"
                                {(yyval.i)=createNode("enum_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4365 "src/parser.tab.c"
    break;

  case 257: /* enum_body_declarations: ";" class_body_declaration.multiopt  */
#line 1006 "src/parser.y"
                                                                {(yyval.i)=createNode("enum_body_declarations");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4371 "src/parser.tab.c"
    break;

  case 258: /* record_declaration: modifier.multiopt "record" type_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body  */
#line 1009 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("record_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4377 "src/parser.tab.c"
    break;

  case 259: /* record_header: "(" record_component_list.opt ")"  */
#line 1012 "src/parser.y"
                                                                {(yyval.i)=createNode("record_header");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4383 "src/parser.tab.c"
    break;

  case 260: /* record_component_list.opt: record_component_list  */
#line 1015 "src/parser.y"
                                        {(yyval.i)=createNode("record_component_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4389 "src/parser.tab.c"
    break;

  case 261: /* record_component_list.opt: %empty  */
#line 1016 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4395 "src/parser.tab.c"
    break;

  case 262: /* record_component_list: record_component com_record_component.multiopt  */
#line 1019 "src/parser.y"
                                                                        {(yyval.i)=createNode("record_component_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4401 "src/parser.tab.c"
    break;

  case 263: /* com_record_component.multiopt: com_record_component.multiopt "," record_component  */
#line 1022 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_record_component.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4407 "src/parser.tab.c"
    break;

  case 264: /* com_record_component.multiopt: %empty  */
#line 1023 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4413 "src/parser.tab.c"
    break;

  case 265: /* record_component: record_component_modifier.multiopt unann_type TOK_IDENTIFIER  */
#line 1027 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_component");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4419 "src/parser.tab.c"
    break;

  case 266: /* record_component: variable_arity_record_component  */
#line 1028 "src/parser.y"
                                                        {(yyval.i)=createNode("record_component");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4425 "src/parser.tab.c"
    break;

  case 267: /* record_component_modifier.multiopt: record_component_modifier.multiopt record_component_modifier  */
#line 1031 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_component_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4431 "src/parser.tab.c"
    break;

  case 268: /* record_component_modifier.multiopt: %empty  */
#line 1032 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4437 "src/parser.tab.c"
    break;

  case 269: /* variable_arity_record_component: record_component_modifier.multiopt unann_type annotation.multiopt "..." TOK_IDENTIFIER  */
#line 1035 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("variable_arity_record_component");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4443 "src/parser.tab.c"
    break;

  case 270: /* record_component_modifier: annotation  */
#line 1038 "src/parser.y"
                                {(yyval.i)=createNode("record_component_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4449 "src/parser.tab.c"
    break;

  case 271: /* record_body: "{" record_body_declaration.multiopt "}"  */
#line 1041 "src/parser.y"
                                                                        {(yyval.i)=createNode("record_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4455 "src/parser.tab.c"
    break;

  case 272: /* record_body_declaration.multiopt: record_body_declaration.multiopt record_body_declaration  */
#line 1044 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4461 "src/parser.tab.c"
    break;

  case 273: /* record_body_declaration.multiopt: %empty  */
#line 1045 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4467 "src/parser.tab.c"
    break;

  case 274: /* record_body_declaration: class_body_declaration  */
#line 1048 "src/parser.y"
                                                {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4473 "src/parser.tab.c"
    break;

  case 275: /* record_body_declaration: compact_constructor_declaration  */
#line 1049 "src/parser.y"
                                                        {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4479 "src/parser.tab.c"
    break;

  case 276: /* compact_constructor_declaration: modifier.multiopt simple_type_name constructor_body  */
#line 1052 "src/parser.y"
                                                                        {(yyval.i)=createNode("compact_constructor_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4485 "src/parser.tab.c"
    break;

  case 277: /* interface_declaration: normal_interface_declaration  */
#line 1058 "src/parser.y"
                                                {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4491 "src/parser.tab.c"
    break;

  case 278: /* interface_declaration: annotation_interface_declaration  */
#line 1059 "src/parser.y"
                                                        {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4497 "src/parser.tab.c"
    break;

  case 279: /* normal_interface_declaration: modifier.multiopt "interface" type_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body  */
#line 1062 "src/parser.y"
                                                                                                                                                        {(yyval.i)=createNode("normal_interface_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4503 "src/parser.tab.c"
    break;

  case 280: /* interface_extends.opt: interface_extends  */
#line 1065 "src/parser.y"
                                        {(yyval.i)=createNode("interface_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4509 "src/parser.tab.c"
    break;

  case 281: /* interface_extends.opt: %empty  */
#line 1066 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4515 "src/parser.tab.c"
    break;

  case 282: /* interface_permits.opt: interface_permits  */
#line 1069 "src/parser.y"
                                        {(yyval.i)=createNode("interface_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4521 "src/parser.tab.c"
    break;

  case 283: /* interface_permits.opt: %empty  */
#line 1070 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4527 "src/parser.tab.c"
    break;

  case 284: /* interface_extends: "extends" interface_type_list  */
#line 1073 "src/parser.y"
                                                        {(yyval.i)=createNode("interface_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4533 "src/parser.tab.c"
    break;

  case 285: /* interface_permits: "permits" type_name com_type_name.multiopt  */
#line 1076 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4539 "src/parser.tab.c"
    break;

  case 286: /* interface_body: "{" interface_member_declaration.multiopt "}"  */
#line 1079 "src/parser.y"
                                                                        {(yyval.i)=createNode("interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4545 "src/parser.tab.c"
    break;

  case 287: /* interface_member_declaration.multiopt: interface_member_declaration.multiopt interface_member_declaration  */
#line 1082 "src/parser.y"
                                                                                        {(yyval.i)=createNode("interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4551 "src/parser.tab.c"
    break;

  case 288: /* interface_member_declaration.multiopt: %empty  */
#line 1083 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4557 "src/parser.tab.c"
    break;

  case 289: /* interface_member_declaration: constant_declaration  */
#line 1086 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4563 "src/parser.tab.c"
    break;

  case 290: /* interface_member_declaration: interface_method_declaration  */
#line 1087 "src/parser.y"
                                                {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4569 "src/parser.tab.c"
    break;

  case 291: /* interface_member_declaration: class_declaration  */
#line 1088 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4575 "src/parser.tab.c"
    break;

  case 292: /* interface_member_declaration: interface_declaration  */
#line 1089 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4581 "src/parser.tab.c"
    break;

  case 293: /* interface_member_declaration: ";"  */
#line 1090 "src/parser.y"
                                {(yyval.i)=createNode("interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4587 "src/parser.tab.c"
    break;

  case 294: /* constant_declaration: modifier.multiopt unann_type variable_declarator_list ";"  */
#line 1093 "src/parser.y"
                                                                                {(yyval.i)=createNode("constant_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4593 "src/parser.tab.c"
    break;

  case 295: /* interface_method_declaration: modifier.multiopt method_header method_body  */
#line 1096 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4599 "src/parser.tab.c"
    break;

  case 296: /* annotation_interface_declaration: modifier.multiopt "@" "interface" type_IDENTIFIER annotation_interface_body  */
#line 1099 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("annotation_interface_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4605 "src/parser.tab.c"
    break;

  case 297: /* annotation_interface_body: "{" annotation_interface_member_declaration.multiopt "}"  */
#line 1102 "src/parser.y"
                                                                                        {(yyval.i)=createNode("annotation_interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4611 "src/parser.tab.c"
    break;

  case 298: /* annotation_interface_member_declaration.multiopt: annotation_interface_member_declaration.multiopt annotation_interface_member_declaration  */
#line 1105 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("annotation_interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4617 "src/parser.tab.c"
    break;

  case 299: /* annotation_interface_member_declaration.multiopt: %empty  */
#line 1106 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4623 "src/parser.tab.c"
    break;

  case 300: /* annotation_interface_member_declaration: annotation_interface_element_declaration  */
#line 1109 "src/parser.y"
                                                                {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4629 "src/parser.tab.c"
    break;

  case 301: /* annotation_interface_member_declaration: constant_declaration  */
#line 1110 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4635 "src/parser.tab.c"
    break;

  case 302: /* annotation_interface_member_declaration: class_declaration  */
#line 1111 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4641 "src/parser.tab.c"
    break;

  case 303: /* annotation_interface_member_declaration: interface_declaration  */
#line 1112 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4647 "src/parser.tab.c"
    break;

  case 304: /* annotation_interface_member_declaration: ";"  */
#line 1113 "src/parser.y"
                                {(yyval.i)=createNode("annotation_interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4653 "src/parser.tab.c"
    break;

  case 305: /* annotation_interface_element_declaration: modifier.multiopt unann_type TOK_IDENTIFIER "(" ")" dims.opt default_value.opt ";"  */
#line 1116 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("annotation_interface_element_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4659 "src/parser.tab.c"
    break;

  case 306: /* default_value.opt: default_value  */
#line 1119 "src/parser.y"
                                {(yyval.i)=createNode("default_value.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4665 "src/parser.tab.c"
    break;

  case 307: /* default_value.opt: %empty  */
#line 1120 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4671 "src/parser.tab.c"
    break;

  case 308: /* default_value: "default" element_value  */
#line 1123 "src/parser.y"
                                                {(yyval.i)=createNode("default_value");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4677 "src/parser.tab.c"
    break;

  case 309: /* annotation: normal_annotation  */
#line 1126 "src/parser.y"
                                        {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4683 "src/parser.tab.c"
    break;

  case 310: /* annotation: marker_annotation  */
#line 1127 "src/parser.y"
                                        {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4689 "src/parser.tab.c"
    break;

  case 311: /* annotation: single_element_annotation  */
#line 1128 "src/parser.y"
                                                {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4695 "src/parser.tab.c"
    break;

  case 312: /* normal_annotation: "@" type_name "(" element_value_pair_list.opt ")"  */
#line 1131 "src/parser.y"
                                                                                {(yyval.i)=createNode("normal_annotation");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4701 "src/parser.tab.c"
    break;

  case 313: /* element_value_pair_list.opt: element_value_pair_list  */
#line 1134 "src/parser.y"
                                                {(yyval.i)=createNode("element_value_pair_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4707 "src/parser.tab.c"
    break;

  case 314: /* element_value_pair_list.opt: %empty  */
#line 1135 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4713 "src/parser.tab.c"
    break;

  case 315: /* element_value_pair_list: element_value_pair com_element_value_pair.multiopt  */
#line 1138 "src/parser.y"
                                                                        {(yyval.i)=createNode("element_value_pair_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4719 "src/parser.tab.c"
    break;

  case 316: /* com_element_value_pair.multiopt: com_element_value_pair.multiopt "," element_value_pair  */
#line 1141 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_element_value_pair.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4725 "src/parser.tab.c"
    break;

  case 317: /* com_element_value_pair.multiopt: %empty  */
#line 1142 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4731 "src/parser.tab.c"
    break;

  case 318: /* element_value_pair: TOK_IDENTIFIER "=" element_value  */
#line 1145 "src/parser.y"
                                                        {(yyval.i)=createNode("element_value_pair");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4737 "src/parser.tab.c"
    break;

  case 319: /* element_value: conditional_expression  */
#line 1148 "src/parser.y"
                                                {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4743 "src/parser.tab.c"
    break;

  case 320: /* element_value: element_value_array_initializer  */
#line 1149 "src/parser.y"
                                                        {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4749 "src/parser.tab.c"
    break;

  case 321: /* element_value: annotation  */
#line 1150 "src/parser.y"
                                {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4755 "src/parser.tab.c"
    break;

  case 322: /* element_value_array_initializer: "{" element_valueList.opt com.opt "}"  */
#line 1153 "src/parser.y"
                                                                {(yyval.i)=createNode("element_value_array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4761 "src/parser.tab.c"
    break;

  case 323: /* element_valueList.opt: element_valueList  */
#line 1156 "src/parser.y"
                                        {(yyval.i)=createNode("element_valueList.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4767 "src/parser.tab.c"
    break;

  case 324: /* element_valueList.opt: %empty  */
#line 1157 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4773 "src/parser.tab.c"
    break;

  case 325: /* element_valueList: element_value com_element_value.multiopt  */
#line 1160 "src/parser.y"
                                                                {(yyval.i)=createNode("element_valueList");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4779 "src/parser.tab.c"
    break;

  case 326: /* com_element_value.multiopt: com_element_value.multiopt "," element_value  */
#line 1163 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_element_value.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4785 "src/parser.tab.c"
    break;

  case 327: /* com_element_value.multiopt: %empty  */
#line 1164 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4791 "src/parser.tab.c"
    break;

  case 328: /* marker_annotation: "@" type_name  */
#line 1167 "src/parser.y"
                                        {(yyval.i)=createNode("marker_annotation");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4797 "src/parser.tab.c"
    break;

  case 329: /* single_element_annotation: "@" type_name "(" element_value ")"  */
#line 1170 "src/parser.y"
                                                                {(yyval.i)=createNode("single_element_annotation");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4803 "src/parser.tab.c"
    break;

  case 330: /* annotation.multiopt: annotation.multiopt annotation  */
#line 1173 "src/parser.y"
                                                        {(yyval.i)=createNode("annotation.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4809 "src/parser.tab.c"
    break;

  case 331: /* annotation.multiopt: %empty  */
#line 1174 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4815 "src/parser.tab.c"
    break;

  case 332: /* array_initializer: "{" variable_initializer_list.opt com.opt "}"  */
#line 1178 "src/parser.y"
                                                                        {(yyval.i)=createNode("array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4821 "src/parser.tab.c"
    break;

  case 333: /* variable_initializer_list.opt: variable_initializer_list  */
#line 1181 "src/parser.y"
                                                {(yyval.i)=createNode("variable_initializer_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4827 "src/parser.tab.c"
    break;

  case 334: /* variable_initializer_list.opt: %empty  */
#line 1182 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4833 "src/parser.tab.c"
    break;

  case 335: /* variable_initializer_list: variable_initializer com_variable_initializer.multiopt  */
#line 1185 "src/parser.y"
                                                                                {(yyval.i)=createNode("variable_initializer_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4839 "src/parser.tab.c"
    break;

  case 336: /* com_variable_initializer.multiopt: com_variable_initializer.multiopt "," variable_initializer  */
#line 1188 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_variable_initializer.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4845 "src/parser.tab.c"
    break;

  case 337: /* com_variable_initializer.multiopt: %empty  */
#line 1189 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4851 "src/parser.tab.c"
    break;

  case 338: /* block: "{" block_statements.opt "}"  */
#line 1194 "src/parser.y"
                                                        {(yyval.i)=createNode("block");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4857 "src/parser.tab.c"
    break;

  case 339: /* block_statements: block_statement block_statement.multiopt  */
#line 1197 "src/parser.y"
                                                                {(yyval.i)=createNode("block_statements");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4863 "src/parser.tab.c"
    break;

  case 340: /* block_statement.multiopt: block_statement.multiopt block_statement  */
#line 1200 "src/parser.y"
                                                                {(yyval.i)=createNode("block_statement.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4869 "src/parser.tab.c"
    break;

  case 341: /* block_statement.multiopt: %empty  */
#line 1201 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4875 "src/parser.tab.c"
    break;

  case 342: /* block_statement: local_class_or_interface_declaration  */
#line 1204 "src/parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4881 "src/parser.tab.c"
    break;

  case 343: /* block_statement: local_variable_declaration_statement  */
#line 1205 "src/parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4887 "src/parser.tab.c"
    break;

  case 344: /* block_statement: statement  */
#line 1206 "src/parser.y"
                                {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4893 "src/parser.tab.c"
    break;

  case 345: /* local_class_or_interface_declaration: class_declaration  */
#line 1209 "src/parser.y"
                                        {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4899 "src/parser.tab.c"
    break;

  case 346: /* local_class_or_interface_declaration: normal_interface_declaration  */
#line 1210 "src/parser.y"
                                                {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4905 "src/parser.tab.c"
    break;

  case 347: /* local_variable_declaration_statement: local_variable_declaration ";"  */
#line 1213 "src/parser.y"
                                                        {(yyval.i)=createNode("local_variable_declaration_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4911 "src/parser.tab.c"
    break;

  case 348: /* local_variable_declaration: variable_modifier.multiopt local_variable_type variable_declarator_list  */
#line 1216 "src/parser.y"
                                                                                                {(yyval.i)=createNode("local_variable_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4917 "src/parser.tab.c"
    break;

  case 349: /* local_variable_type: unann_type  */
#line 1219 "src/parser.y"
                                {(yyval.i)=createNode("local_variable_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4923 "src/parser.tab.c"
    break;

  case 350: /* local_variable_type: "var"  */
#line 1220 "src/parser.y"
                                {(yyval.i)=createNode("local_variable_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4929 "src/parser.tab.c"
    break;

  case 351: /* statement: statement_without_trailing_substatement  */
#line 1223 "src/parser.y"
                                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4935 "src/parser.tab.c"
    break;

  case 352: /* statement: labeled_statement  */
#line 1224 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4941 "src/parser.tab.c"
    break;

  case 353: /* statement: if_then_statement  */
#line 1225 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4947 "src/parser.tab.c"
    break;

  case 354: /* statement: if_then_else_statement  */
#line 1226 "src/parser.y"
                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4953 "src/parser.tab.c"
    break;

  case 355: /* statement: while_statement  */
#line 1227 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4959 "src/parser.tab.c"
    break;

  case 356: /* statement: for_statement  */
#line 1228 "src/parser.y"
                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4965 "src/parser.tab.c"
    break;

  case 357: /* statement_no_short_if: statement_without_trailing_substatement  */
#line 1231 "src/parser.y"
                                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4971 "src/parser.tab.c"
    break;

  case 358: /* statement_no_short_if: labeled_statement_no_short_if  */
#line 1232 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4977 "src/parser.tab.c"
    break;

  case 359: /* statement_no_short_if: if_then_else_statement_no_short_if  */
#line 1233 "src/parser.y"
                                                        {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4983 "src/parser.tab.c"
    break;

  case 360: /* statement_no_short_if: while_statement_no_short_if  */
#line 1234 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4989 "src/parser.tab.c"
    break;

  case 361: /* statement_no_short_if: for_statement_no_short_if  */
#line 1235 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4995 "src/parser.tab.c"
    break;

  case 362: /* statement_without_trailing_substatement: block  */
#line 1238 "src/parser.y"
                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5001 "src/parser.tab.c"
    break;

  case 363: /* statement_without_trailing_substatement: empty_statement  */
#line 1239 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5007 "src/parser.tab.c"
    break;

  case 364: /* statement_without_trailing_substatement: expression_statement  */
#line 1240 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5013 "src/parser.tab.c"
    break;

  case 365: /* statement_without_trailing_substatement: assert_statement  */
#line 1241 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5019 "src/parser.tab.c"
    break;

  case 366: /* statement_without_trailing_substatement: switch_statement  */
#line 1242 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5025 "src/parser.tab.c"
    break;

  case 367: /* statement_without_trailing_substatement: do_statement  */
#line 1243 "src/parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5031 "src/parser.tab.c"
    break;

  case 368: /* statement_without_trailing_substatement: break_statement  */
#line 1244 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5037 "src/parser.tab.c"
    break;

  case 369: /* statement_without_trailing_substatement: continue_statement  */
#line 1245 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5043 "src/parser.tab.c"
    break;

  case 370: /* statement_without_trailing_substatement: return_statement  */
#line 1246 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5049 "src/parser.tab.c"
    break;

  case 371: /* statement_without_trailing_substatement: synchronized_statement  */
#line 1247 "src/parser.y"
                                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5055 "src/parser.tab.c"
    break;

  case 372: /* statement_without_trailing_substatement: throw_statement  */
#line 1248 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5061 "src/parser.tab.c"
    break;

  case 373: /* statement_without_trailing_substatement: try_statement  */
#line 1249 "src/parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5067 "src/parser.tab.c"
    break;

  case 374: /* statement_without_trailing_substatement: yield_statement  */
#line 1250 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5073 "src/parser.tab.c"
    break;

  case 375: /* empty_statement: ";"  */
#line 1253 "src/parser.y"
                                {(yyval.i)=createNode("empty_statement");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5079 "src/parser.tab.c"
    break;

  case 376: /* labeled_statement: TOK_IDENTIFIER ":" statement  */
#line 1256 "src/parser.y"
                                                        {(yyval.i)=createNode("labeled_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5085 "src/parser.tab.c"
    break;

  case 377: /* labeled_statement_no_short_if: TOK_IDENTIFIER ":" statement_no_short_if  */
#line 1259 "src/parser.y"
                                                                {(yyval.i)=createNode("labeled_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5091 "src/parser.tab.c"
    break;

  case 378: /* expression_statement: statement_expression ";"  */
#line 1262 "src/parser.y"
                                                {(yyval.i)=createNode("expression_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5097 "src/parser.tab.c"
    break;

  case 379: /* statement_expression: assignment  */
#line 1265 "src/parser.y"
                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5103 "src/parser.tab.c"
    break;

  case 380: /* statement_expression: pre_increment_expression  */
#line 1266 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5109 "src/parser.tab.c"
    break;

  case 381: /* statement_expression: pre_decrement_expression  */
#line 1267 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5115 "src/parser.tab.c"
    break;

  case 382: /* statement_expression: post_increment_expression  */
#line 1268 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5121 "src/parser.tab.c"
    break;

  case 383: /* statement_expression: post_decrement_expression  */
#line 1269 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5127 "src/parser.tab.c"
    break;

  case 384: /* statement_expression: method_invocation  */
#line 1270 "src/parser.y"
                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5133 "src/parser.tab.c"
    break;

  case 385: /* statement_expression: class_instance_creation_expression  */
#line 1271 "src/parser.y"
                                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5139 "src/parser.tab.c"
    break;

  case 386: /* if_then_statement: "if" "(" expression ")" statement  */
#line 1274 "src/parser.y"
                                                                {(yyval.i)=createNode("if_then_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5145 "src/parser.tab.c"
    break;

  case 387: /* if_then_else_statement: "if" "(" expression ")" statement_no_short_if "else" statement  */
#line 1277 "src/parser.y"
                                                                                                {(yyval.i)=createNode("if_then_else_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5151 "src/parser.tab.c"
    break;

  case 388: /* if_then_else_statement_no_short_if: "if" "(" expression ")" statement_no_short_if "else" statement_no_short_if  */
#line 1280 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("if_then_else_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5157 "src/parser.tab.c"
    break;

  case 389: /* assert_statement: "assert" expression ";"  */
#line 1283 "src/parser.y"
                                                {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5163 "src/parser.tab.c"
    break;

  case 390: /* assert_statement: "assert" expression ":" expression ";"  */
#line 1284 "src/parser.y"
                                                                        {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5169 "src/parser.tab.c"
    break;

  case 391: /* switch_statement: "switch" "(" expression ")" switch_block  */
#line 1287 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5175 "src/parser.tab.c"
    break;

  case 392: /* switch_block: "{" switch_rule switch_rule.multiopt ";"  */
#line 1290 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5181 "src/parser.tab.c"
    break;

  case 393: /* switch_block: "{" switch_block_statement_group.multiopt switch_label_col.multiopt "}"  */
#line 1291 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5187 "src/parser.tab.c"
    break;

  case 394: /* switch_rule.multiopt: switch_rule.multiopt switch_rule  */
#line 1294 "src/parser.y"
                                                        {(yyval.i)=createNode("switch_rule.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5193 "src/parser.tab.c"
    break;

  case 395: /* switch_rule.multiopt: %empty  */
#line 1295 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5199 "src/parser.tab.c"
    break;

  case 396: /* switch_block_statement_group.multiopt: switch_block_statement_group.multiopt switch_block_statement_group  */
#line 1298 "src/parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5205 "src/parser.tab.c"
    break;

  case 397: /* switch_block_statement_group.multiopt: %empty  */
#line 1299 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5211 "src/parser.tab.c"
    break;

  case 398: /* switch_label_col.multiopt: switch_label_col.multiopt switch_label ":"  */
#line 1302 "src/parser.y"
                                                                {(yyval.i)=createNode("switch_label_col.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5217 "src/parser.tab.c"
    break;

  case 399: /* switch_label_col.multiopt: %empty  */
#line 1303 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5223 "src/parser.tab.c"
    break;

  case 400: /* switch_rule: switch_label "->" expression ";"  */
#line 1306 "src/parser.y"
                                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5229 "src/parser.tab.c"
    break;

  case 401: /* switch_rule: switch_label "->" block  */
#line 1307 "src/parser.y"
                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5235 "src/parser.tab.c"
    break;

  case 402: /* switch_rule: switch_label "->" throw_statement  */
#line 1308 "src/parser.y"
                                                        {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5241 "src/parser.tab.c"
    break;

  case 403: /* switch_block_statement_group: switch_label ":" switch_label_col.multiopt block_statements  */
#line 1311 "src/parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5247 "src/parser.tab.c"
    break;

  case 404: /* switch_label: "case" case_constant com_case_constant.multiopt  */
#line 1314 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5253 "src/parser.tab.c"
    break;

  case 405: /* switch_label: "default"  */
#line 1315 "src/parser.y"
                                {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5259 "src/parser.tab.c"
    break;

  case 406: /* com_case_constant.multiopt: com_case_constant.multiopt "," case_constant  */
#line 1318 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_case_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5265 "src/parser.tab.c"
    break;

  case 407: /* com_case_constant.multiopt: %empty  */
#line 1319 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5271 "src/parser.tab.c"
    break;

  case 408: /* case_constant: conditional_expression  */
#line 1322 "src/parser.y"
                                                {(yyval.i)=createNode("case_constant");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5277 "src/parser.tab.c"
    break;

  case 409: /* while_statement: "while" "(" expression ")" statement  */
#line 1325 "src/parser.y"
                                                                {(yyval.i)=createNode("while_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5283 "src/parser.tab.c"
    break;

  case 410: /* while_statement_no_short_if: "while" "(" expression ")" statement_no_short_if  */
#line 1328 "src/parser.y"
                                                                                {(yyval.i)=createNode("while_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5289 "src/parser.tab.c"
    break;

  case 411: /* do_statement: "do" statement "while" "(" expression ")" ";"  */
#line 1331 "src/parser.y"
                                                                                {(yyval.i)=createNode("do_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5295 "src/parser.tab.c"
    break;

  case 412: /* for_statement: basic_for_statement  */
#line 1334 "src/parser.y"
                                        {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5301 "src/parser.tab.c"
    break;

  case 413: /* for_statement: enhanced_for_statement  */
#line 1335 "src/parser.y"
                                                {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5307 "src/parser.tab.c"
    break;

  case 414: /* for_statement_no_short_if: basic_for_statement_no_short_if  */
#line 1338 "src/parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5313 "src/parser.tab.c"
    break;

  case 415: /* for_statement_no_short_if: enhanced_for_statement_no_short_if  */
#line 1339 "src/parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5319 "src/parser.tab.c"
    break;

  case 416: /* basic_for_statement: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement  */
#line 1342 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("basic_for_statement");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5325 "src/parser.tab.c"
    break;

  case 417: /* for_init.opt: for_init  */
#line 1345 "src/parser.y"
                                {(yyval.i)=createNode("for_init.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5331 "src/parser.tab.c"
    break;

  case 418: /* for_init.opt: %empty  */
#line 1346 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5337 "src/parser.tab.c"
    break;

  case 419: /* expression.opt: expression  */
#line 1349 "src/parser.y"
                                {(yyval.i)=createNode("expression.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5343 "src/parser.tab.c"
    break;

  case 420: /* expression.opt: %empty  */
#line 1350 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5349 "src/parser.tab.c"
    break;

  case 421: /* for_update.opt: for_update  */
#line 1353 "src/parser.y"
                                {(yyval.i)=createNode("for_update.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5355 "src/parser.tab.c"
    break;

  case 422: /* for_update.opt: %empty  */
#line 1354 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5361 "src/parser.tab.c"
    break;

  case 423: /* basic_for_statement_no_short_if: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement_no_short_if  */
#line 1357 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("basic_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5367 "src/parser.tab.c"
    break;

  case 424: /* for_init: statement_expression_list  */
#line 1360 "src/parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5373 "src/parser.tab.c"
    break;

  case 425: /* for_init: local_variable_declaration  */
#line 1361 "src/parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5379 "src/parser.tab.c"
    break;

  case 426: /* for_update: statement_expression_list  */
#line 1364 "src/parser.y"
                                                {(yyval.i)=createNode("for_update");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5385 "src/parser.tab.c"
    break;

  case 427: /* statement_expression_list: statement_expression com_statement_expression.multiopt  */
#line 1367 "src/parser.y"
                                                                                {(yyval.i)=createNode("statement_expression_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5391 "src/parser.tab.c"
    break;

  case 428: /* com_statement_expression.multiopt: com_statement_expression.multiopt "," statement_expression  */
#line 1370 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_statement_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5397 "src/parser.tab.c"
    break;

  case 429: /* com_statement_expression.multiopt: %empty  */
#line 1371 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5403 "src/parser.tab.c"
    break;

  case 430: /* enhanced_for_statement: "for" "(" local_variable_declaration ":" expression ")" statement  */
#line 1374 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enhanced_for_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5409 "src/parser.tab.c"
    break;

  case 431: /* enhanced_for_statement_no_short_if: "for" "(" local_variable_declaration ":" expression ")" statement_no_short_if  */
#line 1377 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("enhanced_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5415 "src/parser.tab.c"
    break;

  case 432: /* break_statement: "break" IDENTIFIER.opt ";"  */
#line 1380 "src/parser.y"
                                                        {(yyval.i)=createNode("break_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5421 "src/parser.tab.c"
    break;

  case 433: /* IDENTIFIER.opt: TOK_IDENTIFIER  */
#line 1383 "src/parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5427 "src/parser.tab.c"
    break;

  case 434: /* IDENTIFIER.opt: %empty  */
#line 1384 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5433 "src/parser.tab.c"
    break;

  case 435: /* yield_statement: "yield" expression ";"  */
#line 1387 "src/parser.y"
                                                {(yyval.i)=createNode("yield_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5439 "src/parser.tab.c"
    break;

  case 436: /* continue_statement: "continue" IDENTIFIER.opt ";"  */
#line 1390 "src/parser.y"
                                                        {(yyval.i)=createNode("continue_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5445 "src/parser.tab.c"
    break;

  case 437: /* return_statement: "return" expression.opt ";"  */
#line 1393 "src/parser.y"
                                                        {(yyval.i)=createNode("return_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5451 "src/parser.tab.c"
    break;

  case 438: /* throw_statement: "throw" expression ";"  */
#line 1396 "src/parser.y"
                                                {(yyval.i)=createNode("throw_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5457 "src/parser.tab.c"
    break;

  case 439: /* synchronized_statement: "synchronized" "(" expression ")" block  */
#line 1399 "src/parser.y"
                                                                        {(yyval.i)=createNode("synchronized_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5463 "src/parser.tab.c"
    break;

  case 440: /* try_statement: "try" block catches  */
#line 1402 "src/parser.y"
                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5469 "src/parser.tab.c"
    break;

  case 441: /* try_statement: "try" block catches.opt finally  */
#line 1403 "src/parser.y"
                                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5475 "src/parser.tab.c"
    break;

  case 442: /* try_statement: try_with_resources_statement  */
#line 1404 "src/parser.y"
                                                {(yyval.i)=createNode("try_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5481 "src/parser.tab.c"
    break;

  case 443: /* catches.opt: catches  */
#line 1407 "src/parser.y"
                                {(yyval.i)=createNode("catches.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5487 "src/parser.tab.c"
    break;

  case 444: /* catches.opt: %empty  */
#line 1408 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5493 "src/parser.tab.c"
    break;

  case 445: /* catches: catch_clause catch_clause.multiopt  */
#line 1411 "src/parser.y"
                                                        {(yyval.i)=createNode("catches");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5499 "src/parser.tab.c"
    break;

  case 446: /* catch_clause.multiopt: catch_clause.multiopt catch_clause  */
#line 1414 "src/parser.y"
                                                        {(yyval.i)=createNode("catch_clause.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5505 "src/parser.tab.c"
    break;

  case 447: /* catch_clause.multiopt: %empty  */
#line 1415 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5511 "src/parser.tab.c"
    break;

  case 448: /* catch_clause: "catch" "(" catch_formal_parameter ")" block  */
#line 1418 "src/parser.y"
                                                                        {(yyval.i)=createNode("catch_clause");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5517 "src/parser.tab.c"
    break;

  case 449: /* catch_formal_parameter: variable_modifier.multiopt catch_type variable_declarator_id  */
#line 1421 "src/parser.y"
                                                                                {(yyval.i)=createNode("catch_formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5523 "src/parser.tab.c"
    break;

  case 450: /* catch_type: unann_class_type vt_class_type.multiopt  */
#line 1424 "src/parser.y"
                                                                {(yyval.i)=createNode("catch_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5529 "src/parser.tab.c"
    break;

  case 451: /* vt_class_type.multiopt: vt_class_type.multiopt "|" class_type  */
#line 1427 "src/parser.y"
                                                                {(yyval.i)=createNode("vt_class_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5535 "src/parser.tab.c"
    break;

  case 452: /* vt_class_type.multiopt: %empty  */
#line 1428 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5541 "src/parser.tab.c"
    break;

  case 453: /* finally: "finally" block  */
#line 1431 "src/parser.y"
                                        {(yyval.i)=createNode("finally");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5547 "src/parser.tab.c"
    break;

  case 454: /* try_with_resources_statement: "try" resource_specification block catches.opt finally.opt  */
#line 1434 "src/parser.y"
                                                                                {(yyval.i)=createNode("try_with_resources_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5553 "src/parser.tab.c"
    break;

  case 455: /* finally.opt: finally  */
#line 1437 "src/parser.y"
                                {(yyval.i)=createNode("finally.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5559 "src/parser.tab.c"
    break;

  case 456: /* finally.opt: %empty  */
#line 1438 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5565 "src/parser.tab.c"
    break;

  case 457: /* resource_specification: "(" resource_list semcol.opt ")"  */
#line 1441 "src/parser.y"
                                                                {(yyval.i)=createNode("resource_specification");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5571 "src/parser.tab.c"
    break;

  case 458: /* semcol.opt: ";"  */
#line 1444 "src/parser.y"
                                {(yyval.i)=createNode("semcol.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5577 "src/parser.tab.c"
    break;

  case 459: /* semcol.opt: %empty  */
#line 1445 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5583 "src/parser.tab.c"
    break;

  case 460: /* resource_list: resource semcol_resource.multiopt  */
#line 1448 "src/parser.y"
                                                        {(yyval.i)=createNode("resource_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5589 "src/parser.tab.c"
    break;

  case 461: /* semcol_resource.multiopt: semcol_resource.multiopt ";" resource  */
#line 1451 "src/parser.y"
                                                                {(yyval.i)=createNode("semcol_resource.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5595 "src/parser.tab.c"
    break;

  case 462: /* semcol_resource.multiopt: %empty  */
#line 1452 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5601 "src/parser.tab.c"
    break;

  case 463: /* resource: local_variable_declaration  */
#line 1455 "src/parser.y"
                                                {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5607 "src/parser.tab.c"
    break;

  case 464: /* resource: variable_access  */
#line 1456 "src/parser.y"
                                        {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5613 "src/parser.tab.c"
    break;

  case 465: /* variable_access: expression_name  */
#line 1459 "src/parser.y"
                                        {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5619 "src/parser.tab.c"
    break;

  case 466: /* variable_access: field_access  */
#line 1460 "src/parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5625 "src/parser.tab.c"
    break;

  case 467: /* pattern: type_pattern  */
#line 1463 "src/parser.y"
                                {(yyval.i)=createNode("pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5631 "src/parser.tab.c"
    break;

  case 468: /* type_pattern: local_variable_declaration  */
#line 1466 "src/parser.y"
                                                {(yyval.i)=createNode("type_pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5637 "src/parser.tab.c"
    break;

  case 469: /* primary: primary_no_new_array  */
#line 1471 "src/parser.y"
                                        {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5643 "src/parser.tab.c"
    break;

  case 470: /* primary: array_creation_expression  */
#line 1472 "src/parser.y"
                                                {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5649 "src/parser.tab.c"
    break;

  case 471: /* primary_no_new_array: TOK_LITERAL  */
#line 1475 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5655 "src/parser.tab.c"
    break;

  case 472: /* primary_no_new_array: class_literal  */
#line 1476 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5661 "src/parser.tab.c"
    break;

  case 473: /* primary_no_new_array: "this"  */
#line 1477 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5667 "src/parser.tab.c"
    break;

  case 474: /* primary_no_new_array: type_name "." "this"  */
#line 1478 "src/parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5673 "src/parser.tab.c"
    break;

  case 475: /* primary_no_new_array: "(" expression ")"  */
#line 1479 "src/parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5679 "src/parser.tab.c"
    break;

  case 476: /* primary_no_new_array: class_instance_creation_expression  */
#line 1480 "src/parser.y"
                                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5685 "src/parser.tab.c"
    break;

  case 477: /* primary_no_new_array: field_access  */
#line 1481 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5691 "src/parser.tab.c"
    break;

  case 478: /* primary_no_new_array: array_access  */
#line 1482 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5697 "src/parser.tab.c"
    break;

  case 479: /* primary_no_new_array: method_invocation  */
#line 1483 "src/parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5703 "src/parser.tab.c"
    break;

  case 480: /* primary_no_new_array: method_reference  */
#line 1484 "src/parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5709 "src/parser.tab.c"
    break;

  case 481: /* class_literal: type_name dm.multiopt "." "class"  */
#line 1487 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5715 "src/parser.tab.c"
    break;

  case 482: /* class_literal: numeric_type dm.multiopt "." "class"  */
#line 1488 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5721 "src/parser.tab.c"
    break;

  case 483: /* class_literal: "boolean" dm.multiopt "." "class"  */
#line 1489 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5727 "src/parser.tab.c"
    break;

  case 484: /* class_literal: "void" "." "class"  */
#line 1490 "src/parser.y"
                                                {(yyval.i)=createNode("class_literal");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5733 "src/parser.tab.c"
    break;

  case 486: /* dm.multiopt: dm.multiopt "[" "]"  */
#line 1494 "src/parser.y"
                                                {(yyval.i)=createNode("dm.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5739 "src/parser.tab.c"
    break;

  case 487: /* dm.multiopt: %empty  */
#line 1495 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5745 "src/parser.tab.c"
    break;

  case 488: /* class_instance_creation_expression: unqualified_class_instance_creation_expression  */
#line 1498 "src/parser.y"
                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5751 "src/parser.tab.c"
    break;

  case 489: /* class_instance_creation_expression: expression_name "." unqualified_class_instance_creation_expression  */
#line 1499 "src/parser.y"
                                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5757 "src/parser.tab.c"
    break;

  case 490: /* class_instance_creation_expression: primary "." unqualified_class_instance_creation_expression  */
#line 1500 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5763 "src/parser.tab.c"
    break;

  case 491: /* unqualified_class_instance_creation_expression: "new" type_arguments.opt class_or_interface_type_to_instantiate "(" argument_list.opt ")" class_body.opt  */
#line 1503 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("unqualified_class_instance_creation_expression");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5769 "src/parser.tab.c"
    break;

  case 492: /* class_or_interface_type_to_instantiate: annotation.multiopt TOK_IDENTIFIER dot_annotation.multiopt_IDENTIFIER.multiopt type_arguments_or_diamond.opt  */
#line 1506 "src/parser.y"
                                                                                                                                {(yyval.i)=createNode("class_or_interface_type_to_instantiate");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5775 "src/parser.tab.c"
    break;

  case 493: /* dot_annotation.multiopt_IDENTIFIER.multiopt: dot_annotation.multiopt_IDENTIFIER.multiopt "." annotation.multiopt TOK_IDENTIFIER  */
#line 1509 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("dot_annotation.multiopt_IDENTIFIER.multiopt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5781 "src/parser.tab.c"
    break;

  case 494: /* dot_annotation.multiopt_IDENTIFIER.multiopt: %empty  */
#line 1510 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5787 "src/parser.tab.c"
    break;

  case 495: /* type_arguments_or_diamond.opt: type_arguments_or_diamond  */
#line 1513 "src/parser.y"
                                                {(yyval.i)=createNode("type_arguments_or_diamond.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5793 "src/parser.tab.c"
    break;

  case 496: /* type_arguments_or_diamond.opt: %empty  */
#line 1514 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5799 "src/parser.tab.c"
    break;

  case 497: /* type_arguments_or_diamond: type_arguments  */
#line 1517 "src/parser.y"
                                        {(yyval.i)=createNode("type_arguments_or_diamond");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5805 "src/parser.tab.c"
    break;

  case 498: /* field_access: primary "." TOK_IDENTIFIER  */
#line 1520 "src/parser.y"
                                                {(yyval.i)=createNode("field_access");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5811 "src/parser.tab.c"
    break;

  case 499: /* field_access: "super" "." TOK_IDENTIFIER  */
#line 1521 "src/parser.y"
                                                        {(yyval.i)=createNode("field_access");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5817 "src/parser.tab.c"
    break;

  case 500: /* field_access: type_name "." "super" "." TOK_IDENTIFIER  */
#line 1522 "src/parser.y"
                                                                        {(yyval.i)=createNode("field_access");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5823 "src/parser.tab.c"
    break;

  case 501: /* array_access: expression_name "[" expression "]"  */
#line 1525 "src/parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5829 "src/parser.tab.c"
    break;

  case 502: /* array_access: primary_no_new_array "[" expression "]"  */
#line 1526 "src/parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5835 "src/parser.tab.c"
    break;

  case 503: /* method_invocation: method_name "(" argument_list.opt ")"  */
#line 1529 "src/parser.y"
                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5841 "src/parser.tab.c"
    break;

  case 504: /* method_invocation: type_name "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1530 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5847 "src/parser.tab.c"
    break;

  case 505: /* method_invocation: expression_name "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1531 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5853 "src/parser.tab.c"
    break;

  case 506: /* method_invocation: primary "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1532 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5859 "src/parser.tab.c"
    break;

  case 507: /* method_invocation: "super" "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1533 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5865 "src/parser.tab.c"
    break;

  case 508: /* method_invocation: type_name "." "super" "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1534 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-8].i) !=-1)addChild((yyval.i),(yyvsp[-8].i));addChild((yyval.i),createNode((yyvsp[-7].s)));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5871 "src/parser.tab.c"
    break;

  case 509: /* argument_list: expression com_expression.multiopt  */
#line 1537 "src/parser.y"
                                                        {(yyval.i)=createNode("argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5877 "src/parser.tab.c"
    break;

  case 510: /* com_expression.multiopt: com_expression.multiopt "," expression  */
#line 1540 "src/parser.y"
                                                                {(yyval.i)=createNode("com_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5883 "src/parser.tab.c"
    break;

  case 511: /* com_expression.multiopt: %empty  */
#line 1541 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5889 "src/parser.tab.c"
    break;

  case 512: /* method_reference: expression_name "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1544 "src/parser.y"
                                                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5895 "src/parser.tab.c"
    break;

  case 513: /* method_reference: primary "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1545 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5901 "src/parser.tab.c"
    break;

  case 514: /* method_reference: reference_type "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1546 "src/parser.y"
                                                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5907 "src/parser.tab.c"
    break;

  case 515: /* method_reference: "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1547 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5913 "src/parser.tab.c"
    break;

  case 516: /* method_reference: type_name "." "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1548 "src/parser.y"
                                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5919 "src/parser.tab.c"
    break;

  case 517: /* method_reference: class_type "::" type_arguments.opt "new"  */
#line 1549 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5925 "src/parser.tab.c"
    break;

  case 518: /* method_reference: array_type "::" "new"  */
#line 1550 "src/parser.y"
                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5931 "src/parser.tab.c"
    break;

  case 519: /* array_creation_expression: "new" primitive_type dim_exprs dims.opt  */
#line 1553 "src/parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5937 "src/parser.tab.c"
    break;

  case 520: /* array_creation_expression: "new" class_or_interface_type dim_exprs dims.opt  */
#line 1554 "src/parser.y"
                                                                        {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5943 "src/parser.tab.c"
    break;

  case 521: /* array_creation_expression: "new" primitive_type dims array_initializer  */
#line 1555 "src/parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5949 "src/parser.tab.c"
    break;

  case 522: /* array_creation_expression: "new" class_or_interface_type dims array_initializer  */
#line 1556 "src/parser.y"
                                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5955 "src/parser.tab.c"
    break;

  case 523: /* dim_exprs: dim_expr dim_expr.multiopt  */
#line 1559 "src/parser.y"
                                                {(yyval.i)=createNode("dim_exprs");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5961 "src/parser.tab.c"
    break;

  case 524: /* dim_expr.multiopt: dim_expr.multiopt dim_expr  */
#line 1562 "src/parser.y"
                                                {(yyval.i)=createNode("dim_expr.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5967 "src/parser.tab.c"
    break;

  case 525: /* dim_expr.multiopt: %empty  */
#line 1563 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5973 "src/parser.tab.c"
    break;

  case 526: /* dim_expr: annotation.multiopt "[" expression "]"  */
#line 1566 "src/parser.y"
                                                                {(yyval.i)=createNode("dim_expr");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5979 "src/parser.tab.c"
    break;

  case 527: /* expression: lambda_expression  */
#line 1569 "src/parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5985 "src/parser.tab.c"
    break;

  case 528: /* expression: assignment_expression  */
#line 1570 "src/parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5991 "src/parser.tab.c"
    break;

  case 529: /* lambda_expression: lambda_parameters "->" lambda_body  */
#line 1573 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5997 "src/parser.tab.c"
    break;

  case 530: /* lambda_parameters: "(" lambda_parameter_list.opt ")"  */
#line 1576 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6003 "src/parser.tab.c"
    break;

  case 531: /* lambda_parameters: TOK_IDENTIFIER  */
#line 1577 "src/parser.y"
                                        {(yyval.i)=createNode("lambda_parameters");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6009 "src/parser.tab.c"
    break;

  case 532: /* lambda_parameter_list.opt: lambda_parameter_list  */
#line 1580 "src/parser.y"
                                        {(yyval.i)=createNode("lambda_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6015 "src/parser.tab.c"
    break;

  case 533: /* lambda_parameter_list.opt: %empty  */
#line 1581 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6021 "src/parser.tab.c"
    break;

  case 534: /* lambda_parameter_list: lambda_parameter com_lambda_parameter.multiopt  */
#line 1584 "src/parser.y"
                                                                        {(yyval.i)=createNode("lambda_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6027 "src/parser.tab.c"
    break;

  case 535: /* lambda_parameter_list: TOK_IDENTIFIER com_IDENTIFIER.multiopt  */
#line 1585 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_parameter_list");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6033 "src/parser.tab.c"
    break;

  case 536: /* com_IDENTIFIER.multiopt: com_IDENTIFIER.multiopt "," TOK_IDENTIFIER  */
#line 1588 "src/parser.y"
                                                                {(yyval.i)=createNode("com_IDENTIFIER.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6039 "src/parser.tab.c"
    break;

  case 537: /* com_IDENTIFIER.multiopt: %empty  */
#line 1589 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6045 "src/parser.tab.c"
    break;

  case 538: /* com_lambda_parameter.multiopt: com_lambda_parameter.multiopt "," lambda_parameter  */
#line 1592 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_lambda_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6051 "src/parser.tab.c"
    break;

  case 539: /* com_lambda_parameter.multiopt: %empty  */
#line 1593 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6057 "src/parser.tab.c"
    break;

  case 540: /* lambda_parameter: variable_modifier.multiopt lambda_parameter_type variable_declarator_id  */
#line 1596 "src/parser.y"
                                                                                                {(yyval.i)=createNode("lambda_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6063 "src/parser.tab.c"
    break;

  case 541: /* lambda_parameter: variable_arity_parameter  */
#line 1597 "src/parser.y"
                                                {(yyval.i)=createNode("lambda_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6069 "src/parser.tab.c"
    break;

  case 542: /* lambda_parameter_type: unann_type  */
#line 1600 "src/parser.y"
                                {(yyval.i)=createNode("lambda_parameter_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6075 "src/parser.tab.c"
    break;

  case 543: /* lambda_parameter_type: "var"  */
#line 1601 "src/parser.y"
                                {(yyval.i)=createNode("lambda_parameter_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6081 "src/parser.tab.c"
    break;

  case 544: /* lambda_body: expression  */
#line 1604 "src/parser.y"
                                {(yyval.i)=createNode("lambda_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6087 "src/parser.tab.c"
    break;

  case 545: /* lambda_body: block  */
#line 1605 "src/parser.y"
                        {(yyval.i)=createNode("lambda_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6093 "src/parser.tab.c"
    break;

  case 546: /* assignment_expression: conditional_expression  */
#line 1608 "src/parser.y"
                                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6099 "src/parser.tab.c"
    break;

  case 547: /* assignment_expression: assignment  */
#line 1609 "src/parser.y"
                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6105 "src/parser.tab.c"
    break;

  case 548: /* assignment: left_hand_side assignment_operator expression  */
#line 1612 "src/parser.y"
                                                                {(yyval.i)=createNode("assignment");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6111 "src/parser.tab.c"
    break;

  case 549: /* left_hand_side: expression_name  */
#line 1615 "src/parser.y"
                                        {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6117 "src/parser.tab.c"
    break;

  case 550: /* left_hand_side: field_access  */
#line 1616 "src/parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6123 "src/parser.tab.c"
    break;

  case 551: /* left_hand_side: array_access  */
#line 1617 "src/parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6129 "src/parser.tab.c"
    break;

  case 552: /* assignment_operator: "="  */
#line 1620 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6135 "src/parser.tab.c"
    break;

  case 553: /* assignment_operator: "*="  */
#line 1621 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6141 "src/parser.tab.c"
    break;

  case 554: /* assignment_operator: "/="  */
#line 1622 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6147 "src/parser.tab.c"
    break;

  case 555: /* assignment_operator: "%="  */
#line 1623 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6153 "src/parser.tab.c"
    break;

  case 556: /* assignment_operator: "+="  */
#line 1624 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6159 "src/parser.tab.c"
    break;

  case 557: /* assignment_operator: "-="  */
#line 1625 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6165 "src/parser.tab.c"
    break;

  case 558: /* assignment_operator: "<<="  */
#line 1626 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6171 "src/parser.tab.c"
    break;

  case 559: /* assignment_operator: ">>="  */
#line 1627 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6177 "src/parser.tab.c"
    break;

  case 560: /* assignment_operator: ">>>="  */
#line 1628 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6183 "src/parser.tab.c"
    break;

  case 561: /* assignment_operator: "&="  */
#line 1629 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6189 "src/parser.tab.c"
    break;

  case 562: /* assignment_operator: "^="  */
#line 1630 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6195 "src/parser.tab.c"
    break;

  case 563: /* assignment_operator: "|="  */
#line 1631 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6201 "src/parser.tab.c"
    break;

  case 564: /* conditional_expression: conditional_or_expression  */
#line 1634 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6207 "src/parser.tab.c"
    break;

  case 565: /* conditional_expression: conditional_or_expression "?" expression ":" conditional_expression  */
#line 1635 "src/parser.y"
                                                                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6213 "src/parser.tab.c"
    break;

  case 566: /* conditional_expression: conditional_or_expression "?" expression ":" lambda_expression  */
#line 1636 "src/parser.y"
                                                                                        {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6219 "src/parser.tab.c"
    break;

  case 567: /* conditional_or_expression: conditional_and_expression  */
#line 1639 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6225 "src/parser.tab.c"
    break;

  case 568: /* conditional_or_expression: conditional_or_expression "||" conditional_and_expression  */
#line 1640 "src/parser.y"
                                                                                        {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6231 "src/parser.tab.c"
    break;

  case 569: /* conditional_and_expression: inclusive_or_expression  */
#line 1643 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6237 "src/parser.tab.c"
    break;

  case 570: /* conditional_and_expression: conditional_and_expression "&&" inclusive_or_expression  */
#line 1644 "src/parser.y"
                                                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6243 "src/parser.tab.c"
    break;

  case 571: /* inclusive_or_expression: exclusive_or_expression  */
#line 1647 "src/parser.y"
                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6249 "src/parser.tab.c"
    break;

  case 572: /* inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression  */
#line 1648 "src/parser.y"
                                                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6255 "src/parser.tab.c"
    break;

  case 573: /* exclusive_or_expression: and_expression  */
#line 1651 "src/parser.y"
                                        {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6261 "src/parser.tab.c"
    break;

  case 574: /* exclusive_or_expression: exclusive_or_expression "^" and_expression  */
#line 1652 "src/parser.y"
                                                                {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6267 "src/parser.tab.c"
    break;

  case 575: /* and_expression: equality_expression  */
#line 1655 "src/parser.y"
                                        {(yyval.i)=createNode("and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6273 "src/parser.tab.c"
    break;

  case 576: /* and_expression: and_expression "&" equality_expression  */
#line 1656 "src/parser.y"
                                                                {(yyval.i)=createNode("and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6279 "src/parser.tab.c"
    break;

  case 577: /* equality_expression: relational_expression  */
#line 1659 "src/parser.y"
                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6285 "src/parser.tab.c"
    break;

  case 578: /* equality_expression: equality_expression "==" relational_expression  */
#line 1660 "src/parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6291 "src/parser.tab.c"
    break;

  case 579: /* equality_expression: equality_expression "!=" relational_expression  */
#line 1661 "src/parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6297 "src/parser.tab.c"
    break;

  case 580: /* relational_expression: shift_expression  */
#line 1664 "src/parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6303 "src/parser.tab.c"
    break;

  case 581: /* relational_expression: relational_expression "<" shift_expression  */
#line 1665 "src/parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6309 "src/parser.tab.c"
    break;

  case 582: /* relational_expression: relational_expression ">" shift_expression  */
#line 1666 "src/parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6315 "src/parser.tab.c"
    break;

  case 583: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1667 "src/parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6321 "src/parser.tab.c"
    break;

  case 584: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1668 "src/parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6327 "src/parser.tab.c"
    break;

  case 585: /* relational_expression: instanceof_expression  */
#line 1669 "src/parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6333 "src/parser.tab.c"
    break;

  case 586: /* instanceof_expression: relational_expression "instanceof" reference_type  */
#line 1672 "src/parser.y"
                                                                        {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6339 "src/parser.tab.c"
    break;

  case 587: /* instanceof_expression: relational_expression "instanceof" pattern  */
#line 1673 "src/parser.y"
                                                                {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6345 "src/parser.tab.c"
    break;

  case 588: /* shift_expression: additive_expression  */
#line 1676 "src/parser.y"
                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6351 "src/parser.tab.c"
    break;

  case 589: /* shift_expression: shift_expression "<<" additive_expression  */
#line 1677 "src/parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6357 "src/parser.tab.c"
    break;

  case 590: /* shift_expression: shift_expression ">>" additive_expression  */
#line 1678 "src/parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6363 "src/parser.tab.c"
    break;

  case 591: /* shift_expression: shift_expression ">>>" additive_expression  */
#line 1679 "src/parser.y"
                                                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6369 "src/parser.tab.c"
    break;

  case 592: /* additive_expression: multiplicative_expression  */
#line 1682 "src/parser.y"
                                                {(yyval.i)=createNode("additive_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6375 "src/parser.tab.c"
    break;

  case 593: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1683 "src/parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6381 "src/parser.tab.c"
    break;

  case 594: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1684 "src/parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6387 "src/parser.tab.c"
    break;

  case 595: /* multiplicative_expression: unary_expression  */
#line 1687 "src/parser.y"
                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6393 "src/parser.tab.c"
    break;

  case 596: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1688 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6399 "src/parser.tab.c"
    break;

  case 597: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1689 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6405 "src/parser.tab.c"
    break;

  case 598: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1690 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6411 "src/parser.tab.c"
    break;

  case 599: /* unary_expression: pre_increment_expression  */
#line 1693 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6417 "src/parser.tab.c"
    break;

  case 600: /* unary_expression: pre_decrement_expression  */
#line 1694 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6423 "src/parser.tab.c"
    break;

  case 601: /* unary_expression: "+" unary_expression  */
#line 1695 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6429 "src/parser.tab.c"
    break;

  case 602: /* unary_expression: "-" unary_expression  */
#line 1696 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6435 "src/parser.tab.c"
    break;

  case 603: /* unary_expression: unary_expression_not_plus_minus  */
#line 1697 "src/parser.y"
                                                        {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6441 "src/parser.tab.c"
    break;

  case 604: /* pre_increment_expression: "++" unary_expression  */
#line 1700 "src/parser.y"
                                                {(yyval.i)=createNode("pre_increment_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6447 "src/parser.tab.c"
    break;

  case 605: /* pre_decrement_expression: "--" unary_expression  */
#line 1702 "src/parser.y"
                                                {(yyval.i)=createNode("pre_decrement_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6453 "src/parser.tab.c"
    break;

  case 606: /* unary_expression_not_plus_minus: postfix_expression  */
#line 1704 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6459 "src/parser.tab.c"
    break;

  case 607: /* unary_expression_not_plus_minus: "~" unary_expression  */
#line 1705 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6465 "src/parser.tab.c"
    break;

  case 608: /* unary_expression_not_plus_minus: "!" unary_expression  */
#line 1706 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6471 "src/parser.tab.c"
    break;

  case 609: /* unary_expression_not_plus_minus: cast_expression  */
#line 1707 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6477 "src/parser.tab.c"
    break;

  case 610: /* unary_expression_not_plus_minus: switch_expression  */
#line 1708 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6483 "src/parser.tab.c"
    break;

  case 611: /* postfix_expression: primary  */
#line 1711 "src/parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6489 "src/parser.tab.c"
    break;

  case 612: /* postfix_expression: expression_name  */
#line 1712 "src/parser.y"
                                        {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6495 "src/parser.tab.c"
    break;

  case 613: /* postfix_expression: post_increment_expression  */
#line 1713 "src/parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6501 "src/parser.tab.c"
    break;

  case 614: /* postfix_expression: post_decrement_expression  */
#line 1714 "src/parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6507 "src/parser.tab.c"
    break;

  case 615: /* post_increment_expression: postfix_expression "++"  */
#line 1717 "src/parser.y"
                                                {(yyval.i)=createNode("post_increment_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6513 "src/parser.tab.c"
    break;

  case 616: /* post_decrement_expression: postfix_expression "--"  */
#line 1720 "src/parser.y"
                                                {(yyval.i)=createNode("post_decrement_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6519 "src/parser.tab.c"
    break;

  case 617: /* cast_expression: "(" primitive_type ")" unary_expression  */
#line 1723 "src/parser.y"
                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6525 "src/parser.tab.c"
    break;

  case 618: /* cast_expression: "(" reference_type additional_bound.multiopt ")" unary_expression_not_plus_minus  */
#line 1724 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6531 "src/parser.tab.c"
    break;

  case 619: /* cast_expression: "(" reference_type additional_bound.multiopt ")" lambda_expression  */
#line 1725 "src/parser.y"
                                                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6537 "src/parser.tab.c"
    break;

  case 620: /* additional_bound.multiopt: additional_bound.multiopt additional_bound  */
#line 1728 "src/parser.y"
                                                                {(yyval.i)=createNode("additional_bound.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6543 "src/parser.tab.c"
    break;

  case 621: /* additional_bound.multiopt: %empty  */
#line 1729 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6549 "src/parser.tab.c"
    break;

  case 622: /* switch_expression: "switch" "(" expression ")" switch_block  */
#line 1732 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6555 "src/parser.tab.c"
    break;


#line 6559 "src/parser.tab.c"

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

#line 1738 "src/parser.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

int createNode(string lbl) {
	vector<int> v;
	nodes.push_back({lbl, v});
	cout << "----Node Created - " << lbl << endl;
	return nodes.size()-1;
}

void addChild(int parent, int child) {
	nodes[parent].second.push_back(child);
	cout << "----Added Child - " << nodes[parent].first << "->" << nodes[child].first << endl;
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
			nodes[node].second[i] = final_child;
			cout << "----Fixed AST - " << nodes[node].first << "->" << nodes[child].first << " to " << nodes[node].first << "->" << nodes[final_child].first << endl;
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
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
  	yydebug=1;
	yyparse();
	fclose(yyin);
	fix_ast(startNode);
	build_graph();
	return 0;
}
