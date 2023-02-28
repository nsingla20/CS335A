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
#define YYLAST   3180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  315
/* YYNRULES -- Number of rules.  */
#define YYNRULES  621
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1063

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
    1484,  1487,  1488,  1489,  1490,  1493,  1494,  1497,  1498,  1499,
    1502,  1505,  1508,  1509,  1512,  1513,  1516,  1519,  1520,  1521,
    1524,  1525,  1528,  1529,  1530,  1531,  1532,  1533,  1536,  1539,
    1540,  1543,  1544,  1545,  1546,  1547,  1548,  1549,  1552,  1553,
    1554,  1555,  1558,  1561,  1562,  1565,  1568,  1569,  1572,  1575,
    1576,  1579,  1580,  1583,  1584,  1587,  1588,  1591,  1592,  1595,
    1596,  1599,  1600,  1603,  1604,  1607,  1608,  1611,  1614,  1615,
    1616,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,
    1628,  1629,  1630,  1633,  1634,  1635,  1638,  1639,  1642,  1643,
    1646,  1647,  1650,  1651,  1654,  1655,  1658,  1659,  1660,  1663,
    1664,  1665,  1666,  1667,  1668,  1671,  1672,  1675,  1676,  1677,
    1678,  1681,  1682,  1683,  1686,  1687,  1688,  1689,  1692,  1693,
    1694,  1695,  1696,  1699,  1701,  1703,  1704,  1705,  1706,  1707,
    1710,  1711,  1712,  1713,  1716,  1719,  1722,  1723,  1724,  1727,
    1728,  1731
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
     399,   128,  -907,  -907,  -907,  -907,  -907,    49,   101,  -907,
     112,   223,   232,  -907,  -907,  -907,  -907,  -907,    47,  -907,
    -907,  -907,  -907,  -907,  -907,   155,  -907,  3045,   197,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,   186,
     233,  -907,   223,   236,   251,  -907,   282,  -907,   111,  -907,
     281,   281,  -907,   281,  -907,  -907,  -907,   281,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  1588,   397,   280,
     446,  -907,    88,   425,   281,  -907,   441,   406,   441,   441,
     248,  -907,  2291,  2358,  2291,  2291,  2291,  2291,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,   179,  -907,   373,   483,  -907,
     480,  1686,  2291,  -907,  -907,  -907,  -907,  -907,   482,   362,
     485,  -907,   366,   490,   492,   498,   316,   494,   507,  -907,
     520,  -907,  -907,   529,  -907,  1664,   428,   499,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,    17,   539,   447,
     515,   555,   195,    45,  -907,   268,   431,   343,  -907,  -907,
    -907,  -907,   444,  -907,  -907,  -907,  -907,  -907,  -907,   565,
    -907,   340,   541,  -907,   461,   530,   508,  -907,   573,   466,
    -907,   516,   568,  1686,   243,  -907,   243,  1888,   570,   482,
    1037,   723,   956,   571,  -907,   562,  -907,  -907,  1309,  -907,
    -907,  -907,  -907,  -907,    40,  -907,   573,  -907,   564,     8,
    -907,  -907,  1664,   219,   558,  2358,   537,  -907,   567,  -907,
    -907,  -907,   381,   225,   558,  -907,  -907,   558,  -907,   519,
     595,   145,   235,    43,   558,  2358,  1955,   596,  -907,   581,
    -907,  -907,   227,  -907,    96,   558,  2358,  2358,  2291,  2291,
    2291,  2291,  2291,  2291,  2291,  2291,  2291,  2291,  2291,   573,
    2291,  2291,  2291,  2291,  2291,  2291,  2291,  2291,  -907,  -907,
    -907,   575,   576,  -907,    33,  -907,  -907,  -907,    81,  -907,
     566,  -907,   573,   406,  -907,   564,   577,  -907,    81,   174,
    -907,   573,   528,  -907,   598,   406,  -907,   332,  1007,  -907,
     602,  -907,  -907,  2291,   470,  -907,  2022,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  2358,
     559,   574,  -907,  -907,   580,   604,  -907,  1362,   517,   392,
     366,  -907,   517,   366,   188,   614,   558,  -907,   627,   628,
     620,  -907,   615,  -907,   527,   589,   586,   641,    81,   569,
    -907,  -907,    81,   438,  -907,   643,   591,   558,   646,  -907,
     647,   605,   639,  -907,  -907,  -907,   650,  -907,  -907,   654,
    -907,   655,   613,   632,   539,   447,   515,   555,   195,    45,
      45,   268,   268,   268,   268,  -907,  1088,  -907,  -907,  -907,
     431,   431,   431,   343,   343,  -907,  -907,  -907,  -907,  -907,
     207,    38,   653,   617,  -907,  -907,   659,   606,   665,   567,
    -907,  -907,   189,  -907,   223,   578,  -907,   680,  -907,  -907,
    1738,  -907,   585,   681,  -907,  -907,  -907,  -907,   558,  -907,
     678,   700,   661,  -907,   385,  -907,  -907,   661,  -907,  -907,
    -907,   704,  -907,   693,  -907,   573,  1463,  -907,  2495,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,   573,   694,    35,  1754,
    -907,  2089,  -907,  -907,   366,  -907,  -907,  -907,  1955,   705,
    -907,   607,  1686,  -907,  -907,  -907,  -907,   558,  -907,   558,
     265,   558,   708,  -907,   711,  -907,  -907,  -907,   709,   697,
    -907,   728,  -907,  -907,  2358,  -907,  -907,   704,   573,   573,
     223,  -907,   223,   201,  -907,  -907,  -907,  2805,  -907,  -907,
    -907,  -907,  -907,   530,   573,  -907,  -907,   223,   624,  -907,
     573,   714,   729,   702,  -907,  -907,  -907,  -907,  -907,  -907,
     730,   748,  -907,  -907,  -907,  -907,   749,  -907,   595,   314,
    -907,  -907,  -907,  -907,   366,  -907,  -907,   577,  -907,  -907,
     377,  2358,  -907,  2358,   750,   750,  2627,   747,   752,  2157,
     758,   760,  2358,    36,   761,  2358,  3073,  -907,   645,  -907,
    -907,  -907,  -907,  -907,  -907,   731,  -907,  -907,  -907,  -907,
    -907,   751,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,   420,
     429,  -907,  -907,  -907,   444,   465,   471,  -907,   573,   573,
     573,  -907,  -907,  -907,  -907,   567,  -907,  -907,   734,   410,
    -907,   322,   764,  1955,   404,  -907,  -907,   661,  -907,  -907,
    -907,   779,   780,  1955,  1955,  2358,  1955,  -907,  -907,  -907,
    -907,   753,    34,    34,   675,   468,   755,  -907,  -907,   784,
    -907,   564,  -907,    81,  -907,  -907,  -907,   577,  -907,   674,
    -907,  -907,   802,   772,    56,  -907,  -907,   387,   187,  -907,
      81,   814,    81,  -907,  -907,  2627,   278,  -907,   788,   791,
     715,  2873,  2358,   792,  -907,  2358,  2358,   796,  3027,   773,
     718,  2358,   801,  -907,  2426,  -907,  -907,  -907,  -907,  -907,
     818,   724,  -907,  2358,  -907,  -907,  -907,  -907,   624,   820,
    2291,  -907,   404,  -907,   815,   449,   828,  -907,   829,   831,
    -907,   833,   822,  2224,  -907,   595,   845,    58,    83,   223,
    -907,   405,  -907,   209,   819,   841,   772,   249,   279,  -907,
    -907,  1955,   223,  -907,  -907,  2746,  -907,  -907,  -907,  -907,
    -907,  -907,   850,   718,  -907,  2746,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,   558,  -907,
     558,  -907,  2358,  -907,  -907,  -907,   843,   830,  -907,   826,
    -907,  -907,   844,  -907,   847,   852,  -907,   316,  -907,   836,
    -907,  -907,   428,    67,   851,   800,   804,  -907,   773,   855,
    -907,  -907,  2224,  -907,   200,  -907,  -907,  -907,  -907,  -907,
      63,  -907,   846,   170,  1821,   832,  1955,  -907,  -907,  -907,
     704,  -907,   856,  -907,   845,  -907,  -907,   872,  -907,   863,
    -907,  -907,  2746,  -907,   866,  -907,  -907,  -907,   704,    22,
     878,  -907,  -907,    61,   281,   880,   704,    22,   787,   776,
    -907,  -907,   862,  2358,  2358,   875,  2157,  2690,   607,   718,
    -907,   882,   867,  -907,   718,  -907,   773,   800,  -907,  2627,
    -907,  -907,   883,  -907,   876,  -907,  -907,  -907,  -907,  -907,
     873,  -907,   893,  -907,   890,   856,   368,  -907,   366,   864,
     840,  -907,  -907,  -907,   901,   787,  -907,   905,   888,  -907,
     573,   776,  -907,  2993,  -907,  -907,   906,   907,  2951,   892,
     396,   911,   913,   914,  -907,   871,   874,  -907,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  3027,    72,   916,  -907,
    -907,  -907,  -907,  -907,  2291,  -907,  2564,  -907,  -907,   845,
     890,  -907,   881,   624,  -907,   878,  -907,  -907,  -907,  -907,
     659,  -907,  -907,  -907,  -907,   318,   255,  2495,  -907,   440,
     904,  2627,  -907,  2897,  2690,  2873,  2358,  2358,  2627,  -907,
     558,   915,   918,   704,   718,  -907,  -907,   856,  1686,   920,
    -907,  -907,   787,   922,   924,  1738,   922,   925,    43,   933,
     939,   837,    96,  -907,  -907,   940,  -907,  -907,  -907,   909,
     929,   947,   948,  -907,   853,  -907,  -907,  -907,  -907,  -907,
     950,  -907,  -907,  1545,  -907,  -907,   963,   955,   573,    46,
    1955,  1955,  -907,    68,  2627,  2358,  2157,  2690,  2690,   573,
     366,   958,   704,   945,   884,  -907,  -907,   970,   962,   971,
     973,  -907,   974,   964,   926,  -907,   659,  -907,  -907,  -907,
    -907,  -907,  1955,   969,   972,  1955,  2690,  2897,  2690,  -907,
     980,  -907,  -907,   992,  -907,   995,  -907,   983,   985,  2690,
    -907,  -907,  -907
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
      70,     0,   118,   169,     0,    56,   148,     4,     4,   241,
     249,   239,     0,   293,   286,     0,   291,   292,   287,   289,
     290,   263,     0,     0,   271,     0,   158,   274,   152,   156,
     157,   153,   154,   155,   272,   275,   159,   224,   185,   213,
     185,   376,   331,   389,   432,   436,     0,   425,   429,     0,
     417,   424,     0,   437,     0,     0,   438,   465,   463,   459,
     462,   464,     0,   477,     0,     0,   440,   447,   444,     0,
     435,   340,   331,   332,     0,   254,   490,   506,   407,   408,
       0,   396,     0,     0,   331,     0,   239,   503,   504,   505,
       0,   165,   126,   116,     0,   117,   121,     0,   115,     0,
     294,   149,     0,   150,     0,   120,   197,   331,     0,     0,
       0,   269,   225,   185,     0,   331,     0,     0,   195,     0,
     182,   183,     0,   331,   331,   427,   331,   331,     0,     0,
     458,     0,   460,   212,     0,   441,   445,   456,   443,   331,
     336,   492,   404,   393,     0,   399,   392,   394,   401,   402,
       0,    46,     0,   162,   122,   126,     0,    71,   169,     0,
       0,   223,   295,   222,     0,   195,   228,     0,     0,   191,
     331,     0,   194,   231,   276,   390,     0,     0,   331,     0,
      76,     0,     0,     0,   386,     0,   351,   358,   359,   360,
     361,   414,   415,   391,   439,   457,   212,     0,     0,   453,
     446,   455,   454,   409,   331,   398,     4,   400,   507,     0,
     123,   119,   307,   255,   196,     0,   200,   192,   200,   160,
     220,   221,   216,   219,   226,     0,     0,     4,   230,     0,
       0,   331,   428,   331,   331,   212,   331,   331,   331,   461,
     185,     0,   452,     0,     0,   406,   403,   125,     0,     0,
     306,   251,   195,   212,     0,     0,   212,   217,   185,     0,
       0,     0,   185,   411,   430,     0,   421,   426,   377,   425,
       0,     0,     0,   387,   450,   449,   448,   308,   305,   193,
       0,   201,   208,     0,   210,   199,   205,     0,   331,     0,
     239,   239,   229,     0,   331,   331,   331,   331,   331,   331,
     169,   206,   331,     0,     0,   227,   218,     0,     0,     0,
       0,   416,     0,     0,     0,   410,   451,   198,   212,   209,
     204,   203,   239,     0,     0,   239,   331,   331,   331,   207,
       0,   235,   234,     0,   431,     0,   388,     0,     0,   331,
     236,   237,   423
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -907,  -907,    41,  -907,   823,   -48,  -907,   -29,  -113,  -907,
    -907,   -53,   -87,   -70,  -136,  -487,  -155,   -42,  -907,   521,
    -907,   754,  -907,  -907,  -907,   408,  -907,  -907,  -411,  -907,
    -907,  -907,  -682,    90,    11,    79,  -907,  1002,  -907,  -907,
    -907,  -907,  -907,  -907,  -907,  -907,  1020,  -907,  -907,  -907,
    -907,  -907,  -907,  1000,  -907,  -907,  -907,   536,  -599,   398,
     158,    27,  -907,   477,  -907,   -60,  -907,  -672,  -907,  -907,
    -907,  -907,   756,  -907,  -907,   522,   386,   382,  -907,  -907,
    -444,  -907,   231,  -907,  -420,  -287,  -657,  -261,  -907,  -907,
     118,   125,   487,  -907,  -907,  -907,  -907,   309,  -820,   163,
     119,   108,    77,  -907,  -907,  -907,  -907,    18,  -161,  -163,
    -907,  -907,  -907,  -907,    54,   220,  -907,  -907,  -907,  -907,
     237,   183,  -907,   129,  -907,  -418,  -907,  -907,  -357,  -907,
    -907,  -907,  -907,   433,  -907,   147,  -907,  -907,  -907,  -907,
    -907,  -907,  -907,   432,  -907,  -907,  -907,  -907,  -907,  -907,
    -907,     0,  -399,  -907,  -907,  -907,  -907,  -907,  -907,  -907,
     435,  -907,  -907,  -907,  -907,  -907,  -907,  -907,  -907,    -6,
    -907,  -907,  -907,  -907,   732,   -95,  -907,  -907,  -907,  -907,
    -907,  -907,    -8,   167,  -907,  -907,  -907,   172,   160,  -907,
     411,  -907,  -907,  -218,  -907,   159,  -680,  -803,  -907,  -907,
    -907,  -907,  -652,  -907,  -907,  -907,  -907,  -907,   242,  -907,
    -907,   229,   289,  -907,  -689,  -907,   173,  -907,  -907,  -907,
    -907,  -907,  -907,   141,  -800,    53,  -907,  -907,  -907,  -906,
    -907,  -907,  -907,  -907,   557,  -907,  -907,  -907,   299,  -907,
    -907,   319,   320,  -907,   253,  -907,  -907,  -907,   247,  -907,
    -907,  -907,  -907,  -907,  -907,   198,  -907,  -907,  -907,  -655,
    -907,  -907,   104,   180,  -216,  -907,  -907,  -907,  -907,   423,
     554,   308,  -907,  -907,  -907,  -907,   917,  -907,   657,   -68,
    -364,  -907,  -907,  -907,  -907,  -907,   583,  -907,  -907,  -907,
     352,  -907,  -907,   -63,  -907,   886,   877,   885,   879,   887,
     296,  -907,   290,   315,   245,    21,   434,   486,   685,   503,
     612,   629,  -907,   481,  -907
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
     874,   557,    31,   834,   273,   169,   508,   167,   270,   392,
     274,   170,   277,   398,   509,   795,   727,   823,   748,   749,
     724,   712,   630,   714,   631,   663,   603,   836,   422,   423,
     424,   425,   527,   426,   427,   428,   750,   837,   891,   830,
     885,   973,  1000,   974,  1024,  1001,  1021,  1002,   376,  1004,
     429,   892,   942,   977,   943,   882,   751,   752,   753,   838,
     839,   894,   947,   558,   948,   352,    32,   280,   334,   649,
     399,   400,   512,   401,   402,   796,   514,   650,    33,   285,
     407,   408,   520,   409,   410,   411,   522,   525,   658,   754,
     755,   756,    35,   282,   405,   283,   406,   518,   654,   738,
     500,   740,    36,   266,   391,   501,   502,   969,   970,    47,
      15,   120,   121,   229,   122,   123,   124,   208,   209,   332,
      16,    17,   125,   604,   605,   606,   690,   560,   561,   684,
     562,   563,   564,   565,   487,   566,   905,   567,   568,   569,
     907,   570,   571,   572,   573,   908,   574,   575,   615,   803,
     702,   800,   703,   801,   704,   862,   798,   576,   909,   577,
     578,   910,   579,   769,   673,   985,   911,   770,   986,   771,
     845,   580,   912,   581,   668,   582,   583,   584,   585,   586,
     587,   785,   786,   856,   787,   918,   963,   994,   855,   588,
     922,   680,   851,   779,   852,   780,   781,   378,   379,   126,
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
      25,    14,    76,    77,   136,    78,   207,   349,   198,    79,
      34,   535,   233,   802,   289,   183,   288,   642,   360,   768,
     158,    65,    39,   782,   158,   199,   164,   421,    34,    43,
     179,   377,   276,   453,   812,   597,   456,    30,   136,   559,
     612,   313,   511,   629,   906,   726,   899,   987,   678,   474,
      37,    27,   881,    70,   178,    30,   811,   159,   715,    39,
     237,   119,   211,   827,   310,   937,   197,   216,   495,    27,
     218,   481,   538,   835,   196,   414,   245,   232,   286,   246,
    -466,   275,   247,   248,    75,   311,   733,   202,   813,   233,
     -40,   157,   196,    11,   313,   119,   212,  -466,   199,   358,
     599,   212,   162,   175,   212,   190,   191,   192,   193,   183,
     136,   864,  -105,   815,    37,   486,    11,   700,   249,   -40,
     627,   347,   701,   210,   179,    11,   199,   196,     9,   600,
      12,   238,   875,   438,   716,   860,   211,   330,   416,    42,
    1027,   987,    26,   312,   390,   276,   116,   438,   178,   521,
     835,   906,   999,   496,   326,   318,   322,   351,   814,   271,
     278,   116,  1030,   116,   116,   116,   116,   119,   362,   363,
     212,   734,  -228,    18,   347,   419,   196,  -253,   863,   199,
     116,   116,   195,   814,    18,   275,    74,   687,   317,   319,
     319,   457,   513,   324,   275,   699,   375,   -85,    67,    11,
     866,   243,   396,   861,   233,   708,   709,   338,   711,   213,
     196,   199,   342,   397,   906,   906,  1033,   876,  -253,   222,
     393,   819,   327,  -185,   700,   412,    37,    26,   440,   701,
     326,   244,    11,    11,    45,    41,   639,   864,   949,   343,
     418,   442,   344,   906,    11,   906,   952,   967,   691,   336,
     196,  -185,   116,  -331,  -331,   -20,   906,    68,   196,   346,
     -20,   782,   271,   419,   278,   488,    71,   -19,   620,   232,
     311,   488,   -19,   278,   988,    72,   385,   386,   387,   743,
     311,   489,   430,   173,    75,   559,   490,   489,   -19,   491,
     467,   313,   490,   -19,   469,   491,   196,   419,   438,   537,
     250,   768,   744,   768,   159,   492,   762,   251,   763,   252,
     160,   492,   212,   824,   434,   212,   637,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   418,   116,
     116,   116,   116,   116,   116,   116,   116,  1034,  1035,   661,
     223,   743,   978,   261,   -20,   224,   694,   224,   275,   979,
     255,  -536,   980,   196,   262,  -530,   -19,   256,    11,    73,
     438,   225,   418,   225,   821,   199,  1054,   616,  1056,   257,
     430,   743,   116,   289,   647,   288,   199,   -19,   420,  1062,
     530,   607,   532,   608,   419,   533,   215,   732,   872,   -20,
     438,   499,   888,   312,  -257,   768,   515,   203,   931,   136,
     157,   -19,   204,   941,   523,   665,  -331,  -331,   -20,   531,
    -331,  -331,   742,   529,   212,   516,   212,   641,   498,   212,
     -19,   628,   -19,   275,   954,    11,   335,   278,   163,   817,
    -331,    11,   497,  -385,   199,   818,    11,   451,   317,  -385,
     199,   -19,  -384,   313,   313,   313,   609,   253,  -384,   418,
    -385,   254,   234,   767,    11,   693,   119,   235,   700,  -384,
     778,   258,   470,   701,   982,   259,   420,   471,   439,   235,
     161,   720,   165,   183,   828,   666,   -94,   168,   -94,   435,
     -91,   674,  -612,   436,   677,   450,  -612,   682,  -613,   455,
     131,    65,  -613,    11,   805,   205,   643,   271,   383,   384,
     420,   634,   278,   636,   206,   131,   226,   131,   131,   131,
     131,   214,    11,   657,   217,   116,   220,    49,   644,   219,
     660,   941,   221,   662,   131,   131,   212,   559,   199,   199,
     199,   227,   635,   228,    52,   371,   372,   373,   374,   369,
     370,   116,   230,   995,   236,   312,   688,   689,   559,   239,
      65,    54,    55,   166,    56,   171,   172,   710,    58,   240,
      59,    60,   241,   116,   242,   380,   381,   382,   260,    61,
      62,   263,   265,   272,    11,    63,   195,   279,   632,   633,
     284,   281,   201,   293,   295,   296,   333,   420,   215,   196,
     317,   932,  1028,  1029,   331,   232,   131,   340,   341,   355,
     356,   -36,  1039,   395,   772,   388,   389,   774,   775,   705,
     404,  -261,   758,   789,   760,   432,   443,   445,   589,   934,
     444,   132,   419,   446,  1050,   608,   458,  1053,   449,    65,
     459,   460,   419,   461,   462,   464,   132,   799,   132,   132,
     132,   132,   463,   465,   466,   607,   472,   468,   473,   474,
     475,   476,   477,   479,   737,   132,   132,   481,   482,   483,
     484,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   503,   131,   131,   131,   131,   131,   131,   131,
     131,   736,   504,   -35,   510,   746,   794,   418,   507,   517,
     328,   329,   917,   519,   842,   735,   524,   833,   778,   745,
     526,   337,   528,  -541,   339,   670,  -331,   534,   345,   419,
     348,   350,   536,   598,  1006,   212,   131,   613,   614,   357,
     623,   359,   361,   624,   607,   679,   589,   132,   625,    65,
     816,  -549,   173,  1037,  -549,   645,   870,   989,  -549,    65,
     626,  -549,  1022,   825,   648,  -549,   590,   652,   651,   655,
    -549,   656,   659,   667,   746,   746,  -549,   777,  -549,   671,
     683,   685,   349,  -549,   672,  -549,   360,   419,   822,   822,
     675,  -549,   676,   681,   418,   896,   897,   698,   674,   116,
     692,   686,   706,   707,   719,   722,   886,   723,   713,   729,
     591,   732,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   275,   132,   132,   132,   132,   132,   132,
     132,   132,  1003,   357,   731,  1003,    65,   759,   764,   880,
     940,   765,   773,   766,   761,   420,   776,   880,   784,   438,
     757,   790,   418,   797,   201,   420,  -549,   792,   804,   793,
     806,   810,   807,   414,   808,   589,   809,   132,   720,   820,
     435,   589,   788,   831,   590,   843,   846,   847,   844,   131,
     848,   799,   419,   853,   589,   849,   850,   854,   859,   960,
     212,  -443,   592,   997,   865,   877,   878,  1003,   871,   879,
     817,   884,   643,  -131,    11,   131,   890,   893,   991,   992,
     419,   415,   895,    89,   898,   915,    90,   916,   591,   757,
     757,    91,   924,   927,   925,   136,   928,   131,    92,   929,
     933,   430,   420,   936,    93,   832,    94,   938,   939,   950,
     951,   275,   953,   955,   593,   956,   957,   418,   975,   964,
     975,    96,   275,   958,   983,  -202,  -357,  1015,   940,   531,
     968,   594,  -179,  1005,  1008,  1010,   826,  1032,   674,  1036,
     998,  1011,  1012,  1014,   618,   418,   619,   621,   622,  1016,
    1017,  1018,   119,  1020,  -550,  1019,  1023,  -550,  1025,  1040,
     420,  -550,   945,   590,  -550,  1043,   868,  1038,  -550,   590,
     592,  1041,  1042,  -550,  1044,  1045,   264,  1046,  1048,  -550,
     132,  -550,   590,  1057,  1047,   777,  -550,   430,  -550,  1051,
     643,   883,  1052,   116,  -550,  1058,   904,   420,  1059,   883,
     414,   278,   212,  1060,   529,  1061,   132,   591,   923,   695,
      44,   914,   394,   591,   640,    10,   919,   589,    66,   638,
     646,   718,   593,   930,   728,   961,   591,   403,   132,   589,
     747,   873,   962,   935,   829,  -548,   976,   116,  -548,   594,
     595,    11,  -548,  1007,   972,  -548,  1049,   889,   415,  -548,
      89,   223,  1026,    90,  -548,   420,   224,   596,    91,  -550,
    -548,   887,  -548,   416,   944,    92,   981,  -548,   589,  -548,
     971,    93,   225,    94,   730,  -548,   966,   741,   480,   739,
     913,   414,   867,   420,   926,   791,   990,   965,    96,   592,
    1055,   783,   669,   869,   921,   592,   589,   857,   858,   920,
     984,   610,   417,   761,   959,   323,   365,   993,   592,   664,
     367,   539,   725,   131,   364,   366,     0,   589,     0,   368,
       0,   589,    11,   589,   589,   589,   996,     0,   589,   415,
       0,    89,     0,     0,    90,     0,     0,     0,     0,    91,
    -548,   593,     0,     0,   416,   590,    92,   593,   595,     0,
       0,     0,    93,     0,    94,     0,     0,   590,   594,     0,
     593,     0,     0,  1031,   594,   596,   904,   923,     0,    96,
       0,     0,     0,     0,     0,     0,     0,   594,     0,     0,
       0,     0,     0,   485,   589,     0,     0,   589,   589,   591,
       0,     0,     0,     0,     0,   984,   590,   993,     0,     0,
       0,   591,     0,     0,     0,     0,     0,     0,  1031,     0,
       0,     0,     0,     0,     0,     0,   589,   589,   589,     0,
       0,     0,   132,     0,   590,     0,     0,     0,     0,   589,
       0,     0,     0,     0,     0,   840,     0,   841,     0,     0,
     591,     0,     0,     0,   132,   590,     0,     0,     0,   590,
       0,   590,   590,   590,     0,     0,   590,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   595,   591,     0,
       0,   592,     0,   595,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   592,   596,     0,   595,     0,     0,   591,
     596,     0,     0,   591,     0,   591,   591,   591,     0,     0,
     591,     0,     0,   596,     0,     0,   131,   297,     0,     0,
     298,     0,   590,     0,   299,   590,   590,   300,     0,     0,
       0,   301,   592,   593,     0,     0,   302,     0,     0,   783,
       0,     0,   303,     0,   304,   593,     0,   131,     0,   305,
     594,   306,     0,     0,   590,   590,   590,   307,     0,     0,
     592,     0,   594,     0,     0,    75,   591,   590,     0,   591,
     591,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     946,   592,     0,     0,   593,   592,     0,   592,   592,   592,
       0,   131,   592,     0,     0,     0,     0,     0,   591,   591,
     591,   594,     0,     0,     0,   448,    11,     0,     0,     0,
       0,   591,   593,   231,     0,    89,     0,     0,    90,     0,
       0,     0,   308,    91,     0,     0,     0,     0,     0,   594,
      92,     0,     0,   593,     0,     0,    93,   593,    94,   593,
     593,   593,     0,     0,   593,     0,     0,   132,   592,     0,
     594,   592,   592,    96,   594,     0,   594,   594,   594,   595,
       0,   594,     0,     0,     0,  1009,   176,    81,    82,  1013,
     132,   595,     0,     0,     0,   177,   596,     0,   132,     0,
     592,   592,   592,     0,     0,     0,     0,     0,   596,     0,
       0,     0,     0,   592,     0,     0,     0,     0,     0,     0,
     593,     0,     0,   593,   593,     0,     0,     0,     0,     0,
     595,     0,     0,     0,    88,     0,    89,   594,     0,    90,
     594,   594,   132,     0,    91,     0,     0,   596,     0,     0,
       0,    92,   593,   593,   593,     0,     0,    93,   595,    94,
       0,    95,     0,     0,     0,   593,     0,     0,   414,   594,
     594,   594,     0,     0,    96,   596,     0,    97,    98,   595,
      99,     0,   594,   595,     0,   595,   595,   595,     0,   100,
     595,     0,     0,     0,     0,     0,   596,     0,     0,   102,
     596,     0,   596,   596,   596,     0,     0,   596,     0,    11,
       0,    80,    81,    82,     0,     0,   415,     0,    89,     0,
      83,    90,     0,     0,    84,    85,    91,     0,    86,    87,
       0,   416,     0,    92,     0,     0,     0,     0,     0,    93,
       0,    94,     0,     0,     0,     0,   595,     0,     0,   595,
     595,     0,    11,     0,     0,     0,    96,     0,     0,    88,
       0,    89,     0,   596,    90,     0,   596,   596,     0,    91,
       0,     0,     0,     0,     0,     0,    92,     0,   595,   595,
     595,     0,    93,     0,    94,     0,    95,    75,     0,     0,
       0,   595,     0,     0,     0,   596,   596,   596,     0,    96,
       0,     0,    97,    98,     0,    99,     0,     0,   596,   174,
      81,    82,     0,     0,   100,     0,     0,     0,    83,   101,
       0,     0,    84,    85,   102,     0,    86,    87,    11,     0,
       0,     0,     0,     0,     0,   231,     0,    89,     0,     0,
      90,     0,     0,     0,     0,    91,     0,     0,     0,     0,
      11,     0,    92,     0,     0,     0,     0,    88,    93,    89,
      94,   414,    90,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,    92,    96,     0,   176,    81,    82,
      93,     0,    94,     0,    95,     0,   177,     0,     0,     0,
      84,    85,     0,     0,    86,    87,     0,    96,     0,     0,
      97,    98,    11,    99,     0,     0,     0,     0,     0,   415,
       0,    89,   100,     0,    90,     0,     0,   101,  -331,    91,
       0,     0,   102,     0,     0,    88,    92,    89,     0,     0,
      90,     0,    93,     0,    94,    91,     0,     0,     0,     0,
       0,     0,    92,     0,   176,    81,    82,     0,    93,    96,
      94,     0,    95,   177,     0,     0,     0,    84,    85,     0,
       0,    86,    87,     0,     0,    96,     0,     0,    97,    98,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   449,     0,     0,     0,     0,
     102,     0,    88,     0,    89,     0,     0,    90,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,    92,
       0,   287,    81,    82,     0,    93,     0,    94,     0,    95,
     177,  -532,     0,     0,    84,    85,     0,     0,    86,    87,
       0,     0,    96,     0,     0,    97,    98,     0,    99,   552,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,   438,     0,     0,     0,     0,   102,     0,    88,
       0,    89,     0,     0,    90,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,    92,     0,   176,    81,
      82,     0,    93,     0,    94,     0,    95,   177,     0,     0,
       0,    84,    85,     0,     0,    86,    87,     0,     0,    96,
       0,     0,    97,    98,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,  -331,
       0,     0,     0,     0,   102,     0,    88,     0,    89,     0,
       0,    90,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,    92,     0,   176,    81,    82,     0,    93,
       0,    94,     0,    95,   177,     0,     0,     0,    84,    85,
       0,     0,    86,    87,     0,     0,    96,     0,     0,    97,
      98,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,    88,     0,    89,     0,     0,    90,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
      92,     0,   176,    81,    82,     0,    93,     0,    94,     0,
      95,   177,     0,     0,     0,    84,    85,     0,     0,    86,
      87,     0,     0,    96,     0,     0,    97,    98,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   438,     0,   464,     0,     0,   102,     0,
      88,     0,    89,     0,     0,    90,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,    92,     0,     0,
     176,    81,    82,    93,     0,    94,     0,    95,     0,   177,
       0,     0,     0,    84,    85,     0,     0,    86,    87,     0,
      96,     0,     0,    97,    98,     0,    99,  -420,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,    88,     0,
      89,     0,     0,    90,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,    92,     0,   176,    81,    82,
       0,    93,     0,    94,     0,    95,   177,     0,     0,     0,
      84,    85,     0,     0,    86,    87,     0,     0,    96,     0,
       0,    97,    98,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,    88,     0,    89,     0,     0,
      90,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,    92,     0,   174,    81,    82,     0,    93,     0,
      94,     0,    95,    83,     0,     0,     0,    84,    85,     0,
       0,    86,    87,     0,     0,    96,     0,     0,    97,    98,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   449,     0,     0,     0,     0,
     102,     0,    88,     0,    89,     0,     0,    90,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,    92,
       0,   176,    81,    82,     0,    93,     0,    94,     0,    95,
     177,     0,     0,     0,    84,    85,     0,     0,    86,    87,
       0,     0,    96,     0,     0,    97,    98,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,    88,
       0,    89,     0,     0,    90,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,    92,     0,     0,   540,
      81,     0,    93,     0,    94,     0,    95,     0,   541,     0,
       0,     0,     0,    85,     0,     0,     0,    87,     0,    96,
       0,     0,    97,    98,     0,    99,   542,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,   543,    88,   544,    89,
    -339,     0,    90,     0,   545,  -339,   546,    91,     0,     0,
       0,     0,     0,     0,    92,   547,   548,     0,   540,    81,
      93,     0,    94,     0,    95,     0,     0,   541,     0,     0,
       0,     0,    85,     0,     0,   549,    87,    96,     0,     0,
      97,   550,   551,    99,   552,   542,     0,     0,     0,   553,
       0,  -212,   100,     0,   554,     0,   555,   438,     0,     0,
       0,  -339,     0,     0,     0,   543,    88,   544,    89,     0,
       0,    90,     0,   545,     0,   546,    91,     0,     0,     0,
       0,     0,     0,    92,   547,   548,     0,   540,    81,    93,
       0,    94,     0,    95,     0,     0,   541,     0,     0,     0,
       0,    85,     0,     0,   549,    87,    96,     0,     0,    97,
     550,   551,    99,   552,   542,     0,     0,     0,   553,     0,
    -212,   100,     0,   554,     0,   555,   438,     0,     0,     0,
    -233,     0,     0,     0,   543,    88,   544,    89,   700,     0,
      90,     0,   545,   701,   546,    91,     0,     0,     0,     0,
     540,    81,    92,   547,   548,     0,     0,     0,    93,   541,
      94,     0,    95,     0,    85,     0,     0,     0,    87,     0,
       0,     0,     0,   549,     0,    96,     0,   542,    97,   550,
     551,    99,   552,     0,     0,     0,     0,   553,     0,  -212,
     100,     0,   554,     0,   555,   438,     0,   543,    88,   544,
      89,     0,     0,    90,     0,   545,     0,   546,    91,     0,
       0,     0,     0,   900,    81,    92,   547,   548,     0,     0,
       0,    93,   541,    94,     0,    95,     0,    85,     0,     0,
       0,    87,     0,     0,     0,     0,   549,     0,    96,     0,
     542,    97,   550,   551,    99,   552,     0,     0,     0,     0,
     553,     0,     0,   100,     0,   554,     0,   555,   438,     0,
     543,    88,   544,    89,     0,     0,    90,     0,   545,   414,
     546,    91,     0,     0,     0,     0,     0,     0,    92,   901,
     902,     0,     0,     0,    93,     0,    94,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,   165,     0,   549,
       0,    96,     0,     0,    97,   550,   551,    99,   552,     0,
      48,     0,     0,   553,     0,    49,   100,   415,   903,    89,
     555,   438,    90,    50,     0,     0,     0,    91,   414,    51,
       0,     0,    52,     0,    92,     0,     0,     0,     0,     0,
      93,    53,    94,     0,     0,     0,     0,     0,     0,    54,
      55,     0,    56,    57,     0,     0,    58,    96,    59,    60,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    48,
       0,     0,   826,    63,    49,     0,   415,     0,    89,     0,
       0,    90,    50,     0,     0,     0,    91,     0,    51,     0,
       0,    52,     0,    92,     0,     0,   174,    81,     0,    93,
      53,    94,     0,     0,     0,   541,     0,     0,    54,    55,
      85,    56,    57,     0,    87,    58,    96,    59,    60,     0,
     174,    81,     0,  -418,     0,     0,    61,    62,     0,   541,
    -422,     0,    63,     0,    85,     0,     0,     0,    87,     0,
       0,     0,     0,     0,    88,     0,    89,     0,     0,    90,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,    93,    88,    94,
      89,    95,     0,    90,   174,    81,     0,     0,    91,     0,
       0,     0,     0,   541,    96,    92,     0,    97,    85,     0,
      99,    93,    87,    94,     0,    95,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    97,     0,     0,    99,     0,   174,    81,     0,     0,
       0,     0,    88,   100,    89,   541,     0,    90,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,   196,    93,     0,    94,     0,    95,
     174,    81,     0,     0,     0,     0,     0,     0,     0,   541,
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
       8,     7,    50,    51,    67,    53,   101,   223,    95,    57,
      10,   431,   125,   702,   177,    83,   177,   504,   234,   671,
      68,    27,    11,   678,    72,    95,    74,   288,    28,    18,
      83,   249,   168,   320,   716,   446,   323,    10,   101,   438,
     458,   196,   399,   487,   847,   644,   846,   953,    12,     3,
       3,    10,    30,    42,    83,    28,   713,    24,    24,    48,
      43,    67,   104,   735,    24,   885,    95,   109,    30,    28,
     112,     3,   436,   745,    31,     3,    31,   125,   173,    34,
      13,   168,    37,    38,     3,    45,    30,    95,    30,   202,
      82,     3,    31,    44,   249,   101,   104,    30,   168,     3,
      65,   109,    14,    82,   112,    84,    85,    86,    87,   177,
     173,   800,     0,    30,     3,   376,    44,    54,    73,   111,
     484,    78,    59,   102,   177,    44,   196,    31,     0,    94,
      81,   114,   814,   111,   100,   792,   178,   205,    66,    92,
      94,  1047,    30,   196,   111,   281,    67,   111,   177,   410,
     822,   954,   972,   115,   202,   197,   198,   225,   100,   165,
     168,    82,    94,    84,    85,    86,    87,   173,   236,   237,
     178,   115,   111,    72,    78,   288,    31,     3,   115,   249,
     101,   102,     3,   100,    72,   272,    75,   598,   196,   197,
     198,     3,     3,   201,   281,   613,   249,     0,    12,    44,
      30,     6,   272,     3,   317,   623,   624,   215,   626,   105,
      31,   281,   220,   273,  1017,  1018,  1016,   816,    44,   115,
     268,    12,     3,    44,    54,   285,     3,    30,   296,    59,
     278,    36,    44,    44,    79,     3,   497,   926,   893,    94,
     288,   309,    97,  1046,    44,  1048,   898,   929,   605,    24,
      31,    24,   173,    44,    45,    12,  1059,    24,    31,    24,
      12,   916,   268,   376,   272,    64,    30,    24,     3,   317,
      45,    64,    24,   281,   954,    24,   255,   256,   257,    92,
      45,    80,   288,    35,     3,   684,    85,    80,    45,    88,
     338,   446,    85,    45,   342,    88,    31,   410,   111,   435,
      32,   953,   115,   955,    24,   104,    28,    39,    30,    41,
      30,   104,   320,   731,   293,   323,   115,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   376,   250,
     251,   252,   253,   254,   255,   256,   257,  1017,  1018,    25,
      24,    92,    24,     3,    12,    29,    24,    29,   435,    94,
       7,    19,    97,    31,    14,    23,    24,    14,    44,    77,
     111,    45,   410,    45,   115,   435,  1046,   462,  1048,    26,
     376,    92,   293,   536,   510,   536,   446,    45,   288,  1059,
     422,   449,   424,   451,   497,   427,    24,    19,   806,    12,
     111,   391,   836,   446,   115,  1047,   402,    24,    30,   462,
       3,    24,    29,   890,   410,    28,    44,    45,    12,    24,
      44,    45,    25,   421,   422,   404,   424,   504,   391,   427,
      24,   484,    45,   510,    28,    44,    45,   435,     3,    24,
      45,    44,   391,    13,   504,    30,    44,    45,   446,    19,
     510,    45,    13,   598,   599,   600,   454,    16,    19,   497,
      30,    20,    24,   671,    44,    45,   462,    29,    54,    30,
     678,    17,    24,    59,    24,    21,   376,    29,   296,    29,
      24,     3,    31,   541,   735,   543,    77,    71,    79,     9,
      81,   549,    17,    13,   552,   318,    21,   555,    17,   322,
      67,   497,    21,    44,    45,    12,   504,   503,   253,   254,
     410,   490,   510,   492,    24,    82,    12,    84,    85,    86,
      87,    29,    44,   521,    29,   436,    24,    49,   507,    29,
     528,  1008,    24,   531,   101,   102,   534,   926,   598,   599,
     600,    24,   491,    13,    66,   245,   246,   247,   248,   243,
     244,   462,    13,   963,    45,   598,   599,   600,   947,    10,
     556,    83,    84,    76,    86,    78,    79,   625,    90,   112,
      92,    93,    47,   484,     9,   250,   251,   252,     3,   101,
     102,    30,   111,    65,    44,   107,     3,   111,   488,   489,
      12,    65,    95,    13,    13,    23,    19,   497,    24,    31,
     598,   878,  1010,  1011,    57,   643,   173,    78,     3,     3,
      19,    24,  1022,    37,   672,    30,    30,   675,   676,   617,
      82,    13,   660,   681,   662,    13,    57,    37,   438,   880,
      46,    67,   735,    19,  1042,   693,    12,  1045,   111,   635,
       3,     3,   745,    13,    19,    46,    82,   700,    84,    85,
      86,    87,   115,    57,     3,   713,     3,    78,    57,     3,
       3,    46,    13,     3,   654,   101,   102,     3,     3,    46,
      28,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    19,   250,   251,   252,   253,   254,   255,   256,
     257,   654,    65,    24,    19,   658,   694,   735,    82,   111,
     203,   204,   853,    13,   762,   654,   111,   745,   916,   658,
      19,   214,    24,     3,   217,   546,    45,     3,   221,   822,
     223,   224,    19,    19,   975,   723,   293,    12,   111,   232,
      12,   234,   235,    12,   792,   553,   546,   173,    19,   735,
     719,     8,    35,  1020,    11,   111,   804,   955,    15,   745,
      12,    18,  1003,   732,    30,    22,   438,    45,    19,    19,
      27,     3,     3,     3,   727,   728,    33,   678,    35,    12,
     115,    30,   978,    40,    12,    42,   982,   880,   727,   728,
      12,    48,    12,    12,   822,   843,   844,    13,   846,   700,
      46,    30,     3,     3,   109,    30,   834,     3,    35,   115,
     438,    19,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   890,   250,   251,   252,   253,   254,   255,
     256,   257,   973,   326,    12,   976,   822,     3,    30,   827,
     890,    30,    30,   108,   665,   735,    30,   835,    55,   111,
     658,    30,   880,    13,   347,   745,   113,    19,    23,   115,
      12,    19,    13,     3,    13,   665,    13,   293,     3,    30,
       9,   671,   680,     3,   546,    12,    30,    13,    28,   436,
      13,   924,   975,    12,   684,    13,    30,    67,    13,   917,
     878,    67,   438,   968,    28,     3,    13,  1038,    46,    13,
      24,     3,   890,     3,    44,   462,    99,   111,   956,   957,
    1003,    51,    30,    53,    19,    13,    56,    30,   546,   727,
     728,    61,    19,    30,    28,   968,    13,   484,    68,    19,
      46,   917,   822,    12,    74,   743,    76,    12,    30,    13,
      13,  1008,    30,    12,   438,    12,    12,   975,   936,    13,
     938,    91,  1019,    62,    30,    13,    62,    28,  1008,    24,
      59,   438,    24,    19,    19,    12,   106,  1015,  1016,  1019,
      30,    12,   115,    13,   467,  1003,   469,   470,   471,    30,
      13,    13,   968,    13,     8,   112,     3,    11,    13,    24,
     880,    15,   893,   665,    18,    13,   804,    19,    22,   671,
     546,    97,    12,    27,    13,    12,   163,    13,    62,    33,
     436,    35,   684,    13,    30,   916,    40,  1003,    42,    30,
    1008,   829,    30,   924,    48,    13,   847,   917,    13,   837,
       3,  1019,  1020,    30,  1022,    30,   462,   665,   859,   611,
      18,   849,   268,   671,   503,     5,   854,   847,    28,   493,
     508,   633,   546,   875,   648,   917,   684,   281,   484,   859,
     658,   810,   917,   880,   735,     8,   938,   968,    11,   546,
     438,    44,    15,   976,   935,    18,  1038,   837,    51,    22,
      53,    24,  1008,    56,    27,   975,    29,   438,    61,   113,
      33,   834,    35,    66,   891,    68,   947,    40,   898,    42,
     933,    74,    45,    76,   651,    48,   926,   655,   356,   654,
     848,     3,   803,  1003,   865,   684,   955,   924,    91,   665,
    1047,   678,   545,   804,   857,   671,   926,   788,   788,   856,
     951,   454,   105,   954,   916,   198,   239,   958,   684,   536,
     241,   436,   641,   700,   238,   240,    -1,   947,    -1,   242,
      -1,   951,    44,   953,   954,   955,   964,    -1,   958,    51,
      -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
     113,   665,    -1,    -1,    66,   847,    68,   671,   546,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,   859,   665,    -1,
     684,    -1,    -1,  1014,   671,   546,  1017,  1018,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   684,    -1,    -1,
      -1,    -1,    -1,   105,  1014,    -1,    -1,  1017,  1018,   847,
      -1,    -1,    -1,    -1,    -1,  1046,   898,  1048,    -1,    -1,
      -1,   859,    -1,    -1,    -1,    -1,    -1,    -1,  1059,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1046,  1047,  1048,    -1,
      -1,    -1,   678,    -1,   926,    -1,    -1,    -1,    -1,  1059,
      -1,    -1,    -1,    -1,    -1,   758,    -1,   760,    -1,    -1,
     898,    -1,    -1,    -1,   700,   947,    -1,    -1,    -1,   951,
      -1,   953,   954,   955,    -1,    -1,   958,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   665,   926,    -1,
      -1,   847,    -1,   671,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   859,   665,    -1,   684,    -1,    -1,   947,
     671,    -1,    -1,   951,    -1,   953,   954,   955,    -1,    -1,
     958,    -1,    -1,   684,    -1,    -1,   893,     8,    -1,    -1,
      11,    -1,  1014,    -1,    15,  1017,  1018,    18,    -1,    -1,
      -1,    22,   898,   847,    -1,    -1,    27,    -1,    -1,   916,
      -1,    -1,    33,    -1,    35,   859,    -1,   924,    -1,    40,
     847,    42,    -1,    -1,  1046,  1047,  1048,    48,    -1,    -1,
     926,    -1,   859,    -1,    -1,     3,  1014,  1059,    -1,  1017,
    1018,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     893,   947,    -1,    -1,   898,   951,    -1,   953,   954,   955,
      -1,   968,   958,    -1,    -1,    -1,    -1,    -1,  1046,  1047,
    1048,   898,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,  1059,   926,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,   113,    61,    -1,    -1,    -1,    -1,    -1,   926,
      68,    -1,    -1,   947,    -1,    -1,    74,   951,    76,   953,
     954,   955,    -1,    -1,   958,    -1,    -1,   893,  1014,    -1,
     947,  1017,  1018,    91,   951,    -1,   953,   954,   955,   847,
      -1,   958,    -1,    -1,    -1,   978,     3,     4,     5,   982,
     916,   859,    -1,    -1,    -1,    12,   847,    -1,   924,    -1,
    1046,  1047,  1048,    -1,    -1,    -1,    -1,    -1,   859,    -1,
      -1,    -1,    -1,  1059,    -1,    -1,    -1,    -1,    -1,    -1,
    1014,    -1,    -1,  1017,  1018,    -1,    -1,    -1,    -1,    -1,
     898,    -1,    -1,    -1,    51,    -1,    53,  1014,    -1,    56,
    1017,  1018,   968,    -1,    61,    -1,    -1,   898,    -1,    -1,
      -1,    68,  1046,  1047,  1048,    -1,    -1,    74,   926,    76,
      -1,    78,    -1,    -1,    -1,  1059,    -1,    -1,     3,  1046,
    1047,  1048,    -1,    -1,    91,   926,    -1,    94,    95,   947,
      97,    -1,  1059,   951,    -1,   953,   954,   955,    -1,   106,
     958,    -1,    -1,    -1,    -1,    -1,   947,    -1,    -1,   116,
     951,    -1,   953,   954,   955,    -1,    -1,   958,    -1,    44,
      -1,     3,     4,     5,    -1,    -1,    51,    -1,    53,    -1,
      12,    56,    -1,    -1,    16,    17,    61,    -1,    20,    21,
      -1,    66,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    -1,    -1,  1014,    -1,    -1,  1017,
    1018,    -1,    44,    -1,    -1,    -1,    91,    -1,    -1,    51,
      -1,    53,    -1,  1014,    56,    -1,  1017,  1018,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,  1046,  1047,
    1048,    -1,    74,    -1,    76,    -1,    78,     3,    -1,    -1,
      -1,  1059,    -1,    -1,    -1,  1046,  1047,  1048,    -1,    91,
      -1,    -1,    94,    95,    -1,    97,    -1,    -1,  1059,     3,
       4,     5,    -1,    -1,   106,    -1,    -1,    -1,    12,   111,
      -1,    -1,    16,    17,   116,    -1,    20,    21,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      44,    -1,    68,    -1,    -1,    -1,    -1,    51,    74,    53,
      76,     3,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    91,    -1,     3,     4,     5,
      74,    -1,    76,    -1,    78,    -1,    12,    -1,    -1,    -1,
      16,    17,    -1,    -1,    20,    21,    -1,    91,    -1,    -1,
      94,    95,    44,    97,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,   106,    -1,    56,    -1,    -1,   111,    44,    61,
      -1,    -1,   116,    -1,    -1,    51,    68,    53,    -1,    -1,
      56,    -1,    74,    -1,    76,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,     3,     4,     5,    -1,    74,    91,
      76,    -1,    78,    12,    -1,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    91,    -1,    -1,    94,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
     116,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,     3,     4,     5,    -1,    74,    -1,    76,    -1,    78,
      12,    13,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      -1,    -1,    91,    -1,    -1,    94,    95,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,   116,    -1,    51,
      -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,     3,     4,
       5,    -1,    74,    -1,    76,    -1,    78,    12,    -1,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    91,
      -1,    -1,    94,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,   116,    -1,    51,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,     3,     4,     5,    -1,    74,
      -1,    76,    -1,    78,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    -1,    -1,    91,    -1,    -1,    94,
      95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,     3,     4,     5,    -1,    74,    -1,    76,    -1,
      78,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,
      21,    -1,    -1,    91,    -1,    -1,    94,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    46,    -1,    -1,   116,    -1,
      51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
       3,     4,     5,    74,    -1,    76,    -1,    78,    -1,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,
      91,    -1,    -1,    94,    95,    -1,    97,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    51,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,     3,     4,     5,
      -1,    74,    -1,    76,    -1,    78,    12,    -1,    -1,    -1,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    91,    -1,
      -1,    94,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    51,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,     3,     4,     5,    -1,    74,    -1,
      76,    -1,    78,    12,    -1,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    91,    -1,    -1,    94,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
     116,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,     3,     4,     5,    -1,    74,    -1,    76,    -1,    78,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      -1,    -1,    91,    -1,    -1,    94,    95,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    51,
      -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,     3,
       4,    -1,    74,    -1,    76,    -1,    78,    -1,    12,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    91,
      -1,    -1,    94,    95,    -1,    97,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    50,    51,    52,    53,
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
      19,   203,   149,    30,   100,    30,   151,    24,    30,    12,
      30,   115,   119,   194,   242,   151,   106,   184,   204,   214,
     216,     3,   304,   122,   180,   184,   204,   214,   236,   237,
     209,   209,   396,    12,    28,   347,    30,    13,    13,    13,
      30,   369,   371,    12,    67,   365,   360,   358,   359,    13,
     203,     3,   332,   115,   331,    28,    30,   329,   304,   355,
     396,    46,   242,   199,   177,   149,   175,     3,    13,    13,
     299,    30,   232,   304,     3,   217,   122,   237,   197,   232,
      99,   215,   228,   111,   238,    30,   396,   396,    19,   341,
       3,    69,    70,   108,   312,   313,   314,   317,   322,   335,
     338,   343,   349,   325,   304,    13,    30,   225,   362,   304,
     361,   365,   367,   312,    19,    28,   328,    30,    13,    19,
     177,    30,   202,    46,   204,   216,    12,   215,    12,    30,
     130,   132,   229,   231,   238,   152,   209,   239,   241,   376,
      13,    13,   319,    30,    28,    12,    12,    12,    62,   372,
     122,   207,   208,   363,    13,   333,   305,   149,    59,   284,
     285,   252,   217,   218,   220,   299,   218,   230,    24,    94,
      97,   240,    24,    30,   312,   342,   345,   346,   313,   310,
     340,   396,   396,   312,   364,   201,   304,   292,    30,   215,
     219,   222,   224,   225,   226,    19,   204,   219,    19,   209,
      12,    12,   115,   209,    13,    28,    30,    13,    13,   112,
      13,   223,   204,     3,   221,    13,   231,    94,   242,   242,
      94,   312,   396,   341,   313,   313,   130,   202,    19,   201,
      24,    97,    12,    13,    13,    12,    13,    30,    62,   224,
     242,    30,    30,   242,   313,   342,   313,    13,    13,    13,
      30,    30,   313
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
#line 470 "src/parser.y"
                                        {(yyval.i)=createNode("input");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i)); startNode=(yyval.i);}
