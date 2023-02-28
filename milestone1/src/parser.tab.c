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
#define YYLAST   3076

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  315
/* YYNRULES -- Number of rules.  */
#define YYNRULES  621
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1062

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
       0,   471,   471,   474,   475,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   492,   493,   496,
     499,   507,   508,   511,   512,   515,   516,   517,   518,   519,
     522,   523,   526,   527,   528,   531,   532,   535,   536,   537,
     540,   543,   546,   547,   548,   551,   554,   555,   558,   561,
     562,   563,   565,   568,   569,   572,   573,   576,   579,   582,
     585,   586,   587,   589,   590,   593,   596,   597,   600,   601,
     606,   607,   610,   611,   614,   615,   618,   619,   622,   625,
     626,   629,   630,   636,   637,   640,   643,   646,   647,   650,
     653,   654,   657,   660,   661,   664,   665,   666,   667,   670,
     673,   676,   679,   682,   683,   684,   687,   688,   689,   692,
     695,   696,   699,   700,   701,   704,   705,   706,   707,   708,
     711,   712,   715,   716,   717,   719,   720,   725,   726,   727,
     730,   733,   734,   737,   738,   741,   742,   745,   746,   749,
     752,   755,   756,   759,   762,   765,   768,   769,   772,   775,
     778,   779,   782,   783,   784,   785,   788,   789,   790,   791,
     794,   797,   800,   801,   804,   807,   808,   811,   814,   815,
     818,   819,   822,   823,   826,   827,   830,   831,   832,   835,
     836,   839,   840,   841,   844,   845,   848,   851,   854,   855,
     856,   859,   862,   863,   866,   867,   870,   871,   874,   877,
     878,   881,   882,   885,   888,   889,   892,   895,   896,   899,
     900,   903,   904,   907,   910,   911,   914,   917,   920,   921,
     924,   925,   928,   929,   932,   935,   938,   941,   944,   947,
     950,   951,   954,   955,   958,   959,   960,   961,   964,   965,
     968,   971,   974,   975,   978,   979,   982,   983,   986,   989,
     990,   993,   996,   997,  1000,  1001,  1004,  1007,  1010,  1013,
    1016,  1017,  1020,  1023,  1024,  1028,  1029,  1032,  1033,  1036,
    1039,  1042,  1045,  1046,  1049,  1050,  1053,  1059,  1060,  1063,
    1066,  1067,  1070,  1071,  1074,  1077,  1080,  1083,  1084,  1087,
    1088,  1089,  1090,  1091,  1094,  1097,  1100,  1103,  1106,  1107,
    1110,  1111,  1112,  1113,  1114,  1117,  1120,  1121,  1124,  1127,
    1128,  1129,  1132,  1135,  1136,  1139,  1142,  1143,  1146,  1149,
    1150,  1151,  1154,  1157,  1158,  1161,  1164,  1165,  1168,  1171,
    1174,  1175,  1179,  1182,  1183,  1186,  1189,  1190,  1195,  1198,
    1201,  1202,  1205,  1206,  1207,  1210,  1211,  1214,  1217,  1220,
    1221,  1224,  1225,  1226,  1227,  1228,  1229,  1232,  1233,  1234,
    1235,  1236,  1239,  1240,  1241,  1242,  1243,  1244,  1245,  1246,
    1247,  1248,  1249,  1250,  1251,  1254,  1257,  1260,  1263,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1275,  1278,  1281,  1284,
    1285,  1288,  1291,  1292,  1295,  1296,  1299,  1300,  1303,  1304,
    1307,  1308,  1309,  1312,  1315,  1316,  1319,  1320,  1323,  1326,
    1329,  1332,  1335,  1336,  1339,  1340,  1343,  1346,  1347,  1350,
    1351,  1354,  1355,  1358,  1361,  1362,  1365,  1368,  1371,  1372,
    1375,  1378,  1381,  1384,  1385,  1388,  1391,  1394,  1397,  1400,
    1403,  1404,  1405,  1408,  1409,  1412,  1415,  1416,  1419,  1422,
    1425,  1428,  1429,  1432,  1435,  1438,  1439,  1442,  1445,  1446,
    1449,  1452,  1453,  1456,  1457,  1460,  1461,  1464,  1467,  1472,
    1473,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1483,  1484,
    1485,  1488,  1489,  1490,  1491,  1494,  1495,  1498,  1499,  1500,
    1503,  1506,  1509,  1510,  1513,  1514,  1517,  1520,  1521,  1522,
    1525,  1526,  1529,  1530,  1531,  1532,  1533,  1534,  1537,  1540,
    1541,  1544,  1545,  1546,  1547,  1548,  1549,  1550,  1553,  1554,
    1555,  1556,  1559,  1562,  1563,  1566,  1569,  1570,  1573,  1576,
    1577,  1580,  1581,  1584,  1585,  1588,  1589,  1592,  1593,  1596,
    1597,  1600,  1601,  1604,  1605,  1608,  1609,  1612,  1615,  1616,
    1617,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,
    1629,  1630,  1631,  1634,  1635,  1636,  1639,  1640,  1643,  1644,
    1647,  1648,  1651,  1652,  1655,  1656,  1659,  1660,  1661,  1664,
    1665,  1666,  1667,  1668,  1669,  1672,  1673,  1676,  1677,  1678,
    1679,  1682,  1683,  1684,  1687,  1688,  1689,  1690,  1693,  1694,
    1695,  1696,  1697,  1700,  1702,  1704,  1705,  1706,  1707,  1708,
    1711,  1712,  1713,  1714,  1717,  1720,  1723,  1724,  1725,  1728,
    1729,  1732
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