#line 2859 "src/parser.tab.c"
    break;

  case 3: /* modifier.multiopt: modifier.multiopt modifier  */
#line 473 "src/parser.y"
                                                {(yyval.i)=createNode("modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2865 "src/parser.tab.c"
    break;

  case 4: /* modifier.multiopt: %empty  */
#line 474 "src/parser.y"
                                {(yyval.i)=-1;}
#line 2871 "src/parser.tab.c"
    break;

  case 5: /* modifier: annotation  */
#line 477 "src/parser.y"
                                {(yyval.i)=createNode("modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2877 "src/parser.tab.c"
    break;

  case 6: /* modifier: "public"  */
#line 478 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2883 "src/parser.tab.c"
    break;

  case 7: /* modifier: "protected"  */
#line 479 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2889 "src/parser.tab.c"
    break;

  case 8: /* modifier: "private"  */
#line 480 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2895 "src/parser.tab.c"
    break;

  case 9: /* modifier: "abstract"  */
#line 481 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2901 "src/parser.tab.c"
    break;

  case 10: /* modifier: "static"  */
#line 482 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2907 "src/parser.tab.c"
    break;

  case 11: /* modifier: "final"  */
#line 483 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2913 "src/parser.tab.c"
    break;

  case 12: /* modifier: "sealed"  */
#line 484 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2919 "src/parser.tab.c"
    break;

  case 13: /* modifier: "strictfp"  */
#line 485 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2925 "src/parser.tab.c"
    break;

  case 14: /* modifier: "transitive"  */
#line 486 "src/parser.y"
                                        {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2931 "src/parser.tab.c"
    break;

  case 15: /* modifier: "transient"  */
#line 487 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2937 "src/parser.tab.c"
    break;

  case 16: /* modifier: "volatile"  */
#line 488 "src/parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2943 "src/parser.tab.c"
    break;

  case 17: /* dot_ind.multiopt: dot_ind.multiopt "." TOK_IDENTIFIER  */
#line 491 "src/parser.y"
                                                                {(yyval.i)=createNode("dot_ind.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2949 "src/parser.tab.c"
    break;

  case 18: /* dot_ind.multiopt: %empty  */
#line 492 "src/parser.y"
                                {(yyval.i)=-1;}
#line 2955 "src/parser.tab.c"
    break;

  case 19: /* type_IDENTIFIER: TOK_IDENTIFIER  */
#line 495 "src/parser.y"
                                        {(yyval.i)=createNode("type_IDENTIFIER");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2961 "src/parser.tab.c"
    break;

  case 20: /* unqualified_method_IDENTIFIER: TOK_IDENTIFIER  */
#line 498 "src/parser.y"
                                        {(yyval.i)=createNode("unqualified_method_IDENTIFIER");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2967 "src/parser.tab.c"
    break;

  case 21: /* primitive_type: annotation.multiopt numeric_type  */
#line 506 "src/parser.y"
                                                        {(yyval.i)=createNode("primitive_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2973 "src/parser.tab.c"
    break;

  case 22: /* primitive_type: annotation.multiopt "boolean"  */
#line 507 "src/parser.y"
                                                        {(yyval.i)=createNode("primitive_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2979 "src/parser.tab.c"
    break;

  case 23: /* numeric_type: integral_type  */
#line 510 "src/parser.y"
                                {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2985 "src/parser.tab.c"
    break;

  case 24: /* numeric_type: floating_point_type  */
#line 511 "src/parser.y"
                                        {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2991 "src/parser.tab.c"
    break;

  case 25: /* integral_type: "byte"  */
#line 514 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2997 "src/parser.tab.c"
    break;

  case 26: /* integral_type: "short"  */
#line 515 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3003 "src/parser.tab.c"
    break;

  case 27: /* integral_type: "int"  */
#line 516 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3009 "src/parser.tab.c"
    break;

  case 28: /* integral_type: "long"  */
#line 517 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3015 "src/parser.tab.c"
    break;

  case 29: /* integral_type: "char"  */
#line 518 "src/parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3021 "src/parser.tab.c"
    break;

  case 30: /* floating_point_type: "float"  */
#line 521 "src/parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3027 "src/parser.tab.c"
    break;

  case 31: /* floating_point_type: "double"  */
#line 522 "src/parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3033 "src/parser.tab.c"
    break;

  case 32: /* reference_type: class_or_interface_type  */
#line 525 "src/parser.y"
                                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3039 "src/parser.tab.c"
    break;

  case 33: /* reference_type: type_variable  */
#line 526 "src/parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3045 "src/parser.tab.c"
    break;

  case 34: /* reference_type: array_type  */
#line 527 "src/parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3051 "src/parser.tab.c"
    break;

  case 35: /* class_or_interface_type: class_type  */
#line 530 "src/parser.y"
                                {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3057 "src/parser.tab.c"
    break;

  case 36: /* class_or_interface_type: interface_type  */
#line 531 "src/parser.y"
                                        {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3063 "src/parser.tab.c"
    break;

  case 37: /* class_type: annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 534 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_type");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3069 "src/parser.tab.c"
    break;

  case 38: /* class_type: package_name "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 535 "src/parser.y"
                                                                                                {(yyval.i)=createNode("class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3075 "src/parser.tab.c"
    break;

  case 39: /* class_type: class_or_interface_type "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 536 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3081 "src/parser.tab.c"
    break;

  case 40: /* interface_type: class_type  */
#line 539 "src/parser.y"
                                {(yyval.i)=createNode("interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3087 "src/parser.tab.c"
    break;

  case 41: /* type_variable: annotation.multiopt type_IDENTIFIER  */
#line 542 "src/parser.y"
                                                        {(yyval.i)=createNode("type_variable");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3093 "src/parser.tab.c"
    break;

  case 42: /* array_type: primitive_type dims  */
#line 545 "src/parser.y"
                                        {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3099 "src/parser.tab.c"
    break;

  case 43: /* array_type: class_or_interface_type dims  */
#line 546 "src/parser.y"
                                                {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3105 "src/parser.tab.c"
    break;

  case 44: /* array_type: type_variable dims  */
#line 547 "src/parser.y"
                                        {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3111 "src/parser.tab.c"
    break;

  case 45: /* dims: annotation.multiopt "[" "]" an_sp.multiopt  */
#line 550 "src/parser.y"
                                                                        {(yyval.i)=createNode("dims");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3117 "src/parser.tab.c"
    break;

  case 46: /* an_sp.multiopt: an_sp.multiopt annotation.multiopt "[" "]"  */
#line 553 "src/parser.y"
                                                                        {(yyval.i)=createNode("an_sp.multiopt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3123 "src/parser.tab.c"
    break;

  case 47: /* an_sp.multiopt: %empty  */
#line 554 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3129 "src/parser.tab.c"
    break;

  case 48: /* type_parameter: type_parameter_modifier.multiopt type_IDENTIFIER type_bound.opt  */
#line 557 "src/parser.y"
                                                                                        {(yyval.i)=createNode("type_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3135 "src/parser.tab.c"
    break;

  case 49: /* type_parameter_modifier.multiopt: type_parameter_modifier  */
#line 560 "src/parser.y"
                                                {(yyval.i)=createNode("type_parameter_modifier.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3141 "src/parser.tab.c"
    break;

  case 50: /* type_parameter_modifier.multiopt: type_parameter_modifier.multiopt type_parameter_modifier  */
#line 561 "src/parser.y"
                                                                                {(yyval.i)=createNode("type_parameter_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3147 "src/parser.tab.c"
    break;

  case 51: /* type_parameter_modifier.multiopt: %empty  */
#line 562 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3153 "src/parser.tab.c"
    break;

  case 52: /* type_parameter_modifier: annotation  */
#line 564 "src/parser.y"
                                {(yyval.i)=createNode("type_parameter_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3159 "src/parser.tab.c"
    break;

  case 53: /* type_bound.opt: type_bound  */
#line 567 "src/parser.y"
                                {(yyval.i)=createNode("type_bound.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3165 "src/parser.tab.c"
    break;

  case 54: /* type_bound.opt: %empty  */
#line 568 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3171 "src/parser.tab.c"
    break;

  case 55: /* type_bound: "extends" type_variable  */
#line 571 "src/parser.y"
                                                {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3177 "src/parser.tab.c"
    break;

  case 56: /* type_bound: "extends" class_or_interface_type additional_bound.multiopt  */
#line 572 "src/parser.y"
                                                                                        {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3183 "src/parser.tab.c"
    break;

  case 57: /* additional_bound: "&" interface_type  */
#line 575 "src/parser.y"
                                        {(yyval.i)=createNode("additional_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3189 "src/parser.tab.c"
    break;

  case 58: /* type_arguments: "<" type_argument_list ">"  */
#line 578 "src/parser.y"
                                                        {(yyval.i)=createNode("type_arguments");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3195 "src/parser.tab.c"
    break;

  case 59: /* type_argument_list: type_argument type_argument.multiopt  */
#line 581 "src/parser.y"
                                                        {(yyval.i)=createNode("type_argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3201 "src/parser.tab.c"
    break;

  case 60: /* type_argument.multiopt: "," type_argument  */
#line 584 "src/parser.y"
                                        {(yyval.i)=createNode("type_argument.multiopt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3207 "src/parser.tab.c"
    break;

  case 61: /* type_argument.multiopt: type_argument.multiopt "," type_argument  */
#line 585 "src/parser.y"
                                                                {(yyval.i)=createNode("type_argument.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3213 "src/parser.tab.c"
    break;

  case 62: /* type_argument.multiopt: %empty  */
#line 586 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3219 "src/parser.tab.c"
    break;

  case 63: /* type_argument: reference_type  */
#line 588 "src/parser.y"
                                        {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3225 "src/parser.tab.c"
    break;

  case 64: /* type_argument: wildcard  */
#line 589 "src/parser.y"
                                {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3231 "src/parser.tab.c"
    break;

  case 65: /* wildcard: annotation.multiopt "?" wildcard_bounds.opt  */
#line 592 "src/parser.y"
                                                                        {(yyval.i)=createNode("wildcard");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3237 "src/parser.tab.c"
    break;

  case 66: /* wildcard_bounds.opt: wildcard_bounds  */
#line 595 "src/parser.y"
                                        {(yyval.i)=createNode("wildcard_bounds.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3243 "src/parser.tab.c"
    break;

  case 67: /* wildcard_bounds.opt: %empty  */
#line 596 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3249 "src/parser.tab.c"
    break;

  case 68: /* wildcard_bounds: "extends" reference_type  */
#line 599 "src/parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3255 "src/parser.tab.c"
    break;

  case 69: /* wildcard_bounds: "super" reference_type  */
#line 600 "src/parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3261 "src/parser.tab.c"
    break;

  case 70: /* module_name: TOK_IDENTIFIER  */
#line 605 "src/parser.y"
                                        {(yyval.i)=createNode("module_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3267 "src/parser.tab.c"
    break;

  case 71: /* module_name: module_name "." TOK_IDENTIFIER  */
#line 606 "src/parser.y"
                                                        {(yyval.i)=createNode("module_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3273 "src/parser.tab.c"
    break;

  case 72: /* package_name: TOK_IDENTIFIER  */
#line 609 "src/parser.y"
                                        {(yyval.i)=createNode("package_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3279 "src/parser.tab.c"
    break;

  case 73: /* package_name: package_name "." TOK_IDENTIFIER  */
#line 610 "src/parser.y"
                                                        {(yyval.i)=createNode("package_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3285 "src/parser.tab.c"
    break;

  case 74: /* type_name: type_IDENTIFIER  */
#line 613 "src/parser.y"
                                        {(yyval.i)=createNode("type_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3291 "src/parser.tab.c"
    break;

  case 75: /* type_name: package_or_type_name "." type_IDENTIFIER  */
#line 614 "src/parser.y"
                                                                {(yyval.i)=createNode("type_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3297 "src/parser.tab.c"
    break;

  case 76: /* expression_name: TOK_IDENTIFIER  */
#line 617 "src/parser.y"
                                        {(yyval.i)=createNode("expression_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3303 "src/parser.tab.c"
    break;

  case 77: /* expression_name: ambiguous_name "." TOK_IDENTIFIER  */
#line 618 "src/parser.y"
                                                        {(yyval.i)=createNode("expression_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3309 "src/parser.tab.c"
    break;

  case 78: /* method_name: unqualified_method_IDENTIFIER  */
#line 621 "src/parser.y"
                                                {(yyval.i)=createNode("method_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3315 "src/parser.tab.c"
    break;

  case 79: /* package_or_type_name: TOK_IDENTIFIER  */
#line 624 "src/parser.y"
                                        {(yyval.i)=createNode("package_or_type_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3321 "src/parser.tab.c"
    break;

  case 80: /* package_or_type_name: package_or_type_name "." TOK_IDENTIFIER  */
#line 625 "src/parser.y"
                                                                {(yyval.i)=createNode("package_or_type_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3327 "src/parser.tab.c"
    break;

  case 81: /* ambiguous_name: TOK_IDENTIFIER  */
#line 628 "src/parser.y"
                                        {(yyval.i)=createNode("ambiguous_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3333 "src/parser.tab.c"
    break;

  case 82: /* ambiguous_name: ambiguous_name "." TOK_IDENTIFIER  */
#line 629 "src/parser.y"
                                                        {(yyval.i)=createNode("ambiguous_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3339 "src/parser.tab.c"
    break;

  case 83: /* compilation_unit: ordinary_compilation_unit  */
#line 635 "src/parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3345 "src/parser.tab.c"
    break;

  case 84: /* compilation_unit: modular_compilation_unit  */
#line 636 "src/parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3351 "src/parser.tab.c"
    break;

  case 85: /* ordinary_compilation_unit: package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt  */
#line 639 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("ordinary_compilation_unit");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3357 "src/parser.tab.c"
    break;

  case 86: /* modular_compilation_unit: import_declaration.multiopt module_declaration  */
#line 642 "src/parser.y"
                                                                        {(yyval.i)=createNode("modular_compilation_unit");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3363 "src/parser.tab.c"
    break;

  case 87: /* package_declaration.opt: package_declaration  */
#line 645 "src/parser.y"
                                        {(yyval.i)=createNode("package_declaration.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3369 "src/parser.tab.c"
    break;

  case 88: /* package_declaration.opt: %empty  */
#line 646 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3375 "src/parser.tab.c"
    break;

  case 89: /* package_declaration: package_modifier.multiopt "package" TOK_IDENTIFIER dot_ind.multiopt ";"  */
#line 649 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("package_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3381 "src/parser.tab.c"
    break;

  case 90: /* package_modifier.multiopt: package_modifier.multiopt package_modifier  */
#line 652 "src/parser.y"
                                                                {(yyval.i)=createNode("package_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3387 "src/parser.tab.c"
    break;

  case 91: /* package_modifier.multiopt: %empty  */
#line 653 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3393 "src/parser.tab.c"
    break;

  case 92: /* package_modifier: annotation  */
#line 656 "src/parser.y"
                                {(yyval.i)=createNode("package_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3399 "src/parser.tab.c"
    break;

  case 93: /* import_declaration.multiopt: import_declaration.multiopt import_declaration  */
#line 659 "src/parser.y"
                                                                        {(yyval.i)=createNode("import_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3405 "src/parser.tab.c"
    break;

  case 94: /* import_declaration.multiopt: %empty  */
#line 660 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3411 "src/parser.tab.c"
    break;

  case 95: /* import_declaration: single_type_import_declaration  */
#line 663 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3417 "src/parser.tab.c"
    break;

  case 96: /* import_declaration: type_import_on_demand_declaration  */
#line 664 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3423 "src/parser.tab.c"
    break;

  case 97: /* import_declaration: single_static_import_declaration  */
#line 665 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3429 "src/parser.tab.c"
    break;

  case 98: /* import_declaration: static_import_on_demand_declaration  */
#line 666 "src/parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3435 "src/parser.tab.c"
    break;

  case 99: /* single_type_import_declaration: "import" type_name ";"  */
#line 669 "src/parser.y"
                                                        {(yyval.i)=createNode("single_type_import_declaration");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3441 "src/parser.tab.c"
    break;

  case 100: /* type_import_on_demand_declaration: "import" package_or_type_name "." "*" ";"  */
#line 672 "src/parser.y"
                                                                                {(yyval.i)=createNode("type_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3447 "src/parser.tab.c"
    break;

  case 101: /* single_static_import_declaration: "import" "static" type_name "." TOK_IDENTIFIER ";"  */
#line 675 "src/parser.y"
                                                                                        {(yyval.i)=createNode("single_static_import_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3453 "src/parser.tab.c"
    break;

  case 102: /* static_import_on_demand_declaration: "import" "static" type_name "." "*" ";"  */
#line 678 "src/parser.y"
                                                                                {(yyval.i)=createNode("static_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3459 "src/parser.tab.c"
    break;

  case 103: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration  */
#line 681 "src/parser.y"
                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3465 "src/parser.tab.c"
    break;

  case 104: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration  */
#line 682 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3471 "src/parser.tab.c"
    break;

  case 105: /* top_level_class_or_interface_declaration.multiopt: %empty  */
#line 683 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3477 "src/parser.tab.c"
    break;

  case 106: /* top_level_class_or_interface_declaration: class_declaration  */
#line 686 "src/parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3483 "src/parser.tab.c"
    break;

  case 107: /* top_level_class_or_interface_declaration: interface_declaration  */
#line 687 "src/parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3489 "src/parser.tab.c"
    break;

  case 108: /* top_level_class_or_interface_declaration: ";"  */
#line 688 "src/parser.y"
                                {(yyval.i)=createNode("top_level_class_or_interface_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3495 "src/parser.tab.c"
    break;

  case 109: /* module_declaration: annotation.multiopt open.opt "module" TOK_IDENTIFIER dot_ind.multiopt "{" module_directive.multiopt "}"  */
#line 691 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("module_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3501 "src/parser.tab.c"
    break;

  case 110: /* open.opt: "open"  */
#line 694 "src/parser.y"
                                {(yyval.i)=createNode("open.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3507 "src/parser.tab.c"
    break;

  case 111: /* open.opt: %empty  */
#line 695 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3513 "src/parser.tab.c"
    break;

  case 112: /* module_directive.multiopt: module_directive  */
#line 698 "src/parser.y"
                                        {(yyval.i)=createNode("module_directive.multiopt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3519 "src/parser.tab.c"
    break;

  case 113: /* module_directive.multiopt: module_directive.multiopt module_directive  */
#line 699 "src/parser.y"
                                                                {(yyval.i)=createNode("module_directive.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3525 "src/parser.tab.c"
    break;

  case 114: /* module_directive.multiopt: %empty  */
#line 700 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3531 "src/parser.tab.c"
    break;

  case 116: /* module_directive: "exports" package_name to_module_names.opt ";"  */
#line 704 "src/parser.y"
                                                                        {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3537 "src/parser.tab.c"
    break;

  case 117: /* module_directive: "opens" package_name to_module_names.opt ";"  */
#line 705 "src/parser.y"
                                                                        {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3543 "src/parser.tab.c"
    break;

  case 118: /* module_directive: "uses" type_name ";"  */
#line 706 "src/parser.y"
                                                {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3549 "src/parser.tab.c"
    break;

  case 119: /* module_directive: "provides" type_name "with" type_name com_type_name.multiopt ";"  */
#line 707 "src/parser.y"
                                                                                                {(yyval.i)=createNode("module_directive");addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3555 "src/parser.tab.c"
    break;

  case 120: /* com_type_name.multiopt: com_type_name.multiopt "," type_name  */
#line 710 "src/parser.y"
                                                                {(yyval.i)=createNode("com_type_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3561 "src/parser.tab.c"
    break;

  case 121: /* com_type_name.multiopt: %empty  */
#line 711 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3567 "src/parser.tab.c"
    break;

  case 122: /* to_module_names.opt: "to" module_name com_module_name.multiopt  */
#line 714 "src/parser.y"
                                                                {(yyval.i)=createNode("to_module_names.opt");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3573 "src/parser.tab.c"
    break;

  case 123: /* to_module_names.opt: to_module_names.opt "to" module_name com_module_name.multiopt  */
#line 715 "src/parser.y"
                                                                                        {(yyval.i)=createNode("to_module_names.opt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3579 "src/parser.tab.c"
    break;

  case 124: /* to_module_names.opt: %empty  */
#line 716 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3585 "src/parser.tab.c"
    break;

  case 125: /* com_module_name.multiopt: com_module_name.multiopt "," module_name  */
#line 718 "src/parser.y"
                                                                {(yyval.i)=createNode("com_module_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3591 "src/parser.tab.c"
    break;

  case 126: /* com_module_name.multiopt: %empty  */
#line 719 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3597 "src/parser.tab.c"
    break;

  case 127: /* class_declaration: normal_class_declaration  */
#line 724 "src/parser.y"
                                                {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3603 "src/parser.tab.c"
    break;

  case 128: /* class_declaration: enum_declaration  */
#line 725 "src/parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3609 "src/parser.tab.c"
    break;

  case 129: /* class_declaration: record_declaration  */
#line 726 "src/parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3615 "src/parser.tab.c"
    break;

  case 130: /* normal_class_declaration: modifier.multiopt "class" type_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body  */
#line 729 "src/parser.y"
                                                                                                                                                                {(yyval.i)=createNode("normal_class_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3621 "src/parser.tab.c"
    break;

  case 131: /* type_parameters.opt: type_parameters  */
#line 732 "src/parser.y"
                                        {(yyval.i)=createNode("type_parameters.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3627 "src/parser.tab.c"
    break;

  case 132: /* type_parameters.opt: %empty  */
#line 733 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3633 "src/parser.tab.c"
    break;

  case 133: /* class_extends.opt: class_extends  */
#line 736 "src/parser.y"
                                {(yyval.i)=createNode("class_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3639 "src/parser.tab.c"
    break;

  case 134: /* class_extends.opt: %empty  */
#line 737 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3645 "src/parser.tab.c"
    break;

  case 135: /* class_implements.opt: class_implements  */
#line 740 "src/parser.y"
                                        {(yyval.i)=createNode("class_implements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3651 "src/parser.tab.c"
    break;

  case 136: /* class_implements.opt: %empty  */
#line 741 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3657 "src/parser.tab.c"
    break;

  case 137: /* class_permits.opt: class_permits  */
#line 744 "src/parser.y"
                                {(yyval.i)=createNode("class_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3663 "src/parser.tab.c"
    break;

  case 138: /* class_permits.opt: %empty  */
#line 745 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3669 "src/parser.tab.c"
    break;

  case 139: /* type_parameters: "<" type_parameter_list ">"  */
#line 748 "src/parser.y"
                                                        {(yyval.i)=createNode("type_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3675 "src/parser.tab.c"
    break;

  case 140: /* type_parameter_list: type_parameter com_type_parameter.multiopt  */
#line 751 "src/parser.y"
                                                                {(yyval.i)=createNode("type_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3681 "src/parser.tab.c"
    break;

  case 141: /* com_type_parameter.multiopt: com_type_parameter.multiopt "," type_parameter  */
#line 754 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_type_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3687 "src/parser.tab.c"
    break;

  case 142: /* com_type_parameter.multiopt: %empty  */
#line 755 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3693 "src/parser.tab.c"
    break;

  case 143: /* class_extends: "extends" class_type  */
#line 758 "src/parser.y"
                                                {(yyval.i)=createNode("class_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3699 "src/parser.tab.c"
    break;

  case 144: /* class_implements: "implements" interface_type_list  */
#line 761 "src/parser.y"
                                                        {(yyval.i)=createNode("class_implements");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3705 "src/parser.tab.c"
    break;

  case 145: /* interface_type_list: interface_type com_interface_type.multiopt  */
#line 764 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3711 "src/parser.tab.c"
    break;

  case 146: /* com_interface_type.multiopt: com_interface_type.multiopt "," interface_type  */
#line 767 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_interface_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3717 "src/parser.tab.c"
    break;

  case 147: /* com_interface_type.multiopt: %empty  */
#line 768 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3723 "src/parser.tab.c"
    break;

  case 148: /* class_permits: "permits" type_name com_type_name.multiopt  */
#line 771 "src/parser.y"
                                                                {(yyval.i)=createNode("class_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3729 "src/parser.tab.c"
    break;

  case 149: /* class_body: "{" class_body_declaration.multiopt "}"  */
#line 774 "src/parser.y"
                                                                        {(yyval.i)=createNode("class_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3735 "src/parser.tab.c"
    break;

  case 150: /* class_body_declaration.multiopt: class_body_declaration.multiopt class_body_declaration  */
#line 777 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3741 "src/parser.tab.c"
    break;

  case 151: /* class_body_declaration.multiopt: %empty  */
#line 778 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3747 "src/parser.tab.c"
    break;

  case 152: /* class_body_declaration: class_member_declaration  */
#line 781 "src/parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3753 "src/parser.tab.c"
    break;

  case 153: /* class_body_declaration: instance_initializer  */
#line 782 "src/parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3759 "src/parser.tab.c"
    break;

  case 154: /* class_body_declaration: static_initializer  */
#line 783 "src/parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3765 "src/parser.tab.c"
    break;

  case 155: /* class_body_declaration: constructor_declaration  */
#line 784 "src/parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3771 "src/parser.tab.c"
    break;

  case 156: /* class_member_declaration: field_declaration  */
#line 787 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3777 "src/parser.tab.c"
    break;

  case 157: /* class_member_declaration: method_declaration  */
#line 788 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3783 "src/parser.tab.c"
    break;

  case 158: /* class_member_declaration: class_declaration  */
#line 789 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3789 "src/parser.tab.c"
    break;

  case 159: /* class_member_declaration: interface_declaration  */
#line 790 "src/parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3795 "src/parser.tab.c"
    break;

  case 160: /* field_declaration: modifier.multiopt unann_type variable_declarator_list ";"  */
#line 793 "src/parser.y"
                                                                                {(yyval.i)=createNode("field_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3801 "src/parser.tab.c"
    break;

  case 161: /* variable_declarator_list: variable_declarator com_variable_declarator.multiopt  */
#line 796 "src/parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3807 "src/parser.tab.c"
    break;

  case 162: /* com_variable_declarator.multiopt: com_variable_declarator.multiopt "," variable_declarator  */
#line 799 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_variable_declarator.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3813 "src/parser.tab.c"
    break;

  case 163: /* com_variable_declarator.multiopt: %empty  */
#line 800 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3819 "src/parser.tab.c"
    break;

  case 164: /* variable_declarator: variable_declarator_id eq_variable_initializer.opt  */
#line 803 "src/parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3825 "src/parser.tab.c"
    break;

  case 165: /* eq_variable_initializer.opt: "=" variable_initializer  */
#line 806 "src/parser.y"
                                                {(yyval.i)=createNode("eq_variable_initializer.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3831 "src/parser.tab.c"
    break;

  case 166: /* eq_variable_initializer.opt: %empty  */
#line 807 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3837 "src/parser.tab.c"
    break;

  case 167: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 810 "src/parser.y"
                                                {(yyval.i)=createNode("variable_declarator_id");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3843 "src/parser.tab.c"
    break;

  case 168: /* dims.opt: dims  */
#line 813 "src/parser.y"
                        {(yyval.i)=createNode("dims.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3849 "src/parser.tab.c"
    break;

  case 169: /* dims.opt: %empty  */
#line 814 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3855 "src/parser.tab.c"
    break;

  case 170: /* variable_initializer: expression  */
#line 817 "src/parser.y"
                                {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3861 "src/parser.tab.c"
    break;

  case 171: /* variable_initializer: array_initializer  */
#line 818 "src/parser.y"
                                        {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3867 "src/parser.tab.c"
    break;

  case 172: /* unann_type: unann_primitive_type  */
#line 821 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3873 "src/parser.tab.c"
    break;

  case 173: /* unann_type: unann_reference_type  */
#line 822 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3879 "src/parser.tab.c"
    break;

  case 174: /* unann_primitive_type: numeric_type  */
#line 825 "src/parser.y"
                                {(yyval.i)=createNode("unann_primitive_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3885 "src/parser.tab.c"
    break;

  case 175: /* unann_primitive_type: "boolean"  */
#line 826 "src/parser.y"
                                {(yyval.i)=createNode("unann_primitive_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3891 "src/parser.tab.c"
    break;

  case 176: /* unann_reference_type: unann_class_or_interface_type  */
#line 829 "src/parser.y"
                                                {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3897 "src/parser.tab.c"
    break;

  case 177: /* unann_reference_type: unann_type_variable  */
#line 830 "src/parser.y"
                                        {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3903 "src/parser.tab.c"
    break;

  case 178: /* unann_reference_type: unann_array_type  */
#line 831 "src/parser.y"
                                        {(yyval.i)=createNode("unann_reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3909 "src/parser.tab.c"
    break;

  case 179: /* unann_class_or_interface_type: unann_class_type  */
#line 834 "src/parser.y"
                                        {(yyval.i)=createNode("unann_class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3915 "src/parser.tab.c"
    break;

  case 180: /* unann_class_or_interface_type: unann_interface_type  */
#line 835 "src/parser.y"
                                        {(yyval.i)=createNode("unann_class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3921 "src/parser.tab.c"
    break;

  case 181: /* unann_class_type: type_IDENTIFIER type_arguments.opt  */
#line 838 "src/parser.y"
                                                        {(yyval.i)=createNode("unann_class_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3927 "src/parser.tab.c"
    break;

  case 182: /* unann_class_type: package_name "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 839 "src/parser.y"
                                                                                                {(yyval.i)=createNode("unann_class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3933 "src/parser.tab.c"
    break;

  case 183: /* unann_class_type: unann_class_or_interface_type "." annotation.multiopt type_IDENTIFIER type_arguments.opt  */
#line 840 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("unann_class_type");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3939 "src/parser.tab.c"
    break;

  case 184: /* type_arguments.opt: type_arguments  */
#line 843 "src/parser.y"
                                        {(yyval.i)=createNode("type_arguments.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3945 "src/parser.tab.c"
    break;

  case 185: /* type_arguments.opt: %empty  */
#line 844 "src/parser.y"
                                {(yyval.i)=-1;}
#line 3951 "src/parser.tab.c"
    break;

  case 186: /* unann_interface_type: unann_class_type  */
#line 847 "src/parser.y"
                                        {(yyval.i)=createNode("unann_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3957 "src/parser.tab.c"
    break;

  case 187: /* unann_type_variable: type_IDENTIFIER  */
#line 850 "src/parser.y"
                                        {(yyval.i)=createNode("unann_type_variable");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3963 "src/parser.tab.c"
    break;

  case 188: /* unann_array_type: unann_primitive_type dims  */
#line 853 "src/parser.y"
                                                {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3969 "src/parser.tab.c"
    break;

  case 189: /* unann_array_type: unann_class_or_interface_type dims  */
#line 854 "src/parser.y"
                                                        {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3975 "src/parser.tab.c"
    break;

  case 190: /* unann_array_type: unann_type_variable dims  */
#line 855 "src/parser.y"
                                                {(yyval.i)=createNode("unann_array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3981 "src/parser.tab.c"
    break;

  case 191: /* method_declaration: modifier.multiopt method_header method_body  */
#line 858 "src/parser.y"
                                                                {(yyval.i)=createNode("method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3987 "src/parser.tab.c"
    break;

  case 192: /* method_header: result method_declarator throws.opt  */
#line 861 "src/parser.y"
                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3993 "src/parser.tab.c"
    break;

  case 193: /* method_header: type_parameters annotation.multiopt result method_declarator throws.opt  */
#line 862 "src/parser.y"
                                                                                                {(yyval.i)=createNode("method_header");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3999 "src/parser.tab.c"
    break;

  case 194: /* throws.opt: throws  */
#line 865 "src/parser.y"
                                {(yyval.i)=createNode("throws.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4005 "src/parser.tab.c"
    break;

  case 195: /* throws.opt: %empty  */
#line 866 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4011 "src/parser.tab.c"
    break;

  case 196: /* result: unann_type  */
#line 869 "src/parser.y"
                                {(yyval.i)=createNode("result");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4017 "src/parser.tab.c"
    break;

  case 197: /* result: "void"  */
#line 870 "src/parser.y"
                                {(yyval.i)=createNode("result");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4023 "src/parser.tab.c"
    break;

  case 198: /* method_declarator: TOK_IDENTIFIER "(" receiver_parameter_com.opt formal_parameter_list.opt ")" dims.opt  */
#line 873 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("method_declarator");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4029 "src/parser.tab.c"
    break;

  case 199: /* receiver_parameter_com.opt: receiver_parameter ","  */
#line 876 "src/parser.y"
                                                {(yyval.i)=createNode("receiver_parameter_com.opt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4035 "src/parser.tab.c"
    break;

  case 200: /* receiver_parameter_com.opt: %empty  */
#line 877 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4041 "src/parser.tab.c"
    break;

  case 201: /* formal_parameter_list.opt: formal_parameter_list  */
#line 880 "src/parser.y"
                                        {(yyval.i)=createNode("formal_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4047 "src/parser.tab.c"
    break;

  case 202: /* formal_parameter_list.opt: %empty  */
#line 881 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4053 "src/parser.tab.c"
    break;

  case 203: /* receiver_parameter: annotation.multiopt unann_type IDENTIFIER_dot.opt "this"  */
#line 884 "src/parser.y"
                                                                                {(yyval.i)=createNode("receiver_parameter");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4059 "src/parser.tab.c"
    break;

  case 204: /* IDENTIFIER_dot.opt: TOK_IDENTIFIER "."  */
#line 887 "src/parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER_dot.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4065 "src/parser.tab.c"
    break;

  case 205: /* IDENTIFIER_dot.opt: %empty  */
#line 888 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4071 "src/parser.tab.c"
    break;

  case 206: /* formal_parameter_list: formal_parameter com_formal_parameter.multiopt  */
#line 891 "src/parser.y"
                                                                        {(yyval.i)=createNode("formal_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4077 "src/parser.tab.c"
    break;

  case 207: /* com_formal_parameter.multiopt: com_formal_parameter.multiopt "," formal_parameter  */
#line 894 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_formal_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4083 "src/parser.tab.c"
    break;

  case 208: /* com_formal_parameter.multiopt: %empty  */
#line 895 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4089 "src/parser.tab.c"
    break;

  case 209: /* formal_parameter: variable_modifier.multiopt unann_type variable_declarator_id  */
#line 898 "src/parser.y"
                                                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4095 "src/parser.tab.c"
    break;

  case 210: /* formal_parameter: variable_arity_parameter  */
#line 899 "src/parser.y"
                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4101 "src/parser.tab.c"
    break;

  case 211: /* variable_modifier.multiopt: variable_modifier.multiopt variable_modifier  */
#line 902 "src/parser.y"
                                                                {(yyval.i)=createNode("variable_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4107 "src/parser.tab.c"
    break;

  case 212: /* variable_modifier.multiopt: %empty  */
#line 903 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4113 "src/parser.tab.c"
    break;

  case 213: /* variable_arity_parameter: variable_modifier.multiopt unann_type annotation.multiopt "..." TOK_IDENTIFIER  */
#line 906 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("variable_arity_parameter");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4119 "src/parser.tab.c"
    break;

  case 214: /* variable_modifier: annotation  */
#line 909 "src/parser.y"
                                {(yyval.i)=createNode("variable_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4125 "src/parser.tab.c"
    break;

  case 215: /* variable_modifier: "final"  */
#line 910 "src/parser.y"
                                {(yyval.i)=createNode("variable_modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4131 "src/parser.tab.c"
    break;

  case 216: /* throws: "throws" exception_type_list  */
#line 913 "src/parser.y"
                                                        {(yyval.i)=createNode("throws");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4137 "src/parser.tab.c"
    break;

  case 217: /* exception_type_list: exception_type com_exception_type.multiopt  */
#line 916 "src/parser.y"
                                                                {(yyval.i)=createNode("exception_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4143 "src/parser.tab.c"
    break;

  case 218: /* com_exception_type.multiopt: com_exception_type.multiopt "," exception_type  */
#line 919 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_exception_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4149 "src/parser.tab.c"
    break;

  case 219: /* com_exception_type.multiopt: %empty  */
#line 920 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4155 "src/parser.tab.c"
    break;

  case 220: /* exception_type: class_type  */
#line 923 "src/parser.y"
                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4161 "src/parser.tab.c"
    break;

  case 221: /* exception_type: type_variable  */
#line 924 "src/parser.y"
                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4167 "src/parser.tab.c"
    break;

  case 222: /* method_body: block  */
#line 927 "src/parser.y"
                        {(yyval.i)=createNode("method_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4173 "src/parser.tab.c"
    break;

  case 223: /* method_body: ";"  */
#line 928 "src/parser.y"
                                {(yyval.i)=createNode("method_body");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4179 "src/parser.tab.c"
    break;

  case 224: /* instance_initializer: block  */
#line 931 "src/parser.y"
                        {(yyval.i)=createNode("instance_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4185 "src/parser.tab.c"
    break;

  case 225: /* static_initializer: "static" block  */
#line 934 "src/parser.y"
                                        {(yyval.i)=createNode("static_initializer");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4191 "src/parser.tab.c"
    break;

  case 226: /* constructor_declaration: modifier.multiopt constructor_declarator throws.opt constructor_body  */
#line 937 "src/parser.y"
                                                                                        {(yyval.i)=createNode("constructor_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4197 "src/parser.tab.c"
    break;

  case 227: /* constructor_declarator: type_parameters.opt simple_type_name "(" receiver_parameter_com.opt formal_parameter_list.opt ")"  */
#line 940 "src/parser.y"
                                                                                                                                {(yyval.i)=createNode("constructor_declarator");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4203 "src/parser.tab.c"
    break;

  case 228: /* simple_type_name: type_IDENTIFIER  */
#line 943 "src/parser.y"
                                        {(yyval.i)=createNode("simple_type_name");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4209 "src/parser.tab.c"
    break;

  case 229: /* constructor_body: "{" explicit_constructor_invocation.opt block_statements.opt "}"  */
#line 946 "src/parser.y"
                                                                                                {(yyval.i)=createNode("constructor_body");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4215 "src/parser.tab.c"
    break;

  case 230: /* explicit_constructor_invocation.opt: explicit_constructor_invocation  */
#line 949 "src/parser.y"
                                                        {(yyval.i)=createNode("explicit_constructor_invocation.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4221 "src/parser.tab.c"
    break;

  case 231: /* explicit_constructor_invocation.opt: %empty  */
#line 950 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4227 "src/parser.tab.c"
    break;

  case 232: /* block_statements.opt: block_statements  */
#line 953 "src/parser.y"
                                        {(yyval.i)=createNode("block_statements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4233 "src/parser.tab.c"
    break;

  case 233: /* block_statements.opt: %empty  */
#line 954 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4239 "src/parser.tab.c"
    break;

  case 234: /* explicit_constructor_invocation: type_arguments.opt "this" "(" argument_list.opt ")" ";"  */
#line 957 "src/parser.y"
                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4245 "src/parser.tab.c"
    break;

  case 235: /* explicit_constructor_invocation: type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 958 "src/parser.y"
                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4251 "src/parser.tab.c"
    break;

  case 236: /* explicit_constructor_invocation: expression_name "." type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 959 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4257 "src/parser.tab.c"
    break;

  case 237: /* explicit_constructor_invocation: primary "." type_arguments.opt "super" "(" argument_list.opt ")" ";"  */
#line 960 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("explicit_constructor_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4263 "src/parser.tab.c"
    break;

  case 238: /* argument_list.opt: argument_list  */
#line 963 "src/parser.y"
                                {(yyval.i)=createNode("argument_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4269 "src/parser.tab.c"
    break;

  case 239: /* argument_list.opt: %empty  */
#line 964 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4275 "src/parser.tab.c"
    break;

  case 240: /* enum_declaration: modifier.multiopt "enum" type_IDENTIFIER class_implements.opt enum_body  */
#line 967 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enum_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4281 "src/parser.tab.c"
    break;

  case 241: /* enum_body: "{" enum_constant_list.opt com.opt enum_body_declarations.opt "}"  */
#line 970 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enum_body");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4287 "src/parser.tab.c"
    break;

  case 242: /* com.opt: ","  */
#line 973 "src/parser.y"
                                {(yyval.i)=createNode("com.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4293 "src/parser.tab.c"
    break;

  case 243: /* com.opt: %empty  */
#line 974 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4299 "src/parser.tab.c"
    break;

  case 244: /* enum_body_declarations.opt: enum_body_declarations  */
#line 977 "src/parser.y"
                                                {(yyval.i)=createNode("enum_body_declarations.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4305 "src/parser.tab.c"
    break;

  case 245: /* enum_body_declarations.opt: %empty  */
#line 978 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4311 "src/parser.tab.c"
    break;

  case 246: /* enum_constant_list.opt: enum_constant_list  */
#line 981 "src/parser.y"
                                        {(yyval.i)=createNode("enum_constant_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4317 "src/parser.tab.c"
    break;

  case 247: /* enum_constant_list.opt: %empty  */
#line 982 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4323 "src/parser.tab.c"
    break;

  case 248: /* enum_constant_list: enum_constant com_enum_constant.multiopt  */
#line 985 "src/parser.y"
                                                                {(yyval.i)=createNode("enum_constant_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4329 "src/parser.tab.c"
    break;

  case 249: /* com_enum_constant.multiopt: com_enum_constant.multiopt "," enum_constant  */
#line 988 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_enum_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4335 "src/parser.tab.c"
    break;

  case 250: /* com_enum_constant.multiopt: %empty  */
#line 989 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4341 "src/parser.tab.c"
    break;

  case 251: /* enum_constant: enum_modifier.multiopt TOK_IDENTIFIER "[" "(" argument_list.opt ")" "]" class_body.opt  */
#line 992 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("enum_constant");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4347 "src/parser.tab.c"
    break;

  case 252: /* enum_modifier.multiopt: enum_modifier.multiopt enum_modifier  */
#line 995 "src/parser.y"
                                                        {(yyval.i)=createNode("enum_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4353 "src/parser.tab.c"
    break;

  case 253: /* enum_modifier.multiopt: %empty  */
#line 996 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4359 "src/parser.tab.c"
    break;

  case 254: /* class_body.opt: class_body  */
#line 999 "src/parser.y"
                                {(yyval.i)=createNode("class_body.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4365 "src/parser.tab.c"
    break;

  case 255: /* class_body.opt: %empty  */
#line 1000 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4371 "src/parser.tab.c"
    break;

  case 256: /* enum_modifier: annotation  */
#line 1003 "src/parser.y"
                                {(yyval.i)=createNode("enum_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4377 "src/parser.tab.c"
    break;

  case 257: /* enum_body_declarations: ";" class_body_declaration.multiopt  */
#line 1006 "src/parser.y"
                                                                {(yyval.i)=createNode("enum_body_declarations");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4383 "src/parser.tab.c"
    break;

  case 258: /* record_declaration: modifier.multiopt "record" type_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body  */
#line 1009 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("record_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4389 "src/parser.tab.c"
    break;

  case 259: /* record_header: "(" record_component_list.opt ")"  */
#line 1012 "src/parser.y"
                                                                {(yyval.i)=createNode("record_header");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4395 "src/parser.tab.c"
    break;

  case 260: /* record_component_list.opt: record_component_list  */
#line 1015 "src/parser.y"
                                        {(yyval.i)=createNode("record_component_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4401 "src/parser.tab.c"
    break;

  case 261: /* record_component_list.opt: %empty  */
#line 1016 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4407 "src/parser.tab.c"
    break;

  case 262: /* record_component_list: record_component com_record_component.multiopt  */
#line 1019 "src/parser.y"
                                                                        {(yyval.i)=createNode("record_component_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4413 "src/parser.tab.c"
    break;

  case 263: /* com_record_component.multiopt: com_record_component.multiopt "," record_component  */
#line 1022 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_record_component.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4419 "src/parser.tab.c"
    break;

  case 264: /* com_record_component.multiopt: %empty  */
#line 1023 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4425 "src/parser.tab.c"
    break;

  case 265: /* record_component: record_component_modifier.multiopt unann_type TOK_IDENTIFIER  */
#line 1027 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_component");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4431 "src/parser.tab.c"
    break;

  case 266: /* record_component: variable_arity_record_component  */
#line 1028 "src/parser.y"
                                                        {(yyval.i)=createNode("record_component");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4437 "src/parser.tab.c"
    break;

  case 267: /* record_component_modifier.multiopt: record_component_modifier.multiopt record_component_modifier  */
#line 1031 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_component_modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4443 "src/parser.tab.c"
    break;

  case 268: /* record_component_modifier.multiopt: %empty  */
#line 1032 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4449 "src/parser.tab.c"
    break;

  case 269: /* variable_arity_record_component: record_component_modifier.multiopt unann_type annotation.multiopt "..." TOK_IDENTIFIER  */
#line 1035 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("variable_arity_record_component");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4455 "src/parser.tab.c"
    break;

  case 270: /* record_component_modifier: annotation  */
#line 1038 "src/parser.y"
                                {(yyval.i)=createNode("record_component_modifier");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4461 "src/parser.tab.c"
    break;

  case 271: /* record_body: "{" record_body_declaration.multiopt "}"  */
#line 1041 "src/parser.y"
                                                                        {(yyval.i)=createNode("record_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4467 "src/parser.tab.c"
    break;

  case 272: /* record_body_declaration.multiopt: record_body_declaration.multiopt record_body_declaration  */
#line 1044 "src/parser.y"
                                                                                {(yyval.i)=createNode("record_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4473 "src/parser.tab.c"
    break;

  case 273: /* record_body_declaration.multiopt: %empty  */
#line 1045 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4479 "src/parser.tab.c"
    break;

  case 274: /* record_body_declaration: class_body_declaration  */
#line 1048 "src/parser.y"
                                                {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4485 "src/parser.tab.c"
    break;

  case 275: /* record_body_declaration: compact_constructor_declaration  */
#line 1049 "src/parser.y"
                                                        {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4491 "src/parser.tab.c"
    break;

  case 276: /* compact_constructor_declaration: modifier.multiopt simple_type_name constructor_body  */
#line 1052 "src/parser.y"
                                                                        {(yyval.i)=createNode("compact_constructor_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4497 "src/parser.tab.c"
    break;

  case 277: /* interface_declaration: normal_interface_declaration  */
#line 1058 "src/parser.y"
                                                {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4503 "src/parser.tab.c"
    break;

  case 278: /* interface_declaration: annotation_interface_declaration  */
#line 1059 "src/parser.y"
                                                        {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4509 "src/parser.tab.c"
    break;

  case 279: /* normal_interface_declaration: modifier.multiopt "interface" type_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body  */
#line 1062 "src/parser.y"
                                                                                                                                                        {(yyval.i)=createNode("normal_interface_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4515 "src/parser.tab.c"
    break;

  case 280: /* interface_extends.opt: interface_extends  */
#line 1065 "src/parser.y"
                                        {(yyval.i)=createNode("interface_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4521 "src/parser.tab.c"
    break;

  case 281: /* interface_extends.opt: %empty  */
#line 1066 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4527 "src/parser.tab.c"
    break;

  case 282: /* interface_permits.opt: interface_permits  */
#line 1069 "src/parser.y"
                                        {(yyval.i)=createNode("interface_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4533 "src/parser.tab.c"
    break;

  case 283: /* interface_permits.opt: %empty  */
#line 1070 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4539 "src/parser.tab.c"
    break;

  case 284: /* interface_extends: "extends" interface_type_list  */
#line 1073 "src/parser.y"
                                                        {(yyval.i)=createNode("interface_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4545 "src/parser.tab.c"
    break;

  case 285: /* interface_permits: "permits" type_name com_type_name.multiopt  */
#line 1076 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4551 "src/parser.tab.c"
    break;

  case 286: /* interface_body: "{" interface_member_declaration.multiopt "}"  */
#line 1079 "src/parser.y"
                                                                        {(yyval.i)=createNode("interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4557 "src/parser.tab.c"
    break;

  case 287: /* interface_member_declaration.multiopt: interface_member_declaration.multiopt interface_member_declaration  */
#line 1082 "src/parser.y"
                                                                                        {(yyval.i)=createNode("interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4563 "src/parser.tab.c"
    break;

  case 288: /* interface_member_declaration.multiopt: %empty  */
#line 1083 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4569 "src/parser.tab.c"
    break;

  case 289: /* interface_member_declaration: constant_declaration  */
#line 1086 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4575 "src/parser.tab.c"
    break;

  case 290: /* interface_member_declaration: interface_method_declaration  */
#line 1087 "src/parser.y"
                                                {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4581 "src/parser.tab.c"
    break;

  case 291: /* interface_member_declaration: class_declaration  */
#line 1088 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4587 "src/parser.tab.c"
    break;

  case 292: /* interface_member_declaration: interface_declaration  */
#line 1089 "src/parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4593 "src/parser.tab.c"
    break;

  case 293: /* interface_member_declaration: ";"  */
#line 1090 "src/parser.y"
                                {(yyval.i)=createNode("interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4599 "src/parser.tab.c"
    break;

  case 294: /* constant_declaration: modifier.multiopt unann_type variable_declarator_list ";"  */
#line 1093 "src/parser.y"
                                                                                {(yyval.i)=createNode("constant_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4605 "src/parser.tab.c"
    break;

  case 295: /* interface_method_declaration: modifier.multiopt method_header method_body  */
#line 1096 "src/parser.y"
                                                                {(yyval.i)=createNode("interface_method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4611 "src/parser.tab.c"
    break;

  case 296: /* annotation_interface_declaration: modifier.multiopt "@" "interface" type_IDENTIFIER annotation_interface_body  */
#line 1099 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("annotation_interface_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4617 "src/parser.tab.c"
    break;

  case 297: /* annotation_interface_body: "{" annotation_interface_member_declaration.multiopt "}"  */
#line 1102 "src/parser.y"
                                                                                        {(yyval.i)=createNode("annotation_interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4623 "src/parser.tab.c"
    break;

  case 298: /* annotation_interface_member_declaration.multiopt: annotation_interface_member_declaration.multiopt annotation_interface_member_declaration  */
#line 1105 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("annotation_interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4629 "src/parser.tab.c"
    break;

  case 299: /* annotation_interface_member_declaration.multiopt: %empty  */
#line 1106 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4635 "src/parser.tab.c"
    break;

  case 300: /* annotation_interface_member_declaration: annotation_interface_element_declaration  */
#line 1109 "src/parser.y"
                                                                {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4641 "src/parser.tab.c"
    break;

  case 301: /* annotation_interface_member_declaration: constant_declaration  */
#line 1110 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4647 "src/parser.tab.c"
    break;

  case 302: /* annotation_interface_member_declaration: class_declaration  */
#line 1111 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4653 "src/parser.tab.c"
    break;

  case 303: /* annotation_interface_member_declaration: interface_declaration  */
#line 1112 "src/parser.y"
                                        {(yyval.i)=createNode("annotation_interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4659 "src/parser.tab.c"
    break;

  case 304: /* annotation_interface_member_declaration: ";"  */
#line 1113 "src/parser.y"
                                {(yyval.i)=createNode("annotation_interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4665 "src/parser.tab.c"
    break;

  case 305: /* annotation_interface_element_declaration: modifier.multiopt unann_type TOK_IDENTIFIER "(" ")" dims.opt default_value.opt ";"  */
#line 1116 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("annotation_interface_element_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4671 "src/parser.tab.c"
    break;

  case 306: /* default_value.opt: default_value  */
#line 1119 "src/parser.y"
                                {(yyval.i)=createNode("default_value.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4677 "src/parser.tab.c"
    break;

  case 307: /* default_value.opt: %empty  */
#line 1120 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4683 "src/parser.tab.c"
    break;

  case 308: /* default_value: "default" element_value  */
#line 1123 "src/parser.y"
                                                {(yyval.i)=createNode("default_value");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4689 "src/parser.tab.c"
    break;

  case 309: /* annotation: normal_annotation  */
#line 1126 "src/parser.y"
                                        {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4695 "src/parser.tab.c"
    break;

  case 310: /* annotation: marker_annotation  */
#line 1127 "src/parser.y"
                                        {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4701 "src/parser.tab.c"
    break;

  case 311: /* annotation: single_element_annotation  */
#line 1128 "src/parser.y"
                                                {(yyval.i)=createNode("annotation");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4707 "src/parser.tab.c"
    break;

  case 312: /* normal_annotation: "@" type_name "(" element_value_pair_list.opt ")"  */
#line 1131 "src/parser.y"
                                                                                {(yyval.i)=createNode("normal_annotation");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4713 "src/parser.tab.c"
    break;

  case 313: /* element_value_pair_list.opt: element_value_pair_list  */
#line 1134 "src/parser.y"
                                                {(yyval.i)=createNode("element_value_pair_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4719 "src/parser.tab.c"
    break;

  case 314: /* element_value_pair_list.opt: %empty  */
#line 1135 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4725 "src/parser.tab.c"
    break;

  case 315: /* element_value_pair_list: element_value_pair com_element_value_pair.multiopt  */
#line 1138 "src/parser.y"
                                                                        {(yyval.i)=createNode("element_value_pair_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4731 "src/parser.tab.c"
    break;

  case 316: /* com_element_value_pair.multiopt: com_element_value_pair.multiopt "," element_value_pair  */
#line 1141 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_element_value_pair.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4737 "src/parser.tab.c"
    break;

  case 317: /* com_element_value_pair.multiopt: %empty  */
#line 1142 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4743 "src/parser.tab.c"
    break;

  case 318: /* element_value_pair: TOK_IDENTIFIER "=" element_value  */
#line 1145 "src/parser.y"
                                                        {(yyval.i)=createNode("element_value_pair");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4749 "src/parser.tab.c"
    break;

  case 319: /* element_value: conditional_expression  */
#line 1148 "src/parser.y"
                                                {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4755 "src/parser.tab.c"
    break;

  case 320: /* element_value: element_value_array_initializer  */
#line 1149 "src/parser.y"
                                                        {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4761 "src/parser.tab.c"
    break;

  case 321: /* element_value: annotation  */
#line 1150 "src/parser.y"
                                {(yyval.i)=createNode("element_value");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4767 "src/parser.tab.c"
    break;

  case 322: /* element_value_array_initializer: "{" element_valueList.opt com.opt "}"  */
#line 1153 "src/parser.y"
                                                                {(yyval.i)=createNode("element_value_array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4773 "src/parser.tab.c"
    break;

  case 323: /* element_valueList.opt: element_valueList  */
#line 1156 "src/parser.y"
                                        {(yyval.i)=createNode("element_valueList.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4779 "src/parser.tab.c"
    break;

  case 324: /* element_valueList.opt: %empty  */
#line 1157 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4785 "src/parser.tab.c"
    break;

  case 325: /* element_valueList: element_value com_element_value.multiopt  */
#line 1160 "src/parser.y"
                                                                {(yyval.i)=createNode("element_valueList");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4791 "src/parser.tab.c"
    break;

  case 326: /* com_element_value.multiopt: com_element_value.multiopt "," element_value  */
#line 1163 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_element_value.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4797 "src/parser.tab.c"
    break;

  case 327: /* com_element_value.multiopt: %empty  */
#line 1164 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4803 "src/parser.tab.c"
    break;

  case 328: /* marker_annotation: "@" type_name  */
#line 1167 "src/parser.y"
                                        {(yyval.i)=createNode("marker_annotation");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4809 "src/parser.tab.c"
    break;

  case 329: /* single_element_annotation: "@" type_name "(" element_value ")"  */
#line 1170 "src/parser.y"
                                                                {(yyval.i)=createNode("single_element_annotation");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4815 "src/parser.tab.c"
    break;

  case 330: /* annotation.multiopt: annotation.multiopt annotation  */
#line 1173 "src/parser.y"
                                                        {(yyval.i)=createNode("annotation.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4821 "src/parser.tab.c"
    break;

  case 331: /* annotation.multiopt: %empty  */
#line 1174 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4827 "src/parser.tab.c"
    break;

  case 332: /* array_initializer: "{" variable_initializer_list.opt com.opt "}"  */
#line 1178 "src/parser.y"
                                                                        {(yyval.i)=createNode("array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4833 "src/parser.tab.c"
    break;

  case 333: /* variable_initializer_list.opt: variable_initializer_list  */
#line 1181 "src/parser.y"
                                                {(yyval.i)=createNode("variable_initializer_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4839 "src/parser.tab.c"
    break;

  case 334: /* variable_initializer_list.opt: %empty  */
#line 1182 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4845 "src/parser.tab.c"
    break;

  case 335: /* variable_initializer_list: variable_initializer com_variable_initializer.multiopt  */
#line 1185 "src/parser.y"
                                                                                {(yyval.i)=createNode("variable_initializer_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4851 "src/parser.tab.c"
    break;

  case 336: /* com_variable_initializer.multiopt: com_variable_initializer.multiopt "," variable_initializer  */
#line 1188 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_variable_initializer.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4857 "src/parser.tab.c"
    break;

  case 337: /* com_variable_initializer.multiopt: %empty  */
#line 1189 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4863 "src/parser.tab.c"
    break;

  case 338: /* block: "{" block_statements.opt "}"  */
#line 1194 "src/parser.y"
                                                        {(yyval.i)=createNode("block");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4869 "src/parser.tab.c"
    break;

  case 339: /* block_statements: block_statement block_statement.multiopt  */
#line 1197 "src/parser.y"
                                                                {(yyval.i)=createNode("block_statements");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4875 "src/parser.tab.c"
    break;

  case 340: /* block_statement.multiopt: block_statement.multiopt block_statement  */
#line 1200 "src/parser.y"
                                                                {(yyval.i)=createNode("block_statement.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4881 "src/parser.tab.c"
    break;

  case 341: /* block_statement.multiopt: %empty  */
#line 1201 "src/parser.y"
                                {(yyval.i)=-1;}
#line 4887 "src/parser.tab.c"
    break;

  case 342: /* block_statement: local_class_or_interface_declaration  */
#line 1204 "src/parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4893 "src/parser.tab.c"
    break;

  case 343: /* block_statement: local_variable_declaration_statement  */
#line 1205 "src/parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4899 "src/parser.tab.c"
    break;

  case 344: /* block_statement: statement  */
#line 1206 "src/parser.y"
                                {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4905 "src/parser.tab.c"
    break;

  case 345: /* local_class_or_interface_declaration: class_declaration  */
#line 1209 "src/parser.y"
                                        {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4911 "src/parser.tab.c"
    break;

  case 346: /* local_class_or_interface_declaration: normal_interface_declaration  */
#line 1210 "src/parser.y"
                                                {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4917 "src/parser.tab.c"
    break;

  case 347: /* local_variable_declaration_statement: local_variable_declaration ";"  */
#line 1213 "src/parser.y"
                                                        {(yyval.i)=createNode("local_variable_declaration_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4923 "src/parser.tab.c"
    break;

  case 348: /* local_variable_declaration: variable_modifier.multiopt local_variable_type variable_declarator_list  */
#line 1216 "src/parser.y"
                                                                                                {(yyval.i)=createNode("local_variable_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4929 "src/parser.tab.c"
    break;

  case 349: /* local_variable_type: unann_type  */
#line 1219 "src/parser.y"
                                {(yyval.i)=createNode("local_variable_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4935 "src/parser.tab.c"
    break;

  case 350: /* local_variable_type: "var"  */
#line 1220 "src/parser.y"
                                {(yyval.i)=createNode("local_variable_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4941 "src/parser.tab.c"
    break;

  case 351: /* statement: statement_without_trailing_substatement  */
#line 1223 "src/parser.y"
                                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4947 "src/parser.tab.c"
    break;

  case 352: /* statement: labeled_statement  */
#line 1224 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4953 "src/parser.tab.c"
    break;

  case 353: /* statement: if_then_statement  */
#line 1225 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4959 "src/parser.tab.c"
    break;

  case 354: /* statement: if_then_else_statement  */
#line 1226 "src/parser.y"
                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4965 "src/parser.tab.c"
    break;

  case 355: /* statement: while_statement  */
#line 1227 "src/parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4971 "src/parser.tab.c"
    break;

  case 356: /* statement: for_statement  */
#line 1228 "src/parser.y"
                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4977 "src/parser.tab.c"
    break;

  case 357: /* statement_no_short_if: statement_without_trailing_substatement  */
#line 1231 "src/parser.y"
                                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4983 "src/parser.tab.c"
    break;

  case 358: /* statement_no_short_if: labeled_statement_no_short_if  */
#line 1232 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4989 "src/parser.tab.c"
    break;

  case 359: /* statement_no_short_if: if_then_else_statement_no_short_if  */
#line 1233 "src/parser.y"
                                                        {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4995 "src/parser.tab.c"
    break;

  case 360: /* statement_no_short_if: while_statement_no_short_if  */
#line 1234 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5001 "src/parser.tab.c"
    break;

  case 361: /* statement_no_short_if: for_statement_no_short_if  */
#line 1235 "src/parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5007 "src/parser.tab.c"
    break;

  case 362: /* statement_without_trailing_substatement: block  */
#line 1238 "src/parser.y"
                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5013 "src/parser.tab.c"
    break;

  case 363: /* statement_without_trailing_substatement: empty_statement  */
#line 1239 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5019 "src/parser.tab.c"
    break;

  case 364: /* statement_without_trailing_substatement: expression_statement  */
#line 1240 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5025 "src/parser.tab.c"
    break;

  case 365: /* statement_without_trailing_substatement: assert_statement  */
#line 1241 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5031 "src/parser.tab.c"
    break;

  case 366: /* statement_without_trailing_substatement: switch_statement  */
#line 1242 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5037 "src/parser.tab.c"
    break;

  case 367: /* statement_without_trailing_substatement: do_statement  */
#line 1243 "src/parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5043 "src/parser.tab.c"
    break;

  case 368: /* statement_without_trailing_substatement: break_statement  */
#line 1244 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5049 "src/parser.tab.c"
    break;

  case 369: /* statement_without_trailing_substatement: continue_statement  */
#line 1245 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5055 "src/parser.tab.c"
    break;

  case 370: /* statement_without_trailing_substatement: return_statement  */
#line 1246 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5061 "src/parser.tab.c"
    break;

  case 371: /* statement_without_trailing_substatement: synchronized_statement  */
#line 1247 "src/parser.y"
                                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5067 "src/parser.tab.c"
    break;

  case 372: /* statement_without_trailing_substatement: throw_statement  */
#line 1248 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5073 "src/parser.tab.c"
    break;

  case 373: /* statement_without_trailing_substatement: try_statement  */
#line 1249 "src/parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5079 "src/parser.tab.c"
    break;

  case 374: /* statement_without_trailing_substatement: yield_statement  */
#line 1250 "src/parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5085 "src/parser.tab.c"
    break;

  case 375: /* empty_statement: ";"  */
#line 1253 "src/parser.y"
                                {(yyval.i)=createNode("empty_statement");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5091 "src/parser.tab.c"
    break;

  case 376: /* labeled_statement: TOK_IDENTIFIER ":" statement  */
#line 1256 "src/parser.y"
                                                        {(yyval.i)=createNode("labeled_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5097 "src/parser.tab.c"
    break;

  case 377: /* labeled_statement_no_short_if: TOK_IDENTIFIER ":" statement_no_short_if  */
#line 1259 "src/parser.y"
                                                                {(yyval.i)=createNode("labeled_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5103 "src/parser.tab.c"
    break;

  case 378: /* expression_statement: statement_expression ";"  */
#line 1262 "src/parser.y"
                                                {(yyval.i)=createNode("expression_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5109 "src/parser.tab.c"
    break;

  case 379: /* statement_expression: assignment  */
#line 1265 "src/parser.y"
                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5115 "src/parser.tab.c"
    break;

  case 380: /* statement_expression: pre_increment_expression  */
#line 1266 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5121 "src/parser.tab.c"
    break;

  case 381: /* statement_expression: pre_decrement_expression  */
#line 1267 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5127 "src/parser.tab.c"
    break;

  case 382: /* statement_expression: post_increment_expression  */
#line 1268 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5133 "src/parser.tab.c"
    break;

  case 383: /* statement_expression: post_decrement_expression  */
#line 1269 "src/parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5139 "src/parser.tab.c"
    break;

  case 384: /* statement_expression: method_invocation  */
#line 1270 "src/parser.y"
                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5145 "src/parser.tab.c"
    break;

  case 385: /* statement_expression: class_instance_creation_expression  */
#line 1271 "src/parser.y"
                                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5151 "src/parser.tab.c"
    break;

  case 386: /* if_then_statement: "if" "(" expression ")" statement  */
#line 1274 "src/parser.y"
                                                                {(yyval.i)=createNode("if_then_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5157 "src/parser.tab.c"
    break;

  case 387: /* if_then_else_statement: "if" "(" expression ")" statement_no_short_if "else" statement  */
#line 1277 "src/parser.y"
                                                                                                {(yyval.i)=createNode("if_then_else_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5163 "src/parser.tab.c"
    break;

  case 388: /* if_then_else_statement_no_short_if: "if" "(" expression ")" statement_no_short_if "else" statement_no_short_if  */
#line 1280 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("if_then_else_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5169 "src/parser.tab.c"
    break;

  case 389: /* assert_statement: "assert" expression ";"  */
#line 1283 "src/parser.y"
                                                {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5175 "src/parser.tab.c"
    break;

  case 390: /* assert_statement: "assert" expression ":" expression ";"  */
#line 1284 "src/parser.y"
                                                                        {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5181 "src/parser.tab.c"
    break;

  case 391: /* switch_statement: "switch" "(" expression ")" switch_block  */
#line 1287 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5187 "src/parser.tab.c"
    break;

  case 392: /* switch_block: "{" switch_rule switch_rule.multiopt ";"  */
#line 1290 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5193 "src/parser.tab.c"
    break;

  case 393: /* switch_block: "{" switch_block_statement_group.multiopt switch_label_col.multiopt "}"  */
#line 1291 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5199 "src/parser.tab.c"
    break;

  case 394: /* switch_rule.multiopt: switch_rule.multiopt switch_rule  */
#line 1294 "src/parser.y"
                                                        {(yyval.i)=createNode("switch_rule.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5205 "src/parser.tab.c"
    break;

  case 395: /* switch_rule.multiopt: %empty  */
#line 1295 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5211 "src/parser.tab.c"
    break;

  case 396: /* switch_block_statement_group.multiopt: switch_block_statement_group.multiopt switch_block_statement_group  */
#line 1298 "src/parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5217 "src/parser.tab.c"
    break;

  case 397: /* switch_block_statement_group.multiopt: %empty  */
#line 1299 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5223 "src/parser.tab.c"
    break;

  case 398: /* switch_label_col.multiopt: switch_label_col.multiopt switch_label ":"  */
#line 1302 "src/parser.y"
                                                                {(yyval.i)=createNode("switch_label_col.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5229 "src/parser.tab.c"
    break;

  case 399: /* switch_label_col.multiopt: %empty  */
#line 1303 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5235 "src/parser.tab.c"
    break;

  case 400: /* switch_rule: switch_label "->" expression ";"  */
#line 1306 "src/parser.y"
                                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5241 "src/parser.tab.c"
    break;

  case 401: /* switch_rule: switch_label "->" block  */
#line 1307 "src/parser.y"
                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5247 "src/parser.tab.c"
    break;

  case 402: /* switch_rule: switch_label "->" throw_statement  */
#line 1308 "src/parser.y"
                                                        {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5253 "src/parser.tab.c"
    break;

  case 403: /* switch_block_statement_group: switch_label ":" switch_label_col.multiopt block_statements  */
#line 1311 "src/parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5259 "src/parser.tab.c"
    break;

  case 404: /* switch_label: "case" case_constant com_case_constant.multiopt  */
#line 1314 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5265 "src/parser.tab.c"
    break;

  case 405: /* switch_label: "default"  */
#line 1315 "src/parser.y"
                                {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5271 "src/parser.tab.c"
    break;

  case 406: /* com_case_constant.multiopt: com_case_constant.multiopt "," case_constant  */
#line 1318 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_case_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5277 "src/parser.tab.c"
    break;

  case 407: /* com_case_constant.multiopt: %empty  */
#line 1319 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5283 "src/parser.tab.c"
    break;

  case 408: /* case_constant: conditional_expression  */
#line 1322 "src/parser.y"
                                                {(yyval.i)=createNode("case_constant");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5289 "src/parser.tab.c"
    break;

  case 409: /* while_statement: "while" "(" expression ")" statement  */
#line 1325 "src/parser.y"
                                                                {(yyval.i)=createNode("while_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5295 "src/parser.tab.c"
    break;

  case 410: /* while_statement_no_short_if: "while" "(" expression ")" statement_no_short_if  */
#line 1328 "src/parser.y"
                                                                                {(yyval.i)=createNode("while_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5301 "src/parser.tab.c"
    break;

  case 411: /* do_statement: "do" statement "while" "(" expression ")" ";"  */
#line 1331 "src/parser.y"
                                                                                {(yyval.i)=createNode("do_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5307 "src/parser.tab.c"
    break;

  case 412: /* for_statement: basic_for_statement  */
#line 1334 "src/parser.y"
                                        {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5313 "src/parser.tab.c"
    break;

  case 413: /* for_statement: enhanced_for_statement  */
#line 1335 "src/parser.y"
                                                {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5319 "src/parser.tab.c"
    break;

  case 414: /* for_statement_no_short_if: basic_for_statement_no_short_if  */
#line 1338 "src/parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5325 "src/parser.tab.c"
    break;

  case 415: /* for_statement_no_short_if: enhanced_for_statement_no_short_if  */
#line 1339 "src/parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5331 "src/parser.tab.c"
    break;

  case 416: /* basic_for_statement: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement  */
#line 1342 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("basic_for_statement");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5337 "src/parser.tab.c"
    break;

  case 417: /* for_init.opt: for_init  */
#line 1345 "src/parser.y"
                                {(yyval.i)=createNode("for_init.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5343 "src/parser.tab.c"
    break;

  case 418: /* for_init.opt: %empty  */
#line 1346 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5349 "src/parser.tab.c"
    break;

  case 419: /* expression.opt: expression  */
#line 1349 "src/parser.y"
                                {(yyval.i)=createNode("expression.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5355 "src/parser.tab.c"
    break;

  case 420: /* expression.opt: %empty  */
#line 1350 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5361 "src/parser.tab.c"
    break;

  case 421: /* for_update.opt: for_update  */
#line 1353 "src/parser.y"
                                {(yyval.i)=createNode("for_update.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5367 "src/parser.tab.c"
    break;

  case 422: /* for_update.opt: %empty  */
#line 1354 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5373 "src/parser.tab.c"
    break;

  case 423: /* basic_for_statement_no_short_if: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement_no_short_if  */
#line 1357 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("basic_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5379 "src/parser.tab.c"
    break;

  case 424: /* for_init: statement_expression_list  */
#line 1360 "src/parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5385 "src/parser.tab.c"
    break;

  case 425: /* for_init: local_variable_declaration  */
#line 1361 "src/parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5391 "src/parser.tab.c"
    break;

  case 426: /* for_update: statement_expression_list  */
#line 1364 "src/parser.y"
                                                {(yyval.i)=createNode("for_update");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5397 "src/parser.tab.c"
    break;

  case 427: /* statement_expression_list: statement_expression com_statement_expression.multiopt  */
#line 1367 "src/parser.y"
                                                                                {(yyval.i)=createNode("statement_expression_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5403 "src/parser.tab.c"
    break;

  case 428: /* com_statement_expression.multiopt: com_statement_expression.multiopt "," statement_expression  */
#line 1370 "src/parser.y"
                                                                                {(yyval.i)=createNode("com_statement_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5409 "src/parser.tab.c"
    break;

  case 429: /* com_statement_expression.multiopt: %empty  */
#line 1371 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5415 "src/parser.tab.c"
    break;

  case 430: /* enhanced_for_statement: "for" "(" local_variable_declaration ":" expression ")" statement  */
#line 1374 "src/parser.y"
                                                                                                {(yyval.i)=createNode("enhanced_for_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5421 "src/parser.tab.c"
    break;

  case 431: /* enhanced_for_statement_no_short_if: "for" "(" local_variable_declaration ":" expression ")" statement_no_short_if  */
#line 1377 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("enhanced_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5427 "src/parser.tab.c"
    break;

  case 432: /* break_statement: "break" IDENTIFIER.opt ";"  */
#line 1380 "src/parser.y"
                                                        {(yyval.i)=createNode("break_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5433 "src/parser.tab.c"
    break;

  case 433: /* IDENTIFIER.opt: TOK_IDENTIFIER  */
#line 1383 "src/parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5439 "src/parser.tab.c"
    break;

  case 434: /* IDENTIFIER.opt: %empty  */
#line 1384 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5445 "src/parser.tab.c"
    break;

  case 435: /* yield_statement: "yield" expression ";"  */
#line 1387 "src/parser.y"
                                                {(yyval.i)=createNode("yield_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5451 "src/parser.tab.c"
    break;

  case 436: /* continue_statement: "continue" IDENTIFIER.opt ";"  */
#line 1390 "src/parser.y"
                                                        {(yyval.i)=createNode("continue_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5457 "src/parser.tab.c"
    break;

  case 437: /* return_statement: "return" expression.opt ";"  */
#line 1393 "src/parser.y"
                                                        {(yyval.i)=createNode("return_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5463 "src/parser.tab.c"
    break;

  case 438: /* throw_statement: "throw" expression ";"  */
#line 1396 "src/parser.y"
                                                {(yyval.i)=createNode("throw_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5469 "src/parser.tab.c"
    break;

  case 439: /* synchronized_statement: "synchronized" "(" expression ")" block  */
#line 1399 "src/parser.y"
                                                                        {(yyval.i)=createNode("synchronized_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5475 "src/parser.tab.c"
    break;

  case 440: /* try_statement: "try" block catches  */
#line 1402 "src/parser.y"
                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5481 "src/parser.tab.c"
    break;

  case 441: /* try_statement: "try" block catches.opt finally  */
#line 1403 "src/parser.y"
                                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5487 "src/parser.tab.c"
    break;

  case 442: /* try_statement: try_with_resources_statement  */
#line 1404 "src/parser.y"
                                                {(yyval.i)=createNode("try_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5493 "src/parser.tab.c"
    break;

  case 443: /* catches.opt: catches  */
#line 1407 "src/parser.y"
                                {(yyval.i)=createNode("catches.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5499 "src/parser.tab.c"
    break;

  case 444: /* catches.opt: %empty  */
#line 1408 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5505 "src/parser.tab.c"
    break;

  case 445: /* catches: catch_clause catch_clause.multiopt  */
#line 1411 "src/parser.y"
                                                        {(yyval.i)=createNode("catches");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5511 "src/parser.tab.c"
    break;

  case 446: /* catch_clause.multiopt: catch_clause.multiopt catch_clause  */
#line 1414 "src/parser.y"
                                                        {(yyval.i)=createNode("catch_clause.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5517 "src/parser.tab.c"
    break;

  case 447: /* catch_clause.multiopt: %empty  */
#line 1415 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5523 "src/parser.tab.c"
    break;

  case 448: /* catch_clause: "catch" "(" catch_formal_parameter ")" block  */
#line 1418 "src/parser.y"
                                                                        {(yyval.i)=createNode("catch_clause");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5529 "src/parser.tab.c"
    break;

  case 449: /* catch_formal_parameter: variable_modifier.multiopt catch_type variable_declarator_id  */
#line 1421 "src/parser.y"
                                                                                {(yyval.i)=createNode("catch_formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5535 "src/parser.tab.c"
    break;

  case 450: /* catch_type: unann_class_type vt_class_type.multiopt  */
#line 1424 "src/parser.y"
                                                                {(yyval.i)=createNode("catch_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5541 "src/parser.tab.c"
    break;

  case 451: /* vt_class_type.multiopt: vt_class_type.multiopt "|" class_type  */
#line 1427 "src/parser.y"
                                                                {(yyval.i)=createNode("vt_class_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5547 "src/parser.tab.c"
    break;

  case 452: /* vt_class_type.multiopt: %empty  */
#line 1428 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5553 "src/parser.tab.c"
    break;

  case 453: /* finally: "finally" block  */
#line 1431 "src/parser.y"
                                        {(yyval.i)=createNode("finally");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5559 "src/parser.tab.c"
    break;

  case 454: /* try_with_resources_statement: "try" resource_specification block catches.opt finally.opt  */
#line 1434 "src/parser.y"
                                                                                {(yyval.i)=createNode("try_with_resources_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5565 "src/parser.tab.c"
    break;

  case 455: /* finally.opt: finally  */
#line 1437 "src/parser.y"
                                {(yyval.i)=createNode("finally.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5571 "src/parser.tab.c"
    break;

  case 456: /* finally.opt: %empty  */
#line 1438 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5577 "src/parser.tab.c"
    break;

  case 457: /* resource_specification: "(" resource_list semcol.opt ")"  */
#line 1441 "src/parser.y"
                                                                {(yyval.i)=createNode("resource_specification");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5583 "src/parser.tab.c"
    break;

  case 458: /* semcol.opt: ";"  */
#line 1444 "src/parser.y"
                                {(yyval.i)=createNode("semcol.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5589 "src/parser.tab.c"
    break;

  case 459: /* semcol.opt: %empty  */
#line 1445 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5595 "src/parser.tab.c"
    break;

  case 460: /* resource_list: resource semcol_resource.multiopt  */
#line 1448 "src/parser.y"
                                                        {(yyval.i)=createNode("resource_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5601 "src/parser.tab.c"
    break;

  case 461: /* semcol_resource.multiopt: semcol_resource.multiopt ";" resource  */
#line 1451 "src/parser.y"
                                                                {(yyval.i)=createNode("semcol_resource.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5607 "src/parser.tab.c"
    break;

  case 462: /* semcol_resource.multiopt: %empty  */
#line 1452 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5613 "src/parser.tab.c"
    break;

  case 463: /* resource: local_variable_declaration  */
#line 1455 "src/parser.y"
                                                {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5619 "src/parser.tab.c"
    break;

  case 464: /* resource: variable_access  */
#line 1456 "src/parser.y"
                                        {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5625 "src/parser.tab.c"
    break;

  case 465: /* variable_access: expression_name  */
#line 1459 "src/parser.y"
                                        {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5631 "src/parser.tab.c"
    break;

  case 466: /* variable_access: field_access  */
#line 1460 "src/parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5637 "src/parser.tab.c"
    break;

  case 467: /* pattern: type_pattern  */
#line 1463 "src/parser.y"
                                {(yyval.i)=createNode("pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5643 "src/parser.tab.c"
    break;

  case 468: /* type_pattern: local_variable_declaration  */
#line 1466 "src/parser.y"
                                                {(yyval.i)=createNode("type_pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5649 "src/parser.tab.c"
    break;

  case 469: /* primary: primary_no_new_array  */
#line 1471 "src/parser.y"
                                        {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5655 "src/parser.tab.c"
    break;

  case 470: /* primary: array_creation_expression  */
#line 1472 "src/parser.y"
                                                {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5661 "src/parser.tab.c"
    break;

  case 471: /* primary_no_new_array: TOK_LITERAL  */
#line 1475 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5667 "src/parser.tab.c"
    break;

  case 472: /* primary_no_new_array: class_literal  */
#line 1476 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5673 "src/parser.tab.c"
    break;

  case 473: /* primary_no_new_array: "this"  */
#line 1477 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5679 "src/parser.tab.c"
    break;

  case 474: /* primary_no_new_array: type_name "." "this"  */
#line 1478 "src/parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5685 "src/parser.tab.c"
    break;

  case 475: /* primary_no_new_array: "(" expression ")"  */
#line 1479 "src/parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5691 "src/parser.tab.c"
    break;

  case 476: /* primary_no_new_array: class_instance_creation_expression  */
#line 1480 "src/parser.y"
                                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5697 "src/parser.tab.c"
    break;

  case 477: /* primary_no_new_array: field_access  */
#line 1481 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5703 "src/parser.tab.c"
    break;

  case 478: /* primary_no_new_array: array_access  */
#line 1482 "src/parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5709 "src/parser.tab.c"
    break;

  case 479: /* primary_no_new_array: method_invocation  */
#line 1483 "src/parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5715 "src/parser.tab.c"
    break;

  case 480: /* primary_no_new_array: method_reference  */
#line 1484 "src/parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5721 "src/parser.tab.c"
    break;

  case 481: /* class_literal: type_name dm.multiopt "." "class"  */
#line 1487 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5727 "src/parser.tab.c"
    break;

  case 482: /* class_literal: numeric_type dm.multiopt "." "class"  */
#line 1488 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5733 "src/parser.tab.c"
    break;

  case 483: /* class_literal: "boolean" dm.multiopt "." "class"  */
#line 1489 "src/parser.y"
                                                                {(yyval.i)=createNode("class_literal");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5739 "src/parser.tab.c"
    break;

  case 484: /* class_literal: "void" "." "class"  */
#line 1490 "src/parser.y"
                                                {(yyval.i)=createNode("class_literal");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5745 "src/parser.tab.c"
    break;

  case 485: /* dm.multiopt: dm.multiopt "[" "]"  */
#line 1493 "src/parser.y"
                                                {(yyval.i)=createNode("dm.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5751 "src/parser.tab.c"
    break;

  case 486: /* dm.multiopt: %empty  */
#line 1494 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5757 "src/parser.tab.c"
    break;

  case 487: /* class_instance_creation_expression: unqualified_class_instance_creation_expression  */
#line 1497 "src/parser.y"
                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5763 "src/parser.tab.c"
    break;

  case 488: /* class_instance_creation_expression: expression_name "." unqualified_class_instance_creation_expression  */
#line 1498 "src/parser.y"
                                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5769 "src/parser.tab.c"
    break;

  case 489: /* class_instance_creation_expression: primary "." unqualified_class_instance_creation_expression  */
#line 1499 "src/parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5775 "src/parser.tab.c"
    break;

  case 490: /* unqualified_class_instance_creation_expression: "new" type_arguments.opt class_or_interface_type_to_instantiate "(" argument_list.opt ")" class_body.opt  */
#line 1502 "src/parser.y"
                                                                                                                                        {(yyval.i)=createNode("unqualified_class_instance_creation_expression");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5781 "src/parser.tab.c"
    break;

  case 491: /* class_or_interface_type_to_instantiate: annotation.multiopt TOK_IDENTIFIER dot_annotation.multiopt_IDENTIFIER.multiopt type_arguments_or_diamond.opt  */
#line 1505 "src/parser.y"
                                                                                                                                {(yyval.i)=createNode("class_or_interface_type_to_instantiate");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5787 "src/parser.tab.c"
    break;

  case 492: /* dot_annotation.multiopt_IDENTIFIER.multiopt: dot_annotation.multiopt_IDENTIFIER.multiopt "." annotation.multiopt TOK_IDENTIFIER  */
#line 1508 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("dot_annotation.multiopt_IDENTIFIER.multiopt");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5793 "src/parser.tab.c"
    break;

  case 493: /* dot_annotation.multiopt_IDENTIFIER.multiopt: %empty  */
#line 1509 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5799 "src/parser.tab.c"
    break;

  case 494: /* type_arguments_or_diamond.opt: type_arguments_or_diamond  */
#line 1512 "src/parser.y"
                                                {(yyval.i)=createNode("type_arguments_or_diamond.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5805 "src/parser.tab.c"
    break;

  case 495: /* type_arguments_or_diamond.opt: %empty  */
#line 1513 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5811 "src/parser.tab.c"
    break;

  case 496: /* type_arguments_or_diamond: type_arguments  */
#line 1516 "src/parser.y"
                                        {(yyval.i)=createNode("type_arguments_or_diamond");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5817 "src/parser.tab.c"
    break;

  case 497: /* field_access: primary "." TOK_IDENTIFIER  */
#line 1519 "src/parser.y"
                                                {(yyval.i)=createNode("field_access");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5823 "src/parser.tab.c"
    break;

  case 498: /* field_access: "super" "." TOK_IDENTIFIER  */
#line 1520 "src/parser.y"
                                                        {(yyval.i)=createNode("field_access");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5829 "src/parser.tab.c"
    break;

  case 499: /* field_access: type_name "." "super" "." TOK_IDENTIFIER  */
#line 1521 "src/parser.y"
                                                                        {(yyval.i)=createNode("field_access");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5835 "src/parser.tab.c"
    break;

  case 500: /* array_access: expression_name "[" expression "]"  */
#line 1524 "src/parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5841 "src/parser.tab.c"
    break;

  case 501: /* array_access: primary_no_new_array "[" expression "]"  */
#line 1525 "src/parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5847 "src/parser.tab.c"
    break;

  case 502: /* method_invocation: method_name "(" argument_list.opt ")"  */
#line 1528 "src/parser.y"
                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5853 "src/parser.tab.c"
    break;

  case 503: /* method_invocation: type_name "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1529 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5859 "src/parser.tab.c"
    break;

  case 504: /* method_invocation: expression_name "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1530 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5865 "src/parser.tab.c"
    break;

  case 505: /* method_invocation: primary "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1531 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5871 "src/parser.tab.c"
    break;

  case 506: /* method_invocation: "super" "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1532 "src/parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5877 "src/parser.tab.c"
    break;

  case 507: /* method_invocation: type_name "." "super" "." type_arguments.opt TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1533 "src/parser.y"
                                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-8].i) !=-1)addChild((yyval.i),(yyvsp[-8].i));addChild((yyval.i),createNode((yyvsp[-7].s)));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5883 "src/parser.tab.c"
    break;

  case 508: /* argument_list: expression com_expression.multiopt  */
#line 1536 "src/parser.y"
                                                        {(yyval.i)=createNode("argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5889 "src/parser.tab.c"
    break;

  case 509: /* com_expression.multiopt: com_expression.multiopt "," expression  */
#line 1539 "src/parser.y"
                                                                {(yyval.i)=createNode("com_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5895 "src/parser.tab.c"
    break;

  case 510: /* com_expression.multiopt: %empty  */
#line 1540 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5901 "src/parser.tab.c"
    break;

  case 511: /* method_reference: expression_name "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1543 "src/parser.y"
                                                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5907 "src/parser.tab.c"
    break;

  case 512: /* method_reference: primary "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1544 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5913 "src/parser.tab.c"
    break;

  case 513: /* method_reference: reference_type "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1545 "src/parser.y"
                                                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5919 "src/parser.tab.c"
    break;

  case 514: /* method_reference: "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1546 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5925 "src/parser.tab.c"
    break;

  case 515: /* method_reference: type_name "." "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1547 "src/parser.y"
                                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5931 "src/parser.tab.c"
    break;

  case 516: /* method_reference: class_type "::" type_arguments.opt "new"  */
#line 1548 "src/parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5937 "src/parser.tab.c"
    break;

  case 517: /* method_reference: array_type "::" "new"  */
#line 1549 "src/parser.y"
                                                {(yyval.i)=createNode("method_reference");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5943 "src/parser.tab.c"
    break;

  case 518: /* array_creation_expression: "new" primitive_type dim_exprs dims.opt  */
#line 1552 "src/parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5949 "src/parser.tab.c"
    break;

  case 519: /* array_creation_expression: "new" class_or_interface_type dim_exprs dims.opt  */
#line 1553 "src/parser.y"
                                                                        {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5955 "src/parser.tab.c"
    break;

  case 520: /* array_creation_expression: "new" primitive_type dims array_initializer  */
#line 1554 "src/parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5961 "src/parser.tab.c"
    break;

  case 521: /* array_creation_expression: "new" class_or_interface_type dims array_initializer  */
#line 1555 "src/parser.y"
                                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5967 "src/parser.tab.c"
    break;

  case 522: /* dim_exprs: dim_expr dim_expr.multiopt  */
#line 1558 "src/parser.y"
                                                {(yyval.i)=createNode("dim_exprs");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5973 "src/parser.tab.c"
    break;

  case 523: /* dim_expr.multiopt: dim_expr.multiopt dim_expr  */
#line 1561 "src/parser.y"
                                                {(yyval.i)=createNode("dim_expr.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5979 "src/parser.tab.c"
    break;

  case 524: /* dim_expr.multiopt: %empty  */
#line 1562 "src/parser.y"
                                {(yyval.i)=-1;}
#line 5985 "src/parser.tab.c"
    break;

  case 525: /* dim_expr: annotation.multiopt "[" expression "]"  */
#line 1565 "src/parser.y"
                                                                {(yyval.i)=createNode("dim_expr");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 5991 "src/parser.tab.c"
    break;

  case 526: /* expression: lambda_expression  */
#line 1568 "src/parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5997 "src/parser.tab.c"
    break;

  case 527: /* expression: assignment_expression  */
#line 1569 "src/parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6003 "src/parser.tab.c"
    break;

  case 528: /* lambda_expression: lambda_parameters "->" lambda_body  */
#line 1572 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6009 "src/parser.tab.c"
    break;

  case 529: /* lambda_parameters: "(" lambda_parameter_list.opt ")"  */
#line 1575 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6015 "src/parser.tab.c"
    break;

  case 530: /* lambda_parameters: TOK_IDENTIFIER  */
#line 1576 "src/parser.y"
                                        {(yyval.i)=createNode("lambda_parameters");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6021 "src/parser.tab.c"
    break;

  case 531: /* lambda_parameter_list.opt: lambda_parameter_list  */
#line 1579 "src/parser.y"
                                        {(yyval.i)=createNode("lambda_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6027 "src/parser.tab.c"
    break;

  case 532: /* lambda_parameter_list.opt: %empty  */
#line 1580 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6033 "src/parser.tab.c"
    break;

  case 533: /* lambda_parameter_list: lambda_parameter com_lambda_parameter.multiopt  */
#line 1583 "src/parser.y"
                                                                        {(yyval.i)=createNode("lambda_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6039 "src/parser.tab.c"
    break;

  case 534: /* lambda_parameter_list: TOK_IDENTIFIER com_IDENTIFIER.multiopt  */
#line 1584 "src/parser.y"
                                                                {(yyval.i)=createNode("lambda_parameter_list");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6045 "src/parser.tab.c"
    break;

  case 535: /* com_IDENTIFIER.multiopt: com_IDENTIFIER.multiopt "," TOK_IDENTIFIER  */
#line 1587 "src/parser.y"
                                                                {(yyval.i)=createNode("com_IDENTIFIER.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6051 "src/parser.tab.c"
    break;

  case 536: /* com_IDENTIFIER.multiopt: %empty  */
#line 1588 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6057 "src/parser.tab.c"
    break;

  case 537: /* com_lambda_parameter.multiopt: com_lambda_parameter.multiopt "," lambda_parameter  */
#line 1591 "src/parser.y"
                                                                        {(yyval.i)=createNode("com_lambda_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6063 "src/parser.tab.c"
    break;

  case 538: /* com_lambda_parameter.multiopt: %empty  */
#line 1592 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6069 "src/parser.tab.c"
    break;

  case 539: /* lambda_parameter: variable_modifier.multiopt lambda_parameter_type variable_declarator_id  */
#line 1595 "src/parser.y"
                                                                                                {(yyval.i)=createNode("lambda_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6075 "src/parser.tab.c"
    break;

  case 540: /* lambda_parameter: variable_arity_parameter  */
#line 1596 "src/parser.y"
                                                {(yyval.i)=createNode("lambda_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6081 "src/parser.tab.c"
    break;

  case 541: /* lambda_parameter_type: unann_type  */
#line 1599 "src/parser.y"
                                {(yyval.i)=createNode("lambda_parameter_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6087 "src/parser.tab.c"
    break;

  case 542: /* lambda_parameter_type: "var"  */
#line 1600 "src/parser.y"
                                {(yyval.i)=createNode("lambda_parameter_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6093 "src/parser.tab.c"
    break;

  case 543: /* lambda_body: expression  */
#line 1603 "src/parser.y"
                                {(yyval.i)=createNode("lambda_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6099 "src/parser.tab.c"
    break;

  case 544: /* lambda_body: block  */
#line 1604 "src/parser.y"
                        {(yyval.i)=createNode("lambda_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6105 "src/parser.tab.c"
    break;

  case 545: /* assignment_expression: conditional_expression  */
#line 1607 "src/parser.y"
                                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6111 "src/parser.tab.c"
    break;

  case 546: /* assignment_expression: assignment  */
#line 1608 "src/parser.y"
                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6117 "src/parser.tab.c"
    break;

  case 547: /* assignment: left_hand_side assignment_operator expression  */
#line 1611 "src/parser.y"
                                                                {(yyval.i)=createNode("assignment");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6123 "src/parser.tab.c"
    break;

  case 548: /* left_hand_side: expression_name  */
#line 1614 "src/parser.y"
                                        {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6129 "src/parser.tab.c"
    break;

  case 549: /* left_hand_side: field_access  */
#line 1615 "src/parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6135 "src/parser.tab.c"
    break;

  case 550: /* left_hand_side: array_access  */
#line 1616 "src/parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6141 "src/parser.tab.c"
    break;

  case 551: /* assignment_operator: "="  */
#line 1619 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6147 "src/parser.tab.c"
    break;

  case 552: /* assignment_operator: "*="  */
#line 1620 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6153 "src/parser.tab.c"
    break;

  case 553: /* assignment_operator: "/="  */
#line 1621 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6159 "src/parser.tab.c"
    break;

  case 554: /* assignment_operator: "%="  */
#line 1622 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6165 "src/parser.tab.c"
    break;

  case 555: /* assignment_operator: "+="  */
#line 1623 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6171 "src/parser.tab.c"
    break;

  case 556: /* assignment_operator: "-="  */
#line 1624 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6177 "src/parser.tab.c"
    break;

  case 557: /* assignment_operator: "<<="  */
#line 1625 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6183 "src/parser.tab.c"
    break;

  case 558: /* assignment_operator: ">>="  */
#line 1626 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6189 "src/parser.tab.c"
    break;

  case 559: /* assignment_operator: ">>>="  */
#line 1627 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6195 "src/parser.tab.c"
    break;

  case 560: /* assignment_operator: "&="  */
#line 1628 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6201 "src/parser.tab.c"
    break;

  case 561: /* assignment_operator: "^="  */
#line 1629 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6207 "src/parser.tab.c"
    break;

  case 562: /* assignment_operator: "|="  */
#line 1630 "src/parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6213 "src/parser.tab.c"
    break;

  case 563: /* conditional_expression: conditional_or_expression  */
#line 1633 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6219 "src/parser.tab.c"
    break;

  case 564: /* conditional_expression: conditional_or_expression "?" expression ":" conditional_expression  */
#line 1634 "src/parser.y"
                                                                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6225 "src/parser.tab.c"
    break;

  case 565: /* conditional_expression: conditional_or_expression "?" expression ":" lambda_expression  */
#line 1635 "src/parser.y"
                                                                                        {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6231 "src/parser.tab.c"
    break;

  case 566: /* conditional_or_expression: conditional_and_expression  */
#line 1638 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6237 "src/parser.tab.c"
    break;

  case 567: /* conditional_or_expression: conditional_or_expression "||" conditional_and_expression  */
#line 1639 "src/parser.y"
                                                                                        {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6243 "src/parser.tab.c"
    break;

  case 568: /* conditional_and_expression: inclusive_or_expression  */
#line 1642 "src/parser.y"
                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6249 "src/parser.tab.c"
    break;

  case 569: /* conditional_and_expression: conditional_and_expression "&&" inclusive_or_expression  */
#line 1643 "src/parser.y"
                                                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6255 "src/parser.tab.c"
    break;

  case 570: /* inclusive_or_expression: exclusive_or_expression  */
#line 1646 "src/parser.y"
                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6261 "src/parser.tab.c"
    break;

  case 571: /* inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression  */
#line 1647 "src/parser.y"
                                                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6267 "src/parser.tab.c"
    break;

  case 572: /* exclusive_or_expression: and_expression  */
#line 1650 "src/parser.y"
                                        {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6273 "src/parser.tab.c"
    break;

  case 573: /* exclusive_or_expression: exclusive_or_expression "^" and_expression  */
#line 1651 "src/parser.y"
                                                                {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6279 "src/parser.tab.c"
    break;

  case 574: /* and_expression: equality_expression  */
#line 1654 "src/parser.y"
                                        {(yyval.i)=createNode("and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6285 "src/parser.tab.c"
    break;

  case 575: /* and_expression: and_expression "&" equality_expression  */
#line 1655 "src/parser.y"
                                                                {(yyval.i)=createNode("and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6291 "src/parser.tab.c"
    break;

  case 576: /* equality_expression: relational_expression  */
#line 1658 "src/parser.y"
                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6297 "src/parser.tab.c"
    break;

  case 577: /* equality_expression: equality_expression "==" relational_expression  */
#line 1659 "src/parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6303 "src/parser.tab.c"
    break;

  case 578: /* equality_expression: equality_expression "!=" relational_expression  */
#line 1660 "src/parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6309 "src/parser.tab.c"
    break;

  case 579: /* relational_expression: shift_expression  */
#line 1663 "src/parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6315 "src/parser.tab.c"
    break;

  case 580: /* relational_expression: relational_expression "<" shift_expression  */
#line 1664 "src/parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6321 "src/parser.tab.c"
    break;

  case 581: /* relational_expression: relational_expression ">" shift_expression  */
#line 1665 "src/parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6327 "src/parser.tab.c"
    break;

  case 582: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1666 "src/parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6333 "src/parser.tab.c"
    break;

  case 583: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1667 "src/parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6339 "src/parser.tab.c"
    break;

  case 584: /* relational_expression: instanceof_expression  */
#line 1668 "src/parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6345 "src/parser.tab.c"
    break;

  case 585: /* instanceof_expression: relational_expression "instanceof" reference_type  */
#line 1671 "src/parser.y"
                                                                        {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6351 "src/parser.tab.c"
    break;

  case 586: /* instanceof_expression: relational_expression "instanceof" pattern  */
#line 1672 "src/parser.y"
                                                                {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6357 "src/parser.tab.c"
    break;

  case 587: /* shift_expression: additive_expression  */
#line 1675 "src/parser.y"
                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6363 "src/parser.tab.c"
    break;

  case 588: /* shift_expression: shift_expression "<<" additive_expression  */
#line 1676 "src/parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6369 "src/parser.tab.c"
    break;

  case 589: /* shift_expression: shift_expression ">>" additive_expression  */
#line 1677 "src/parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6375 "src/parser.tab.c"
    break;

  case 590: /* shift_expression: shift_expression ">>>" additive_expression  */
#line 1678 "src/parser.y"
                                                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6381 "src/parser.tab.c"
    break;

  case 591: /* additive_expression: multiplicative_expression  */
#line 1681 "src/parser.y"
                                                {(yyval.i)=createNode("additive_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6387 "src/parser.tab.c"
    break;

  case 592: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1682 "src/parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6393 "src/parser.tab.c"
    break;

  case 593: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1683 "src/parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6399 "src/parser.tab.c"
    break;

  case 594: /* multiplicative_expression: unary_expression  */
#line 1686 "src/parser.y"
                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6405 "src/parser.tab.c"
    break;

  case 595: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1687 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6411 "src/parser.tab.c"
    break;

  case 596: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1688 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6417 "src/parser.tab.c"
    break;

  case 597: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1689 "src/parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6423 "src/parser.tab.c"
    break;

  case 598: /* unary_expression: pre_increment_expression  */
#line 1692 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6429 "src/parser.tab.c"
    break;

  case 599: /* unary_expression: pre_decrement_expression  */
#line 1693 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6435 "src/parser.tab.c"
    break;

  case 600: /* unary_expression: "+" unary_expression  */
#line 1694 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6441 "src/parser.tab.c"
    break;

  case 601: /* unary_expression: "-" unary_expression  */
#line 1695 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6447 "src/parser.tab.c"
    break;

  case 602: /* unary_expression: unary_expression_not_plus_minus  */
#line 1696 "src/parser.y"
                                                        {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6453 "src/parser.tab.c"
    break;

  case 603: /* pre_increment_expression: "++" unary_expression  */
#line 1699 "src/parser.y"
                                                {(yyval.i)=createNode("pre_increment_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6459 "src/parser.tab.c"
    break;

  case 604: /* pre_decrement_expression: "--" unary_expression  */
#line 1701 "src/parser.y"
                                                {(yyval.i)=createNode("pre_decrement_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6465 "src/parser.tab.c"
    break;

  case 605: /* unary_expression_not_plus_minus: postfix_expression  */
#line 1703 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6471 "src/parser.tab.c"
    break;

  case 606: /* unary_expression_not_plus_minus: "~" unary_expression  */
#line 1704 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6477 "src/parser.tab.c"
    break;

  case 607: /* unary_expression_not_plus_minus: "!" unary_expression  */
#line 1705 "src/parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6483 "src/parser.tab.c"
    break;

  case 608: /* unary_expression_not_plus_minus: cast_expression  */
#line 1706 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6489 "src/parser.tab.c"
    break;

  case 609: /* unary_expression_not_plus_minus: switch_expression  */
#line 1707 "src/parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6495 "src/parser.tab.c"
    break;

  case 610: /* postfix_expression: primary  */
#line 1710 "src/parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6501 "src/parser.tab.c"
    break;

  case 611: /* postfix_expression: expression_name  */
#line 1711 "src/parser.y"
                                        {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6507 "src/parser.tab.c"
    break;

  case 612: /* postfix_expression: post_increment_expression  */
#line 1712 "src/parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6513 "src/parser.tab.c"
    break;

  case 613: /* postfix_expression: post_decrement_expression  */
#line 1713 "src/parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6519 "src/parser.tab.c"
    break;

  case 614: /* post_increment_expression: postfix_expression "++"  */
#line 1716 "src/parser.y"
                                                {(yyval.i)=createNode("post_increment_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6525 "src/parser.tab.c"
    break;

  case 615: /* post_decrement_expression: postfix_expression "--"  */
#line 1719 "src/parser.y"
                                                {(yyval.i)=createNode("post_decrement_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 6531 "src/parser.tab.c"
    break;

  case 616: /* cast_expression: "(" primitive_type ")" unary_expression  */
#line 1722 "src/parser.y"
                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6537 "src/parser.tab.c"
    break;

  case 617: /* cast_expression: "(" reference_type additional_bound.multiopt ")" unary_expression_not_plus_minus  */
#line 1723 "src/parser.y"
                                                                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6543 "src/parser.tab.c"
    break;

  case 618: /* cast_expression: "(" reference_type additional_bound.multiopt ")" lambda_expression  */
#line 1724 "src/parser.y"
                                                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6549 "src/parser.tab.c"
    break;

  case 619: /* additional_bound.multiopt: additional_bound.multiopt additional_bound  */
#line 1727 "src/parser.y"
                                                                {(yyval.i)=createNode("additional_bound.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6555 "src/parser.tab.c"
    break;

  case 620: /* additional_bound.multiopt: %empty  */
#line 1728 "src/parser.y"
                                {(yyval.i)=-1;}
#line 6561 "src/parser.tab.c"
    break;

  case 621: /* switch_expression: "switch" "(" expression ")" switch_block  */
#line 1731 "src/parser.y"
                                                                        {(yyval.i)=createNode("switch_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 6567 "src/parser.tab.c"
    break;


#line 6571 "src/parser.tab.c"

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

#line 1737 "src/parser.y"



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