#define YYPACT_NINF (-907)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-614)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     466,   100,  -907,  -907,  -907,  -907,  -907,   148,    13,  -907,
     196,   174,   254,  -907,  -907,  -907,  -907,  -907,    38,  -907,
    -907,  -907,  -907,  -907,  -907,    20,  -907,   209,    94,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,   385,
     429,  -907,   174,   425,   440,  -907,   332,  -907,    54,  -907,
     467,   467,  -907,   467,  -907,  -907,  -907,   467,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  1492,   469,   279,
     455,  -907,   231,   489,   467,  -907,   473,   428,   473,   473,
     329,  -907,  2202,  2269,  2202,  2202,  2202,  2202,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,   230,  -907,   320,   494,  -907,
     487,  1597,  2202,  -907,  -907,  -907,  -907,  -907,   485,   261,
     490,  -907,   156,   493,   492,   512,   313,   528,   520,  -907,
     540,  -907,  -907,   546,  -907,  1132,   370,   517,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,    70,   570,   471,
     550,   584,   181,    45,  -907,   437,   330,   340,  -907,  -907,
    -907,  -907,   465,  -907,  -907,  -907,  -907,  -907,  -907,   598,
    -907,   337,   573,  -907,   505,   571,   552,  -907,   616,   513,
    -907,   556,   615,  1597,   259,  -907,   259,  1799,   617,   485,
    1109,  1001,  2085,   618,  -907,   605,  -907,  -907,  2695,  -907,
    -907,  -907,  -907,  -907,   158,  -907,   616,  -907,   609,   -14,
    -907,  -907,  1132,    62,   610,  2269,   585,  -907,   624,  -907,
    -907,  -907,   504,   353,   610,  -907,  -907,   610,  -907,   568,
     645,   141,   379,   143,   610,  2269,  1866,   646,  -907,   631,
    -907,  -907,   225,  -907,    53,   610,  2269,  2269,  2202,  2202,
    2202,  2202,  2202,  2202,  2202,  2202,  2202,  2202,  2202,   616,
    2202,  2202,  2202,  2202,  2202,  2202,  2202,  2202,  -907,  -907,
    -907,   621,   622,  -907,    34,  -907,  -907,  -907,   180,  -907,
     619,  -907,   616,   428,  -907,   609,   629,  -907,   180,   216,
    -907,   616,   575,  -907,   647,   428,  -907,   333,  1356,  -907,
     659,  -907,  -907,  2202,   480,  -907,  1933,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  2269,
     626,   638,  -907,  -907,   651,   673,  -907,  1503,   582,   511,
     156,  -907,   582,   156,   236,   686,   610,  -907,   698,   699,
     691,  -907,   687,  -907,   596,   666,   657,   714,   180,   641,
    -907,  -907,   180,   421,  -907,   720,   668,   610,   725,  -907,
     728,   688,   719,  -907,  -907,  -907,   730,  -907,  -907,   734,
    -907,   735,   694,   716,   570,   471,   550,   584,   181,    45,
      45,   437,   437,   437,   437,  -907,  1731,  -907,  -907,  -907,
     330,   330,   330,   340,   340,  -907,  -907,  -907,  -907,  -907,
     322,    58,   723,   680,  -907,  -907,   722,   665,   729,   624,
    -907,  -907,   243,  -907,   174,   639,  -907,   736,  -907,  -907,
    1855,  -907,   640,   733,  -907,  -907,  -907,  -907,   610,  -907,
     732,   750,   713,  -907,   384,  -907,  -907,   713,  -907,  -907,
    -907,   756,  -907,   741,  -907,   616,   979,  -907,  2406,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,   616,   743,   157,  1665,
    -907,  2000,  -907,  -907,   156,  -907,  -907,  -907,  1866,   751,
    -907,   653,  1597,  -907,  -907,  -907,  -907,   610,  -907,   610,
     206,   610,   758,  -907,   759,  -907,  -907,  -907,   753,   745,
    -907,   764,  -907,  -907,  2269,  -907,  -907,   756,   616,   616,
     174,  -907,   174,   275,  -907,  -907,  -907,  2729,  -907,  -907,
    -907,  -907,  -907,   571,   616,  -907,  -907,   174,   667,  -907,
     616,   752,   762,   738,  -907,  -907,  -907,  -907,  -907,  -907,
     765,   783,  -907,  -907,  -907,  -907,   784,  -907,   645,   263,
    -907,  -907,  -907,  -907,   156,  -907,  -907,   629,  -907,  -907,
     377,  2269,  -907,  2269,   785,   785,  2538,   777,   804,  2068,
     805,   809,  2269,    36,   810,  2269,  2969,  -907,   708,  -907,
    -907,  -907,  -907,  -907,  -907,   794,  -907,  -907,  -907,  -907,
    -907,   795,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,   438,
     447,  -907,  -907,  -907,   465,   477,   510,  -907,   616,   616,
     616,  -907,  -907,  -907,  -907,   624,  -907,  -907,   782,   523,
    -907,   369,   816,  1866,   426,  -907,  -907,   713,  -907,  -907,
    -907,   829,   831,  1866,  1866,  2269,  1866,  -907,  -907,  -907,
    -907,   801,    78,    78,   731,   468,   807,  -907,  -907,   835,
    -907,   609,  -907,   180,  -907,  -907,  -907,   629,  -907,   724,
    -907,  -907,   830,   822,    61,  -907,  -907,   386,   276,  -907,
     180,   840,   180,  -907,  -907,  2538,   197,  -907,   814,   815,
     739,  2797,  2269,   818,  -907,  2269,  2269,   821,  2951,   797,
     742,  2269,   824,  -907,  2337,  -907,  -907,  -907,  -907,  -907,
     836,   747,  -907,  2269,  -907,  -907,  -907,  -907,   667,   843,
    2202,  -907,   426,  -907,   834,   527,   846,  -907,   847,   850,
    -907,   851,   852,  2135,  -907,   645,   862,    91,    97,   174,
    -907,   842,  -907,   187,   844,   861,   822,   347,   352,  -907,
    -907,  1866,   174,  -907,  -907,  2670,  -907,  -907,  -907,  -907,
    -907,  -907,   872,   742,  -907,  2670,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,   610,  -907,
     610,  -907,  2269,  -907,  -907,  -907,   865,   854,  -907,   848,
    -907,  -907,   866,  -907,   867,   870,  -907,   313,  -907,   860,
    -907,  -907,   370,   418,   879,   817,   826,  -907,   797,   881,
    -907,  -907,  2135,  -907,   264,  -907,  -907,  -907,  -907,  -907,
     164,  -907,   871,    60,  1732,   849,  1866,  -907,  -907,  -907,
     756,  -907,   842,  -907,   862,  -907,  -907,   895,   887,  -907,
    -907,  2670,  -907,   888,  -907,  -907,  -907,   756,    22,   899,
    -907,  -907,    42,   467,   900,   756,    22,   819,   793,  -907,
    -907,   878,  2269,  2269,   894,  2068,  2601,   653,   742,  -907,
     901,   886,  -907,   742,  -907,   797,   817,  -907,  2538,  -907,
    -907,   898,  -907,   891,  -907,  -907,  -907,  -907,  -907,   892,
    -907,   908,  -907,   904,   842,   406,  -907,   156,   884,  1649,
    -907,  -907,  -907,   912,   819,  -907,   913,   903,  -907,   616,
     793,  -907,  2917,  -907,  -907,   921,   922,  2875,   906,   409,
     927,   928,   929,  -907,   880,   882,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  2951,    72,   932,  -907,  -907,
    -907,  -907,  -907,  2202,  -907,  2475,  -907,  -907,   862,   904,
    -907,   890,   667,  -907,   899,  -907,  -907,  -907,  -907,   722,
    -907,  -907,  -907,  -907,   314,    31,  2406,  -907,   459,   920,
    2538,  -907,  2821,  2601,  2797,  2269,  2269,  2538,  -907,   610,
     935,   936,   756,   742,  -907,  -907,   842,  1597,   933,  -907,
    -907,   819,   939,   943,  1855,   939,   946,   143,   954,   955,
     853,    53,  -907,  -907,   956,  -907,  -907,  -907,   942,   944,
     959,   962,  -907,   864,  -907,  -907,  -907,  -907,  -907,   964,
    -907,  -907,  1788,  -907,  -907,   975,   966,   616,    57,  1866,
    1866,  -907,    77,  2538,  2269,  2068,  2601,  2601,   616,   156,
     961,   756,   963,   889,  -907,  -907,   973,   977,   980,   976,
    -907,   982,   968,   930,  -907,   722,  -907,  -907,  -907,  -907,
    -907,  1866,   970,   974,  1866,  2601,  2821,  2601,  -907,   993,
    -907,  -907,   994,  -907,   995,  -907,   984,   990,  2601,  -907,
    -907,  -907
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
      76,   471,   331,   331,   331,   331,   331,   331,   486,    25,
      29,    31,    30,    27,    28,   331,    26,     0,     0,   473,
       0,   324,   331,    78,   331,   486,    23,    24,     0,    32,
      35,    36,    33,    34,     0,   486,   611,     0,     0,   321,
       0,   313,   317,     0,   320,     0,   610,   469,   472,   476,
     487,   477,   478,   479,   480,   470,   319,   563,   566,   568,
     570,   572,   574,   576,   584,   579,   587,   591,   594,   598,
     599,   602,   605,   612,   613,   608,   609,    19,    75,     0,
      89,     0,     0,    18,     0,    51,   134,   131,   331,     0,
     135,   281,     0,     0,    76,   607,    76,   212,   331,   620,
     611,   477,   478,     0,   526,     0,   527,   546,     0,   545,
     600,   603,   601,   604,     0,    72,   331,   331,   331,    35,
     184,   331,     0,     0,   185,   331,     0,   327,   243,   323,
     606,    42,     0,     0,   185,   331,    43,   185,    44,     0,
     331,   185,     0,   185,   185,   331,   239,     0,   312,   315,
     329,    22,    41,    21,     0,   185,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   212,
     331,   331,   331,   331,   331,   331,   331,   331,   614,   615,
      17,     0,     0,   100,     0,   299,   296,   142,     0,    49,
       0,    52,   331,   136,   133,     0,   147,   144,     0,   247,
     240,   331,   283,   280,   268,   136,   318,    76,     0,   540,
       0,   531,   538,   331,     0,   475,   331,   554,   560,   552,
     555,   556,   553,   557,   551,   558,   559,   561,   562,   331,
       0,     0,    63,    34,     0,    62,    64,     0,     0,     0,
     169,   524,     0,   169,     0,     0,   185,   498,     0,     0,
       0,   484,   325,   242,     0,     0,     0,     0,     0,     0,
     517,    73,     0,     0,   474,     0,     0,   185,     0,   488,
       0,     0,     0,   238,   510,    77,     0,    37,   497,     0,
     489,     0,     0,     0,   567,   569,   571,   573,   575,   578,
     577,   580,   582,   581,   583,   585,     0,   468,   586,   467,
     588,   589,   590,   592,   593,   597,   595,   596,   101,   102,
     114,     4,   140,    54,    50,   139,   143,   138,   145,   243,
     246,   250,     0,   284,     0,     0,   282,     0,   260,   264,
       0,   266,     0,   534,    19,   175,   215,   542,   185,   174,
       0,   331,   172,   173,   176,   179,   180,   177,   178,   211,
     214,     0,   529,   533,   616,   331,   331,   619,     4,   544,
     543,   528,   547,   483,   485,    58,   331,    59,    67,   334,
     520,   331,   168,   518,   522,   521,   519,   493,   239,     0,
     514,     0,     0,   322,    47,   482,   513,   185,   516,   185,
       0,   185,     0,   481,     0,   511,   500,   502,   508,     0,
     316,     0,   512,   501,   331,   350,   349,     0,     0,     0,
       0,     4,     0,     0,   112,   304,   297,     0,   302,   303,
     301,   298,   300,    51,   331,    48,    53,     0,     0,   137,
     331,   245,   248,     0,   252,   256,   121,   288,   279,   259,
     262,   331,   267,   270,   273,   258,     0,   181,   331,     0,
     188,   331,   189,   190,   169,   539,   212,    57,   618,   617,
      76,   331,   375,   331,   434,   434,   331,     0,     0,   331,
       0,     0,   331,     0,     0,   331,     0,   345,     0,   346,
     362,   232,   341,   342,   343,     0,   344,   351,   363,   352,
     364,     0,   353,   354,   365,   366,   355,   367,   356,   412,
     413,   368,   374,   369,   370,   372,   371,   373,   442,   476,
     479,   379,   380,   381,     0,   382,   383,    60,   331,   331,
     331,    65,    66,   337,   171,   243,   333,   170,     0,     0,
     523,   495,     0,   239,   397,   621,   326,    45,    39,    38,
     499,     0,     0,   239,   239,   331,   239,   565,   564,   348,
     163,   166,   124,   124,     0,     0,     0,   109,   113,     0,
     141,   620,    55,     0,   121,   151,   130,   146,   151,     0,
     244,   253,     0,   285,     4,   268,   265,     0,     4,   535,
       0,     0,     0,   167,   537,   331,     0,   433,     0,     0,
       0,   212,   331,     0,   419,   331,   331,     0,   212,   444,
       0,   331,     0,   338,     4,   347,   378,    61,    68,    69,
     335,     0,   525,   331,   331,   496,   491,   494,   255,     0,
     331,   405,   399,   395,     0,     0,     0,   515,     0,     0,
     509,     0,   161,   331,   164,     0,     0,     0,     0,     0,
      70,   115,   118,   169,     0,    56,   148,     4,     4,   241,
     249,   239,     0,   293,   286,     0,   291,   292,   287,   289,
     290,   263,     0,     0,   271,     0,   158,   274,   152,   156,
     157,   153,   154,   155,   272,   275,   159,   224,   185,   213,
     185,   376,   331,   389,   432,   436,     0,   425,   429,     0,
     417,   424,     0,   437,     0,     0,   438,   465,   463,   459,
     462,   464,     0,   477,     0,     0,   440,   447,   444,     0,
     435,   340,   331,   332,     0,   254,   490,   506,   407,   408,
       0,   396,     0,     0,   331,     0,   239,   503,   504,   505,
       0,   165,   126,   116,     0,   117,   121,     0,     0,   294,
     149,     0,   150,     0,   120,   197,   331,     0,     0,     0,
     269,   225,   185,     0,   331,     0,     0,   195,     0,   182,
     183,     0,   331,   331,   427,   331,   331,     0,     0,   458,
       0,   460,   212,     0,   441,   445,   456,   443,   331,   336,
     492,   404,   393,     0,   399,   392,   394,   401,   402,     0,
      46,     0,   162,   122,   126,     0,    71,   169,     0,     0,
     223,   295,   222,     0,   195,   228,     0,     0,   191,   331,
       0,   194,   231,   276,   390,     0,     0,   331,     0,    76,
       0,     0,     0,   386,     0,   351,   358,   359,   360,   361,
     414,   415,   391,   439,   457,   212,     0,     0,   453,   446,
     455,   454,   409,   331,   398,     4,   400,   507,     0,   123,
     119,   307,   255,   196,     0,   200,   192,   200,   160,   220,
     221,   216,   219,   226,     0,     0,     4,   230,     0,     0,
     331,   428,   331,   331,   212,   331,   331,   331,   461,   185,
       0,   452,     0,     0,   406,   403,   125,     0,     0,   306,
     251,   195,   212,     0,     0,   212,   217,   185,     0,     0,
       0,   185,   411,   430,     0,   421,   426,   377,   425,     0,
       0,     0,   387,   450,   449,   448,   308,   305,   193,     0,
     201,   208,     0,   210,   199,   205,     0,   331,     0,   239,
     239,   229,     0,   331,   331,   331,   331,   331,   331,   169,
     206,   331,     0,     0,   227,   218,     0,     0,     0,     0,
     416,     0,     0,     0,   410,   451,   198,   212,   209,   204,
     203,   239,     0,     0,   239,   331,   331,   331,   207,     0,
     235,   234,     0,   431,     0,   388,     0,     0,   331,   236,
     237,   423
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -907,  -907,    41,  -907,   858,   -48,  -907,   -29,  -113,  -907,
    -907,   -34,   -87,   -70,  -149,  -469,  -157,   -42,  -907,   521,
    -907,   757,  -907,  -907,  -907,   415,  -907,  -907,  -412,  -907,
    -907,  -907,  -680,    85,    11,    79,  -907,  1009,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  1024,  -907,  -907,  -907,
    -907,  -907,  -907,  1003,  -907,  -907,  -907,   545,  -606,   400,
     165,    27,  -907,   508,  -907,  -199,  -907,  -623,  -907,  -907,
    -907,  -907,   761,  -907,  -907,   536,   402,   387,  -907,  -907,
    -464,  -907,   238,  -907,  -427,  -292,  -650,  -261,  -907,  -907,
     135,   136,   486,  -907,  -907,  -907,  -907,   319,  -813,   177,
     124,   123,    86,  -907,  -907,  -907,  -907,    26,  -161,  -167,
    -907,  -907,  -907,  -907,    59,   228,  -907,  -907,  -907,  -907,
     232,   179,  -907,   125,  -907,  -418,  -907,  -907,  -355,  -907,
    -907,  -907,  -907,   424,  -907,   140,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,   427,  -907,  -907,  -907,  -907,  -907,  -907,
    -907,     4,  -425,  -907,  -907,  -907,  -907,  -907,  -907,  -907,
     430,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,    -6,
    -907,  -907,  -907,  -907,   737,   -95,  -907,  -907,  -907,  -907,
    -907,  -907,    -8,   215,  -907,  -907,  -907,   169,   153,  -907,
     396,  -907,  -907,  -219,  -907,  -411,  -906,  -803,  -907,  -907,
    -907,  -907,  -654,  -907,  -907,  -907,  -907,  -907,   239,  -907,
    -907,   224,   286,  -907,  -660,  -907,   168,  -907,  -907,  -907,
    -907,  -907,  -907,   138,  -799,    48,  -907,  -907,  -907,  -902,
    -907,  -907,  -907,  -907,   554,  -907,  -907,  -907,   293,  -907,
    -907,   310,   315,  -907,   249,  -907,  -907,  -907,   251,  -907,
    -907,  -907,  -907,  -907,  -907,   190,  -907,  -907,  -907,  -645,
    -907,  -907,   176,   221,  -216,  -907,  -907,  -907,  -907,   423,
     553,   244,  -907,  -907,  -907,  -907,   910,  -907,   655,   -68,
    -364,  -907,  -907,  -907,  -907,  -907,   574,  -907,  -907,  -907,
     267,  -907,  -907,   -56,  -907,   874,   876,   897,   875,   905,
     345,  -907,   331,   348,   357,    21,   397,   412,   685,   435,
     565,   580,  -907,   481,  -907
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   556,    64,    69,    38,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   452,   617,   267,
     268,   269,   505,   506,   437,   200,   314,   447,   315,   316,
     601,   602,   721,   114,   115,   180,   117,    40,   118,     2,
       3,     4,     5,     6,     7,    13,     8,    19,    20,    21,
      22,    23,    28,    29,    24,    46,   493,   494,   653,   717,
     873,   557,    31,   833,   273,   169,   508,   167,   270,   392,
     274,   170,   277,   398,   509,   795,   727,   822,   748,   749,
     724,   712,   630,   714,   631,   663,   603,   835,   422,   423,
     424,   425,   527,   426,   427,   428,   750,   836,   890,   829,
     884,   972,   999,   973,  1023,  1000,  1020,  1001,   376,  1003,
     429,   891,   941,   976,   942,   881,   751,   752,   753,   837,
     838,   893,   946,   558,   947,   352,    32,   280,   334,   649,
     399,   400,   512,   401,   402,   796,   514,   650,    33,   285,
     407,   408,   520,   409,   410,   411,   522,   525,   658,   754,
     755,   756,    35,   282,   405,   283,   406,   518,   654,   738,
     500,   740,    36,   266,   391,   501,   502,   968,   969,    47,
      15,   120,   121,   229,   122,   123,   124,   208,   209,   332,
      16,    17,   125,   604,   605,   606,   690,   560,   561,   684,
     562,   563,   564,   565,   487,   566,   904,   567,   568,   569,
     906,   570,   571,   572,   573,   907,   574,   575,   615,   803,
     702,   800,   703,   801,   704,   861,   798,   576,   908,   577,
     578,   909,   579,   769,   673,   984,   910,   770,   985,   771,
     844,   580,   911,   581,   668,   582,   583,   584,   585,   586,
     587,   785,   786,   855,   787,   917,   962,   993,   854,   588,
     921,   680,   850,   779,   851,   780,   781,   378,   379,   126,
     127,   128,   194,   129,   130,   325,   611,   696,   697,   181,
     182,   133,   353,   478,   134,   135,   320,   454,   321,   354,
     184,   185,   290,   291,   413,   433,   292,   431,   441,   186,
     187,   188,   309,   189,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   294,   156
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    14,    76,    77,   535,    78,   207,   349,   198,    79,
     289,   136,   233,   559,    34,   183,   288,   768,   360,   276,
     158,    65,    39,   629,   158,   199,   164,   421,   453,    43,
     377,   456,    34,   782,   597,   642,   812,    30,   726,   313,
     612,    37,   802,   905,   511,   136,   898,   987,   678,   179,
     986,    27,   880,    70,   178,    30,   358,    37,   159,    39,
     474,   119,   211,   811,    11,   327,   197,   216,   -40,    27,
     218,   936,   538,   196,   397,   414,   245,   232,   286,   246,
     481,   275,   247,   248,   196,    18,   412,   202,   495,   233,
     865,   733,   313,   196,   -85,   119,   212,   -40,   199,    45,
       9,   212,   715,   175,   212,   190,   191,   192,   193,   183,
    1033,  1034,   826,   237,   700,   486,    11,   136,   249,   701,
     627,   813,   834,   210,    26,   978,   199,   815,   979,    74,
      42,   347,   276,   438,   874,   670,   211,   330,   416,  1053,
     863,  1055,   859,   179,   986,   390,   116,   438,   178,   521,
     905,  1026,  1061,  -228,   326,   318,   322,   351,   998,   271,
     278,   116,   312,   116,   116,   116,   116,   119,   362,   363,
     212,  1029,   196,   496,   196,   419,   734,    37,   716,   199,
     116,   116,   310,    75,   238,   275,   687,   243,   317,   319,
     319,   814,    11,   324,   275,   699,  -105,   814,   834,   818,
    -331,  -331,   396,   311,   233,   708,   709,   338,   711,   620,
     875,   199,   342,   905,   905,   375,  1032,   244,   700,  -253,
     393,   347,   599,   701,    11,   762,    26,   763,   440,    12,
     326,  -331,  -331,   195,   157,   343,   639,   196,   344,   457,
     418,   442,   905,   951,   905,   162,   513,   948,   966,  -185,
     691,   600,   116,    48,   761,   905,   196,    41,    49,   559,
    -253,   196,   271,   419,   278,   863,    50,   860,    18,   232,
     782,   -20,    51,   278,  -185,    52,   385,   386,   387,   862,
      11,   213,   430,   -19,    53,   215,   537,    11,   661,   313,
     467,   222,    54,    55,   469,    56,    57,   419,   768,    58,
     768,    59,    60,   159,   -19,  -331,  -331,    11,    11,   160,
      61,    62,   212,   823,   434,   212,    63,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   418,   116,
     116,   116,   116,   116,   116,   116,   116,   223,   977,   488,
     261,   -20,   224,   224,   203,   -20,   253,   255,   275,   204,
     254,   262,  -536,   -19,   256,   489,  -530,   -19,   225,   225,
     490,   647,   418,   491,   173,   199,   257,   616,   743,   289,
     430,   887,   116,   420,   -19,   288,   199,   336,   -19,   492,
     530,   607,   532,   608,   419,   533,   488,   438,   871,   -20,
     637,   744,   768,   694,   234,   499,   515,    67,   311,   235,
     196,   -19,   489,   346,   523,   665,   136,   490,   531,    73,
     491,   742,   312,   529,   212,   516,   212,   641,   498,   212,
     940,   -20,   -19,   275,   311,   732,   492,   278,   628,  -331,
      11,  -466,   497,   -19,   199,   903,   930,   953,   317,   743,
     199,   313,   313,   313,   743,   470,   609,   922,  -466,   418,
     471,  -385,   767,    68,   -19,    71,   119,  -385,   438,   778,
    -384,   420,   820,   438,    72,   439,  -384,  -257,  -385,   250,
      75,   720,   157,   183,   827,   666,   251,  -384,   252,   161,
     700,   674,   258,   981,   677,   701,   259,   682,   235,   435,
     131,    65,   163,   436,  -612,   420,   643,   271,  -612,   168,
     559,   634,   278,   636,   165,   131,   205,   131,   131,   131,
     131,   206,    11,   657,   214,   116,   220,    49,   644,   217,
     660,   559,   219,   662,   131,   131,   212,  -613,   199,   199,
     199,  -613,   635,   450,    52,   994,   221,   455,   940,   983,
     226,   116,   761,   -94,   227,   -94,   992,   -91,    11,   335,
      65,    54,    55,   228,    56,    11,   451,   710,    58,   230,
      59,    60,   236,   116,   312,   688,   689,    11,   693,    61,
      62,    11,   805,   632,   633,    63,   371,   372,   373,   374,
     239,   201,   420,   240,   166,   931,   171,   172,   369,   370,
     317,  1027,  1028,   242,  1038,   232,   131,   241,   380,   381,
     382,   260,  1030,   263,   772,   903,   922,   774,   775,   705,
     383,   384,   758,   789,   760,    11,   265,   272,   933,   195,
     132,   281,   419,  1049,   279,   608,  1052,   284,   296,    65,
     293,   295,   419,   215,   983,   132,   992,   132,   132,   132,
     132,   196,   331,   333,   799,   607,   340,  1030,   341,   355,
     356,   388,   389,   -36,   132,   132,   395,   404,   737,   589,
    -261,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   432,   131,   131,   131,   131,   131,   131,   131,
     131,   736,   590,   443,   444,   746,   794,   418,   445,   328,
     329,   916,   446,   449,   841,   735,   778,   832,   458,   745,
     337,   459,   460,   339,   461,   591,   462,   345,   419,   348,
     350,   463,   464,  1005,   465,   212,   131,   466,   357,   468,
     359,   361,   679,   472,   607,   473,   132,  1036,   474,    65,
     816,   475,   477,   479,   476,   988,   869,   481,   482,    65,
     483,  1021,   503,   824,   484,   504,   -35,   507,   510,   519,
     517,   524,   526,  -541,   746,   746,   528,   777,  -331,   534,
     536,   349,   598,   613,   614,   360,   419,   589,   821,   821,
     623,   624,   625,   418,   895,   896,   626,   674,   645,   116,
     173,   651,   648,   652,   655,   885,   656,   659,   667,   671,
     590,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   275,   132,   132,   132,   132,   132,   132,   132,
     132,  1002,   357,   591,  1002,    65,   672,   675,   879,   939,
     420,   676,   681,   683,   685,   686,   879,   757,   692,   698,
     420,   418,   706,   201,   707,   592,   713,   722,   723,   729,
     719,   732,   731,   759,   764,   765,   132,   766,   773,   788,
     593,   776,   784,   438,   790,   792,   797,   804,   806,   131,
     807,   419,   793,   808,   809,   720,   817,   799,   959,   212,
     435,   810,   996,   594,   819,   830,  1002,   842,   845,   846,
     847,   643,   843,   848,   853,   131,   589,   990,   991,   419,
     849,   852,   589,  -443,   858,   870,   757,   757,   876,   864,
     877,   878,   883,  -131,   892,   589,   420,   131,   894,   590,
     430,   136,   831,   897,   914,   590,   915,   923,   889,   924,
     275,   927,   926,   928,   935,   937,   418,   974,   590,   974,
     932,   275,   591,   938,   949,   950,   952,   939,   591,   954,
     955,   956,   957,   592,  -357,   963,  1031,   674,  1035,   967,
     982,   591,  -202,   618,   418,   619,   621,   622,   593,   531,
    -179,   119,  1004,   997,   420,  1007,  1009,  1010,  1011,  1013,
    1014,   944,  1016,   867,  1015,  1017,  1018,  1019,  1022,  1024,
    1037,   594,   176,    81,    82,  1041,  1040,  1039,  1044,   132,
    1042,   177,  1047,  1043,   777,  1045,   430,   882,  1046,   643,
    1050,   420,   116,   595,  1051,   882,  1056,  1057,  1058,  -549,
     278,   212,  -549,   529,  1059,   132,  -549,   913,   596,  -549,
    1060,   264,   918,  -549,   640,   394,   695,    44,  -549,    10,
      88,    66,    89,   718,  -549,    90,  -549,   132,   638,   929,
      91,  -549,   403,  -549,   646,   747,   116,    92,   872,  -549,
     728,   960,   961,    93,   828,    94,   934,    95,   971,   420,
     975,  1006,   592,  1048,   888,   886,  1025,   589,   592,   943,
      96,   980,   970,    97,    98,   730,    99,   593,   965,   589,
     791,   592,   741,   593,   739,   100,   912,   420,   925,   866,
     590,   964,   989,   480,  1054,   102,   593,   868,   856,   669,
     594,   783,   590,   857,   919,   958,   594,   920,   323,   610,
     664,   595,   364,   591,  -549,   365,   367,  -548,   589,   594,
    -548,   539,   725,   131,  -548,   591,   596,  -548,     0,     0,
       0,  -548,   995,   223,     0,    75,  -548,   366,   224,     0,
       0,   590,  -548,     0,  -548,     0,   589,   368,     0,  -548,
       0,  -548,     0,     0,   225,     0,     0,  -548,     0,     0,
       0,     0,     0,     0,   591,     0,     0,   589,     0,   590,
       0,   589,     0,   589,   589,   589,    11,     0,   589,     0,
       0,     0,     0,   231,     0,    89,     0,     0,    90,     0,
     590,     0,   591,    91,   590,     0,   590,   590,   590,     0,
      92,   590,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,   591,     0,     0,     0,   591,     0,   591,
     591,   591,  -548,    96,   591,     0,     0,     0,     0,     0,
     595,   132,     0,     0,   589,     0,   595,   589,   589,     0,
       0,     0,     0,   592,   839,   596,   840,     0,     0,   595,
       0,   596,     0,   132,     0,   592,     0,   590,   593,     0,
     590,   590,     0,     0,   596,     0,   589,   589,   589,     0,
     593,     0,     0,     0,     0,     0,     0,     0,     0,   589,
     591,   594,     0,   591,   591,     0,     0,     0,     0,   590,
     590,   590,     0,   594,   592,     0,     0,     0,     0,     0,
       0,     0,   590,     0,     0,     0,     0,     0,     0,   593,
       0,     0,   591,   591,   591,   131,     0,     0,     0,     0,
       0,     0,   592,     0,     0,   591,     0,     0,     0,     0,
       0,     0,   594,     0,     0,     0,     0,   593,   783,     0,
       0,     0,     0,   592,     0,     0,   131,   592,     0,   592,
     592,   592,     0,     0,   592,     0,     0,     0,   593,   414,
     594,     0,   593,     0,   593,   593,   593,     0,     0,   593,
       0,     0,     0,     0,     0,     0,     0,     0,   945,     0,
       0,   594,     0,     0,     0,   594,     0,   594,   594,   594,
     131,     0,   594,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,   415,     0,    89,
     592,   595,    90,   592,   592,     0,     0,    91,     0,     0,
       0,     0,   416,   595,    92,   593,   596,     0,   593,   593,
      93,     0,    94,     0,     0,     0,     0,     0,   596,     0,
       0,     0,   592,   592,   592,   132,     0,    96,   594,     0,
       0,   594,   594,     0,     0,   592,     0,   593,   593,   593,
       0,   417,   595,  1008,     0,     0,     0,  1012,   132,     0,
     593,     0,     0,     0,     0,     0,   132,   596,     0,     0,
     594,   594,   594,     0,     0,     0,     0,     0,     0,     0,
     595,     0,     0,   594,     0,    80,    81,    82,     0,     0,
       0,     0,     0,     0,    83,   596,    75,     0,    84,    85,
       0,   595,    86,    87,     0,   595,     0,   595,   595,   595,
     132,     0,   595,     0,     0,     0,   596,     0,     0,     0,
     596,     0,   596,   596,   596,     0,    11,   596,     0,     0,
       0,     0,     0,    88,     0,    89,   448,    11,    90,     0,
       0,     0,     0,    91,   231,     0,    89,     0,     0,    90,
      92,     0,     0,     0,    91,     0,    93,     0,    94,     0,
      95,    92,     0,     0,     0,     0,     0,    93,   595,    94,
       0,   595,   595,    96,     0,     0,    97,    98,     0,    99,
       0,     0,     0,   596,    96,     0,   596,   596,   100,     0,
     174,    81,    82,   101,     0,     0,     0,     0,   102,    83,
     595,   595,   595,    84,    85,     0,     0,    86,    87,     0,
       0,     0,     0,   595,     0,   596,   596,   596,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   596,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    88,     0,
      89,     0,   414,    90,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,    92,     0,     0,   176,    81,
      82,    93,     0,    94,     0,    95,     0,   177,     0,     0,
       0,    84,    85,     0,     0,    86,    87,     0,    96,     0,
       0,    97,    98,    11,    99,     0,     0,     0,     0,     0,
     415,     0,    89,   100,     0,    90,     0,     0,   101,  -331,
      91,     0,     0,   102,     0,     0,    88,    92,    89,     0,
       0,    90,     0,    93,     0,    94,    91,     0,     0,     0,
       0,     0,     0,    92,   414,   176,    81,    82,     0,    93,
      96,    94,     0,    95,   177,     0,     0,     0,    84,    85,
       0,     0,    86,    87,     0,   825,    96,     0,     0,    97,
      98,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,    11,   449,     0,     0,     0,
       0,   102,   415,    88,    89,    89,     0,    90,    90,     0,
       0,   414,    91,    91,     0,     0,     0,   416,     0,    92,
      92,     0,   287,    81,    82,    93,    93,    94,    94,     0,
      95,   177,  -532,     0,     0,    84,    85,     0,     0,    86,
      87,     0,    96,    96,     0,     0,    97,    98,     0,    99,
     552,     0,    11,     0,     0,     0,   485,     0,   100,   415,
       0,    89,     0,   438,    90,     0,     0,     0,   102,    91,
      88,     0,    89,     0,   416,    90,    92,     0,   414,     0,
      91,     0,    93,     0,    94,     0,     0,    92,     0,   176,
      81,    82,     0,    93,     0,    94,     0,    95,   177,    96,
       0,     0,    84,    85,     0,     0,    86,    87,     0,     0,
      96,     0,     0,    97,    98,     0,    99,     0,     0,    11,
       0,     0,     0,     0,     0,   100,   415,     0,    89,     0,
    -331,    90,     0,     0,     0,   102,    91,    88,     0,    89,
       0,     0,    90,    92,     0,     0,     0,    91,     0,    93,
       0,    94,     0,     0,    92,     0,   176,    81,    82,     0,
      93,     0,    94,     0,    95,   177,    96,     0,     0,    84,
      85,     0,     0,    86,    87,     0,     0,    96,     0,     0,
      97,    98,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,    88,     0,    89,     0,     0,    90,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,    92,     0,   176,    81,    82,     0,    93,     0,    94,
       0,    95,   177,     0,     0,     0,    84,    85,     0,     0,
      86,    87,     0,     0,    96,     0,     0,    97,    98,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,   438,     0,   464,     0,     0,   102,
       0,    88,     0,    89,     0,     0,    90,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,    92,     0,
       0,   176,    81,    82,    93,     0,    94,     0,    95,     0,
     177,     0,     0,     0,    84,    85,     0,     0,    86,    87,
       0,    96,     0,  -550,    97,    98,  -550,    99,  -420,     0,
    -550,     0,     0,  -550,     0,     0,   100,  -550,     0,     0,
       0,     0,  -550,     0,     0,     0,   102,     0,  -550,    88,
    -550,    89,     0,     0,    90,  -550,     0,  -550,     0,    91,
       0,     0,     0,  -550,     0,     0,    92,     0,   176,    81,
      82,     0,    93,     0,    94,     0,    95,   177,     0,     0,
       0,    84,    85,     0,     0,    86,    87,     0,     0,    96,
       0,     0,    97,    98,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,    88,     0,    89,     0,
       0,    90,     0,     0,     0,     0,    91,     0,  -550,     0,
       0,     0,     0,    92,     0,   174,    81,    82,     0,    93,
       0,    94,     0,    95,    83,     0,     0,     0,    84,    85,
       0,     0,    86,    87,     0,     0,    96,     0,     0,    97,
      98,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,   449,     0,     0,     0,
       0,   102,     0,    88,     0,    89,     0,     0,    90,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
      92,     0,   176,    81,    82,     0,    93,     0,    94,     0,
      95,   177,     0,     0,     0,    84,    85,     0,     0,    86,
      87,     0,     0,    96,     0,     0,    97,    98,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
      88,     0,    89,     0,     0,    90,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,    92,     0,     0,
     540,    81,     0,    93,     0,    94,     0,    95,     0,   541,
       0,     0,     0,     0,    85,     0,     0,     0,    87,     0,
      96,     0,     0,    97,    98,     0,    99,   542,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   543,    88,   544,
      89,  -339,     0,    90,     0,   545,  -339,   546,    91,     0,
       0,     0,     0,     0,     0,    92,   547,   548,     0,   540,
      81,    93,     0,    94,     0,    95,     0,     0,   541,     0,
       0,     0,     0,    85,     0,     0,   549,    87,    96,     0,
       0,    97,   550,   551,    99,   552,   542,     0,     0,     0,
     553,     0,  -212,   100,     0,   554,     0,   555,   438,     0,
       0,     0,  -339,     0,     0,     0,   543,    88,   544,    89,
       0,     0,    90,     0,   545,     0,   546,    91,     0,     0,
       0,     0,     0,     0,    92,   547,   548,     0,   540,    81,
      93,     0,    94,     0,    95,     0,     0,   541,     0,     0,
       0,     0,    85,     0,     0,   549,    87,    96,     0,     0,
      97,   550,   551,    99,   552,   542,     0,     0,     0,   553,
       0,  -212,   100,     0,   554,     0,   555,   438,     0,     0,
       0,  -233,     0,     0,     0,   543,    88,   544,    89,   700,
       0,    90,     0,   545,   701,   546,    91,     0,     0,     0,
       0,   540,    81,    92,   547,   548,     0,     0,     0,    93,
     541,    94,     0,    95,     0,    85,     0,     0,     0,    87,
       0,     0,     0,     0,   549,     0,    96,     0,   542,    97,
     550,   551,    99,   552,     0,     0,     0,     0,   553,     0,
    -212,   100,     0,   554,     0,   555,   438,     0,   543,    88,
     544,    89,     0,     0,    90,     0,   545,     0,   546,    91,
       0,     0,     0,     0,   899,    81,    92,   547,   548,     0,
       0,     0,    93,   541,    94,     0,    95,     0,    85,     0,
       0,     0,    87,     0,     0,     0,     0,   549,     0,    96,
       0,   542,    97,   550,   551,    99,   552,     0,     0,     0,
       0,   553,     0,     0,   100,     0,   554,     0,   555,   438,
       0,   543,    88,   544,    89,     0,     0,    90,     0,   545,
       0,   546,    91,     0,     0,     0,     0,     0,     0,    92,
     900,   901,     0,   414,     0,    93,     0,    94,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     549,     0,    96,     0,     0,    97,   550,   551,    99,   552,
       0,   165,     0,   297,   553,     0,   298,   100,     0,   902,
     299,   555,   438,   300,    48,     0,     0,   301,     0,    49,
       0,   415,   302,    89,     0,     0,    90,    50,   303,     0,
     304,    91,   414,    51,     0,   305,    52,   306,    92,     0,
       0,     0,     0,   307,    93,    53,    94,     0,     0,     0,
       0,     0,     0,    54,    55,     0,    56,    57,     0,     0,
      58,    96,    59,    60,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    48,     0,     0,   825,    63,    49,     0,
     415,     0,    89,     0,     0,    90,    50,     0,     0,     0,
      91,     0,    51,     0,     0,    52,     0,    92,     0,     0,
     174,    81,     0,    93,    53,    94,     0,     0,   308,   541,
       0,     0,    54,    55,    85,    56,    57,     0,    87,    58,
      96,    59,    60,     0,   174,    81,     0,  -418,     0,     0,
      61,    62,     0,   541,  -422,     0,    63,     0,    85,     0,
       0,     0,    87,     0,     0,     0,     0,     0,    88,     0,
      89,     0,     0,    90,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    93,    88,    94,    89,    95,     0,    90,   174,    81,
       0,     0,    91,     0,     0,     0,     0,   541,    96,    92,
       0,    97,    85,     0,    99,    93,    87,    94,     0,    95,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,    97,     0,     0,    99,     0,
     174,    81,     0,     0,     0,     0,    88,   100,    89,   541,
       0,    90,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,   196,    93,
       0,    94,     0,    95,   174,    81,     0,     0,     0,     0,
       0,     0,     0,   541,     0,     0,    96,     0,    88,    97,
      89,     0,    99,    90,     0,     0,     0,     0,    91,     0,
       0,   100,     0,     0,     0,    92,     0,     0,     0,     0,
       0,    93,     0,    94,     0,    95,     0,     0,     0,     0,
       0,     0,    88,     0,    89,     0,     0,    90,    96,     0,
       0,    97,    91,    11,    99,     0,     0,     0,    49,    92,
       0,     0,     0,   100,     0,    93,    50,    94,     0,    95,
       0,     0,    51,     0,     0,    52,     0,     0,     0,     0,
       0,     0,    96,     0,    53,    97,     0,     0,    99,     0,
       0,     0,    54,    55,     0,    56,    57,   100,     0,    58,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
       8,     7,    50,    51,   431,    53,   101,   223,    95,    57,
     177,    67,   125,   438,    10,    83,   177,   671,   234,   168,
      68,    27,    11,   487,    72,    95,    74,   288,   320,    18,
     249,   323,    28,   678,   446,   504,   716,    10,   644,   196,
     458,     3,   702,   846,   399,   101,   845,   953,    12,    83,
     952,    10,    30,    42,    83,    28,     3,     3,    24,    48,
       3,    67,   104,   713,    44,     3,    95,   109,    82,    28,
     112,   884,   436,    31,   273,     3,    31,   125,   173,    34,
       3,   168,    37,    38,    31,    72,   285,    95,    30,   202,
      30,    30,   249,    31,     0,   101,   104,   111,   168,    79,
       0,   109,    24,    82,   112,    84,    85,    86,    87,   177,
    1016,  1017,   735,    43,    54,   376,    44,   173,    73,    59,
     484,    30,   745,   102,    30,    94,   196,    30,    97,    75,
      92,    78,   281,   111,   814,   546,   178,   205,    66,  1045,
     800,  1047,   792,   177,  1046,   111,    67,   111,   177,   410,
     953,    94,  1058,   111,   202,   197,   198,   225,   971,   165,
     168,    82,   196,    84,    85,    86,    87,   173,   236,   237,
     178,    94,    31,   115,    31,   288,   115,     3,   100,   249,
     101,   102,    24,     3,   114,   272,   598,     6,   196,   197,
     198,   100,    44,   201,   281,   613,     0,   100,   821,    12,
      44,    45,   272,    45,   317,   623,   624,   215,   626,     3,
     816,   281,   220,  1016,  1017,   249,  1015,    36,    54,     3,
     268,    78,    65,    59,    44,    28,    30,    30,   296,    81,
     278,    44,    45,     3,     3,    94,   497,    31,    97,     3,
     288,   309,  1045,   897,  1047,    14,     3,   892,   928,    24,
     605,    94,   173,    44,   665,  1058,    31,     3,    49,   684,
      44,    31,   268,   376,   272,   925,    57,     3,    72,   317,
     915,    12,    63,   281,    44,    66,   255,   256,   257,   115,
      44,   105,   288,    24,    75,    24,   435,    44,    25,   446,
     338,   115,    83,    84,   342,    86,    87,   410,   952,    90,
     954,    92,    93,    24,    45,    44,    45,    44,    44,    30,
     101,   102,   320,   731,   293,   323,   107,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   376,   250,
     251,   252,   253,   254,   255,   256,   257,    24,    24,    64,
       3,    12,    29,    29,    24,    12,    16,     7,   435,    29,
      20,    14,    19,    24,    14,    80,    23,    24,    45,    45,
      85,   510,   410,    88,    35,   435,    26,   462,    92,   536,
     376,   835,   293,   288,    45,   536,   446,    24,    45,   104,
     422,   449,   424,   451,   497,   427,    64,   111,   806,    12,
     115,   115,  1046,    24,    24,   391,   402,    12,    45,    29,
      31,    24,    80,    24,   410,    28,   462,    85,    24,    77,
      88,    25,   446,   421,   422,   404,   424,   504,   391,   427,
     889,    12,    45,   510,    45,    19,   104,   435,   484,    45,
      44,    13,   391,    24,   504,   846,    30,    28,   446,    92,
     510,   598,   599,   600,    92,    24,   454,   858,    30,   497,
      29,    13,   671,    24,    45,    30,   462,    19,   111,   678,
      13,   376,   115,   111,    24,   296,    19,   115,    30,    32,
       3,     3,     3,   541,   735,   543,    39,    30,    41,    24,
      54,   549,    17,    24,   552,    59,    21,   555,    29,     9,
      67,   497,     3,    13,    17,   410,   504,   503,    21,    71,
     925,   490,   510,   492,    31,    82,    12,    84,    85,    86,
      87,    24,    44,   521,    29,   436,    24,    49,   507,    29,
     528,   946,    29,   531,   101,   102,   534,    17,   598,   599,
     600,    21,   491,   318,    66,   962,    24,   322,  1007,   950,
      12,   462,   953,    77,    24,    79,   957,    81,    44,    45,
     556,    83,    84,    13,    86,    44,    45,   625,    90,    13,
      92,    93,    45,   484,   598,   599,   600,    44,    45,   101,
     102,    44,    45,   488,   489,   107,   245,   246,   247,   248,
      10,    95,   497,   112,    76,   877,    78,    79,   243,   244,
     598,  1009,  1010,     9,  1021,   643,   173,    47,   250,   251,
     252,     3,  1013,    30,   672,  1016,  1017,   675,   676,   617,
     253,   254,   660,   681,   662,    44,   111,    65,   879,     3,
      67,    65,   735,  1041,   111,   693,  1044,    12,    23,   635,
      13,    13,   745,    24,  1045,    82,  1047,    84,    85,    86,
      87,    31,    57,    19,   700,   713,    78,  1058,     3,     3,
      19,    30,    30,    24,   101,   102,    37,    82,   654,   438,
      13,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    13,   250,   251,   252,   253,   254,   255,   256,
     257,   654,   438,    57,    46,   658,   694,   735,    37,   203,
     204,   852,    19,   111,   762,   654,   915,   745,    12,   658,
     214,     3,     3,   217,    13,   438,    19,   221,   821,   223,
     224,   115,    46,   974,    57,   723,   293,     3,   232,    78,
     234,   235,   553,     3,   792,    57,   173,  1019,     3,   735,
     719,     3,    13,     3,    46,   954,   804,     3,     3,   745,
      46,  1002,    19,   732,    28,    65,    24,    82,    19,    13,
     111,   111,    19,     3,   727,   728,    24,   678,    45,     3,
      19,   977,    19,    12,   111,   981,   879,   546,   727,   728,
      12,    12,    19,   821,   842,   843,    12,   845,   111,   700,
      35,    19,    30,    45,    19,   833,     3,     3,     3,    12,
     546,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   889,   250,   251,   252,   253,   254,   255,   256,
     257,   972,   326,   546,   975,   821,    12,    12,   826,   889,
     735,    12,    12,   115,    30,    30,   834,   658,    46,    13,
     745,   879,     3,   347,     3,   438,    35,    30,     3,   115,
     109,    19,    12,     3,    30,    30,   293,   108,    30,   680,
     438,    30,    55,   111,    30,    19,    13,    23,    12,   436,
      13,   974,   115,    13,    13,     3,    24,   923,   916,   877,
       9,    19,   967,   438,    30,     3,  1037,    12,    30,    13,
      13,   889,    28,    13,    67,   462,   665,   955,   956,  1002,
      30,    12,   671,    67,    13,    46,   727,   728,     3,    28,
      13,    13,     3,     3,   111,   684,   821,   484,    30,   665,
     916,   967,   743,    19,    13,   671,    30,    19,    99,    28,
    1007,    13,    30,    19,    12,    12,   974,   935,   684,   937,
      46,  1018,   665,    30,    13,    13,    30,  1007,   671,    12,
      12,    12,    62,   546,    62,    13,  1014,  1015,  1018,    59,
      30,   684,    13,   467,  1002,   469,   470,   471,   546,    24,
      24,   967,    19,    30,   879,    19,    12,    12,   115,    13,
      28,   892,    13,   804,    30,    13,   112,    13,     3,    13,
      19,   546,     3,     4,     5,    12,    97,    24,    12,   436,
      13,    12,    62,    13,   915,    13,  1002,   828,    30,  1007,
      30,   916,   923,   438,    30,   836,    13,    13,    13,     8,
    1018,  1019,    11,  1021,    30,   462,    15,   848,   438,    18,
      30,   163,   853,    22,   503,   268,   611,    18,    27,     5,
      51,    28,    53,   633,    33,    56,    35,   484,   493,   874,
      61,    40,   281,    42,   508,   658,   967,    68,   810,    48,
     648,   916,   916,    74,   735,    76,   879,    78,   934,   974,
     937,   975,   665,  1037,   836,   833,  1007,   846,   671,   890,
      91,   946,   932,    94,    95,   651,    97,   665,   925,   858,
     684,   684,   655,   671,   654,   106,   847,  1002,   864,   803,
     846,   923,   954,   356,  1046,   116,   684,   804,   788,   545,
     665,   678,   858,   788,   855,   915,   671,   856,   198,   454,
     536,   546,   238,   846,   113,   239,   241,     8,   897,   684,
      11,   436,   641,   700,    15,   858,   546,    18,    -1,    -1,
      -1,    22,   963,    24,    -1,     3,    27,   240,    29,    -1,
      -1,   897,    33,    -1,    35,    -1,   925,   242,    -1,    40,
      -1,    42,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,   897,    -1,    -1,   946,    -1,   925,
      -1,   950,    -1,   952,   953,   954,    44,    -1,   957,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
     946,    -1,   925,    61,   950,    -1,   952,   953,   954,    -1,
      68,   957,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,   946,    -1,    -1,    -1,   950,    -1,   952,
     953,   954,   113,    91,   957,    -1,    -1,    -1,    -1,    -1,
     665,   678,    -1,    -1,  1013,    -1,   671,  1016,  1017,    -1,
      -1,    -1,    -1,   846,   758,   665,   760,    -1,    -1,   684,
      -1,   671,    -1,   700,    -1,   858,    -1,  1013,   846,    -1,
    1016,  1017,    -1,    -1,   684,    -1,  1045,  1046,  1047,    -1,
     858,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1058,
    1013,   846,    -1,  1016,  1017,    -1,    -1,    -1,    -1,  1045,
    1046,  1047,    -1,   858,   897,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1058,    -1,    -1,    -1,    -1,    -1,    -1,   897,
      -1,    -1,  1045,  1046,  1047,   892,    -1,    -1,    -1,    -1,
      -1,    -1,   925,    -1,    -1,  1058,    -1,    -1,    -1,    -1,
      -1,    -1,   897,    -1,    -1,    -1,    -1,   925,   915,    -1,
      -1,    -1,    -1,   946,    -1,    -1,   923,   950,    -1,   952,
     953,   954,    -1,    -1,   957,    -1,    -1,    -1,   946,     3,
     925,    -1,   950,    -1,   952,   953,   954,    -1,    -1,   957,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   892,    -1,
      -1,   946,    -1,    -1,    -1,   950,    -1,   952,   953,   954,
     967,    -1,   957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
    1013,   846,    56,  1016,  1017,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,   858,    68,  1013,   846,    -1,  1016,  1017,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,   858,    -1,
      -1,    -1,  1045,  1046,  1047,   892,    -1,    91,  1013,    -1,
      -1,  1016,  1017,    -1,    -1,  1058,    -1,  1045,  1046,  1047,
      -1,   105,   897,   977,    -1,    -1,    -1,   981,   915,    -1,
    1058,    -1,    -1,    -1,    -1,    -1,   923,   897,    -1,    -1,
    1045,  1046,  1047,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     925,    -1,    -1,  1058,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    12,   925,     3,    -1,    16,    17,
      -1,   946,    20,    21,    -1,   950,    -1,   952,   953,   954,
     967,    -1,   957,    -1,    -1,    -1,   946,    -1,    -1,    -1,
     950,    -1,   952,   953,   954,    -1,    44,   957,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    43,    44,    56,    -1,
      -1,    -1,    -1,    61,    51,    -1,    53,    -1,    -1,    56,
      68,    -1,    -1,    -1,    61,    -1,    74,    -1,    76,    -1,
      78,    68,    -1,    -1,    -1,    -1,    -1,    74,  1013,    76,
      -1,  1016,  1017,    91,    -1,    -1,    94,    95,    -1,    97,
      -1,    -1,    -1,  1013,    91,    -1,  1016,  1017,   106,    -1,
       3,     4,     5,   111,    -1,    -1,    -1,    -1,   116,    12,
    1045,  1046,  1047,    16,    17,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,  1058,    -1,  1045,  1046,  1047,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1058,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,     3,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,     3,     4,
       5,    74,    -1,    76,    -1,    78,    -1,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    91,    -1,
      -1,    94,    95,    44,    97,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,   106,    -1,    56,    -1,    -1,   111,    44,
      61,    -1,    -1,   116,    -1,    -1,    51,    68,    53,    -1,
      -1,    56,    -1,    74,    -1,    76,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,     3,     3,     4,     5,    -1,    74,
      91,    76,    -1,    78,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    -1,   106,    91,    -1,    -1,    94,
      95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    44,   111,    -1,    -1,    -1,
      -1,   116,    51,    51,    53,    53,    -1,    56,    56,    -1,
      -1,     3,    61,    61,    -1,    -1,    -1,    66,    -1,    68,
      68,    -1,     3,     4,     5,    74,    74,    76,    76,    -1,
      78,    12,    13,    -1,    -1,    16,    17,    -1,    -1,    20,
      21,    -1,    91,    91,    -1,    -1,    94,    95,    -1,    97,
      98,    -1,    44,    -1,    -1,    -1,   105,    -1,   106,    51,
      -1,    53,    -1,   111,    56,    -1,    -1,    -1,   116,    61,
      51,    -1,    53,    -1,    66,    56,    68,    -1,     3,    -1,
      61,    -1,    74,    -1,    76,    -1,    -1,    68,    -1,     3,
       4,     5,    -1,    74,    -1,    76,    -1,    78,    12,    91,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      91,    -1,    -1,    94,    95,    -1,    97,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,   106,    51,    -1,    53,    -1,
      44,    56,    -1,    -1,    -1,   116,    61,    51,    -1,    53,
      -1,    -1,    56,    68,    -1,    -1,    -1,    61,    -1,    74,
      -1,    76,    -1,    -1,    68,    -1,     3,     4,     5,    -1,
      74,    -1,    76,    -1,    78,    12,    91,    -1,    -1,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    91,    -1,    -1,
      94,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    51,    -1,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,     3,     4,     5,    -1,    74,    -1,    76,
      -1,    78,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    91,    -1,    -1,    94,    95,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    46,    -1,    -1,   116,
      -1,    51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,     3,     4,     5,    74,    -1,    76,    -1,    78,    -1,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      -1,    91,    -1,     8,    94,    95,    11,    97,    30,    -1,
      15,    -1,    -1,    18,    -1,    -1,   106,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,   116,    -1,    33,    51,
      35,    53,    -1,    -1,    56,    40,    -1,    42,    -1,    61,
      -1,    -1,    -1,    48,    -1,    -1,    68,    -1,     3,     4,
       5,    -1,    74,    -1,    76,    -1,    78,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    91,
      -1,    -1,    94,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    51,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,   113,    -1,
      -1,    -1,    -1,    68,    -1,     3,     4,     5,    -1,    74,
      -1,    76,    -1,    78,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    -1,    -1,    91,    -1,    -1,    94,
      95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,   116,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,     3,     4,     5,    -1,    74,    -1,    76,    -1,
      78,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    91,    -1,    -1,    94,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
       3,     4,    -1,    74,    -1,    76,    -1,    78,    -1,    12,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,
      91,    -1,    -1,    94,    95,    -1,    97,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    50,    51,    52,
      53,    54,    -1,    56,    -1,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,     3,
       4,    74,    -1,    76,    -1,    78,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    89,    21,    91,    -1,
      -1,    94,    95,    96,    97,    98,    30,    -1,    -1,    -1,
     103,    -1,   105,   106,    -1,   108,    -1,   110,   111,    -1,
      -1,    -1,   115,    -1,    -1,    -1,    50,    51,    52,    53,
      -1,    -1,    56,    -1,    58,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,     3,     4,
      74,    -1,    76,    -1,    78,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    89,    21,    91,    -1,    -1,
      94,    95,    96,    97,    98,    30,    -1,    -1,    -1,   103,
      -1,   105,   106,    -1,   108,    -1,   110,   111,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,     3,     4,    68,    69,    70,    -1,    -1,    -1,    74,
      12,    76,    -1,    78,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    89,    -1,    91,    -1,    30,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,   103,    -1,
     105,   106,    -1,   108,    -1,   110,   111,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    58,    -1,    60,    61,
      -1,    -1,    -1,    -1,     3,     4,    68,    69,    70,    -1,
      -1,    -1,    74,    12,    76,    -1,    78,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    89,    -1,    91,
      -1,    30,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,   103,    -1,    -1,   106,    -1,   108,    -1,   110,   111,
      -1,    50,    51,    52,    53,    -1,    -1,    56,    -1,    58,
      -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,     3,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      -1,    31,    -1,     8,   103,    -1,    11,   106,    -1,   108,
      15,   110,   111,    18,    44,    -1,    -1,    22,    -1,    49,
      -1,    51,    27,    53,    -1,    -1,    56,    57,    33,    -1,
      35,    61,     3,    63,    -1,    40,    66,    42,    68,    -1,
      -1,    -1,    -1,    48,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    86,    87,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    44,    -1,    -1,   106,   107,    49,    -1,
      51,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    66,    -1,    68,    -1,    -1,
       3,     4,    -1,    74,    75,    76,    -1,    -1,   113,    12,
      -1,    -1,    83,    84,    17,    86,    87,    -1,    21,    90,
      91,    92,    93,    -1,     3,     4,    -1,    30,    -1,    -1,
     101,   102,    -1,    12,    13,    -1,   107,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    51,    76,    53,    78,    -1,    56,     3,     4,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    12,    91,    68,
      -1,    94,    17,    -1,    97,    74,    21,    76,    -1,    78,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,
       3,     4,    -1,    -1,    -1,    -1,    51,   106,    53,    12,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    31,    74,
      -1,    76,    -1,    78,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    91,    -1,    51,    94,
      53,    -1,    97,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,   106,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    56,    91,    -1,
      -1,    94,    61,    44,    97,    -1,    -1,    -1,    49,    68,
      -1,    -1,    -1,   106,    -1,    74,    57,    76,    -1,    78,
      -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    75,    94,    -1,    -1,    97,    -1,
      -1,    -1,    83,    84,    -1,    86,    87,   106,    -1,    90,
      -1,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,    -1,    -1,    -1,    -1,   107
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
     422,   422,   422,   422,   379,     3,    31,   124,   129,   130,
     142,   209,   299,    24,    29,    12,    24,   292,   294,   295,
     422,   134,   299,   379,    29,    24,   134,    29,   134,    29,
      24,    24,   379,    24,    29,    45,    12,    24,    13,   290,
      13,    51,   122,   125,    24,    29,    45,    43,   114,    10,
     112,    47,     9,     6,    36,    31,    34,    37,    38,    73,
      32,    39,    41,    16,    20,     7,    14,    26,    17,    21,
       3,     3,    14,    30,   121,   111,   280,   136,   137,   138,
     185,   286,    65,   181,   187,   129,   131,   189,   299,   111,
     244,    65,   270,   272,    12,   256,   292,     3,   225,   226,
     399,   400,   403,    13,   430,    13,    23,     8,    11,    15,
      18,    22,    27,    33,    35,    40,    42,    48,   113,   409,
      24,    45,   128,   133,   143,   145,   146,   299,   134,   299,
     393,   395,   134,   393,   299,   382,   122,     3,   209,   209,
     396,    57,   296,    19,   245,    45,    24,   209,   299,   209,
      78,     3,   299,    94,    97,   209,    24,    78,   209,   381,
     209,   396,   242,   389,   396,     3,    19,   209,     3,   209,
     381,   209,   396,   396,   412,   413,   414,   415,   416,   417,
     417,   419,   419,   419,   419,   128,   225,   310,   374,   375,
     420,   420,   420,   421,   421,   422,   422,   422,    30,    30,
     111,   281,   186,   122,   138,    37,   130,   182,   190,   247,
     248,   250,   251,   189,    82,   271,   273,   257,   258,   260,
     261,   262,   182,   401,     3,    51,    66,   105,   122,   125,
     150,   204,   205,   206,   207,   208,   210,   211,   212,   227,
     286,   404,    13,   402,   422,     9,    13,   141,   111,   304,
     396,   405,   396,    57,    46,    37,    19,   144,    43,   111,
     300,    45,   134,   202,   394,   300,   202,     3,    12,     3,
       3,    13,    19,   115,    46,    57,     3,   122,    78,   122,
      24,    29,     3,    57,     3,     3,    46,    13,   390,     3,
     291,     3,     3,    46,    28,   105,   204,   311,    64,    80,
      85,    88,   104,   173,   174,    30,   115,   119,   178,   268,
     277,   282,   283,    19,    65,   139,   140,    82,   183,   191,
      19,   245,   249,     3,   253,   286,   151,   111,   274,    13,
     259,   204,   263,   286,   111,   264,    19,   209,    24,   299,
     134,    24,   134,   134,     3,   201,    19,   131,   397,   425,
       3,    12,    30,    50,    52,    58,    60,    69,    70,    89,
      95,    96,    98,   103,   108,   110,   119,   178,   240,   269,
     304,   305,   307,   308,   309,   310,   312,   314,   315,   316,
     318,   319,   320,   321,   323,   324,   334,   336,   337,   339,
     348,   350,   352,   353,   354,   355,   356,   357,   366,   380,
     388,   407,   423,   424,   426,   427,   428,   145,    19,    65,
      94,   147,   148,   203,   300,   301,   302,   396,   396,   299,
     395,   383,   242,    12,   111,   325,   292,   135,   209,   209,
       3,   209,   209,    12,    12,    19,    12,   397,   410,   197,
     199,   201,   150,   150,   151,   119,   151,   115,   174,   204,
     136,   129,   132,   299,   151,   111,   192,   131,    30,   246,
     254,    19,    45,   175,   275,    19,     3,   299,   265,     3,
     299,    25,   299,   202,   403,    28,   396,     3,   351,   351,
     312,    12,    12,   341,   396,    12,    12,   396,    12,   304,
     368,    12,   396,   115,   306,    30,    30,   145,   128,   128,
     303,   245,    46,    45,    24,   142,   384,   385,    13,   242,
      54,    59,   327,   329,   331,   299,     3,     3,   242,   242,
     396,   242,   198,    35,   200,    24,   100,   176,   176,   109,
       3,   149,    30,     3,   197,   430,   175,   193,   193,   115,
     250,    12,    19,    30,   115,   119,   178,   268,   276,   277,
     278,   260,    25,    92,   115,   119,   178,   194,   195,   196,
     213,   233,   234,   235,   266,   267,   268,   304,   122,     3,
     122,   312,    28,    30,    30,    30,   108,   310,   319,   340,
     344,   346,   396,    30,   396,   396,    30,   152,   310,   370,
     372,   373,   376,   386,    55,   358,   359,   361,   304,   396,
      30,   307,    19,   115,   299,   192,   252,    13,   333,   410,
     328,   330,   331,   326,    23,    45,    12,    13,    13,    13,
      19,   203,   149,    30,   100,    30,   151,    24,    12,    30,
     115,   119,   194,   242,   151,   106,   184,   204,   214,   216,
       3,   304,   122,   180,   184,   204,   214,   236,   237,   209,
     209,   396,    12,    28,   347,    30,    13,    13,    13,    30,
     369,   371,    12,    67,   365,   360,   358,   359,    13,   203,
       3,   332,   115,   331,    28,    30,   329,   304,   355,   396,
      46,   242,   199,   177,   149,   175,     3,    13,    13,   299,
      30,   232,   304,     3,   217,   122,   237,   197,   232,    99,
     215,   228,   111,   238,    30,   396,   396,    19,   341,     3,
      69,    70,   108,   312,   313,   314,   317,   322,   335,   338,
     343,   349,   325,   304,    13,    30,   225,   362,   304,   361,
     365,   367,   312,    19,    28,   328,    30,    13,    19,   177,
      30,   202,    46,   204,   216,    12,   215,    12,    30,   130,
     132,   229,   231,   238,   152,   209,   239,   241,   376,    13,
      13,   319,    30,    28,    12,    12,    12,    62,   372,   122,
     207,   208,   363,    13,   333,   305,   149,    59,   284,   285,
     252,   217,   218,   220,   299,   218,   230,    24,    94,    97,
     240,    24,    30,   312,   342,   345,   346,   313,   310,   340,
     396,   396,   312,   364,   201,   304,   292,    30,   215,   219,
     222,   224,   225,   226,    19,   204,   219,    19,   209,    12,
      12,   115,   209,    13,    28,    30,    13,    13,   112,    13,
     223,   204,     3,   221,    13,   231,    94,   242,   242,    94,
     312,   396,   341,   313,   313,   130,   202,    19,   201,    24,
      97,    12,    13,    13,    12,    13,    30,    62,   224,   242,
      30,    30,   242,   313,   342,   313,    13,    13,    13,    30,
      30,   313
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
     377,   378,   378,   378,   378,   379,   379,   380,   380,   380,
     381,   382,   383,   383,   384,   384,   385,   386,   386,   386,
     387,   387,   388,   388,   388,   388,   388,   388,   389,   390,
     390,   391,   391,   391,   391,   391,   391,   391,   392,   392,
     392,   392,   393,   394,   394,   395,   396,   396,   397,   398,
     398,   399,   399,   400,   400,   401,   401,   402,   402,   403,
     403,   404,   404,   405,   405,   406,   406,   407,   408,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   410,   410,   410,   411,   411,   412,   412,
     413,   413,   414,   414,   415,   415,   416,   416,   416,   417,
     417,   417,   417,   417,   417,   418,   418,   419,   419,   419,
     419,   420,   420,   420,   421,   421,   421,   421,   422,   422,
     422,   422,   422,   423,   424,   425,   425,   425,   425,   425,
     426,   426,   426,   426,   427,   428,   429,   429,   429,   430,
     430,   431
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
       1,     0,     1,     2,     0,     3,     4,     4,     3,     6,
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
       1,     4,     4,     4,     3,     3,     0,     1,     3,     3,
       7,     4,     4,     0,     1,     0,     1,     3,     3,     5,
       4,     4,     4,     7,     7,     7,     7,     9,     2,     3,
       0,     4,     4,     4,     4,     6,     4,     3,     4,     4,
       4,     4,     2,     2,     0,     4,     1,     1,     3,     3,
       1,     1,     0,     2,     2,     3,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     5,     5,     2,
       0,     5
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
#line 471 "src/parser.y"
                                        {(yyval.i)=createNode("input");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2837 "src/parser.tab.c"
    break;

  case 3: /* modifier.multiopt: modifier.multiopt modifier  */
#line 474 "src/parser.y"
                                                {(yyval.i)=createNode("modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2843 "src/parser.tab.c"
    break;

  case 4: /* modifier.multiopt: %empty  */
#line 475 "src/parser.y"
                                {(yyval.i)=-1;}
#line 2849 "src/parser.tab.c"
    break;

  case 5: /* modifier: annotation  */
#line 478 "src/parser.y"
                                {(yyval.i)=createNode("modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2855 "src/parser.tab.c"
    break;

  case 6: /* modifier: "public"  */
#line 479 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2861 "src/parser.tab.c"
    break;

  case 7: /* modifier: "protected"  */
#line 480 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2867 "src/parser.tab.c"
    break;

  case 8: /* modifier: "private"  */
#line 481 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2873 "src/parser.tab.c"
    break;

  case 9: /* modifier: "abstract"  */
#line 482 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2879 "src/parser.tab.c"
    break;

  case 10: /* modifier: "static"  */
#line 483 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2885 "src/parser.tab.c"
    break;

  case 11: /* modifier: "final"  */
#line 484 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2891 "src/parser.tab.c"
    break;

  case 12: /* modifier: "sealed"  */
#line 485 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2897 "src/parser.tab.c"
    break;

  case 13: /* modifier: "strictfp"  */
#line 486 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2903 "src/parser.tab.c"
    break;

  case 14: /* modifier: "transitive"  */
#line 487 "src/parser.y"
                                        {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2909 "src/parser.tab.c"
    break;

  case 15: /* modifier: "transient"  */
#line 488 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2915 "src/parser.tab.c"
    break;

  case 16: /* modifier: "volatile"  */
#line 489 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2921 "src/parser.tab.c"
    break;

  case 17: /* dot_ind.multiopt: dot_ind.multiopt "." TOK_IDENTIFIER  */
#line 492 "src/parser.y"
                                                                {(yyval.i)=createNode("dot_ind.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2927 "src/parser.tab.c"
    break;

  case 18: /* dot_ind.multiopt: %empty  */
#line 493 "src/parser.y"
                                {(yyval.i)=-1;}
#line 2933 "src/parser.tab.c"
    break;

  case 19: /* type_IDENTIFIER: TOK_IDENTIFIER  */
#line 496 "src/parser.y"
                                        {(yyval.i)=createNode("type_IDENTIFIER");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2939 "src/parser.tab.c"
    break;

  case 20: /* unqualified_method_IDENTIFIER: TOK_IDENTIFIER  */
#line 499 "src/parser.y"
                                        {(yyval.i)=createNode("unqualified_method_IDENTIFIER");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2945 "src/parser.tab.c"
    break;

  case 21: /* primitive_type: annotation.multiopt numeric_type  */
#line 507 "src/parser.y"
                                                        {(yyval.i)=createNode("primitive_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2951 "src/parser.tab.c"
    break;

  case 22: /* primitive_type: annotation.multiopt "boolean"  */
#line 508 "src/parser.y"
                                                        {(yyval.i)=createNode("primitive_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2957 "src/parser.tab.c"
    break;

  case 23: /* numeric_type: integral_type  */
#line 511 "src/parser.y"
                                {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2963 "src/parser.tab.c"
    break;

  case 24: /* numeric_type: floating_point_type  */
#line 512 "src/parser.y"
                                        {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2969 "src/parser.tab.c"
    break;

  case 25: /* integral_type: "byte"  */
#line 515 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2975 "src/parser.tab.c"
    break;

  case 26: /* integral_type: "short"  */
#line 516 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2981 "src/parser.tab.c"
    break;

  case 27: /* integral_type: "int"  */
#line 517 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2987 "src/parser.tab.c"
    break;

  case 28: /* integral_type: "long"  */
#line 518 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2993 "src/parser.tab.c"
    break;

  case 29: /* integral_type: "char"  */
#line 519 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2999 "src/parser.tab.c"
    break;

  case 30: /* floating_point_type: "float"  */
#line 522 "src/parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3005 "src/parser.tab.c"
    break;

  case 31: /* floating_point_type: "double"  */
#line 523 "src/parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3011 "src/parser.tab.c"
    break;

  case 32: /* reference_type: class_or_interface_type  */
#line 526 "src/parser.y"
                                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3017 "src/parser.tab.c"
    break;

  case 33: /* reference_type: type_variable  */
#line 527 "src/parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3023 "src/parser.tab.c"
    break;

  case 34: /* reference_type: array_type  */
#line 528 "src/parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3029 "src/parser.tab.c"
    break;

  case 35: /* class_or_interface_type: class_type  */
#line 531 "src/parser.y"
                                {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3035 "src/parser.tab.c"
    break;

  case 36: /* class_or_interface_type: interface_type  */
#line 532 "src/parser.y"
                                        {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3041 "src/parser.tab.c"
    break;

  case 37: /* class_type: annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 535 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_type");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3047 "src/parser.tab.c"
    break;

  case 38: /* class_type: package_name "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 536 "src/parser.y"
                                                                                                {(yyval.i)=createNode("class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3053 "src/parser.tab.c"
    break;

  case 39: /* class_type: class_or_interface_type "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 537 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3059 "src/parser.tab.c"
    break;

  case 40: /* interface_type: class_type  */
#line 540 "src/parser.y"
                                {(yyval.i)=createNode("interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3065 "src/parser.tab.c"
    break;

  case 41: /* type_variable: annotation.multiopt type_IDENTIFIER  */
#line 543 "src/parser.y"
                                                        {(yyval.i)=createNode("type_variable");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3071 "src/parser.tab.c"
    break;

  case 42: /* array_type: primitive_type dims  */
#line 546 "src/parser.y"
                                        {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3077 "src/parser.tab.c"
    break;

  case 43: /* array_type: class_or_interface_type dims  */
#line 547 "src/parser.y"
                                                {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3083 "src/parser.tab.c"
    break;

  case 44: /* array_type: type_variable dims  */
#line 548 "src/parser.y"
                                        {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3089 "src/parser.tab.c"
    break;

  case 45: /* dims: annotation.multiopt "[" "]" an_sp.multiopt  */
#line 551 "src/parser.y"
                                                                        {(yyval.i)=createNode("dims");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3095 "src/parser.tab.c"
    break;

  case 46: /* an_sp.multiopt: an_sp.multiopt annotation.multiopt "[" "]"  */
#line 554 "src/parser.y"
                                                                        {(yyval.i)=createNode("an_sp.multiopt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3101 "src/parser.tab.c"
    break;

  case 47: /* an_sp.multiopt: %empty  */
#line 555 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3107 "src/parser.tab.c"
    break;

  case 48: /* type_parameter: type_parameter_modifier.multiopt type_IDENTIFIER type_bound.opt  */
#line 558 "src/parser.y"
                                                                                        {(yyval.i)=createNode("type_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3113 "src/parser.tab.c"
    break;

  case 49: /* type_parameter_modifier.multiopt: type_parameter_modifier  */
#line 561 "src/parser.y"
                                                {(yyval.i)=createNode("type_parameter_modifier.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3119 "src/parser.tab.c"
    break;

  case 50: /* type_parameter_modifier.multiopt: type_parameter_modifier.multiopt type_parameter_modifier  */
#line 562 "src/parser.y"
                                                                                {(yyval.i)=createNode("type_parameter_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3125 "src/parser.tab.c"
    break;

  case 51: /* type_parameter_modifier.multiopt: %empty  */
#line 563 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3131 "src/parser.tab.c"
    break;

  case 52: /* type_parameter_modifier: annotation  */
#line 565 "src/parser.y"
                                {(yyval.i)=createNode("type_parameter_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3137 "src/parser.tab.c"
    break;

  case 53: /* type_bound.opt: type_bound  */
#line 568 "src/parser.y"
                                {(yyval.i)=createNode("type_bound.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3143 "src/parser.tab.c"
    break;

  case 54: /* type_bound.opt: %empty  */
#line 569 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3149 "src/parser.tab.c"
    break;

  case 55: /* type_bound: "extends" type_variable  */
#line 572 "src/parser.y"
                                                {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3155 "src/parser.tab.c"
    break;

  case 56: /* type_bound: "extends" class_or_interface_type additional_bound.multiopt  */
#line 573 "src/parser.y"
                                                                                        {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3161 "src/parser.tab.c"
    break;

  case 57: /* additional_bound: "&" interface_type  */
#line 576 "src/parser.y"
                                        {(yyval.i)=createNode("additional_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3167 "src/parser.tab.c"
    break;

  case 58: /* type_arguments: "<" type_argument_list ">"  */
#line 579 "src/parser.y"
                                                        {(yyval.i)=createNode("type_arguments");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3173 "src/parser.tab.c"
    break;

  case 59: /* type_argument_list: type_argument type_argument.multiopt  */
#line 582 "src/parser.y"
                                                        {(yyval.i)=createNode("type_argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3179 "src/parser.tab.c"
    break;

  case 60: /* type_argument.multiopt: "," type_argument  */
#line 585 "src/parser.y"
                                        {(yyval.i)=createNode("type_argument.multiopt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3185 "src/parser.tab.c"
    break;

  case 61: /* type_argument.multiopt: type_argument.multiopt "," type_argument  */
#line 586 "src/parser.y"
                                                                {(yyval.i)=createNode("type_argument.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3191 "src/parser.tab.c"
    break;

  case 62: /* type_argument.multiopt: %empty  */
#line 587 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3197 "src/parser.tab.c"
    break;

  case 63: /* type_argument: reference_type  */
#line 589 "src/parser.y"
                                        {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3203 "src/parser.tab.c"
    break;

  case 64: /* type_argument: wildcard  */
#line 590 "src/parser.y"
                                {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3209 "src/parser.tab.c"
    break;

  case 65: /* wildcard: annotation.multiopt "?" wildcard_bounds.opt  */
#line 593 "src/parser.y"
                                                                        {(yyval.i)=createNode("wildcard");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3215 "src/parser.tab.c"
    break;

  case 66: /* wildcard_bounds.opt: wildcard_bounds  */
#line 596 "src/parser.y"
                                        {(yyval.i)=createNode("wildcard_bounds.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3221 "src/parser.tab.c"
    break;

  case 67: /* wildcard_bounds.opt: %empty  */
#line 597 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3227 "src/parser.tab.c"
    break;

  case 68: /* wildcard_bounds: "extends" reference_type  */
#line 600 "src/parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3233 "src/parser.tab.c"
    break;

  case 69: /* wildcard_bounds: "super" reference_type  */
#line 601 "src/parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3239 "src/parser.tab.c"
    break;

  case 70: /* module_name: TOK_IDENTIFIER  */
#line 606 "src/parser.y"
                                        {(yyval.i)=createNode("module_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3245 "src/parser.tab.c"
    break;

  case 71: /* module_name: module_name "." TOK_IDENTIFIER  */
#line 607 "src/parser.y"
                                                        {(yyval.i)=createNode("module_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3251 "src/parser.tab.c"
    break;

  case 72: /* package_name: TOK_IDENTIFIER  */
#line 610 "src/parser.y"
                                        {(yyval.i)=createNode("package_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3257 "src/parser.tab.c"
    break;

  case 73: /* package_name: package_name "." TOK_IDENTIFIER  */
#line 611 "src/parser.y"
                                                        {(yyval.i)=createNode("package_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3263 "src/parser.tab.c"
    break;

  case 74: /* type_name: type_IDENTIFIER  */
#line 614 "src/parser.y"
                                        {(yyval.i)=createNode("type_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3269 "src/parser.tab.c"
    break;

  case 75: /* type_name: package_or_type_name "." type_IDENTIFIER  */
#line 615 "src/parser.y"
                                                                {(yyval.i)=createNode("type_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3275 "src/parser.tab.c"
    break;

  case 76: /* expression_name: TOK_IDENTIFIER  */
#line 618 "src/parser.y"
                                        {(yyval.i)=createNode("expression_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3281 "src/parser.tab.c"
    break;

  case 77: /* expression_name: ambiguous_name "." TOK_IDENTIFIER  */
#line 619 "src/parser.y"
                                                        {(yyval.i)=createNode("expression_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3287 "src/parser.tab.c"
    break;

  case 78: /* method_name: unqualified_method_IDENTIFIER  */
#line 622 "src/parser.y"
                                                {(yyval.i)=createNode("method_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3293 "src/parser.tab.c"
    break;

  case 79: /* package_or_type_name: TOK_IDENTIFIER  */
#line 625 "src/parser.y"
                                        {(yyval.i)=createNode("package_or_type_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3299 "src/parser.tab.c"
    break;

  case 80: /* package_or_type_name: package_or_type_name "." TOK_IDENTIFIER  */
#line 626 "src/parser.y"
                                                                {(yyval.i)=createNode("package_or_type_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3305 "src/parser.tab.c"
    break;

  case 81: /* ambiguous_name: TOK_IDENTIFIER  */
#line 629 "src/parser.y"
                                        {(yyval.i)=createNode("ambiguous_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3311 "src/parser.tab.c"
    break;

  case 82: /* ambiguous_name: ambiguous_name "." TOK_IDENTIFIER  */
#line 630 "src/parser.y"
                                                        {(yyval.i)=createNode("ambiguous_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3317 "src/parser.tab.c"
    break;

  case 83: /* compilation_unit: ordinary_compilation_unit  */
#line 636 "src/parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3323 "src/parser.tab.c"
    break;

  case 84: /* compilation_unit: modular_compilation_unit  */
#line 637 "src/parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3329 "src/parser.tab.c"
    break;

  case 85: /* ordinary_compilation_unit: package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt  */
#line 640 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("ordinary_compilation_unit");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3335 "src/parser.tab.c"
    break;

  case 86: /* modular_compilation_unit: import_declaration.multiopt module_declaration  */
#line 643 "src/parser.y"
                                                                        {(yyval.i)=createNode("modular_compilation_unit");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3341 "src/parser.tab.c"
    break;

  case 87: /* package_declaration.opt: package_declaration  */
#line 646 "src/parser.y"
                                        {(yyval.i)=createNode("package_declaration.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3347 "src/parser.tab.c"
    break;

  case 88: /* package_declaration.opt: %empty  */
#line 647 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3353 "src/parser.tab.c"
    break;

  case 89: /* package_declaration: package_modifier.multiopt "package" TOK_IDENTIFIER dot_ind.multiopt ";"  */
#line 650 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("package_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3359 "src/parser.tab.c"
    break;

  case 90: /* package_modifier.multiopt: package_modifier.multiopt package_modifier  */
#line 653 "src/parser.y"
                                                                {(yyval.i)=createNode("package_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3365 "src/parser.tab.c"
    break;

  case 91: /* package_modifier.multiopt: %empty  */
#line 654 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3371 "src/parser.tab.c"
    break;

  case 92: /* package_modifier: annotation  */
#line 657 "src/parser.y"
                                {(yyval.i)=createNode("package_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3377 "src/parser.tab.c"
    break;

  case 93: /* import_declaration.multiopt: import_declaration.multiopt import_declaration  */
#line 660 "src/parser.y"
                                                                        {(yyval.i)=createNode("import_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3383 "src/parser.tab.c"
    break;

  case 94: /* import_declaration.multiopt: %empty  */
#line 661 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3389 "src/parser.tab.c"
    break;

  case 95: /* import_declaration: single_type_import_declaration  */
#line 664 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3395 "src/parser.tab.c"
    break;

  case 96: /* import_declaration: type_import_on_demand_declaration  */
#line 665 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3401 "src/parser.tab.c"
    break;

  case 97: /* import_declaration: single_static_import_declaration  */
#line 666 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3407 "src/parser.tab.c"
    break;

  case 98: /* import_declaration: static_import_on_demand_declaration  */
#line 667 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3413 "src/parser.tab.c"
    break;

  case 99: /* single_type_import_declaration: "import" type_name ";"  */
#line 670 "src/parser.y"
                                                        {(yyval.i)=createNode("single_type_import_declaration");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3419 "src/parser.tab.c"
    break;

  case 100: /* type_import_on_demand_declaration: "import" package_or_type_name "." "*" ";"  */
#line 673 "src/parser.y"
                                                                                {(yyval.i)=createNode("type_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3425 "src/parser.tab.c"
    break;

  case 101: /* single_static_import_declaration: "import" "static" type_name "." TOK_IDENTIFIER ";"  */
#line 676 "src/parser.y"
                                                                                        {(yyval.i)=createNode("single_static_import_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3431 "src/parser.tab.c"
    break;

  case 102: /* static_import_on_demand_declaration: "import" "static" type_name "." "*" ";"  */
#line 679 "src/parser.y"
                                                                                {(yyval.i)=createNode("static_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3437 "src/parser.tab.c"
    break;

  case 103: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration  */
#line 682 "src/parser.y"
                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3443 "src/parser.tab.c"
    break;

  case 104: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration  */
#line 683 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3449 "src/parser.tab.c"
    break;

  case 105: /* top_level_class_or_interface_declaration.multiopt: %empty  */
#line 684 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3455 "src/parser.tab.c"
    break;

  case 106: /* top_level_class_or_interface_declaration: class_declaration  */
#line 687 "src/parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3461 "src/parser.tab.c"
    break;

  case 107: /* top_level_class_or_interface_declaration: interface_declaration  */
#line 688 "src/parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3467 "src/parser.tab.c"
    break;

  case 108: /* top_level_class_or_interface_declaration: ";"  */
#line 689 "src/parser.y"
                                {(yyval.i)=createNode("top_level_class_or_interface_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3473 "src/parser.tab.c"
    break;

  case 109: /* module_declaration: annotation.multiopt open.opt "module" TOK_IDENTIFIER dot_ind.multiopt "{" module_directive.multiopt "}"  */
#line 692 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("module_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3479 "src/parser.tab.c"
    break;

  case 110: /* open.opt: "open"  */
#line 695 "src/parser.y"
                                {(yyval.i)=createNode("open.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3485 "src/parser.tab.c"
    break;

  case 111: /* open.opt: %empty  */
#line 696 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3491 "src/parser.tab.c"
    break;

  case 112: /* module_directive.multiopt: module_directive  */
#line 699 "src/parser.y"
                                        {(yyval.i)=createNode("module_directive.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3497 "src/parser.tab.c"
    break;

  case 113: /* module_directive.multiopt: module_directive.multiopt module_directive  */
#line 700 "src/parser.y"
                                                                {(yyval.i)=createNode("module_directive.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3503 "src/parser.tab.c"
    break;

  case 114: /* module_directive.multiopt: %empty  */
#line 701 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3509 "src/parser.tab.c"
    break;

  case 116: /* module_directive: "exports" package_name to_module_names.opt ";"  */
#line 705 "src/parser.y"
                                                                        {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3515 "src/parser.tab.c"
    break;

  case 117: /* module_directive: "opens" package_name to_module_names.opt ";"  */
#line 706 "src/parser.y"
                                                                        {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3521 "src/parser.tab.c"
    break;

  case 118: /* module_directive: "uses" type_name ";"  */
#line 707 "src/parser.y"
                                                {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3527 "src/parser.tab.c"
    break;

  case 119: /* module_directive: "provides" type_name "with" type_name com_type_name.multiopt ";"  */
#line 708 "src/parser.y"
                                                                                                {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3533 "src/parser.tab.c"
    break;

  case 120: /* com_type_name.multiopt: com_type_name.multiopt "," type_name  */
#line 711 "src/parser.y"
                                                                {(yyval.i)=createNode("com_type_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3539 "src/parser.tab.c"
    break;

  case 121: /* com_type_name.multiopt: %empty  */
#line 712 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3545 "src/parser.tab.c"
    break;

  case 122: /* to_module_names.opt: "to" module_name com_module_name.multiopt  */
#line 715 "src/parser.y"
                                                                {(yyval.i)=createNode("to_module_names.opt");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3551 "src/parser.tab.c"
    break;

  case 123: /* to_module_names.opt: to_module_names.opt "to" module_name com_module_name.multiopt  */
#line 716 "src/parser.y"
                                                                                        {(yyval.i)=createNode("to_module_names.opt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3557 "src/parser.tab.c"
    break;

  case 124: /* to_module_names.opt: %empty  */
#line 717 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3563 "src/parser.tab.c"
    break;

  case 125: /* com_module_name.multiopt: com_module_name.multiopt "," module_name  */
#line 719 "src/parser.y"
                                                                {(yyval.i)=createNode("com_module_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3569 "src/parser.tab.c"
    break;

  case 126: /* com_module_name.multiopt: %empty  */
#line 720 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3575 "src/parser.tab.c"
    break;

  case 127: /* class_declaration: normal_class_declaration  */
#line 725 "src/parser.y"
                                                {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3581 "src/parser.tab.c"
    break;

  case 128: /* class_declaration: enum_declaration  */
#line 726 "src/parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3587 "src/parser.tab.c"
    break;

  case 129: /* class_declaration: record_declaration  */
#line 727 "src/parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3593 "src/parser.tab.c"
    break;

  case 130: /* normal_class_declaration: modifier.multiopt "class" type_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body  */
#line 730 "src/parser.y"
                                                                                                                                                                {(yyval.i)=createNode("normal_class_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3599 "src/parser.tab.c"
    break;

  case 131: /* type_parameters.opt: type_parameters  */
#line 733 "src/parser.y"
                                        {(yyval.i)=createNode("type_parameters.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3605 "src/parser.tab.c"
    break;

  case 132: /* type_parameters.opt: %empty  */
#line 734 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3611 "src/parser.tab.c"
    break;

  case 133: /* class_extends.opt: class_extends  */
#line 737 "src/parser.y"
                                {(yyval.i)=createNode("class_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3617 "src/parser.tab.c"
    break;

  case 134: /* class_extends.opt: %empty  */
#line 738 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3623 "src/parser.tab.c"
    break;

  case 135: /* class_implements.opt: class_implements  */
#line 741 "src/parser.y"
                                        {(yyval.i)=createNode("class_implements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3629 "src/parser.tab.c"
    break;

  case 136: /* class_implements.opt: %empty  */
#line 742 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3635 "src/parser.tab.c"
    break;

  case 137: /* class_permits.opt: class_permits  */
#line 745 "src/parser.y"
                                {(yyval.i)=createNode("class_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3641 "src/parser.tab.c"
    break;

  case 138: /* class_permits.opt: %empty  */
#line 746 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3647 "src/parser.tab.c"
    break;

  case 139: /* type_parameters: "<" type_parameter_list ">"  */
#line 749 "src/parser.y"
                                                        {(yyval.i)=createNode("type_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3653 "src/parser.tab.c"
    break;

  case 140: /* type_parameter_list: type_parameter com_type_parameter.multiopt  */
#line 752 "src/parser.y"
                                                                {(yyval.i)=createNode("type_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3659 "src/parser.tab.c"
    break;

  case 141: /* com_type_parameter.multiopt: com_type_parameter.multiopt "," type_parameter  */
#line 755 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_type_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3665 "src/parser.tab.c"
    break;

  case 142: /* com_type_parameter.multiopt: %empty  */
#line 756 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3671 "src/parser.tab.c"
    break;

  case 143: /* class_extends: "extends" class_type  */
#line 759 "src/parser.y"
                                                {(yyval.i)=createNode("class_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3677 "src/parser.tab.c"
    break;

  case 144: /* class_implements: "implements" interface_type_list  */
#line 762 "src/parser.y"
                                                        {(yyval.i)=createNode("class_implements");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3683 "src/parser.tab.c"
    break;

  case 145: /* interface_type_list: interface_type com_interface_type.multiopt  */
#line 765 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3689 "src/parser.tab.c"
    break;

  case 146: /* com_interface_type.multiopt: com_interface_type.multiopt "," interface_type  */
#line 768 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_interface_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3695 "src/parser.tab.c"
    break;

  case 147: /* com_interface_type.multiopt: %empty  */
#line 769 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3701 "src/parser.tab.c"
    break;

  case 148: /* class_permits: "permits" type_name com_type_name.multiopt  */
#line 772 "src/parser.y"
                                                                {(yyval.i)=createNode("class_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3707 "src/parser.tab.c"
    break;

  case 149: /* class_body: "{" class_body_declaration.multiopt "}"  */
#line 775 "src/parser.y"
                                                                        {(yyval.i)=createNode("class_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3713 "src/parser.tab.c"
    break;

  case 150: /* class_body_declaration.multiopt: class_body_declaration.multiopt class_body_declaration  */
#line 778 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3719 "src/parser.tab.c"
    break;

  case 151: /* class_body_declaration.multiopt: %empty  */
#line 779 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3725 "src/parser.tab.c"
    break;

  case 152: /* class_body_declaration: class_member_declaration  */
#line 782 "src/parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3731 "src/parser.tab.c"
    break;

  case 153: /* class_body_declaration: instance_initializer  */
#line 783 "src/parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3737 "src/parser.tab.c"
    break;

  case 154: /* class_body_declaration: static_initializer  */
#line 784 "src/parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3743 "src/parser.tab.c"
    break;

  case 155: /* class_body_declaration: constructor_declaration  */
#line 785 "src/parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3749 "src/parser.tab.c"
    break;

  case 156: /* class_member_declaration: field_declaration  */
#line 788 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3755 "src/parser.tab.c"
    break;

  case 157: /* class_member_declaration: method_declaration  */
#line 789 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3761 "src/parser.tab.c"
    break;

  case 158: /* class_member_declaration: class_declaration  */
#line 790 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3767 "src/parser.tab.c"
    break;

  case 159: /* class_member_declaration: interface_declaration  */
#line 791 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3773 "src/parser.tab.c"
    break;

  case 160: /* field_declaration: modifier.multiopt unann_type variable_declarator_list ";"  */
#line 794 "src/parser.y"
                                                                                {(yyval.i)=createNode("field_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3779 "src/parser.tab.c"
    break;

  case 161: /* variable_declarator_list: variable_declarator com_variable_declarator.multiopt  */
#line 797 "src/parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3785 "src/parser.tab.c"
    break;

  case 162: /* com_variable_declarator.multiopt: com_variable_declarator.multiopt "," variable_declarator  */
#line 800 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_variable_declarator.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3791 "src/parser.tab.c"
    break;

  case 163: /* com_variable_declarator.multiopt: %empty  */
#line 801 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3797 "src/parser.tab.c"
    break;

  case 164: /* variable_declarator: variable_declarator_id eq_variable_initializer.opt  */
#line 804 "src/parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3803 "src/parser.tab.c"
    break;

  case 165: /* eq_variable_initializer.opt: "=" variable_initializer  */
#line 807 "src/parser.y"
                                                {(yyval.i)=createNode("eq_variable_initializer.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3809 "src/parser.tab.c"
    break;

  case 166: /* eq_variable_initializer.opt: %empty  */
#line 808 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3815 "src/parser.tab.c"
    break;

  case 167: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 811 "src/parser.y"
                                                {(yyval.i)=createNode("variable_declarator_id");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3821 "src/parser.tab.c"
    break;

  case 168: /* dims.opt: dims  */
#line 814 "src/parser.y"
                        {(yyval.i)=createNode("dims.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3827 "src/parser.tab.c"
    break;

  case 169: /* dims.opt: %empty  */
#line 815 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3833 "src/parser.tab.c"
    break;

  case 170: /* variable_initializer: expression  */
#line 818 "src/parser.y"
                                {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3839 "src/parser.tab.c"
    break;

  case 171: /* variable_initializer: array_initializer  */
#line 819 "src/parser.y"
                                        {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3845 "src/parser.tab.c"
    break;

  case 172: /* unann_type: unann_primitive_type  */
#line 822 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3851 "src/parser.tab.c"
    break;

  case 173: /* unann_type: unann_reference_type  */
#line 823 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3857 "src/parser.tab.c"
    break;

  case 174: /* unann_primitive_type: numeric_type  */
#line 826 "src/parser.y"
                                {(yyval.i)=createNode("unann_primitive_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3863 "src/parser.tab.c"
    break;

  case 175: /* unann_primitive_type: "boolean"  */
#line 827 "src/parser.y"
                                {(yyval.i)=createNode("unann_primitive_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3869 "src/parser.tab.c"
    break;

  case 176: /* unann_reference_type: unann_class_or_interface_type  */
#line 830 "src/parser.y"
                                                {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3875 "src/parser.tab.c"
    break;

  case 177: /* unann_reference_type: unann_type_variable  */
#line 831 "src/parser.y"
                                        {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3881 "src/parser.tab.c"
    break;

  case 178: /* unann_reference_type: unann_array_type  */
#line 832 "src/parser.y"
                                        {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3887 "src/parser.tab.c"
    break;

  case 179: /* unann_class_or_interface_type: unann_class_type  */
#line 835 "src/parser.y"
                                        {(yyval.i)=createNode("unann_class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3893 "src/parser.tab.c"
    break;

  case 180: /* unann_class_or_interface_type: unann_interface_type  */
#line 836 "src/parser.y"
                                        {(yyval.i)=createNode("unann_class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3899 "src/parser.tab.c"
    break;

  case 181: /* unann_class_type: type_IDENTIFIER type_arguments.opt  */
#line 839 "src/parser.y"
                                                        {(yyval.i)=createNode("unann_class_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3905 "src/parser.tab.c"
    break;

  case 182: /* unann_class_type: package_name "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 840 "src/parser.y"
                                                                                                {(yyval.i)=createNode("unann_class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3911 "src/parser.tab.c"
    break;

  case 183: /* unann_class_type: unann_class_or_interface_type "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 841 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("unann_class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3917 "src/parser.tab.c"
    break;

  case 184: /* type_arguments.opt: type_arguments  */
#line 844 "src/parser.y"
                                        {(yyval.i)=createNode("type_arguments.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3923 "src/parser.tab.c"
    break;

  case 185: /* type_arguments.opt: %empty  */
#line 845 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3929 "src/parser.tab.c"
    break;

  case 186: /* unann_interface_type: unann_class_type  */
#line 848 "src/parser.y"
                                        {(yyval.i)=createNode("unann_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3935 "src/parser.tab.c"
    break;

  case 187: /* unann_type_variable: type_IDENTIFIER  */
#line 851 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type_variable");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3941 "src/parser.tab.c"
    break;

  case 188: /* unann_array_type: unann_primitive_type dims  */
#line 854 "src/parser.y"
                                                {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3947 "src/parser.tab.c"
    break;

  case 189: /* unann_array_type: unann_class_or_interface_type dims  */
#line 855 "src/parser.y"
                                                        {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3953 "src/parser.tab.c"
    break;

  case 190: /* unann_array_type: unann_type_variable dims  */
#line 856 "src/parser.y"
                                                {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3959 "src/parser.tab.c"
    break;

  case 191: /* method_declaration: modifier.multiopt method_header method_body  */
#line 859 "src/parser.y"
                                                                {(yyval.i)=createNode("method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3965 "src/parser.tab.c"
    break;

  case 192: /* method_header: result method_declarator throws.opt  */
#line 862 "src/parser.y"
                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3971 "src/parser.tab.c"
    break;

  case 193: /* method_header: type_parameters annotation.multiopt result method_declarator throws.opt  */
#line 863 "src/parser.y"
                                                                                                {(yyval.i)=createNode("method_header");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3977 "src/parser.tab.c"
    break;

  case 194: /* throws.opt: throws  */
#line 866 "src/parser.y"
                                {(yyval.i)=createNode("throws.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3983 "src/parser.tab.c"
    break;

  case 195: /* throws.opt: %empty  */
#line 867 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3989 "src/parser.tab.c"
    break;

  case 196: /* result: unann_type  */
#line 870 "src/parser.y"
                                {(yyval.i)=createNode("result");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3995 "src/parser.tab.c"
    break;

  case 197: /* result: "void"  */
#line 871 "src/parser.y"
                                {(yyval.i)=createNode("result");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4001 "src/parser.tab.c"
    break;

  case 198: /* method_declarator: TOK_IDENTIFIER "(" receiver_parameter_com.opt formal_parameter_list.opt ")" dims.opt  */
#line 874 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("method_declarator");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4007 "src/parser.tab.c"
    break;

  case 199: /* receiver_parameter_com.opt: receiver_parameter ","  */
#line 877 "src/parser.y"
                                                {(yyval.i)=createNode("receiver_parameter_com.opt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4013 "src/parser.tab.c"
    break;

  case 200: /* receiver_parameter_com.opt: %empty  */
#line 878 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4019 "src/parser.tab.c"
    break;

  case 201: /* formal_parameter_list.opt: formal_parameter_list  */
#line 881 "src/parser.y"
                                        {(yyval.i)=createNode("formal_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4025 "src/parser.tab.c"
    break;

  case 202: /* formal_parameter_list.opt: %empty  */
#line 882 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4031 "src/parser.tab.c"
    break;

  case 203: /* receiver_parameter: annotation.multiopt unann_type IDENTIFIER_dot.opt "this"  */
#line 885 "src/parser.y"
                                                                                {(yyval.i)=createNode("receiver_parameter");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4037 "src/parser.tab.c"
    break;

  case 204: /* IDENTIFIER_dot.opt: TOK_IDENTIFIER "."  */
#line 888 "src/parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER_dot.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4043 "src/parser.tab.c"
    break;

  case 205: /* IDENTIFIER_dot.opt: %empty  */
#line 889 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4049 "src/parser.tab.c"
    break;

  case 206: /* formal_parameter_list: formal_parameter com_formal_parameter.multiopt  */
#line 892 "src/parser.y"
                                                                        {(yyval.i)=createNode("formal_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4055 "src/parser.tab.c"
    break;

  case 207: /* com_formal_parameter.multiopt: com_formal_parameter.multiopt "," formal_parameter  */
#line 895 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_formal_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4061 "src/parser.tab.c"
    break;

  case 208: /* com_formal_parameter.multiopt: %empty  */
#line 896 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4067 "src/parser.tab.c"
    break;

  case 209: /* formal_parameter: variable_modifier.multiopt unann_type variable_declarator_id  */
#line 899 "src/parser.y"
                                                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4073 "src/parser.tab.c"
    break;

  case 210: /* formal_parameter: variable_arity_parameter  */
#line 900 "src/parser.y"
                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4079 "src/parser.tab.c"
    break;

  case 211: /* variable_modifier.multiopt: variable_modifier.multiopt variable_modifier  */
#line 903 "src/parser.y"
                                                                {(yyval.i)=createNode("variable_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4085 "src/parser.tab.c"
    break;

  case 212: /* variable_modifier.multiopt: %empty  */
#line 904 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4091 "src/parser.tab.c"
    break;

  case 213: /* variable_arity_parameter: variable_modifier.multiopt unann_type annotation.multiopt "..." TOK_IDENTIFIER  */
#line 907 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("variable_arity_parameter");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4097 "src/parser.tab.c"
    break;

  case 214: /* variable_modifier: annotation  */
#line 910 "src/parser.y"
                                {(yyval.i)=createNode("variable_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4103 "src/parser.tab.c"
    break;

  case 215: /* variable_modifier: "final"  */
#line 911 "src/parser.y"
                                {(yyval.i)=createNode("variable_modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4109 "src/parser.tab.c"
    break;

  case 216: /* throws: "throws" exception_type_list  */
#line 914 "src/parser.y"
                                                        {(yyval.i)=createNode("throws");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4115 "src/parser.tab.c"
    break;

  case 217: /* exception_type_list: exception_type com_exception_type.multiopt  */
#line 917 "src/parser.y"
                                                                {(yyval.i)=createNode("exception_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4121 "src/parser.tab.c"
    break;

  case 218: /* com_exception_type.multiopt: com_exception_type.multiopt "," exception_type  */
#line 920 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_exception_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4127 "src/parser.tab.c"
    break;

  case 219: /* com_exception_type.multiopt: %empty  */
#line 921 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4133 "src/parser.tab.c"
    break;

  case 220: /* exception_type: class_type  */
#line 924 "src/parser.y"
                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4139 "src/parser.tab.c"
    break;

  case 221: /* exception_type: type_variable  */
#line 925 "src/parser.y"
                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4145 "src/parser.tab.c"
    break;

  case 222: /* method_body: block  */
#line 928 "src/parser.y"
                        {(yyval.i)=createNode("method_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4151 "src/parser.tab.c"
    break;

  case 223: /* method_body: ";"  */
#line 929 "src/parser.y"
                                {(yyval.i)=createNode("method_body");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4157 "src/parser.tab.c"
    break;

  case 224: /* instance_initializer: block  */
#line 932 "src/parser.y"
                        {(yyval.i)=createNode("instance_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4163 "src/parser.tab.c"
    break;

  case 225: /* static_initializer: "static" block  */
#line 935 "src/parser.y"
                                        {(yyval.i)=createNode("static_initializer");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4169 "src/parser.tab.c"
    break;

  case 226: /* constructor_declaration: modifier.multiopt constructor_declarator throws.opt constructor_body  */
#line 938 "src/parser.y"
                                                                                        {(yyval.i)=createNode("constructor_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4175 "src/parser.tab.c"
    break;

  case 227: /* constructor_declarator: type_parameters.opt simple_type_name "(" receiver_parameter_com.opt formal_parameter_list.opt ")"  */
#line 941 "src/parser.y"
                                                                                                                                {(yyval.i)=createNode("constructor_declarator");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4181 "src/parser.tab.c"
    break;

  case 228: /* simple_type_name: type_IDENTIFIER  */
#line 944 "src/parser.y"
                                        {(yyval.i)=createNode("simple_type_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4187 "src/parser.tab.c"
    break;

  case 229: /* constructor_body: "{" explicit_constructor_invocation.opt block_statements.opt "}"  */
#line 947 "src/parser.y"
                                                                                                {(yyval.i)=createNode("constructor_body");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4193 "src/parser.tab.c"
    break;

  case 230: /* explicit_constructor_invocation.opt: explicit_constructor_invocation  */
#line 950 "src/parser.y"
                                                        {(yyval.i)=createNode("explicit_constructor_invocation.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4199 "src/parser.tab.c"
    break;

  case 231: /* explicit_constructor_invocation.opt: %empty  */
#line 951 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4205 "src/parser.tab.c"
    break;

  case 232: /* block_statements.opt: block_statements  */
#line 954 "src/parser.y"
                                        {(yyval.i)=createNode("block_statements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4211 "src/parser.tab.c"
    break;

  case 233: /* block_statements.opt: %empty  */
#line 955 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4217 "src/parser.tab.c"
    break;

  case 234: /* explicit_constructor_invocation: type_arguments.opt "this" "(" argument_list.opt ")" ";"  */
#line 958 "src/parser.y"
                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4223 "src/parser.tab.c"
    break;

  case 235: /* explicit_constructor_invocation: type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 959 "src/parser.y"
                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4229 "src/parser.tab.c"
    break;

  case 236: /* explicit_constructor_invocation: expression_name "." type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 960 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4235 "src/parser.tab.c"
    break;

  case 237: /* explicit_constructor_invocation: primary "." type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 961 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4241 "src/parser.tab.c"
    break;

  case 238: /* argument_list.opt: argument_list  */
#line 964 "src/parser.y"
                                {(yyval.i)=createNode("argument_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4247 "src/parser.tab.c"
    break;

  case 239: /* argument_list.opt: %empty  */
#line 965 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4253 "src/parser.tab.c"
    break;

  case 240: /* enum_declaration: modifier.multiopt "enum" type_IDENTIFIER class_implements.opt enum_body  */
#line 968 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enum_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4259 "src/parser.tab.c"
    break;

  case 241: /* enum_body: "{" enum_constant_list.opt com.opt enum_body_declarations.opt "}"  */
#line 971 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enum_body");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4265 "src/parser.tab.c"
    break;

  case 242: /* com.opt: ","  */
#line 974 "src/parser.y"
                                {(yyval.i)=createNode("com.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4271 "src/parser.tab.c"
    break;

  case 243: /* com.opt: %empty  */
#line 975 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4277 "src/parser.tab.c"
    break;

  case 244: /* enum_body_declarations.opt: enum_body_declarations  */
#line 978 "src/parser.y"
                                                {(yyval.i)=createNode("enum_body_declarations.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4283 "src/parser.tab.c"
    break;

  case 245: /* enum_body_declarations.opt: %empty  */
#line 979 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4289 "src/parser.tab.c"
    break;

  case 246: /* enum_constant_list.opt: enum_constant_list  */
#line 982 "src/parser.y"
                                        {(yyval.i)=createNode("enum_constant_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4295 "src/parser.tab.c"
    break;

  case 247: /* enum_constant_list.opt: %empty  */
#line 983 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4301 "src/parser.tab.c"
    break;

  case 248: /* enum_constant_list: enum_constant com_enum_constant.multiopt  */
#line 986 "src/parser.y"
                                                                {(yyval.i)=createNode("enum_constant_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4307 "src/parser.tab.c"
    break;

  case 249: /* com_enum_constant.multiopt: com_enum_constant.multiopt "," enum_constant  */
#line 989 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_enum_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4313 "src/parser.tab.c"
    break;

  case 250: /* com_enum_constant.multiopt: %empty  */
#line 990 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4319 "src/parser.tab.c"
    break;

  case 251: /* enum_constant: enum_modifier.multiopt TOK_IDENTIFIER "[" "(" argument_list.opt ")" "]" class_body.opt  */
#line 993 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("enum_constant");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4325 "src/parser.tab.c"
    break;

  case 252: /* enum_modifier.multiopt: enum_modifier.multiopt enum_modifier  */
#line 996 "src/parser.y"
                                                        {(yyval.i)=createNode("enum_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4331 "src/parser.tab.c"
    break;

  case 253: /* enum_modifier.multiopt: %empty  */
#line 997 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4337 "src/parser.tab.c"
    break;

  case 254: /* class_body.opt: class_body  */
#line 1000 "src/parser.y"
                                {(yyval.i)=createNode("class_body.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4343 "src/parser.tab.c"
    break;

  case 255: /* class_body.opt: %empty  */
#line 1001 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4349 "src/parser.tab.c"
    break;

  case 256: /* enum_modifier: annotation  */
#line 1004 "src/parser.y"
                                {(yyval.i)=createNode("enum_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4355 "src/parser.tab.c"
    break;

  case 257: /* enum_body_declarations: ";" class_body_declaration.multiopt  */
#line 1007 "src/parser.y"
                                                                {(yyval.i)=createNode("enum_body_declarations");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4361 "src/parser.tab.c"
    break;

  case 258: /* record_declaration: modifier.multiopt "record" type_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body  */
#line 1010 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("record_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4367 "src/parser.tab.c"
    break;

  case 259: /* record_header: "(" record_component_list.opt ")"  */
#line 1013 "src/parser.y"
                                                                {(yyval.i)=createNode("record_header");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4373 "src/parser.tab.c"
    break;

  case 260: /* record_component_list.opt: record_component_list  */
#line 1016 "src/parser.y"
                                        {(yyval.i)=createNode("record_component_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4379 "src/parser.tab.c"
    break;

  case 261: /* record_component_list.opt: %empty  */
#line 1017 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4385 "src/parser.tab.c"
    break;

  case 262: /* record_component_list: record_component com_record_component.multiopt  */
#line 1020 "src/parser.y"
                                                                        {(yyval.i)=createNode("record_component_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4391 "src/parser.tab.c"
    break;

  case 263: /* com_record_component.multiopt: com_record_component.multiopt "," record_component  */
#line 1023 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_record_component.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4397 "src/parser.tab.c"
    break;

  case 264: /* com_record_component.multiopt: %empty  */
#line 1024 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4403 "src/parser.tab.c"
    break;

  case 265: /* record_component: record_component_modifier.multiopt unann_type TOK_IDENTIFIER  */
#line 1028 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_component");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4409 "src/parser.tab.c"
    break;

  case 266: /* record_component: variable_arity_record_component  */
#line 1029 "src/parser.y"
                                                        {(yyval.i)=createNode("record_component");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4415 "src/parser.tab.c"
    break;

  case 267: /* record_component_modifier.multiopt: record_component_modifier.multiopt record_component_modifier  */
#line 1032 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_component_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4421 "src/parser.tab.c"
    break;

  case 268: /* record_component_modifier.multiopt: %empty  */
#line 1033 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4427 "src/parser.tab.c"
    break;

  case 269: /* variable_arity_record_component: record_component_modifier.multiopt unann_type annotation.multiopt "..." TOK_IDENTIFIER  */
#line 1036 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("variable_arity_record_component");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4433 "src/parser.tab.c"
    break;

  case 270: /* record_component_modifier: annotation  */
#line 1039 "src/parser.y"
                                {(yyval.i)=createNode("record_component_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4439 "src/parser.tab.c"
    break;

  case 271: /* record_body: "{" record_body_declaration.multiopt "}"  */
#line 1042 "src/parser.y"
                                                                        {(yyval.i)=createNode("record_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4445 "src/parser.tab.c"
    break;

  case 272: /* record_body_declaration.multiopt: record_body_declaration.multiopt record_body_declaration  */
#line 1045 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4451 "src/parser.tab.c"
    break;

  case 273: /* record_body_declaration.multiopt: %empty  */
#line 1046 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4457 "src/parser.tab.c"
    break;

  case 274: /* record_body_declaration: class_body_declaration  */
#line 1049 "src/parser.y"
                                                {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4463 "src/parser.tab.c"
    break;

  case 275: /* record_body_declaration: compact_constructor_declaration  */
#line 1050 "src/parser.y"
                                                        {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4469 "src/parser.tab.c"
    break;

  case 276: /* compact_constructor_declaration: modifier.multiopt simple_type_name constructor_body  */
#line 1053 "src/parser.y"
                                                                        {(yyval.i)=createNode("compact_constructor_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4475 "src/parser.tab.c"
    break;

  case 277: /* interface_declaration: normal_interface_declaration  */
#line 1059 "src/parser.y"
                                                {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4481 "src/parser.tab.c"
    break;

  case 278: /* interface_declaration: annotation_interface_declaration  */
#line 1060 "src/parser.y"
                                                        {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4487 "src/parser.tab.c"
    break;

  case 279: /* normal_interface_declaration: modifier.multiopt "interface" type_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body  */
#line 1063 "src/parser.y"
                                                                                                                                                        {(yyval.i)=createNode("normal_interface_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4493 "src/parser.tab.c"
    break;

  case 280: /* interface_extends.opt: interface_extends  */
#line 1066 "src/parser.y"
                                        {(yyval.i)=createNode("interface_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4499 "src/parser.tab.c"
    break;

  case 281: /* interface_extends.opt: %empty  */
#line 1067 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4505 "src/parser.tab.c"
    break;

  case 282: /* interface_permits.opt: interface_permits  */
#line 1070 "src/parser.y"
                                        {(yyval.i)=createNode("interface_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4511 "src/parser.tab.c"
    break;

  case 283: /* interface_permits.opt: %empty  */
#line 1071 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4517 "src/parser.tab.c"
    break;

  case 284: /* interface_extends: "extends" interface_type_list  */
#line 1074 "src/parser.y"
                                                        {(yyval.i)=createNode("interface_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4523 "src/parser.tab.c"
    break;

  case 285: /* interface_permits: "permits" type_name com_type_name.multiopt  */
#line 1077 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4529 "src/parser.tab.c"
    break;

  case 286: /* interface_body: "{" interface_member_declaration.multiopt "}"  */
#line 1080 "src/parser.y"
                                                                        {(yyval.i)=createNode("interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4535 "src/parser.tab.c"
    break;

  case 287: /* interface_member_declaration.multiopt: interface_member_declaration.multiopt interface_member_declaration  */
#line 1083 "src/parser.y"
                                                                                        {(yyval.i)=createNode("interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4541 "src/parser.tab.c"
    break;

  case 288: /* interface_member_declaration.multiopt: %empty  */
#line 1084 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4547 "src/parser.tab.c"
    break;

  case 289: /* interface_member_declaration: constant_declaration  */
#line 1087 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4553 "src/parser.tab.c"
    break;

  case 290: /* interface_member_declaration: interface_method_declaration  */
#line 1088 "src/parser.y"
                                                {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4559 "src/parser.tab.c"
    break;

  case 291: /* interface_member_declaration: class_declaration  */
#line 1089 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4565 "src/parser.tab.c"
    break;

  case 292: /* interface_member_declaration: interface_declaration  */
#line 1090 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4571 "src/parser.tab.c"
    break;

  case 293: /* interface_member_declaration: ";"  */
#line 1091 "src/parser.y"
                                {(yyval.i)=createNode("interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4577 "src/parser.tab.c"
    break;

  case 294: /* constant_declaration: modifier.multiopt unann_type variable_declarator_list ";"  */
#line 1094 "src/parser.y"
                                                                                {(yyval.i)=createNode("constant_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4583 "src/parser.tab.c"
    break;

  case 295: /* interface_method_declaration: modifier.multiopt method_header method_body  */
#line 1097 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4589 "src/parser.tab.c"
    break;

  case 296: /* annotation_interface_declaration: modifier.multiopt "@" "interface" type_IDENTIFIER annotation_interface_body  */
#line 1100 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("annotation_interface_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4595 "src/parser.tab.c"
    break;

  case 297: /* annotation_interface_body: "{" annotation_interface_member_declaration.multiopt "}"  */
#line 1103 "src/parser.y"
                                                                                        {(yyval.i)=createNode("annotation_interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4601 "src/parser.tab.c"
    break;

  case 298: /* annotation_interface_member_declaration.multiopt: annotation_interface_member_declaration.multiopt annotation_interface_member_declaration  */
#line 1106 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("annotation_interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4607 "src/parser.tab.c"
    break;

  case 299: /* annotation_interface_member_declaration.multiopt: %empty  */
#line 1107 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4613 "src/parser.tab.c"
    break;

  case 300: /* annotation_interface_member_declaration: annotation_interface_element_declaration  */
#line 1110 "src/parser.y"
                                                                {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4619 "src/parser.tab.c"
    break;

  case 301: /* annotation_interface_member_declaration: constant_declaration  */
#line 1111 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4625 "src/parser.tab.c"
    break;

  case 302: /* annotation_interface_member_declaration: class_declaration  */
#line 1112 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4631 "src/parser.tab.c"
    break;

  case 303: /* annotation_interface_member_declaration: interface_declaration  */
#line 1113 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4637 "src/parser.tab.c"
    break;

  case 304: /* annotation_interface_member_declaration: ";"  */
#line 1114 "src/parser.y"
                                {(yyval.i)=createNode("annotation_interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4643 "src/parser.tab.c"
    break;

  case 305: /* annotation_interface_element_declaration: modifier.multiopt unann_type TOK_IDENTIFIER "(" ")" dims.opt default_value.opt ";"  */
#line 1117 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("annotation_interface_element_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4649 "src/parser.tab.c"
    break;

  case 306: /* default_value.opt: default_value  */
#line 1120 "src/parser.y"
                                {(yyval.i)=createNode("default_value.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4655 "src/parser.tab.c"
    break;

  case 307: /* default_value.opt: %empty  */
#line 1121 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4661 "src/parser.tab.c"
    break;

  case 308: /* default_value: "default" element_value  */
#line 1124 "src/parser.y"
                                                {(yyval.i)=createNode("default_value");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4667 "src/parser.tab.c"
    break;

  case 309: /* annotation: normal_annotation  */
#line 1127 "src/parser.y"
                                        {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4673 "src/parser.tab.c"
    break;

  case 310: /* annotation: marker_annotation  */
#line 1128 "src/parser.y"
                                        {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4679 "src/parser.tab.c"
    break;

  case 311: /* annotation: single_element_annotation  */
#line 1129 "src/parser.y"
                                                {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4685 "src/parser.tab.c"
    break;

  case 312: /* normal_annotation: "@" type_name "(" element_value_pair_list.opt ")"  */
#line 1132 "src/parser.y"
                                                                                {(yyval.i)=createNode("normal_annotation");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4691 "src/parser.tab.c"
    break;

  case 313: /* element_value_pair_list.opt: element_value_pair_list  */
#line 1135 "src/parser.y"
                                                {(yyval.i)=createNode("element_value_pair_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4697 "src/parser.tab.c"
    break;

  case 314: /* element_value_pair_list.opt: %empty  */
#line 1136 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4703 "src/parser.tab.c"
    break;

  case 315: /* element_value_pair_list: element_value_pair com_element_value_pair.multiopt  */
#line 1139 "src/parser.y"
                                                                        {(yyval.i)=createNode("element_value_pair_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4709 "src/parser.tab.c"
    break;

  case 316: /* com_element_value_pair.multiopt: com_element_value_pair.multiopt "," element_value_pair  */
#line 1142 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_element_value_pair.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4715 "src/parser.tab.c"
    break;

  case 317: /* com_element_value_pair.multiopt: %empty  */
#line 1143 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4721 "src/parser.tab.c"
    break;

  case 318: /* element_value_pair: TOK_IDENTIFIER "=" element_value  */
#line 1146 "src/parser.y"
                                                        {(yyval.i)=createNode("element_value_pair");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4727 "src/parser.tab.c"
    break;

  case 319: /* element_value: conditional_expression  */
#line 1149 "src/parser.y"
                                                {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4733 "src/parser.tab.c"
    break;

  case 320: /* element_value: element_value_array_initializer  */
#line 1150 "src/parser.y"
                                                        {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4739 "src/parser.tab.c"
    break;

  case 321: /* element_value: annotation  */
#line 1151 "src/parser.y"
                                {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4745 "src/parser.tab.c"
    break;

  case 322: /* element_value_array_initializer: "{" element_valueList.opt com.opt "}"  */
#line 1154 "src/parser.y"
                                                                {(yyval.i)=createNode("element_value_array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4751 "src/parser.tab.c"
    break;

  case 323: /* element_valueList.opt: element_valueList  */
#line 1157 "src/parser.y"
                                        {(yyval.i)=createNode("element_valueList.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4757 "src/parser.tab.c"
    break;

  case 324: /* element_valueList.opt: %empty  */
#line 1158 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4763 "src/parser.tab.c"
    break;

  case 325: /* element_valueList: element_value com_element_value.multiopt  */
#line 1161 "src/parser.y"
                                                                {(yyval.i)=createNode("element_valueList");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4769 "src/parser.tab.c"
    break;

  case 326: /* com_element_value.multiopt: com_element_value.multiopt "," element_value  */
#line 1164 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_element_value.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4775 "src/parser.tab.c"
    break;

  case 327: /* com_element_value.multiopt: %empty  */
#line 1165 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4781 "src/parser.tab.c"
    break;

  case 328: /* marker_annotation: "@" type_name  */
#line 1168 "src/parser.y"
                                        {(yyval.i)=createNode("marker_annotation");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4787 "src/parser.tab.c"
    break;

  case 329: /* single_element_annotation: "@" type_name "(" element_value ")"  */
#line 1171 "src/parser.y"
                                                                {(yyval.i)=createNode("single_element_annotation");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4793 "src/parser.tab.c"
    break;

  case 330: /* annotation.multiopt: annotation.multiopt annotation  */
#line 1174 "src/parser.y"
                                                        {(yyval.i)=createNode("annotation.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4799 "src/parser.tab.c"
    break;

  case 331: /* annotation.multiopt: %empty  */
#line 1175 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4805 "src/parser.tab.c"
    break;

  case 332: /* array_initializer: "{" variable_initializer_list.opt com.opt "}"  */
#line 1179 "src/parser.y"
                                                                        {(yyval.i)=createNode("array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4811 "src/parser.tab.c"
    break;

  case 333: /* variable_initializer_list.opt: variable_initializer_list  */
#line 1182 "src/parser.y"
                                                {(yyval.i)=createNode("variable_initializer_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4817 "src/parser.tab.c"
    break;

  case 334: /* variable_initializer_list.opt: %empty  */
#line 1183 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4823 "src/parser.tab.c"
    break;

  case 335: /* variable_initializer_list: variable_initializer com_variable_initializer.multiopt  */
#line 1186 "src/parser.y"
                                                                                {(yyval.i)=createNode("variable_initializer_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4829 "src/parser.tab.c"
    break;

  case 336: /* com_variable_initializer.multiopt: com_variable_initializer.multiopt "," variable_initializer  */
#line 1189 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_variable_initializer.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4835 "src/parser.tab.c"
    break;

  case 337: /* com_variable_initializer.multiopt: %empty  */
#line 1190 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4841 "src/parser.tab.c"
    break;

  case 338: /* block: "{" block_statements.opt "}"  */
#line 1195 "src/parser.y"
                                                        {(yyval.i)=createNode("block");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4847 "src/parser.tab.c"
    break;

  case 339: /* block_statements: block_statement block_statement.multiopt  */
#line 1198 "src/parser.y"
                                                                {(yyval.i)=createNode("block_statements");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4853 "src/parser.tab.c"
    break;

  case 340: /* block_statement.multiopt: block_statement.multiopt block_statement  */
#line 1201 "src/parser.y"
                                                                {(yyval.i)=createNode("block_statement.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4859 "src/parser.tab.c"
    break;

  case 341: /* block_statement.multiopt: %empty  */
#line 1202 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4865 "src/parser.tab.c"
    break;

  case 342: /* block_statement: local_class_or_interface_declaration  */
#line 1205 "src/parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4871 "src/parser.tab.c"
    break;

  case 343: /* block_statement: local_variable_declaration_statement  */
#line 1206 "src/parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4877 "src/parser.tab.c"
    break;

  case 344: /* block_statement: statement  */
#line 1207 "src/parser.y"
                                {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4883 "src/parser.tab.c"
    break;

  case 345: /* local_class_or_interface_declaration: class_declaration  */
#line 1210 "src/parser.y"
                                        {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4889 "src/parser.tab.c"
    break;

  case 346: /* local_class_or_interface_declaration: normal_interface_declaration  */
#line 1211 "src/parser.y"
                                                {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4895 "src/parser.tab.c"
    break;

  case 347: /* local_variable_declaration_statement: local_variable_declaration ";"  */
#line 1214 "src/parser.y"
                                                        {(yyval.i)=createNode("local_variable_declaration_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4901 "src/parser.tab.c"
    break;

  case 348: /* local_variable_declaration: variable_modifier.multiopt local_variable_type variable_declarator_list  */
#line 1217 "src/parser.y"
                                                                                                {(yyval.i)=createNode("local_variable_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4907 "src/parser.tab.c"
    break;

  case 349: /* local_variable_type: unann_type  */
#line 1220 "src/parser.y"
                                {(yyval.i)=createNode("local_variable_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4913 "src/parser.tab.c"
    break;

  case 350: /* local_variable_type: "var"  */
#line 1221 "src/parser.y"
                                {(yyval.i)=createNode("local_variable_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4919 "src/parser.tab.c"
    break;

  case 351: /* statement: statement_without_trailing_substatement  */
#line 1224 "src/parser.y"
                                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4925 "src/parser.tab.c"
    break;

  case 352: /* statement: labeled_statement  */
#line 1225 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4931 "src/parser.tab.c"
    break;

  case 353: /* statement: if_then_statement  */
#line 1226 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4937 "src/parser.tab.c"
    break;

  case 354: /* statement: if_then_else_statement  */
#line 1227 "src/parser.y"
                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4943 "src/parser.tab.c"
    break;

  case 355: /* statement: while_statement  */
#line 1228 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4949 "src/parser.tab.c"
    break;

  case 356: /* statement: for_statement  */
#line 1229 "src/parser.y"
                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4955 "src/parser.tab.c"
    break;

  case 357: /* statement_no_short_if: statement_without_trailing_substatement  */
#line 1232 "src/parser.y"
                                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4961 "src/parser.tab.c"
    break;

  case 358: /* statement_no_short_if: labeled_statement_no_short_if  */
#line 1233 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4967 "src/parser.tab.c"
    break;

  case 359: /* statement_no_short_if: if_then_else_statement_no_short_if  */
#line 1234 "src/parser.y"
                                                        {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4973 "src/parser.tab.c"
    break;

  case 360: /* statement_no_short_if: while_statement_no_short_if  */
#line 1235 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4979 "src/parser.tab.c"
    break;

  case 361: /* statement_no_short_if: for_statement_no_short_if  */
#line 1236 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4985 "src/parser.tab.c"
    break;

  case 362: /* statement_without_trailing_substatement: block  */
#line 1239 "src/parser.y"
                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4991 "src/parser.tab.c"
    break;

  case 363: /* statement_without_trailing_substatement: empty_statement  */
#line 1240 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4997 "src/parser.tab.c"
    break;

  case 364: /* statement_without_trailing_substatement: expression_statement  */
#line 1241 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5003 "src/parser.tab.c"
    break;

  case 365: /* statement_without_trailing_substatement: assert_statement  */
#line 1242 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5009 "src/parser.tab.c"
    break;

  case 366: /* statement_without_trailing_substatement: switch_statement  */
#line 1243 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5015 "src/parser.tab.c"
    break;

  case 367: /* statement_without_trailing_substatement: do_statement  */
#line 1244 "src/parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5021 "src/parser.tab.c"
    break;

  case 368: /* statement_without_trailing_substatement: break_statement  */
#line 1245 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5027 "src/parser.tab.c"
    break;

  case 369: /* statement_without_trailing_substatement: continue_statement  */
#line 1246 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5033 "src/parser.tab.c"
    break;

  case 370: /* statement_without_trailing_substatement: return_statement  */
#line 1247 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5039 "src/parser.tab.c"
    break;

  case 371: /* statement_without_trailing_substatement: synchronized_statement  */
#line 1248 "src/parser.y"
                                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5045 "src/parser.tab.c"
    break;

  case 372: /* statement_without_trailing_substatement: throw_statement  */
#line 1249 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5051 "src/parser.tab.c"
    break;

  case 373: /* statement_without_trailing_substatement: try_statement  */
#line 1250 "src/parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5057 "src/parser.tab.c"
    break;

  case 374: /* statement_without_trailing_substatement: yield_statement  */
#line 1251 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5063 "src/parser.tab.c"
    break;

  case 375: /* empty_statement: ";"  */
#line 1254 "src/parser.y"
                                {(yyval.i)=createNode("empty_statement");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5069 "src/parser.tab.c"
    break;

  case 376: /* labeled_statement: TOK_IDENTIFIER ":" statement  */
#line 1257 "src/parser.y"
                                                        {(yyval.i)=createNode("labeled_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5075 "src/parser.tab.c"
    break;

  case 377: /* labeled_statement_no_short_if: TOK_IDENTIFIER ":" statement_no_short_if  */
#line 1260 "src/parser.y"
                                                                {(yyval.i)=createNode("labeled_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5081 "src/parser.tab.c"
    break;

  case 378: /* expression_statement: statement_expression ";"  */
#line 1263 "src/parser.y"
                                                {(yyval.i)=createNode("expression_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5087 "src/parser.tab.c"
    break;

  case 379: /* statement_expression: assignment  */
#line 1266 "src/parser.y"
                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5093 "src/parser.tab.c"
    break;

  case 380: /* statement_expression: pre_increment_expression  */
#line 1267 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5099 "src/parser.tab.c"
    break;

  case 381: /* statement_expression: pre_decrement_expression  */
#line 1268 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5105 "src/parser.tab.c"
    break;

  case 382: /* statement_expression: post_increment_expression  */
#line 1269 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5111 "src/parser.tab.c"
    break;

  case 383: /* statement_expression: post_decrement_expression  */
#line 1270 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5117 "src/parser.tab.c"
    break;

  case 384: /* statement_expression: method_invocation  */
#line 1271 "src/parser.y"
                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5123 "src/parser.tab.c"
    break;

  case 385: /* statement_expression: class_instance_creation_expression  */
#line 1272 "src/parser.y"
                                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5129 "src/parser.tab.c"
    break;

  case 386: /* if_then_statement: "if" "(" expression ")" statement  */
#line 1275 "src/parser.y"
                                                                {(yyval.i)=createNode("if_then_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5135 "src/parser.tab.c"
    break;

  case 387: /* if_then_else_statement: "if" "(" expression ")" statement_no_short_if "else" statement  */
#line 1278 "src/parser.y"
                                                                                                {(yyval.i)=createNode("if_then_else_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5141 "src/parser.tab.c"
    break;

  case 388: /* if_then_else_statement_no_short_if: "if" "(" expression ")" statement_no_short_if "else" statement_no_short_if  */
#line 1281 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("if_then_else_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5147 "src/parser.tab.c"
    break;

  case 389: /* assert_statement: "assert" expression ";"  */
#line 1284 "src/parser.y"
                                                {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5153 "src/parser.tab.c"
    break;

  case 390: /* assert_statement: "assert" expression ":" expression ";"  */
#line 1285 "src/parser.y"
                                                                        {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5159 "src/parser.tab.c"
    break;

  case 391: /* switch_statement: "switch" "(" expression ")" switch_block  */
#line 1288 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5165 "src/parser.tab.c"
    break;

  case 392: /* switch_block: "{" switch_rule switch_rule.multiopt ";"  */
#line 1291 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5171 "src/parser.tab.c"
    break;

  case 393: /* switch_block: "{" switch_block_statement_group.multiopt switch_label_col.multiopt "}"  */
#line 1292 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5177 "src/parser.tab.c"
    break;

  case 394: /* switch_rule.multiopt: switch_rule.multiopt switch_rule  */
#line 1295 "src/parser.y"
                                                        {(yyval.i)=createNode("switch_rule.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5183 "src/parser.tab.c"
    break;

  case 395: /* switch_rule.multiopt: %empty  */
#line 1296 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5189 "src/parser.tab.c"
    break;

  case 396: /* switch_block_statement_group.multiopt: switch_block_statement_group.multiopt switch_block_statement_group  */
#line 1299 "src/parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5195 "src/parser.tab.c"
    break;

  case 397: /* switch_block_statement_group.multiopt: %empty  */
#line 1300 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5201 "src/parser.tab.c"
    break;

  case 398: /* switch_label_col.multiopt: switch_label_col.multiopt switch_label ":"  */
#line 1303 "src/parser.y"
                                                                {(yyval.i)=createNode("switch_label_col.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5207 "src/parser.tab.c"
    break;

  case 399: /* switch_label_col.multiopt: %empty  */
#line 1304 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5213 "src/parser.tab.c"
    break;

  case 400: /* switch_rule: switch_label "->" expression ";"  */
#line 1307 "src/parser.y"
                                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5219 "src/parser.tab.c"
    break;

  case 401: /* switch_rule: switch_label "->" block  */
#line 1308 "src/parser.y"
                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5225 "src/parser.tab.c"
    break;

  case 402: /* switch_rule: switch_label "->" throw_statement  */
#line 1309 "src/parser.y"
                                                        {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5231 "src/parser.tab.c"
    break;

  case 403: /* switch_block_statement_group: switch_label ":" switch_label_col.multiopt block_statements  */
#line 1312 "src/parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5237 "src/parser.tab.c"
    break;

  case 404: /* switch_label: "case" case_constant com_case_constant.multiopt  */
#line 1315 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5243 "src/parser.tab.c"
    break;

  case 405: /* switch_label: "default"  */
#line 1316 "src/parser.y"
                                {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5249 "src/parser.tab.c"
    break;

  case 406: /* com_case_constant.multiopt: com_case_constant.multiopt "," case_constant  */
#line 1319 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_case_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5255 "src/parser.tab.c"
    break;

  case 407: /* com_case_constant.multiopt: %empty  */
#line 1320 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5261 "src/parser.tab.c"
    break;

  case 408: /* case_constant: conditional_expression  */
#line 1323 "src/parser.y"
                                                {(yyval.i)=createNode("case_constant");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5267 "src/parser.tab.c"
    break;

  case 409: /* while_statement: "while" "(" expression ")" statement  */
#line 1326 "src/parser.y"
                                                                {(yyval.i)=createNode("while_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5273 "src/parser.tab.c"
    break;

  case 410: /* while_statement_no_short_if: "while" "(" expression ")" statement_no_short_if  */
#line 1329 "src/parser.y"
                                                                                {(yyval.i)=createNode("while_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5279 "src/parser.tab.c"
    break;

  case 411: /* do_statement: "do" statement "while" "(" expression ")" ";"  */
#line 1332 "src/parser.y"
                                                                                {(yyval.i)=createNode("do_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5285 "src/parser.tab.c"
    break;

  case 412: /* for_statement: basic_for_statement  */
#line 1335 "src/parser.y"
                                        {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5291 "src/parser.tab.c"
    break;

  case 413: /* for_statement: enhanced_for_statement  */
#line 1336 "src/parser.y"
                                                {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5297 "src/parser.tab.c"
    break;

  case 414: /* for_statement_no_short_if: basic_for_statement_no_short_if  */
#line 1339 "src/parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5303 "src/parser.tab.c"
    break;

  case 415: /* for_statement_no_short_if: enhanced_for_statement_no_short_if  */
#line 1340 "src/parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5309 "src/parser.tab.c"
    break;

  case 416: /* basic_for_statement: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement  */
#line 1343 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("basic_for_statement");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5315 "src/parser.tab.c"
    break;

  case 417: /* for_init.opt: for_init  */
#line 1346 "src/parser.y"
                                {(yyval.i)=createNode("for_init.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5321 "src/parser.tab.c"
    break;

  case 418: /* for_init.opt: %empty  */
#line 1347 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5327 "src/parser.tab.c"
    break;

  case 419: /* expression.opt: expression  */
#line 1350 "src/parser.y"
                                {(yyval.i)=createNode("expression.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5333 "src/parser.tab.c"
    break;

  case 420: /* expression.opt: %empty  */
#line 1351 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5339 "src/parser.tab.c"
    break;

  case 421: /* for_update.opt: for_update  */
#line 1354 "src/parser.y"
                                {(yyval.i)=createNode("for_update.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5345 "src/parser.tab.c"
    break;

  case 422: /* for_update.opt: %empty  */
#line 1355 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5351 "src/parser.tab.c"
    break;

  case 423: /* basic_for_statement_no_short_if: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement_no_short_if  */
#line 1358 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("basic_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5357 "src/parser.tab.c"
    break;

  case 424: /* for_init: statement_expression_list  */
#line 1361 "src/parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5363 "src/parser.tab.c"
    break;

  case 425: /* for_init: local_variable_declaration  */
#line 1362 "src/parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5369 "src/parser.tab.c"
    break;

  case 426: /* for_update: statement_expression_list  */
#line 1365 "src/parser.y"
                                                {(yyval.i)=createNode("for_update");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5375 "src/parser.tab.c"
    break;

  case 427: /* statement_expression_list: statement_expression com_statement_expression.multiopt  */
#line 1368 "src/parser.y"
                                                                                {(yyval.i)=createNode("statement_expression_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5381 "src/parser.tab.c"
    break;

  case 428: /* com_statement_expression.multiopt: com_statement_expression.multiopt "," statement_expression  */
#line 1371 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_statement_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5387 "src/parser.tab.c"
    break;

  case 429: /* com_statement_expression.multiopt: %empty  */
#line 1372 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5393 "src/parser.tab.c"
    break;

  case 430: /* enhanced_for_statement: "for" "(" local_variable_declaration ":" expression ")" statement  */
#line 1375 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enhanced_for_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5399 "src/parser.tab.c"
    break;

  case 431: /* enhanced_for_statement_no_short_if: "for" "(" local_variable_declaration ":" expression ")" statement_no_short_if  */
#line 1378 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("enhanced_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5405 "src/parser.tab.c"
    break;

  case 432: /* break_statement: "break" IDENTIFIER.opt ";"  */
#line 1381 "src/parser.y"
                                                        {(yyval.i)=createNode("break_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5411 "src/parser.tab.c"
    break;

  case 433: /* IDENTIFIER.opt: TOK_IDENTIFIER  */
#line 1384 "src/parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5417 "src/parser.tab.c"
    break;

  case 434: /* IDENTIFIER.opt: %empty  */
#line 1385 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5423 "src/parser.tab.c"
    break;

  case 435: /* yield_statement: "yield" expression ";"  */
#line 1388 "src/parser.y"
                                                {(yyval.i)=createNode("yield_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5429 "src/parser.tab.c"
    break;

  case 436: /* continue_statement: "continue" IDENTIFIER.opt ";"  */
#line 1391 "src/parser.y"
                                                        {(yyval.i)=createNode("continue_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5435 "src/parser.tab.c"
    break;

  case 437: /* return_statement: "return" expression.opt ";"  */
#line 1394 "src/parser.y"
                                                        {(yyval.i)=createNode("return_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5441 "src/parser.tab.c"
    break;

  case 438: /* throw_statement: "throw" expression ";"  */
#line 1397 "src/parser.y"
                                                {(yyval.i)=createNode("throw_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5447 "src/parser.tab.c"
    break;

  case 439: /* synchronized_statement: "synchronized" "(" expression ")" block  */
#line 1400 "src/parser.y"
                                                                        {(yyval.i)=createNode("synchronized_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5453 "src/parser.tab.c"
    break;

  case 440: /* try_statement: "try" block catches  */
#line 1403 "src/parser.y"
                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5459 "src/parser.tab.c"
    break;

  case 441: /* try_statement: "try" block catches.opt finally  */
#line 1404 "src/parser.y"
                                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5465 "src/parser.tab.c"
    break;

  case 442: /* try_statement: try_with_resources_statement  */
#line 1405 "src/parser.y"
                                                {(yyval.i)=createNode("try_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5471 "src/parser.tab.c"
    break;

  case 443: /* catches.opt: catches  */
#line 1408 "src/parser.y"
                                {(yyval.i)=createNode("catches.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5477 "src/parser.tab.c"
    break;

  case 444: /* catches.opt: %empty  */
#line 1409 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5483 "src/parser.tab.c"
    break;

  case 445: /* catches: catch_clause catch_clause.multiopt  */
#line 1412 "src/parser.y"
                                                        {(yyval.i)=createNode("catches");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5489 "src/parser.tab.c"
    break;

  case 446: /* catch_clause.multiopt: catch_clause.multiopt catch_clause  */
#line 1415 "src/parser.y"
                                                        {(yyval.i)=createNode("catch_clause.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5495 "src/parser.tab.c"
    break;

  case 447: /* catch_clause.multiopt: %empty  */
#line 1416 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5501 "src/parser.tab.c"
    break;

  case 448: /* catch_clause: "catch" "(" catch_formal_parameter ")" block  */
#line 1419 "src/parser.y"
                                                                        {(yyval.i)=createNode("catch_clause");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5507 "src/parser.tab.c"
    break;

  case 449: /* catch_formal_parameter: variable_modifier.multiopt catch_type variable_declarator_id  */
#line 1422 "src/parser.y"
                                                                                {(yyval.i)=createNode("catch_formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5513 "src/parser.tab.c"
    break;

  case 450: /* catch_type: unann_class_type vt_class_type.multiopt  */
#line 1425 "src/parser.y"
                                                                {(yyval.i)=createNode("catch_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5519 "src/parser.tab.c"
    break;

  case 451: /* vt_class_type.multiopt: vt_class_type.multiopt "|" class_type  */
#line 1428 "src/parser.y"
                                                                {(yyval.i)=createNode("vt_class_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5525 "src/parser.tab.c"
    break;

  case 452: /* vt_class_type.multiopt: %empty  */
#line 1429 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5531 "src/parser.tab.c"
    break;

  case 453: /* finally: "finally" block  */
#line 1432 "src/parser.y"
                                        {(yyval.i)=createNode("finally");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5537 "src/parser.tab.c"
    break;

  case 454: /* try_with_resources_statement: "try" resource_specification block catches.opt finally.opt  */
#line 1435 "src/parser.y"
                                                                                {(yyval.i)=createNode("try_with_resources_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5543 "src/parser.tab.c"
    break;

  case 455: /* finally.opt: finally  */
#line 1438 "src/parser.y"
                                {(yyval.i)=createNode("finally.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5549 "src/parser.tab.c"
    break;

  case 456: /* finally.opt: %empty  */
#line 1439 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5555 "src/parser.tab.c"
    break;

  case 457: /* resource_specification: "(" resource_list semcol.opt ")"  */
#line 1442 "src/parser.y"
                                                                {(yyval.i)=createNode("resource_specification");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5561 "src/parser.tab.c"
    break;

  case 458: /* semcol.opt: ";"  */
#line 1445 "src/parser.y"
                                {(yyval.i)=createNode("semcol.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5567 "src/parser.tab.c"
    break;

  case 459: /* semcol.opt: %empty  */
#line 1446 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5573 "src/parser.tab.c"
    break;

  case 460: /* resource_list: resource semcol_resource.multiopt  */
#line 1449 "src/parser.y"
                                                        {(yyval.i)=createNode("resource_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5579 "src/parser.tab.c"
    break;

  case 461: /* semcol_resource.multiopt: semcol_resource.multiopt ";" resource  */
#line 1452 "src/parser.y"
                                                                {(yyval.i)=createNode("semcol_resource.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5585 "src/parser.tab.c"
    break;

  case 462: /* semcol_resource.multiopt: %empty  */
#line 1453 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5591 "src/parser.tab.c"
    break;

  case 463: /* resource: local_variable_declaration  */
#line 1456 "src/parser.y"
                                                {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5597 "src/parser.tab.c"
    break;

  case 464: /* resource: variable_access  */
#line 1457 "src/parser.y"
                                        {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5603 "src/parser.tab.c"
    break;

  case 465: /* variable_access: expression_name  */
#line 1460 "src/parser.y"
                                        {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5609 "src/parser.tab.c"
    break;

  case 466: /* variable_access: field_access  */
#line 1461 "src/parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5615 "src/parser.tab.c"
    break;

  case 467: /* pattern: type_pattern  */
#line 1464 "src/parser.y"
                                {(yyval.i)=createNode("pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5621 "src/parser.tab.c"
    break;

  case 468: /* type_pattern: local_variable_declaration  */
#line 1467 "src/parser.y"
                                                {(yyval.i)=createNode("type_pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5627 "src/parser.tab.c"
    break;

  case 469: /* primary: primary_no_new_array  */
#line 1472 "src/parser.y"
                                        {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5633 "src/parser.tab.c"
    break;

  case 470: /* primary: array_creation_expression  */
#line 1473 "src/parser.y"
                                                {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5639 "src/parser.tab.c"
    break;

  case 471: /* primary_no_new_array: TOK_LITERAL  */
#line 1476 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5645 "src/parser.tab.c"
    break;

  case 472: /* primary_no_new_array: class_literal  */
#line 1477 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5651 "src/parser.tab.c"
    break;

  case 473: /* primary_no_new_array: "this"  */
#line 1478 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5657 "src/parser.tab.c"
    break;

  case 474: /* primary_no_new_array: type_name "." "this"  */
#line 1479 "src/parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5663 "src/parser.tab.c"
    break;

  case 475: /* primary_no_new_array: "(" expression ")"  */
#line 1480 "src/parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5669 "src/parser.tab.c"
    break;

  case 476: /* primary_no_new_array: class_instance_creation_expression  */
#line 1481 "src/parser.y"
                                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5675 "src/parser.tab.c"
    break;

  case 477: /* primary_no_new_array: field_access  */
#line 1482 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5681 "src/parser.tab.c"
    break;

  case 478: /* primary_no_new_array: array_access  */
#line 1483 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5687 "src/parser.tab.c"
    break;

  case 479: /* primary_no_new_array: method_invocation  */
#line 1484 "src/parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5693 "src/parser.tab.c"
    break;

  case 480: /* primary_no_new_array: method_reference  */
#line 1485 "src/parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5699 "src/parser.tab.c"
    break;

  case 481: /* class_literal: type_name dm.multiopt "." "class"  */
#line 1488 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5705 "src/parser.tab.c"
    break;

  case 482: /* class_literal: numeric_type dm.multiopt "." "class"  */
#line 1489 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5711 "src/parser.tab.c"
    break;

  case 483: /* class_literal: "boolean" dm.multiopt "." "class"  */
#line 1490 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5717 "src/parser.tab.c"
    break;

  case 484: /* class_literal: "void" "." "class"  */
#line 1491 "src/parser.y"
                                                {(yyval.i)=createNode("class_literal");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5723 "src/parser.tab.c"
    break;

  case 485: /* dm.multiopt: dm.multiopt "[" "]"  */
#line 1494 "src/parser.y"
                                                {(yyval.i)=createNode("dm.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5729 "src/parser.tab.c"
    break;

  case 486: /* dm.multiopt: %empty  */
#line 1495 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5735 "src/parser.tab.c"
    break;

  case 487: /* class_instance_creation_expression: unqualified_class_instance_creation_expression  */
#line 1498 "src/parser.y"
                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5741 "src/parser.tab.c"
    break;

  case 488: /* class_instance_creation_expression: expression_name "." unqualified_class_instance_creation_expression  */
#line 1499 "src/parser.y"
                                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5747 "src/parser.tab.c"
    break;

  case 489: /* class_instance_creation_expression: primary "." unqualified_class_instance_creation_expression  */
#line 1500 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5753 "src/parser.tab.c"
    break;

  case 490: /* unqualified_class_instance_creation_expression: "new" type_arguments.opt class_or_interface_type_to_instantiate "(" argument_list.opt ")" class_body.opt  */
#line 1503 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("unqualified_class_instance_creation_expression");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5759 "src/parser.tab.c"
    break;

  case 491: /* class_or_interface_type_to_instantiate: annotation.multiopt TOK_IDENTIFIER dot_annotation.multiopt_IDENTIFIER.multiopt type_arguments_or_diamond.opt  */
#line 1506 "src/parser.y"
                                                                                                                                {(yyval.i)=createNode("class_or_interface_type_to_instantiate");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5765 "src/parser.tab.c"
    break;

  case 492: /* dot_annotation.multiopt_IDENTIFIER.multiopt: dot_annotation.multiopt_IDENTIFIER.multiopt "." annotation.multiopt TOK_IDENTIFIER  */
#line 1509 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("dot_annotation.multiopt_IDENTIFIER.multiopt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5771 "src/parser.tab.c"
    break;

  case 493: /* dot_annotation.multiopt_IDENTIFIER.multiopt: %empty  */
#line 1510 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5777 "src/parser.tab.c"
    break;

  case 494: /* type_arguments_or_diamond.opt: type_arguments_or_diamond  */
#line 1513 "src/parser.y"
                                                {(yyval.i)=createNode("type_arguments_or_diamond.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5783 "src/parser.tab.c"
    break;

  case 495: /* type_arguments_or_diamond.opt: %empty  */
#line 1514 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5789 "src/parser.tab.c"
    break;

  case 496: /* type_arguments_or_diamond: type_arguments  */
#line 1517 "src/parser.y"
                                        {(yyval.i)=createNode("type_arguments_or_diamond");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5795 "src/parser.tab.c"
    break;

  case 497: /* field_access: primary "." TOK_IDENTIFIER  */
#line 1520 "src/parser.y"
                                                {(yyval.i)=createNode("field_access");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5801 "src/parser.tab.c"
    break;

  case 498: /* field_access: "super" "." TOK_IDENTIFIER  */
#line 1521 "src/parser.y"
                                                        {(yyval.i)=createNode("field_access");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5807 "src/parser.tab.c"
    break;

  case 499: /* field_access: type_name "." "super" "." TOK_IDENTIFIER  */
#line 1522 "src/parser.y"
                                                                        {(yyval.i)=createNode("field_access");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5813 "src/parser.tab.c"
    break;

  case 500: /* array_access: expression_name "[" expression "]"  */
#line 1525 "src/parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5819 "src/parser.tab.c"
    break;

  case 501: /* array_access: primary_no_new_array "[" expression "]"  */
#line 1526 "src/parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5825 "src/parser.tab.c"
    break;

  case 502: /* method_invocation: method_name "(" argument_list.opt ")"  */
#line 1529 "src/parser.y"
                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5831 "src/parser.tab.c"
    break;

  case 503: /* method_invocation: type_name "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1530 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5837 "src/parser.tab.c"
    break;

  case 504: /* method_invocation: expression_name "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1531 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5843 "src/parser.tab.c"
    break;

  case 505: /* method_invocation: primary "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1532 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5849 "src/parser.tab.c"
    break;

  case 506: /* method_invocation: "super" "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1533 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5855 "src/parser.tab.c"
    break;

  case 507: /* method_invocation: type_name "." "super" "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1534 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-8].i) !=-1)addChild((yyval.i),(yyvsp[-8].i));addChild((yyval.i),createNode((yyvsp[-7].s)));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5861 "src/parser.tab.c"
    break;

  case 508: /* argument_list: expression com_expression.multiopt  */
#line 1537 "src/parser.y"
                                                        {(yyval.i)=createNode("argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5867 "src/parser.tab.c"
    break;

  case 509: /* com_expression.multiopt: com_expression.multiopt "," expression  */
#line 1540 "src/parser.y"
                                                                {(yyval.i)=createNode("com_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5873 "src/parser.tab.c"
    break;

  case 510: /* com_expression.multiopt: %empty  */
#line 1541 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5879 "src/parser.tab.c"
    break;

  case 511: /* method_reference: expression_name "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1544 "src/parser.y"
                                                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5885 "src/parser.tab.c"
    break;

  case 512: /* method_reference: primary "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1545 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5891 "src/parser.tab.c"
    break;

  case 513: /* method_reference: reference_type "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1546 "src/parser.y"
                                                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5897 "src/parser.tab.c"
    break;

  case 514: /* method_reference: "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1547 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5903 "src/parser.tab.c"
    break;

  case 515: /* method_reference: type_name "." "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1548 "src/parser.y"
                                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5909 "src/parser.tab.c"
    break;

  case 516: /* method_reference: class_type "::" type_arguments.opt "new"  */
#line 1549 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5915 "src/parser.tab.c"
    break;

  case 517: /* method_reference: array_type "::" "new"  */
#line 1550 "src/parser.y"
                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5921 "src/parser.tab.c"
    break;

  case 518: /* array_creation_expression: "new" primitive_type dim_exprs dims.opt  */
#line 1553 "src/parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5927 "src/parser.tab.c"
    break;

  case 519: /* array_creation_expression: "new" class_or_interface_type dim_exprs dims.opt  */
#line 1554 "src/parser.y"
                                                                        {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5933 "src/parser.tab.c"
    break;

  case 520: /* array_creation_expression: "new" primitive_type dims array_initializer  */
#line 1555 "src/parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5939 "src/parser.tab.c"
    break;

  case 521: /* array_creation_expression: "new" class_or_interface_type dims array_initializer  */
#line 1556 "src/parser.y"
                                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5945 "src/parser.tab.c"
    break;

  case 522: /* dim_exprs: dim_expr dim_expr.multiopt  */
#line 1559 "src/parser.y"
                                                {(yyval.i)=createNode("dim_exprs");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5951 "src/parser.tab.c"
    break;

  case 523: /* dim_expr.multiopt: dim_expr.multiopt dim_expr  */
#line 1562 "src/parser.y"
                                                {(yyval.i)=createNode("dim_expr.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5957 "src/parser.tab.c"
    break;

  case 524: /* dim_expr.multiopt: %empty  */
#line 1563 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5963 "src/parser.tab.c"
    break;

  case 525: /* dim_expr: annotation.multiopt "[" expression "]"  */
#line 1566 "src/parser.y"
                                                                {(yyval.i)=createNode("dim_expr");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5969 "src/parser.tab.c"
    break;

  case 526: /* expression: lambda_expression  */
#line 1569 "src/parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5975 "src/parser.tab.c"
    break;

  case 527: /* expression: assignment_expression  */
#line 1570 "src/parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5981 "src/parser.tab.c"
    break;

  case 528: /* lambda_expression: lambda_parameters "->" lambda_body  */
#line 1573 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5987 "src/parser.tab.c"
    break;

  case 529: /* lambda_parameters: "(" lambda_parameter_list.opt ")"  */
#line 1576 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5993 "src/parser.tab.c"
    break;

  case 530: /* lambda_parameters: TOK_IDENTIFIER  */
#line 1577 "src/parser.y"
                                        {(yyval.i)=createNode("lambda_parameters");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5999 "src/parser.tab.c"
    break;

  case 531: /* lambda_parameter_list.opt: lambda_parameter_list  */
#line 1580 "src/parser.y"
                                        {(yyval.i)=createNode("lambda_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6005 "src/parser.tab.c"
    break;

  case 532: /* lambda_parameter_list.opt: %empty  */
#line 1581 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6011 "src/parser.tab.c"
    break;

  case 533: /* lambda_parameter_list: lambda_parameter com_lambda_parameter.multiopt  */
#line 1584 "src/parser.y"
                                                                        {(yyval.i)=createNode("lambda_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6017 "src/parser.tab.c"
    break;

  case 534: /* lambda_parameter_list: TOK_IDENTIFIER com_IDENTIFIER.multiopt  */
#line 1585 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_parameter_list");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6023 "src/parser.tab.c"
    break;

  case 535: /* com_IDENTIFIER.multiopt: com_IDENTIFIER.multiopt "," TOK_IDENTIFIER  */
#line 1588 "src/parser.y"
                                                                {(yyval.i)=createNode("com_IDENTIFIER.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6029 "src/parser.tab.c"
    break;

  case 536: /* com_IDENTIFIER.multiopt: %empty  */
#line 1589 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6035 "src/parser.tab.c"
    break;

  case 537: /* com_lambda_parameter.multiopt: com_lambda_parameter.multiopt "," lambda_parameter  */
#line 1592 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_lambda_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6041 "src/parser.tab.c"
    break;

  case 538: /* com_lambda_parameter.multiopt: %empty  */
#line 1593 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6047 "src/parser.tab.c"
    break;

  case 539: /* lambda_parameter: variable_modifier.multiopt lambda_parameter_type variable_declarator_id  */
#line 1596 "src/parser.y"
                                                                                                {(yyval.i)=createNode("lambda_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6053 "src/parser.tab.c"
    break;

  case 540: /* lambda_parameter: variable_arity_parameter  */
#line 1597 "src/parser.y"
                                                {(yyval.i)=createNode("lambda_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6059 "src/parser.tab.c"
    break;

  case 541: /* lambda_parameter_type: unann_type  */
#line 1600 "src/parser.y"
                                {(yyval.i)=createNode("lambda_parameter_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6065 "src/parser.tab.c"
    break;

  case 542: /* lambda_parameter_type: "var"  */
#line 1601 "src/parser.y"
                                {(yyval.i)=createNode("lambda_parameter_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6071 "src/parser.tab.c"
    break;

  case 543: /* lambda_body: expression  */
#line 1604 "src/parser.y"
                                {(yyval.i)=createNode("lambda_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6077 "src/parser.tab.c"
    break;

  case 544: /* lambda_body: block  */
#line 1605 "src/parser.y"
                        {(yyval.i)=createNode("lambda_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6083 "src/parser.tab.c"
    break;

  case 545: /* assignment_expression: conditional_expression  */
#line 1608 "src/parser.y"
                                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6089 "src/parser.tab.c"
    break;

  case 546: /* assignment_expression: assignment  */
#line 1609 "src/parser.y"
                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6095 "src/parser.tab.c"
    break;

  case 547: /* assignment: left_hand_side assignment_operator expression  */
#line 1612 "src/parser.y"
                                                                {(yyval.i)=createNode("assignment");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6101 "src/parser.tab.c"
    break;

  case 548: /* left_hand_side: expression_name  */
#line 1615 "src/parser.y"
                                        {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6107 "src/parser.tab.c"
    break;

  case 549: /* left_hand_side: field_access  */
#line 1616 "src/parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6113 "src/parser.tab.c"
    break;

  case 550: /* left_hand_side: array_access  */
#line 1617 "src/parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6119 "src/parser.tab.c"
    break;

  case 551: /* assignment_operator: "="  */
#line 1620 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6125 "src/parser.tab.c"
    break;

  case 552: /* assignment_operator: "*="  */
#line 1621 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6131 "src/parser.tab.c"
    break;

  case 553: /* assignment_operator: "/="  */
#line 1622 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6137 "src/parser.tab.c"
    break;

  case 554: /* assignment_operator: "%="  */
#line 1623 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6143 "src/parser.tab.c"
    break;

  case 555: /* assignment_operator: "+="  */
#line 1624 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6149 "src/parser.tab.c"
    break;

  case 556: /* assignment_operator: "-="  */
#line 1625 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6155 "src/parser.tab.c"
    break;

  case 557: /* assignment_operator: "<<="  */
#line 1626 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6161 "src/parser.tab.c"
    break;

  case 558: /* assignment_operator: ">>="  */
#line 1627 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6167 "src/parser.tab.c"
    break;

  case 559: /* assignment_operator: ">>>="  */
#line 1628 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6173 "src/parser.tab.c"
    break;

  case 560: /* assignment_operator: "&="  */
#line 1629 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6179 "src/parser.tab.c"
    break;

  case 561: /* assignment_operator: "^="  */
#line 1630 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6185 "src/parser.tab.c"
    break;

  case 562: /* assignment_operator: "|="  */
#line 1631 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6191 "src/parser.tab.c"
    break;

  case 563: /* conditional_expression: conditional_or_expression  */
#line 1634 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6197 "src/parser.tab.c"
    break;

  case 564: /* conditional_expression: conditional_or_expression "?" expression ":" conditional_expression  */
#line 1635 "src/parser.y"
                                                                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6203 "src/parser.tab.c"
    break;

  case 565: /* conditional_expression: conditional_or_expression "?" expression ":" lambda_expression  */
#line 1636 "src/parser.y"
                                                                                        {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6209 "src/parser.tab.c"
    break;

  case 566: /* conditional_or_expression: conditional_and_expression  */
#line 1639 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6215 "src/parser.tab.c"
    break;

  case 567: /* conditional_or_expression: conditional_or_expression "||" conditional_and_expression  */
#line 1640 "src/parser.y"
                                                                                        {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6221 "src/parser.tab.c"
    break;

  case 568: /* conditional_and_expression: inclusive_or_expression  */
#line 1643 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6227 "src/parser.tab.c"
    break;

  case 569: /* conditional_and_expression: conditional_and_expression "&&" inclusive_or_expression  */
#line 1644 "src/parser.y"
                                                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6233 "src/parser.tab.c"
    break;

  case 570: /* inclusive_or_expression: exclusive_or_expression  */
#line 1647 "src/parser.y"
                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6239 "src/parser.tab.c"
    break;

  case 571: /* inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression  */
#line 1648 "src/parser.y"
                                                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6245 "src/parser.tab.c"
    break;

  case 572: /* exclusive_or_expression: and_expression  */
#line 1651 "src/parser.y"
                                        {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6251 "src/parser.tab.c"
    break;

  case 573: /* exclusive_or_expression: exclusive_or_expression "^" and_expression  */
#line 1652 "src/parser.y"
                                                                {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6257 "src/parser.tab.c"
    break;

  case 574: /* and_expression: equality_expression  */
#line 1655 "src/parser.y"
                                        {(yyval.i)=createNode("and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6263 "src/parser.tab.c"
    break;

  case 575: /* and_expression: and_expression "&" equality_expression  */
#line 1656 "src/parser.y"
                                                                {(yyval.i)=createNode("and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6269 "src/parser.tab.c"
    break;

  case 576: /* equality_expression: relational_expression  */
#line 1659 "src/parser.y"
                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6275 "src/parser.tab.c"
    break;

  case 577: /* equality_expression: equality_expression "==" relational_expression  */
#line 1660 "src/parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6281 "src/parser.tab.c"
    break;

  case 578: /* equality_expression: equality_expression "!=" relational_expression  */
#line 1661 "src/parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6287 "src/parser.tab.c"
    break;

  case 579: /* relational_expression: shift_expression  */
#line 1664 "src/parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6293 "src/parser.tab.c"
    break;

  case 580: /* relational_expression: relational_expression "<" shift_expression  */
#line 1665 "src/parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6299 "src/parser.tab.c"
    break;

  case 581: /* relational_expression: relational_expression ">" shift_expression  */
#line 1666 "src/parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6305 "src/parser.tab.c"
    break;

  case 582: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1667 "src/parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6311 "src/parser.tab.c"
    break;

  case 583: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1668 "src/parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6317 "src/parser.tab.c"
    break;

  case 584: /* relational_expression: instanceof_expression  */
#line 1669 "src/parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6323 "src/parser.tab.c"
    break;

  case 585: /* instanceof_expression: relational_expression "instanceof" reference_type  */
#line 1672 "src/parser.y"
                                                                        {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6329 "src/parser.tab.c"
    break;

  case 586: /* instanceof_expression: relational_expression "instanceof" pattern  */
#line 1673 "src/parser.y"
                                                                {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6335 "src/parser.tab.c"
    break;

  case 587: /* shift_expression: additive_expression  */
#line 1676 "src/parser.y"
                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6341 "src/parser.tab.c"
    break;

  case 588: /* shift_expression: shift_expression "<<" additive_expression  */
#line 1677 "src/parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6347 "src/parser.tab.c"
    break;

  case 589: /* shift_expression: shift_expression ">>" additive_expression  */
#line 1678 "src/parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6353 "src/parser.tab.c"
    break;

  case 590: /* shift_expression: shift_expression ">>>" additive_expression  */
#line 1679 "src/parser.y"
                                                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6359 "src/parser.tab.c"
    break;

  case 591: /* additive_expression: multiplicative_expression  */
#line 1682 "src/parser.y"
                                                {(yyval.i)=createNode("additive_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6365 "src/parser.tab.c"
    break;

  case 592: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1683 "src/parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6371 "src/parser.tab.c"
    break;

  case 593: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1684 "src/parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6377 "src/parser.tab.c"
    break;

  case 594: /* multiplicative_expression: unary_expression  */
#line 1687 "src/parser.y"
                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6383 "src/parser.tab.c"
    break;

  case 595: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1688 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6389 "src/parser.tab.c"
    break;

  case 596: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1689 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6395 "src/parser.tab.c"
    break;

  case 597: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1690 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6401 "src/parser.tab.c"
    break;

  case 598: /* unary_expression: pre_increment_expression  */
#line 1693 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6407 "src/parser.tab.c"
    break;

  case 599: /* unary_expression: pre_decrement_expression  */
#line 1694 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6413 "src/parser.tab.c"
    break;

  case 600: /* unary_expression: "+" unary_expression  */
#line 1695 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6419 "src/parser.tab.c"
    break;

  case 601: /* unary_expression: "-" unary_expression  */
#line 1696 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6425 "src/parser.tab.c"
    break;

  case 602: /* unary_expression: unary_expression_not_plus_minus  */
#line 1697 "src/parser.y"
                                                        {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6431 "src/parser.tab.c"
    break;

  case 603: /* pre_increment_expression: "++" unary_expression  */
#line 1700 "src/parser.y"
                                                {(yyval.i)=createNode("pre_increment_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6437 "src/parser.tab.c"
    break;

  case 604: /* pre_decrement_expression: "--" unary_expression  */
#line 1702 "src/parser.y"
                                                {(yyval.i)=createNode("pre_decrement_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6443 "src/parser.tab.c"
    break;

  case 605: /* unary_expression_not_plus_minus: postfix_expression  */
#line 1704 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6449 "src/parser.tab.c"
    break;

  case 606: /* unary_expression_not_plus_minus: "~" unary_expression  */
#line 1705 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6455 "src/parser.tab.c"
    break;

  case 607: /* unary_expression_not_plus_minus: "!" unary_expression  */
#line 1706 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6461 "src/parser.tab.c"
    break;

  case 608: /* unary_expression_not_plus_minus: cast_expression  */
#line 1707 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6467 "src/parser.tab.c"
    break;

  case 609: /* unary_expression_not_plus_minus: switch_expression  */
#line 1708 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6473 "src/parser.tab.c"
    break;

  case 610: /* postfix_expression: primary  */
#line 1711 "src/parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6479 "src/parser.tab.c"
    break;

  case 611: /* postfix_expression: expression_name  */
#line 1712 "src/parser.y"
                                        {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6485 "src/parser.tab.c"
    break;

  case 612: /* postfix_expression: post_increment_expression  */
#line 1713 "src/parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6491 "src/parser.tab.c"
    break;

  case 613: /* postfix_expression: post_decrement_expression  */
#line 1714 "src/parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6497 "src/parser.tab.c"
    break;

  case 614: /* post_increment_expression: postfix_expression "++"  */
#line 1717 "src/parser.y"
                                                {(yyval.i)=createNode("post_increment_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6503 "src/parser.tab.c"
    break;

  case 615: /* post_decrement_expression: postfix_expression "--"  */
#line 1720 "src/parser.y"
                                                {(yyval.i)=createNode("post_decrement_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6509 "src/parser.tab.c"
    break;

  case 616: /* cast_expression: "(" primitive_type ")" unary_expression  */
#line 1723 "src/parser.y"
                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6515 "src/parser.tab.c"
    break;

  case 617: /* cast_expression: "(" reference_type additional_bound.multiopt ")" unary_expression_not_plus_minus  */
#line 1724 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6521 "src/parser.tab.c"
    break;

  case 618: /* cast_expression: "(" reference_type additional_bound.multiopt ")" lambda_expression  */
#line 1725 "src/parser.y"
                                                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6527 "src/parser.tab.c"
    break;

  case 619: /* additional_bound.multiopt: additional_bound.multiopt additional_bound  */
#line 1728 "src/parser.y"
                                                                {(yyval.i)=createNode("additional_bound.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6533 "src/parser.tab.c"
    break;

  case 620: /* additional_bound.multiopt: %empty  */
#line 1729 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6539 "src/parser.tab.c"
    break;

  case 621: /* switch_expression: "switch" "(" expression ")" switch_block  */
#line 1732 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6545 "src/parser.tab.c"
    break;


#line 6549 "src/parser.tab.c"

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
	// cout << "Node Created - " << lbl << endl;
	return nodes.size()-1;
}

void addChild(int parent, int child) {
	nodes[parent].second.push_back(child);
	// cout << "Added Child - " << label[parent] << "->" << label[child] << endl;
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
	build_graph();
	return 0;
}
