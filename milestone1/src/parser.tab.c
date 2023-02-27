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
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_LITERAL = 4,                    /* LITERAL  */
  YYSYMBOL_TOK_33 = 5,                     /* TOK_33  */
  YYSYMBOL_TOK_3361 = 6,                   /* TOK_3361  */
  YYSYMBOL_TOK_37 = 7,                     /* TOK_37  */
  YYSYMBOL_TOK_3761 = 8,                   /* TOK_3761  */
  YYSYMBOL_TOK_38 = 9,                     /* TOK_38  */
  YYSYMBOL_TOK_3838 = 10,                  /* TOK_3838  */
  YYSYMBOL_TOK_3861 = 11,                  /* TOK_3861  */
  YYSYMBOL_TOK_40 = 12,                    /* TOK_40  */
  YYSYMBOL_TOK_41 = 13,                    /* TOK_41  */
  YYSYMBOL_TOK_42 = 14,                    /* TOK_42  */
  YYSYMBOL_TOK_4261 = 15,                  /* TOK_4261  */
  YYSYMBOL_TOK_43 = 16,                    /* TOK_43  */
  YYSYMBOL_TOK_4343 = 17,                  /* TOK_4343  */
  YYSYMBOL_TOK_4361 = 18,                  /* TOK_4361  */
  YYSYMBOL_TOK_44 = 19,                    /* TOK_44  */
  YYSYMBOL_TOK_45 = 20,                    /* TOK_45  */
  YYSYMBOL_TOK_4545 = 21,                  /* TOK_4545  */
  YYSYMBOL_TOK_4561 = 22,                  /* TOK_4561  */
  YYSYMBOL_TOK_4562 = 23,                  /* TOK_4562  */
  YYSYMBOL_TOK_46 = 24,                    /* TOK_46  */
  YYSYMBOL_TOK_464646 = 25,                /* TOK_464646  */
  YYSYMBOL_TOK_47 = 26,                    /* TOK_47  */
  YYSYMBOL_TOK_4761 = 27,                  /* TOK_4761  */
  YYSYMBOL_TOK_58 = 28,                    /* TOK_58  */
  YYSYMBOL_TOK_5858 = 29,                  /* TOK_5858  */
  YYSYMBOL_TOK_59 = 30,                    /* TOK_59  */
  YYSYMBOL_TOK_60 = 31,                    /* TOK_60  */
  YYSYMBOL_TOK_6060 = 32,                  /* TOK_6060  */
  YYSYMBOL_TOK_606061 = 33,                /* TOK_606061  */
  YYSYMBOL_TOK_6061 = 34,                  /* TOK_6061  */
  YYSYMBOL_TOK_61 = 35,                    /* TOK_61  */
  YYSYMBOL_TOK_6161 = 36,                  /* TOK_6161  */
  YYSYMBOL_TOK_62 = 37,                    /* TOK_62  */
  YYSYMBOL_TOK_6261 = 38,                  /* TOK_6261  */
  YYSYMBOL_TOK_6262 = 39,                  /* TOK_6262  */
  YYSYMBOL_TOK_626261 = 40,                /* TOK_626261  */
  YYSYMBOL_TOK_626262 = 41,                /* TOK_626262  */
  YYSYMBOL_TOK_62626261 = 42,              /* TOK_62626261  */
  YYSYMBOL_TOK_63 = 43,                    /* TOK_63  */
  YYSYMBOL_TOK_64 = 44,                    /* TOK_64  */
  YYSYMBOL_TOK_91 = 45,                    /* TOK_91  */
  YYSYMBOL_TOK_93 = 46,                    /* TOK_93  */
  YYSYMBOL_TOK_94 = 47,                    /* TOK_94  */
  YYSYMBOL_TOK_9461 = 48,                  /* TOK_9461  */
  YYSYMBOL_TOK_abstract = 49,              /* TOK_abstract  */
  YYSYMBOL_TOK_assert = 50,                /* TOK_assert  */
  YYSYMBOL_TOK_boolean = 51,               /* TOK_boolean  */
  YYSYMBOL_TOK_break = 52,                 /* TOK_break  */
  YYSYMBOL_TOK_byte = 53,                  /* TOK_byte  */
  YYSYMBOL_TOK_case = 54,                  /* TOK_case  */
  YYSYMBOL_TOK_catch = 55,                 /* TOK_catch  */
  YYSYMBOL_TOK_char = 56,                  /* TOK_char  */
  YYSYMBOL_TOK_class = 57,                 /* TOK_class  */
  YYSYMBOL_TOK_continue = 58,              /* TOK_continue  */
  YYSYMBOL_TOK_default = 59,               /* TOK_default  */
  YYSYMBOL_TOK_do = 60,                    /* TOK_do  */
  YYSYMBOL_TOK_double = 61,                /* TOK_double  */
  YYSYMBOL_TOK_else = 62,                  /* TOK_else  */
  YYSYMBOL_TOK_enum = 63,                  /* TOK_enum  */
  YYSYMBOL_TOK_exports = 64,               /* TOK_exports  */
  YYSYMBOL_TOK_extends = 65,               /* TOK_extends  */
  YYSYMBOL_TOK_final = 66,                 /* TOK_final  */
  YYSYMBOL_TOK_finally = 67,               /* TOK_finally  */
  YYSYMBOL_TOK_float = 68,                 /* TOK_float  */
  YYSYMBOL_TOK_for = 69,                   /* TOK_for  */
  YYSYMBOL_TOK_if = 70,                    /* TOK_if  */
  YYSYMBOL_TOK_implements = 71,            /* TOK_implements  */
  YYSYMBOL_TOK_import = 72,                /* TOK_import  */
  YYSYMBOL_TOK_instanceof = 73,            /* TOK_instanceof  */
  YYSYMBOL_TOK_int = 74,                   /* TOK_int  */
  YYSYMBOL_TOK_interface = 75,             /* TOK_interface  */
  YYSYMBOL_TOK_long = 76,                  /* TOK_long  */
  YYSYMBOL_TOK_module = 77,                /* TOK_module  */
  YYSYMBOL_TOK_native = 78,                /* TOK_native  */
  YYSYMBOL_TOK_new = 79,                   /* TOK_new  */
  YYSYMBOL_TOK_open = 80,                  /* TOK_open  */
  YYSYMBOL_TOK_opens = 81,                 /* TOK_opens  */
  YYSYMBOL_TOK_package = 82,               /* TOK_package  */
  YYSYMBOL_TOK_permits = 83,               /* TOK_permits  */
  YYSYMBOL_TOK_private = 84,               /* TOK_private  */
  YYSYMBOL_TOK_protected = 85,             /* TOK_protected  */
  YYSYMBOL_TOK_provides = 86,              /* TOK_provides  */
  YYSYMBOL_TOK_public = 87,                /* TOK_public  */
  YYSYMBOL_TOK_record = 88,                /* TOK_record  */
  YYSYMBOL_TOK_requires = 89,              /* TOK_requires  */
  YYSYMBOL_TOK_return = 90,                /* TOK_return  */
  YYSYMBOL_TOK_sealed = 91,                /* TOK_sealed  */
  YYSYMBOL_TOK_short = 92,                 /* TOK_short  */
  YYSYMBOL_TOK_static = 93,                /* TOK_static  */
  YYSYMBOL_TOK_strictfp = 94,              /* TOK_strictfp  */
  YYSYMBOL_TOK_super = 95,                 /* TOK_super  */
  YYSYMBOL_TOK_switch = 96,                /* TOK_switch  */
  YYSYMBOL_TOK_synchronized = 97,          /* TOK_synchronized  */
  YYSYMBOL_TOK_this = 98,                  /* TOK_this  */
  YYSYMBOL_TOK_throw = 99,                 /* TOK_throw  */
  YYSYMBOL_TOK_throws = 100,               /* TOK_throws  */
  YYSYMBOL_TOK_to = 101,                   /* TOK_to  */
  YYSYMBOL_TOK_transient = 102,            /* TOK_transient  */
  YYSYMBOL_TOK_transitive = 103,           /* TOK_transitive  */
  YYSYMBOL_TOK_try = 104,                  /* TOK_try  */
  YYSYMBOL_TOK_uses = 105,                 /* TOK_uses  */
  YYSYMBOL_TOK_var = 106,                  /* TOK_var  */
  YYSYMBOL_TOK_void = 107,                 /* TOK_void  */
  YYSYMBOL_TOK_volatile = 108,             /* TOK_volatile  */
  YYSYMBOL_TOK_while = 109,                /* TOK_while  */
  YYSYMBOL_TOK_with = 110,                 /* TOK_with  */
  YYSYMBOL_TOK_yield = 111,                /* TOK_yield  */
  YYSYMBOL_TOK_123 = 112,                  /* TOK_123  */
  YYSYMBOL_TOK_124 = 113,                  /* TOK_124  */
  YYSYMBOL_TOK_12461 = 114,                /* TOK_12461  */
  YYSYMBOL_TOK_124124 = 115,               /* TOK_124124  */
  YYSYMBOL_TOK_125 = 116,                  /* TOK_125  */
  YYSYMBOL_TOK_126 = 117,                  /* TOK_126  */
  YYSYMBOL_118_non_sealed_ = 118,          /* "non-sealed"  */
  YYSYMBOL_119_ = 119,                     /* "[("  */
  YYSYMBOL_120_ = 120,                     /* ")]"  */
  YYSYMBOL_121_ = 121,                     /* "<>"  */
  YYSYMBOL_YYACCEPT = 122,                 /* $accept  */
  YYSYMBOL_input = 123,                    /* input  */
  YYSYMBOL_124_dot_ind_multiopt = 124,     /* dot_ind.multiopt  */
  YYSYMBOL_type_IDENTIFIER = 125,          /* type_IDENTIFIER  */
  YYSYMBOL_unqualified_method_IDENTIFIER = 126, /* unqualified_method_IDENTIFIER  */
  YYSYMBOL_primitive_type = 127,           /* primitive_type  */
  YYSYMBOL_numeric_type = 128,             /* numeric_type  */
  YYSYMBOL_integral_type = 129,            /* integral_type  */
  YYSYMBOL_floating_point_type = 130,      /* floating_point_type  */
  YYSYMBOL_reference_type = 131,           /* reference_type  */
  YYSYMBOL_class_or_interface_type = 132,  /* class_or_interface_type  */
  YYSYMBOL_class_type = 133,               /* class_type  */
  YYSYMBOL_interface_type = 134,           /* interface_type  */
  YYSYMBOL_type_variable = 135,            /* type_variable  */
  YYSYMBOL_array_type = 136,               /* array_type  */
  YYSYMBOL_dims = 137,                     /* dims  */
  YYSYMBOL_138_an_sp_multiopt = 138,       /* an_sp.multiopt  */
  YYSYMBOL_type_parameter = 139,           /* type_parameter  */
  YYSYMBOL_140_type_parameter_modifier_multiopt = 140, /* type_parameter_modifier.multiopt  */
  YYSYMBOL_type_parameter_modifier = 141,  /* type_parameter_modifier  */
  YYSYMBOL_142_type_bound_opt = 142,       /* type_bound.opt  */
  YYSYMBOL_type_bound = 143,               /* type_bound  */
  YYSYMBOL_additional_bound = 144,         /* additional_bound  */
  YYSYMBOL_type_arguments = 145,           /* type_arguments  */
  YYSYMBOL_type_argument_list = 146,       /* type_argument_list  */
  YYSYMBOL_147_type_argument_multiopt = 147, /* type_argument.multiopt  */
  YYSYMBOL_type_argument = 148,            /* type_argument  */
  YYSYMBOL_wildcard = 149,                 /* wildcard  */
  YYSYMBOL_150_wildcard_bounds_opt = 150,  /* wildcard_bounds.opt  */
  YYSYMBOL_wildcard_bounds = 151,          /* wildcard_bounds  */
  YYSYMBOL_module_name = 152,              /* module_name  */
  YYSYMBOL_package_name = 153,             /* package_name  */
  YYSYMBOL_type_name = 154,                /* type_name  */
  YYSYMBOL_expression_name = 155,          /* expression_name  */
  YYSYMBOL_method_name = 156,              /* method_name  */
  YYSYMBOL_package_or_type_name = 157,     /* package_or_type_name  */
  YYSYMBOL_ambiguous_name = 158,           /* ambiguous_name  */
  YYSYMBOL_compilation_unit = 159,         /* compilation_unit  */
  YYSYMBOL_ordinary_compilation_unit = 160, /* ordinary_compilation_unit  */
  YYSYMBOL_modular_compilation_unit = 161, /* modular_compilation_unit  */
  YYSYMBOL_162_package_declaration_opt = 162, /* package_declaration.opt  */
  YYSYMBOL_package_declaration = 163,      /* package_declaration  */
  YYSYMBOL_164_package_modifier_multiopt = 164, /* package_modifier.multiopt  */
  YYSYMBOL_package_modifier = 165,         /* package_modifier  */
  YYSYMBOL_166_import_declaration_multiopt = 166, /* import_declaration.multiopt  */
  YYSYMBOL_import_declaration = 167,       /* import_declaration  */
  YYSYMBOL_single_type_import_declaration = 168, /* single_type_import_declaration  */
  YYSYMBOL_type_import_on_demand_declaration = 169, /* type_import_on_demand_declaration  */
  YYSYMBOL_single_static_import_declaration = 170, /* single_static_import_declaration  */
  YYSYMBOL_static_import_on_demand_declaration = 171, /* static_import_on_demand_declaration  */
  YYSYMBOL_172_top_level_class_or_interface_declaration_multiopt = 172, /* top_level_class_or_interface_declaration.multiopt  */
  YYSYMBOL_top_level_class_or_interface_declaration = 173, /* top_level_class_or_interface_declaration  */
  YYSYMBOL_module_declaration = 174,       /* module_declaration  */
  YYSYMBOL_175_open_opt = 175,             /* open.opt  */
  YYSYMBOL_176_module_directive_multiopt = 176, /* module_directive.multiopt  */
  YYSYMBOL_module_directive = 177,         /* module_directive  */
  YYSYMBOL_178_com_type_name_multiopt = 178, /* com_type_name.multiopt  */
  YYSYMBOL_179_to_module_names_opt = 179,  /* to_module_names.opt  */
  YYSYMBOL_180_com_module_name_multiopt = 180, /* com_module_name.multiopt  */
  YYSYMBOL_181_requires_modifier_multiopt = 181, /* requires_modifier.multiopt  */
  YYSYMBOL_requires_modifier = 182,        /* requires_modifier  */
  YYSYMBOL_class_declaration = 183,        /* class_declaration  */
  YYSYMBOL_normal_class_declaration = 184, /* normal_class_declaration  */
  YYSYMBOL_185_class_modifier_multiopt = 185, /* class_modifier.multiopt  */
  YYSYMBOL_186_type_parameters_opt = 186,  /* type_parameters.opt  */
  YYSYMBOL_187_class_extends_opt = 187,    /* class_extends.opt  */
  YYSYMBOL_188_class_implements_opt = 188, /* class_implements.opt  */
  YYSYMBOL_189_class_permits_opt = 189,    /* class_permits.opt  */
  YYSYMBOL_class_modifier = 190,           /* class_modifier  */
  YYSYMBOL_type_parameters = 191,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 192,      /* type_parameter_list  */
  YYSYMBOL_193_com_type_parameter_multiopt = 193, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 194,            /* class_extends  */
  YYSYMBOL_class_implements = 195,         /* class_implements  */
  YYSYMBOL_interface_type_list = 196,      /* interface_type_list  */
  YYSYMBOL_197_com_interface_type_multiopt = 197, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 198,            /* class_permits  */
  YYSYMBOL_class_body = 199,               /* class_body  */
  YYSYMBOL_200_class_body_declaration_multiopt = 200, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 201,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 202, /* class_member_declaration  */
  YYSYMBOL_field_declaration = 203,        /* field_declaration  */
  YYSYMBOL_204_field_modifier_multiopt = 204, /* field_modifier.multiopt  */
  YYSYMBOL_field_modifier = 205,           /* field_modifier  */
  YYSYMBOL_variable_declarator_list = 206, /* variable_declarator_list  */
  YYSYMBOL_207_com_variable_declarator_multiopt = 207, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 208,      /* variable_declarator  */
  YYSYMBOL_209_eq_variable_initializer_opt = 209, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 210,   /* variable_declarator_id  */
  YYSYMBOL_211_dims_opt = 211,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 212,     /* variable_initializer  */
  YYSYMBOL_unann_type = 213,               /* unann_type  */
  YYSYMBOL_unann_primitive_type = 214,     /* unann_primitive_type  */
  YYSYMBOL_unann_reference_type = 215,     /* unann_reference_type  */
  YYSYMBOL_unann_class_or_interface_type = 216, /* unann_class_or_interface_type  */
  YYSYMBOL_unann_class_type = 217,         /* unann_class_type  */
  YYSYMBOL_218_type_arguments_opt = 218,   /* type_arguments.opt  */
  YYSYMBOL_unann_interface_type = 219,     /* unann_interface_type  */
  YYSYMBOL_unann_type_variable = 220,      /* unann_type_variable  */
  YYSYMBOL_unann_array_type = 221,         /* unann_array_type  */
  YYSYMBOL_method_declaration = 222,       /* method_declaration  */
  YYSYMBOL_223_method_modifier_multiopt = 223, /* method_modifier.multiopt  */
  YYSYMBOL_method_modifier = 224,          /* method_modifier  */
  YYSYMBOL_method_header = 225,            /* method_header  */
  YYSYMBOL_226_throws_opt = 226,           /* throws.opt  */
  YYSYMBOL_result = 227,                   /* result  */
  YYSYMBOL_method_declarator = 228,        /* method_declarator  */
  YYSYMBOL_229_receiver_parameter_com_opt = 229, /* receiver_parameter_com.opt  */
  YYSYMBOL_230_formal_parameter_list_opt = 230, /* formal_parameter_list.opt  */
  YYSYMBOL_receiver_parameter = 231,       /* receiver_parameter  */
  YYSYMBOL_232_IDENTIFIER_dot_opt = 232,   /* IDENTIFIER_dot.opt  */
  YYSYMBOL_formal_parameter_list = 233,    /* formal_parameter_list  */
  YYSYMBOL_234_com_formal_parameter_multiopt = 234, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 235,         /* formal_parameter  */
  YYSYMBOL_236_variable_modifier_multiopt = 236, /* variable_modifier.multiopt  */
  YYSYMBOL_variable_arity_parameter = 237, /* variable_arity_parameter  */
  YYSYMBOL_variable_modifier = 238,        /* variable_modifier  */
  YYSYMBOL_throws = 239,                   /* throws  */
  YYSYMBOL_exception_type_list = 240,      /* exception_type_list  */
  YYSYMBOL_241_com_exception_type_multiopt = 241, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 242,           /* exception_type  */
  YYSYMBOL_method_body = 243,              /* method_body  */
  YYSYMBOL_instance_initializer = 244,     /* instance_initializer  */
  YYSYMBOL_static_initializer = 245,       /* static_initializer  */
  YYSYMBOL_constructor_declaration = 246,  /* constructor_declaration  */
  YYSYMBOL_247_constructor_modifier_multiopt = 247, /* constructor_modifier.multiopt  */
  YYSYMBOL_constructor_modifier = 248,     /* constructor_modifier  */
  YYSYMBOL_constructor_declarator = 249,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 250,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 251,         /* constructor_body  */
  YYSYMBOL_252_explicit_constructor_invocation_opt = 252, /* explicit_constructor_invocation.opt  */
  YYSYMBOL_253_block_statements_opt = 253, /* block_statements.opt  */
  YYSYMBOL_explicit_constructor_invocation = 254, /* explicit_constructor_invocation  */
  YYSYMBOL_255_argument_list_opt = 255,    /* argument_list.opt  */
  YYSYMBOL_enum_declaration = 256,         /* enum_declaration  */
  YYSYMBOL_enum_body = 257,                /* enum_body  */
  YYSYMBOL_258_com_opt = 258,              /* com.opt  */
  YYSYMBOL_259_enum_body_declarations_opt = 259, /* enum_body_declarations.opt  */
  YYSYMBOL_260_enum_constant_list_opt = 260, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 261,       /* enum_constant_list  */
  YYSYMBOL_262_com_enum_constant_multiopt = 262, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 263,            /* enum_constant  */
  YYSYMBOL_264_enum_constant_modifier_multiopt = 264, /* enum_constant_modifier.multiopt  */
  YYSYMBOL_265_class_body_opt = 265,       /* class_body.opt  */
  YYSYMBOL_enum_constant_modifier = 266,   /* enum_constant_modifier  */
  YYSYMBOL_enum_body_declarations = 267,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 268,       /* record_declaration  */
  YYSYMBOL_record_header = 269,            /* record_header  */
  YYSYMBOL_270_record_component_list_opt = 270, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 271,    /* record_component_list  */
  YYSYMBOL_272_com_record_component_multiopt = 272, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 273,         /* record_component  */
  YYSYMBOL_274_record_component_modifier_multiopt = 274, /* record_component_modifier.multiopt  */
  YYSYMBOL_variable_arity_record_component = 275, /* variable_arity_record_component  */
  YYSYMBOL_record_component_modifier = 276, /* record_component_modifier  */
  YYSYMBOL_record_body = 277,              /* record_body  */
  YYSYMBOL_278_record_body_declaration_multiopt = 278, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 279,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 280, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 281,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 282, /* normal_interface_declaration  */
  YYSYMBOL_283_interface_modifier_multiopt = 283, /* interface_modifier.multiopt  */
  YYSYMBOL_284_interface_extends_opt = 284, /* interface_extends.opt  */
  YYSYMBOL_285_interface_permits_opt = 285, /* interface_permits.opt  */
  YYSYMBOL_interface_modifier = 286,       /* interface_modifier  */
  YYSYMBOL_interface_extends = 287,        /* interface_extends  */
  YYSYMBOL_interface_permits = 288,        /* interface_permits  */
  YYSYMBOL_interface_body = 289,           /* interface_body  */
  YYSYMBOL_290_interface_member_declaration_multiopt = 290, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 291, /* interface_member_declaration  */
  YYSYMBOL_constant_declaration = 292,     /* constant_declaration  */
  YYSYMBOL_293_constant_modifier_multiopt = 293, /* constant_modifier.multiopt  */
  YYSYMBOL_constant_modifier = 294,        /* constant_modifier  */
  YYSYMBOL_interface_method_declaration = 295, /* interface_method_declaration  */
  YYSYMBOL_296_interface_method_modifier_multiopt = 296, /* interface_method_modifier.multiopt  */
  YYSYMBOL_interface_method_modifier = 297, /* interface_method_modifier  */
  YYSYMBOL_annotation_interface_declaration = 298, /* annotation_interface_declaration  */
  YYSYMBOL_annotation_interface_body = 299, /* annotation_interface_body  */
  YYSYMBOL_300_annotation_interface_member_declaration_multiopt = 300, /* annotation_interface_member_declaration.multiopt  */
  YYSYMBOL_annotation_interface_member_declaration = 301, /* annotation_interface_member_declaration  */
  YYSYMBOL_annotation_interface_element_declaration = 302, /* annotation_interface_element_declaration  */
  YYSYMBOL_303_annotation_interface_element_modifier_multiopt = 303, /* annotation_interface_element_modifier.multiopt  */
  YYSYMBOL_304_default_value_opt = 304,    /* default_value.opt  */
  YYSYMBOL_annotation_interface_element_modifier = 305, /* annotation_interface_element_modifier  */
  YYSYMBOL_default_value = 306,            /* default_value  */
  YYSYMBOL_annotation = 307,               /* annotation  */
  YYSYMBOL_normal_annotation = 308,        /* normal_annotation  */
  YYSYMBOL_309_element_value_pair_list_opt = 309, /* element_value_pair_list.opt  */
  YYSYMBOL_element_value_pair_list = 310,  /* element_value_pair_list  */
  YYSYMBOL_311_com_element_value_pair_multiopt = 311, /* com_element_value_pair.multiopt  */
  YYSYMBOL_element_value_pair = 312,       /* element_value_pair  */
  YYSYMBOL_element_value = 313,            /* element_value  */
  YYSYMBOL_element_value_array_initializer = 314, /* element_value_array_initializer  */
  YYSYMBOL_315_element_valueList_opt = 315, /* element_valueList.opt  */
  YYSYMBOL_element_valueList = 316,        /* element_valueList  */
  YYSYMBOL_317_com_element_value_multiopt = 317, /* com_element_value.multiopt  */
  YYSYMBOL_marker_annotation = 318,        /* marker_annotation  */
  YYSYMBOL_single_element_annotation = 319, /* single_element_annotation  */
  YYSYMBOL_320_annotation_multiopt = 320,  /* annotation.multiopt  */
  YYSYMBOL_array_initializer = 321,        /* array_initializer  */
  YYSYMBOL_322_variable_initializer_list_opt = 322, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 323, /* variable_initializer_list  */
  YYSYMBOL_324_com_variable_initializer_multiopt = 324, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 325,                    /* block  */
  YYSYMBOL_block_statements = 326,         /* block_statements  */
  YYSYMBOL_327_block_statement_multiopt = 327, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 328,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 329, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 330, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 331, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 332,      /* local_variable_type  */
  YYSYMBOL_statement = 333,                /* statement  */
  YYSYMBOL_statement_no_short_if = 334,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 335, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 336,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 337,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 338, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 339,     /* expression_statement  */
  YYSYMBOL_statement_expression = 340,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 341,        /* if_then_statement  */
  YYSYMBOL_if_then_else_statement = 342,   /* if_then_else_statement  */
  YYSYMBOL_if_then_else_statement_no_short_if = 343, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_assert_statement = 344,         /* assert_statement  */
  YYSYMBOL_switch_statement = 345,         /* switch_statement  */
  YYSYMBOL_switch_block = 346,             /* switch_block  */
  YYSYMBOL_347_switch_rule_multiopt = 347, /* switch_rule.multiopt  */
  YYSYMBOL_348_switch_block_statement_group_multiopt = 348, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_349_switch_label_col_multiopt = 349, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 350,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 351, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 352,             /* switch_label  */
  YYSYMBOL_353_com_case_constant_multiopt = 353, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 354,            /* case_constant  */
  YYSYMBOL_while_statement = 355,          /* while_statement  */
  YYSYMBOL_while_statement_no_short_if = 356, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 357,             /* do_statement  */
  YYSYMBOL_for_statement = 358,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 359, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 360,      /* basic_for_statement  */
  YYSYMBOL_361_for_init_opt = 361,         /* for_init.opt  */
  YYSYMBOL_362_expression_opt = 362,       /* expression.opt  */
  YYSYMBOL_363_for_update_opt = 363,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 364, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 365,                 /* for_init  */
  YYSYMBOL_for_update = 366,               /* for_update  */
  YYSYMBOL_statement_expression_list = 367, /* statement_expression_list  */
  YYSYMBOL_368_com_statement_expression_multiopt = 368, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 369,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 370, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 371,          /* break_statement  */
  YYSYMBOL_372_IDENTIFIER_opt = 372,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 373,          /* yield_statement  */
  YYSYMBOL_continue_statement = 374,       /* continue_statement  */
  YYSYMBOL_return_statement = 375,         /* return_statement  */
  YYSYMBOL_throw_statement = 376,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 377,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 378,            /* try_statement  */
  YYSYMBOL_379_catches_opt = 379,          /* catches.opt  */
  YYSYMBOL_catches = 380,                  /* catches  */
  YYSYMBOL_381_catch_clause_multiopt = 381, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 382,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 383,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 384,               /* catch_type  */
  YYSYMBOL_385_vt_class_type_multiopt = 385, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 386,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 387, /* try_with_resources_statement  */
  YYSYMBOL_388_finally_opt = 388,          /* finally.opt  */
  YYSYMBOL_resource_specification = 389,   /* resource_specification  */
  YYSYMBOL_390_semcol_opt = 390,           /* semcol.opt  */
  YYSYMBOL_resource_list = 391,            /* resource_list  */
  YYSYMBOL_392_semcol_resource_multiopt = 392, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 393,                 /* resource  */
  YYSYMBOL_variable_access = 394,          /* variable_access  */
  YYSYMBOL_pattern = 395,                  /* pattern  */
  YYSYMBOL_type_pattern = 396,             /* type_pattern  */
  YYSYMBOL_primary = 397,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 398,     /* primary_no_new_array  */
  YYSYMBOL_class_literal = 399,            /* class_literal  */
  YYSYMBOL_class_instance_creation_expression = 400, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 401, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_class_or_interface_type_to_instantiate = 402, /* class_or_interface_type_to_instantiate  */
  YYSYMBOL_403_dot_annotation_multiopt_IDENTIFIER_multiopt = 403, /* dot_annotation.multiopt_IDENTIFIER.multiopt  */
  YYSYMBOL_404_type_arguments_or_diamond_opt = 404, /* type_arguments_or_diamond.opt  */
  YYSYMBOL_type_arguments_or_diamond = 405, /* type_arguments_or_diamond  */
  YYSYMBOL_field_access = 406,             /* field_access  */
  YYSYMBOL_array_access = 407,             /* array_access  */
  YYSYMBOL_method_invocation = 408,        /* method_invocation  */
  YYSYMBOL_argument_list = 409,            /* argument_list  */
  YYSYMBOL_410_com_expression_multiopt = 410, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 411,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 412, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 413,                /* dim_exprs  */
  YYSYMBOL_414_dim_expr_multiopt = 414,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 415,                 /* dim_expr  */
  YYSYMBOL_expression = 416,               /* expression  */
  YYSYMBOL_lambda_expression = 417,        /* lambda_expression  */
  YYSYMBOL_lambda_parameters = 418,        /* lambda_parameters  */
  YYSYMBOL_419_lambda_parameter_list_opt = 419, /* lambda_parameter_list.opt  */
  YYSYMBOL_lambda_parameter_list = 420,    /* lambda_parameter_list  */
  YYSYMBOL_421_com_IDENTIFIER_multiopt = 421, /* com_IDENTIFIER.multiopt  */
  YYSYMBOL_422_com_lambda_parameter_multiopt = 422, /* com_lambda_parameter.multiopt  */
  YYSYMBOL_lambda_parameter = 423,         /* lambda_parameter  */
  YYSYMBOL_lambda_parameter_type = 424,    /* lambda_parameter_type  */
  YYSYMBOL_lambda_body = 425,              /* lambda_body  */
  YYSYMBOL_assignment_expression = 426,    /* assignment_expression  */
  YYSYMBOL_assignment = 427,               /* assignment  */
  YYSYMBOL_left_hand_side = 428,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 429,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 430,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 431, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 432, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 433,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 434,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 435,           /* and_expression  */
  YYSYMBOL_equality_expression = 436,      /* equality_expression  */
  YYSYMBOL_relational_expression = 437,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 438,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 439,         /* shift_expression  */
  YYSYMBOL_additive_expression = 440,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 441, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 442,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 443, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 444, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 445, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 446,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 447, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 448, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 449,          /* cast_expression  */
  YYSYMBOL_450_additional_bound_multiopt = 450, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 451         /* switch_expression  */
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
#define YYLAST   3255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  330
/* YYNRULES -- Number of rules.  */
#define YYNRULES  678
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   376


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
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   492,   492,   495,   496,   499,   502,   510,   511,   514,
     515,   518,   519,   520,   521,   522,   525,   526,   529,   530,
     531,   534,   535,   538,   539,   540,   543,   546,   549,   550,
     551,   554,   557,   558,   560,   563,   564,   565,   567,   570,
     571,   574,   575,   578,   581,   584,   587,   588,   589,   591,
     592,   595,   598,   599,   602,   603,   608,   609,   612,   613,
     616,   617,   620,   621,   624,   627,   628,   631,   632,   638,
     639,   642,   645,   648,   649,   652,   655,   656,   659,   662,
     663,   666,   667,   668,   669,   672,   675,   678,   681,   684,
     685,   686,   689,   690,   691,   694,   697,   698,   701,   702,
     703,   706,   707,   708,   709,   710,   713,   714,   717,   718,
     719,   721,   722,   725,   726,   727,   729,   730,   735,   736,
     737,   740,   743,   744,   747,   748,   751,   752,   755,   756,
     759,   760,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   775,   778,   781,   782,   785,   788,   791,   794,
     795,   798,   801,   804,   805,   808,   809,   810,   811,   814,
     815,   816,   817,   820,   823,   824,   827,   828,   829,   830,
     831,   832,   833,   834,   837,   840,   841,   844,   847,   848,
     851,   854,   855,   858,   859,   862,   863,   866,   867,   870,
     871,   872,   875,   876,   879,   880,   881,   884,   885,   888,
     891,   894,   895,   896,   899,   902,   903,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   918,   919,   922,
     923,   926,   927,   930,   933,   934,   937,   938,   941,   944,
     945,   948,   951,   952,   955,   956,   959,   960,   963,   966,
     967,   970,   973,   976,   977,   980,   981,   984,   985,   988,
     991,   994,   997,   998,  1001,  1002,  1003,  1004,  1007,  1010,
    1013,  1016,  1017,  1020,  1021,  1024,  1025,  1026,  1027,  1030,
    1031,  1034,  1037,  1040,  1041,  1044,  1045,  1048,  1049,  1052,
    1055,  1056,  1059,  1062,  1063,  1066,  1067,  1070,  1073,  1076,
    1079,  1082,  1083,  1086,  1089,  1090,  1094,  1095,  1098,  1099,
    1102,  1105,  1108,  1111,  1112,  1115,  1116,  1119,  1125,  1126,
    1129,  1132,  1133,  1136,  1137,  1140,  1141,  1144,  1145,  1146,
    1147,  1148,  1149,  1150,  1151,  1152,  1155,  1158,  1161,  1164,
    1165,  1168,  1169,  1170,  1171,  1172,  1175,  1178,  1179,  1182,
    1183,  1184,  1185,  1188,  1191,  1192,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1204,  1207,  1210,  1211,  1214,  1215,  1216,
    1217,  1218,  1221,  1224,  1225,  1228,  1229,  1232,  1233,  1234,
    1237,  1240,  1241,  1242,  1245,  1248,  1249,  1252,  1255,  1256,
    1259,  1262,  1263,  1264,  1267,  1270,  1271,  1274,  1277,  1278,
    1281,  1284,  1287,  1288,  1292,  1295,  1296,  1299,  1302,  1303,
    1308,  1311,  1314,  1315,  1318,  1319,  1320,  1323,  1324,  1327,
    1330,  1333,  1334,  1337,  1338,  1339,  1340,  1341,  1342,  1345,
    1346,  1347,  1348,  1349,  1352,  1353,  1354,  1355,  1356,  1357,
    1358,  1359,  1360,  1361,  1362,  1363,  1364,  1367,  1370,  1373,
    1376,  1379,  1380,  1381,  1382,  1383,  1384,  1385,  1388,  1391,
    1394,  1397,  1398,  1401,  1404,  1405,  1408,  1409,  1412,  1413,
    1416,  1417,  1420,  1421,  1422,  1425,  1428,  1432,  1433,  1436,
    1439,  1442,  1445,  1448,  1449,  1452,  1453,  1456,  1459,  1460,
    1463,  1464,  1467,  1468,  1471,  1474,  1478,  1481,  1484,  1485,
    1488,  1491,  1494,  1497,  1498,  1501,  1504,  1507,  1510,  1513,
    1516,  1521,  1522,  1525,  1528,  1529,  1532,  1535,  1538,  1541,
    1542,  1545,  1548,  1551,  1552,  1555,  1558,  1559,  1562,  1565,
    1566,  1569,  1570,  1573,  1574,  1577,  1580,  1585,  1586,  1589,
    1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,  1598,  1601,
    1602,  1603,  1604,  1607,  1608,  1609,  1612,  1615,  1618,  1619,
    1622,  1623,  1626,  1627,  1630,  1631,  1632,  1635,  1636,  1639,
    1640,  1641,  1642,  1643,  1644,  1647,  1650,  1651,  1654,  1655,
    1656,  1657,  1658,  1659,  1660,  1663,  1664,  1665,  1666,  1669,
    1672,  1673,  1676,  1679,  1680,  1683,  1686,  1687,  1690,  1691,
    1694,  1695,  1698,  1699,  1702,  1703,  1706,  1707,  1710,  1711,
    1714,  1715,  1718,  1719,  1722,  1725,  1726,  1727,  1730,  1731,
    1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,
    1744,  1745,  1746,  1749,  1750,  1753,  1754,  1757,  1758,  1761,
    1762,  1765,  1766,  1769,  1770,  1771,  1774,  1775,  1776,  1777,
    1778,  1779,  1782,  1783,  1786,  1787,  1788,  1789,  1792,  1793,
    1794,  1797,  1798,  1799,  1800,  1803,  1804,  1805,  1806,  1807,
    1810,  1812,  1814,  1815,  1816,  1817,  1818,  1821,  1822,  1823,
    1824,  1827,  1830,  1833,  1834,  1835,  1838,  1839,  1842
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "LITERAL", "TOK_33", "TOK_3361", "TOK_37", "TOK_3761", "TOK_38",
  "TOK_3838", "TOK_3861", "TOK_40", "TOK_41", "TOK_42", "TOK_4261",
  "TOK_43", "TOK_4343", "TOK_4361", "TOK_44", "TOK_45", "TOK_4545",
  "TOK_4561", "TOK_4562", "TOK_46", "TOK_464646", "TOK_47", "TOK_4761",
  "TOK_58", "TOK_5858", "TOK_59", "TOK_60", "TOK_6060", "TOK_606061",
  "TOK_6061", "TOK_61", "TOK_6161", "TOK_62", "TOK_6261", "TOK_6262",
  "TOK_626261", "TOK_626262", "TOK_62626261", "TOK_63", "TOK_64", "TOK_91",
  "TOK_93", "TOK_94", "TOK_9461", "TOK_abstract", "TOK_assert",
  "TOK_boolean", "TOK_break", "TOK_byte", "TOK_case", "TOK_catch",
  "TOK_char", "TOK_class", "TOK_continue", "TOK_default", "TOK_do",
  "TOK_double", "TOK_else", "TOK_enum", "TOK_exports", "TOK_extends",
  "TOK_final", "TOK_finally", "TOK_float", "TOK_for", "TOK_if",
  "TOK_implements", "TOK_import", "TOK_instanceof", "TOK_int",
  "TOK_interface", "TOK_long", "TOK_module", "TOK_native", "TOK_new",
  "TOK_open", "TOK_opens", "TOK_package", "TOK_permits", "TOK_private",
  "TOK_protected", "TOK_provides", "TOK_public", "TOK_record",
  "TOK_requires", "TOK_return", "TOK_sealed", "TOK_short", "TOK_static",
  "TOK_strictfp", "TOK_super", "TOK_switch", "TOK_synchronized",
  "TOK_this", "TOK_throw", "TOK_throws", "TOK_to", "TOK_transient",
  "TOK_transitive", "TOK_try", "TOK_uses", "TOK_var", "TOK_void",
  "TOK_volatile", "TOK_while", "TOK_with", "TOK_yield", "TOK_123",
  "TOK_124", "TOK_12461", "TOK_124124", "TOK_125", "TOK_126",
  "\"non-sealed\"", "\"[(\"", "\")]\"", "\"<>\"", "$accept", "input",
  "dot_ind.multiopt", "type_IDENTIFIER", "unqualified_method_IDENTIFIER",
  "primitive_type", "numeric_type", "integral_type", "floating_point_type",
  "reference_type", "class_or_interface_type", "class_type",
  "interface_type", "type_variable", "array_type", "dims",
  "an_sp.multiopt", "type_parameter", "type_parameter_modifier.multiopt",
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
  "com_module_name.multiopt", "requires_modifier.multiopt",
  "requires_modifier", "class_declaration", "normal_class_declaration",
  "class_modifier.multiopt", "type_parameters.opt", "class_extends.opt",
  "class_implements.opt", "class_permits.opt", "class_modifier",
  "type_parameters", "type_parameter_list", "com_type_parameter.multiopt",
  "class_extends", "class_implements", "interface_type_list",
  "com_interface_type.multiopt", "class_permits", "class_body",
  "class_body_declaration.multiopt", "class_body_declaration",
  "class_member_declaration", "field_declaration",
  "field_modifier.multiopt", "field_modifier", "variable_declarator_list",
  "com_variable_declarator.multiopt", "variable_declarator",
  "eq_variable_initializer.opt", "variable_declarator_id", "dims.opt",
  "variable_initializer", "unann_type", "unann_primitive_type",
  "unann_reference_type", "unann_class_or_interface_type",
  "unann_class_type", "type_arguments.opt", "unann_interface_type",
  "unann_type_variable", "unann_array_type", "method_declaration",
  "method_modifier.multiopt", "method_modifier", "method_header",
  "throws.opt", "result", "method_declarator",
  "receiver_parameter_com.opt", "formal_parameter_list.opt",
  "receiver_parameter", "IDENTIFIER_dot.opt", "formal_parameter_list",
  "com_formal_parameter.multiopt", "formal_parameter",
  "variable_modifier.multiopt", "variable_arity_parameter",
  "variable_modifier", "throws", "exception_type_list",
  "com_exception_type.multiopt", "exception_type", "method_body",
  "instance_initializer", "static_initializer", "constructor_declaration",
  "constructor_modifier.multiopt", "constructor_modifier",
  "constructor_declarator", "simple_type_name", "constructor_body",
  "explicit_constructor_invocation.opt", "block_statements.opt",
  "explicit_constructor_invocation", "argument_list.opt",
  "enum_declaration", "enum_body", "com.opt", "enum_body_declarations.opt",
  "enum_constant_list.opt", "enum_constant_list",
  "com_enum_constant.multiopt", "enum_constant",
  "enum_constant_modifier.multiopt", "class_body.opt",
  "enum_constant_modifier", "enum_body_declarations", "record_declaration",
  "record_header", "record_component_list.opt", "record_component_list",
  "com_record_component.multiopt", "record_component",
  "record_component_modifier.multiopt", "variable_arity_record_component",
  "record_component_modifier", "record_body",
  "record_body_declaration.multiopt", "record_body_declaration",
  "compact_constructor_declaration", "interface_declaration",
  "normal_interface_declaration", "interface_modifier.multiopt",
  "interface_extends.opt", "interface_permits.opt", "interface_modifier",
  "interface_extends", "interface_permits", "interface_body",
  "interface_member_declaration.multiopt", "interface_member_declaration",
  "constant_declaration", "constant_modifier.multiopt",
  "constant_modifier", "interface_method_declaration",
  "interface_method_modifier.multiopt", "interface_method_modifier",
  "annotation_interface_declaration", "annotation_interface_body",
  "annotation_interface_member_declaration.multiopt",
  "annotation_interface_member_declaration",
  "annotation_interface_element_declaration",
  "annotation_interface_element_modifier.multiopt", "default_value.opt",
  "annotation_interface_element_modifier", "default_value", "annotation",
  "normal_annotation", "element_value_pair_list.opt",
  "element_value_pair_list", "com_element_value_pair.multiopt",
  "element_value_pair", "element_value", "element_value_array_initializer",
  "element_valueList.opt", "element_valueList",
  "com_element_value.multiopt", "marker_annotation",
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
  "class_instance_creation_expression",
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

#define YYPACT_NINF (-950)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-671)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     260,    62,  -950,  -950,  -950,  -950,  -950,   288,     6,  -950,
     119,    82,   174,  -950,  -950,  -950,  -950,  -950,    48,  -950,
    -950,  -950,  -950,  -950,  -950,    17,  -950,    76,  -950,  -950,
    -950,  3137,  -950,  -950,  -950,  -950,   603,  -950,  -950,  -950,
     273,   287,  -950,    82,   301,   317,  -950,   290,  -950,  -950,
    -950,   353,   353,  -950,  -950,  -950,  -950,   353,  -950,  -950,
    -950,  -950,  -950,  -950,    68,  -950,   353,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,  -950,  1600,   413,   148,   352,
    -950,    79,   427,  -950,   396,   369,   396,   353,   396,   309,
    -950,  2263,  2331,  2263,  2263,  2263,  2263,   433,  -950,  -950,
    -950,  -950,  -950,  -950,    55,  -950,   225,   450,  -950,   443,
    1685,  2263,  -950,  -950,   456,  -950,  -950,   454,   470,   483,
    -950,  -950,   489,   499,   502,   348,   516,   510,  -950,   535,
    -950,  -950,   536,  -950,  1963,   360,   518,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,  -950,     2,   554,   455,   523,
     563,    59,    19,  -950,   132,   378,   156,  -950,  -950,  -950,
    -950,   387,  -950,  -950,  -950,  -950,  -950,  -950,   571,  -950,
     245,   547,  -950,   540,   514,  -950,   582,   478,  -950,   576,
     482,   532,  1685,    56,  -950,   496,  1906,   586,   454,  1710,
     565,   757,   588,  -950,   579,  -950,  -950,   877,  -950,  -950,
    -950,  -950,  -950,   546,  -950,   582,  -950,   470,   521,  -950,
    -950,  1963,    63,   577,  2331,   555,  -950,   597,  -950,  -950,
    -950,   540,   564,   577,  -950,  -950,   577,  -950,   541,   619,
     158,    21,   577,  2331,  1974,   620,  -950,   606,  -950,  -950,
     221,  -950,    29,   577,  2331,  2331,  2263,  2263,  2263,  2263,
    2263,  2263,  2263,  2263,  2263,  2263,  2263,   582,  2263,  2263,
    2263,  2263,  2263,  2263,  2263,  2263,  -950,  -950,  -950,   596,
     599,  -950,    30,  -950,   152,  -950,   598,  -950,   582,   369,
    -950,   470,   615,  -950,   152,   266,  -950,   627,   369,  -950,
    -950,   582,   558,  -950,  -950,   463,  1057,  -950,   629,  -950,
    -950,  2263,   445,  -950,  2042,  -950,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,  -950,  -950,  2331,  -950,  -950,
    -950,   607,   624,  -950,  1895,   538,   234,  -950,  -950,   538,
    -950,   268,   641,   577,  -950,   652,   654,   648,  -950,   643,
    -950,   549,  -950,  -950,   660,   152,   587,  -950,  -950,   152,
    -950,   362,  -950,   666,   577,   670,  -950,   671,   630,   667,
    -950,  -950,  -950,   678,  -950,  -950,   679,  -950,   681,   639,
     661,   554,   455,   523,   563,    59,    19,    19,   132,   132,
     132,   132,  -950,  2186,  -950,  -950,  -950,   378,   378,   378,
     156,   156,  -950,  -950,  -950,  -950,  -950,   374,   674,   634,
    -950,  -950,   676,   618,   683,   597,  -950,  -950,   279,   690,
    -950,  -950,  2116,  -950,   592,   888,  -950,    82,   594,  -950,
     688,  -950,  -950,  -950,  -950,   577,  -950,   684,   707,  -950,
    -950,   687,  -950,  -950,  -950,  -950,  -950,  -950,   711,  -950,
     698,  -950,   582,  1258,  -950,  2489,  -950,  -950,  -950,  -950,
    -950,   582,   699,    92,  1770,  -950,  2331,  -950,  -950,   428,
    -950,  -950,  -950,  1974,   713,  -950,   611,  1685,  -950,   540,
    -950,   577,  -950,   577,   183,   577,   714,   715,  -950,  -950,
    -950,   700,   693,  -950,   723,  -950,  -950,  2331,  -950,  -950,
     711,   582,   582,    82,   235,    82,   570,  -950,   540,   582,
    -950,  -950,    82,   625,  -950,   582,   706,   719,   621,  -950,
    -950,  -950,   720,   740,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,  2033,  -950,  -950,  1181,  -950,  -950,  -950,
     741,  -950,   619,   137,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,   615,  -950,  -950,   437,  2331,  -950,  2331,   742,   742,
    2707,   735,   737,  2127,   738,   739,  2331,   640,   744,  2331,
    -950,   637,  -950,   982,  -950,  -950,  -950,  -950,  -950,   724,
    -950,  -950,  -950,  -950,  -950,   728,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,  -950,   361,   424,  -950,  -950,  -950,   387,   475,   504,
    -950,   582,   582,   582,  -950,  -950,  -950,  -950,   597,  -950,
    -950,   721,   234,  -950,    18,   747,  1974,   712,  -950,  -950,
    -950,  -950,  -950,   758,   768,  1974,  1974,  2331,  1974,  -950,
    -950,  -950,  -950,   743,    15,    15,   672,  -950,  -950,    26,
    -950,   750,  -950,  -950,  -950,   470,  -950,   152,  -950,  -950,
    -950,   615,  -950,   665,  -950,  -950,  1974,  -950,  -950,   141,
    1338,  -950,  -950,  -950,   711,  -950,  -950,  -950,  -950,   774,
    -950,  -950,   766,   804,  -950,   152,   784,   152,  -950,  -950,
    2707,   476,  -950,   761,   764,   694,  2952,  2331,   776,  -950,
    2331,  2331,   778,   749,  2331,   779,  -950,  2391,  -950,  -950,
    -950,  -950,  -950,   791,   697,  -950,  -950,  -950,  -950,  -950,
    -950,   625,   801,  2263,   712,  -950,   792,   806,  -950,   803,
     807,  -950,   808,   805,  2195,  -950,   619,   820,    49,    53,
      82,  -950,   802,  -950,  -950,   819,   766,  1450,  2541,  -950,
    -950,   709,  -950,   829,   640,  -950,  -950,  -950,  -950,  -950,
    2832,  -950,  2892,  -950,  -950,  -950,    60,  -950,  -950,  -950,
    -950,   814,   821,    82,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,  2990,   577,  -950,   577,  -950,  2331,  -950,  -950,  -950,
     824,   809,  -950,   816,  -950,  -950,   838,  -950,   839,   845,
    -950,   847,   760,  -950,   848,  -950,  -950,  2195,  -950,   281,
    -950,  -950,  -950,  -950,  -950,    -7,  -950,   840,   220,  1838,
    1974,  -950,  -950,  -950,   711,  -950,   802,  -950,   820,  -950,
    -950,   863,  -950,  -950,   231,   625,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,  -950,   711,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,    11,   866,  -950,  -950,  -950,  -950,  -950,   353,  -950,
     770,   762,  -950,  -950,   864,  -950,  -950,  -950,  -950,  -950,
    -950,  -950,    11,  -950,  -950,  -950,  -950,   846,  2331,  2331,
     862,  2127,  -950,  2770,   611,   640,  -950,   640,   749,  2707,
    -950,  -950,   129,  -950,   854,  -950,  -950,  -950,  -950,  -950,
     853,   871,  -950,   867,   802,   294,  -950,  -950,   857,  2330,
    -950,  -950,  -950,   878,   770,   881,   582,   762,  -950,  3090,
    -950,   850,  -950,  -950,   876,   892,  3050,   879,   440,   894,
     895,   902,  -950,   860,   861,  -950,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,   243,   903,   749,  -950,  -950,  2263,  -950,
    -950,  2609,  -950,  -950,   820,   867,  -950,  -950,   866,  -950,
    -950,  -950,   676,  -950,  -950,  -950,  -950,   373,   163,  2489,
    -950,   372,   870,   900,  2707,  -950,  3012,  2770,  2952,  2331,
    2331,  2707,   577,   687,   907,   711,   640,   868,  -950,  -950,
    -950,   802,   770,   921,   917,  2116,   921,   918,    21,   928,
     930,   830,    29,  1685,   915,  -950,  -950,  -950,   934,  -950,
    -950,  -950,   920,   922,   937,   941,  -950,   842,  -950,  -950,
     640,   869,  -950,   945,  -950,  -950,  1759,  -950,  -950,   962,
     955,   582,    25,  1974,  1974,  -950,    37,  -950,  -950,  2707,
    2331,  2127,  2770,  2770,   582,  -950,   959,  -950,   850,   953,
     711,   950,   880,  -950,  -950,   963,   964,   966,   969,  -950,
     971,   946,   923,  -950,   676,  3119,   640,  -950,  -950,  -950,
    -950,  -950,  1974,   956,   957,  1974,  2770,  3012,  2770,   348,
    -950,   958,  -950,  -950,   360,    54,   749,  -950,   979,  -950,
    -950,   980,  -950,   981,  -950,  -950,   983,   965,   868,   973,
     976,  2770,  -950,  3119,  -950,  -950,  -950,  -950,  -950,  -950
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      74,     0,     2,    69,    70,    80,    73,     0,   393,     1,
      91,     0,     0,    76,    78,   371,   372,   373,     0,    79,
      81,    82,    83,    84,    72,    97,    94,   123,    89,    92,
     118,     0,   119,   120,    93,   308,     0,   309,     5,    60,
     390,     0,     4,     0,     0,     0,    96,     0,   392,    90,
     136,     0,     0,   138,   135,   134,   133,     0,   139,   137,
     141,   140,   122,   132,     0,   321,     0,   320,   319,   318,
     323,   322,   325,   324,   311,   317,   376,     0,     0,     0,
      85,     0,     0,     5,   125,   129,   125,     0,   125,    62,
     529,   393,   393,   393,   393,   393,   393,     0,    11,    15,
      17,    16,    13,    14,   393,    12,     0,     0,   531,     0,
     386,   393,    64,   393,     0,     9,    10,     0,    18,    21,
      22,    19,    20,     0,     0,   668,     0,     0,   383,     0,
     375,   379,     0,   382,     0,   667,   527,   530,   534,   543,
     535,   536,   537,   538,   528,   381,   620,   623,   625,   627,
     629,   631,   633,   641,   636,   644,   648,   651,   655,   656,
     659,   662,   669,   670,   665,   666,     5,    61,     0,    75,
       0,     0,     4,    37,   127,   124,   393,     0,   128,     0,
       0,   314,     0,    62,   664,    62,   237,   393,   677,   668,
     535,   536,     0,   583,     0,   584,   603,     0,   602,   657,
     660,   658,   661,     0,    58,   393,   393,   393,    21,   197,
     393,     0,     0,   198,   393,     0,   389,   274,   385,   663,
      28,    33,     0,   198,   393,    29,   198,    30,     0,   393,
     198,   198,   198,   393,   270,     0,   374,   377,   391,     8,
      27,     7,     0,   198,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   237,   393,   393,
     393,   393,   393,   393,   393,   393,   671,   672,     3,     0,
       0,    86,     0,   145,     0,    35,     0,    38,   393,   129,
     126,     0,   150,   147,     0,   278,   271,   299,   129,   356,
     353,   393,   316,   313,   380,    62,     0,   597,     0,   588,
     595,   393,     0,   533,   393,   611,   617,   609,   612,   613,
     610,   614,   608,   615,   616,   618,   619,   393,   541,    49,
      20,     0,    48,    50,     0,     0,    33,   182,   581,     0,
     182,     0,     0,   198,   555,     0,     0,     0,   542,   387,
     273,     0,    31,   540,     0,     0,     0,   574,    59,     0,
     539,     0,   532,     0,   198,     0,   544,     0,     0,     0,
     269,   567,    63,     0,    23,   554,     0,   545,     0,     0,
       0,   624,   626,   628,   630,   632,   635,   634,   637,   639,
     638,   640,   642,     0,   526,   643,   525,   645,   646,   647,
     649,   650,   654,   652,   653,    87,    88,   100,   143,    40,
      36,   142,   146,   131,   148,   274,   277,   281,     0,     0,
     291,   295,     0,   297,     0,   123,   326,     0,     0,   315,
     591,     5,   188,   240,   599,   198,   187,     0,   393,   185,
     186,   189,   192,   193,   190,   191,   236,   239,     0,   586,
     590,   673,   393,   393,   676,   123,   601,   600,   585,   604,
      44,   393,    45,    53,   396,   577,   393,   181,   575,   579,
     578,   576,   549,   270,     0,   571,     0,     0,   384,    32,
     570,   198,   573,   198,     0,   198,     0,     0,   568,   557,
     559,   565,     0,   378,     0,   569,   558,   393,   412,   411,
       0,     0,     0,     0,   115,     0,     0,    98,    37,   393,
      34,    39,     0,     0,   130,   393,   276,   279,     0,   283,
     287,   290,   293,   393,   298,   301,   304,   289,   361,   354,
     359,   360,   358,     0,   355,   357,     0,   107,   330,   310,
       0,   194,   393,     0,   201,   393,   202,   203,   182,   596,
     237,    43,   675,   674,    62,   393,   437,   393,   494,   494,
     393,     0,     0,   393,     0,     0,   393,     0,     0,   393,
     407,     0,   408,     0,   424,   263,   403,   404,   405,     0,
     406,   413,   425,   414,   426,     0,   415,   416,   427,   428,
     417,   429,   418,   473,   474,   430,   436,   431,   432,   434,
     433,   435,   447,   446,   441,   442,   443,     0,   444,   445,
      46,   393,   393,   393,    51,    52,   399,   184,   274,   395,
     183,     0,     0,   580,   551,     0,   270,   459,   678,   388,
      25,    24,   556,     0,     0,   270,   270,   393,   270,   622,
     621,   410,   176,   179,   110,   110,     0,   117,   116,     0,
     113,     0,    95,    99,   144,   677,    41,     0,   107,   154,
     121,   149,   154,     0,   275,   284,   270,   299,   296,     0,
     123,   342,   340,   341,     0,   337,   339,   369,   368,     0,
     363,   367,   327,   123,   592,     0,     0,     0,   180,   594,
     393,     0,   493,     0,     0,     0,   237,   393,     0,   480,
     393,   393,     0,     0,   393,     0,   400,   123,   409,   440,
      47,    54,    55,   397,     0,   582,   393,   553,   552,   547,
     550,   286,     0,   393,   461,   457,     0,     0,   572,     0,
       0,   566,     0,   174,   393,   177,     0,     0,     0,     0,
       0,    56,   101,   114,   104,    42,   151,   123,   123,   272,
     280,     0,   294,     0,     0,   302,   161,   305,   155,   159,
       0,   160,     0,   156,   157,   158,     0,   303,   306,   162,
     249,     0,     0,     0,   335,   328,   333,   334,   329,   331,
     332,     0,   198,   238,   198,   438,   393,   451,   492,   496,
       0,     0,   489,     0,   478,   237,     0,   497,     0,     0,
     498,     0,     0,   505,     0,   495,   402,   393,   394,     0,
     285,   546,   563,   468,   469,     0,   458,     0,     0,   393,
     270,   560,   561,   562,     0,   178,   112,   102,     0,   103,
     107,     0,   152,   153,   125,   286,   300,   250,   171,   169,
     168,   167,   170,   172,   173,   164,     0,   166,   211,   213,
     215,   210,   209,   208,   212,   216,   214,   222,   393,   221,
     205,     0,     0,   207,   257,   256,   255,   259,     0,   252,
     220,     0,   254,   336,     0,   106,   349,   350,   348,   347,
     351,   352,     0,   344,   346,   195,   196,     0,   393,   393,
     487,   393,   485,   393,     0,     0,   237,     0,   503,   393,
     398,   548,     0,   455,     0,   461,   454,   456,   463,   464,
       0,     0,   175,   108,   112,     0,    57,   282,     0,     0,
     248,   204,   247,     0,   220,     0,   393,     0,   219,   262,
     307,   182,   343,   452,     0,     0,   393,     0,    62,     0,
       0,     0,   448,     0,   413,   420,   421,   422,   423,   475,
     476,   453,   499,     0,     0,   502,   504,   470,   393,   466,
     460,   123,   462,   564,     0,   109,   105,   163,     0,   225,
     217,   225,   245,   246,   241,   244,   251,     0,     0,   123,
     261,     0,   366,     0,   393,   488,   393,   393,   237,   393,
     393,   393,   198,     0,   510,     0,     0,     0,   501,   467,
     465,   111,   220,   237,     0,     0,   237,   242,   198,     0,
       0,     0,   198,     0,     0,   365,   472,   490,     0,   482,
     486,   439,     0,     0,     0,     0,   449,   508,   507,   506,
       0,     0,   218,     0,   226,   233,     0,   235,   224,   230,
       0,   393,     0,   270,   270,   260,     0,   370,   362,   393,
     393,   393,   393,   393,   393,   511,     0,   500,   182,   231,
     393,     0,     0,   258,   243,     0,     0,     0,     0,   477,
       0,     0,     0,   471,   509,   237,     0,   223,   237,   234,
     229,   228,   270,     0,     0,   270,   393,   393,   393,   523,
     521,   517,   520,   522,     0,   535,   502,   232,     0,   266,
     265,     0,   491,     0,   450,   516,     0,   518,   514,     0,
       0,   393,   515,   237,   513,   512,   267,   268,   484,   519
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -950,  -950,   836,   322,  -950,   -56,    12,  -950,  -950,   -46,
     -74,     8,  -170,  -487,  -188,    13,  -950,   511,  -950,   736,
    -950,  -950,  -950,   398,  -950,  -950,  -425,  -950,  -950,  -950,
    -703,    24,     0,   -21,  -950,   995,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  1009,  -950,  -950,  -950,  -950,  -950,
    -950,   988,  -950,  -950,  -950,   520,  -615,   385,   117,  -950,
     386,     4,  -950,  -950,   351,  -950,  -123,  -950,  -950,  -495,
    -950,  -950,  -950,  -950,   733,  -950,  -950,   524,   376,   375,
    -950,  -950,  -950,  -950,  -630,  -950,   215,  -950,  -431,  -326,
    -686,  -209,  -950,  -950,    90,    94,   258,  -950,  -950,  -950,
    -950,  -950,  -950,   270,  -889,   139,    88,    95,    65,  -950,
    -950,  -950,  -950,   -19,  -171,  -165,  -950,  -950,  -950,  -950,
      33,   193,  -950,  -950,  -950,   395,  -950,  -950,   210,   153,
    -950,   102,  -950,  -245,  -950,  -950,  -386,  -950,  -950,  -950,
    -950,   422,  -950,   254,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,   423,  -950,  -950,  -950,  -950,  -950,  -950,  -950,    -5,
    -437,  -429,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,
     408,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,  -950,
    -950,  -950,  -950,  -950,  -950,    91,  -950,  -950,  -950,  -950,
     722,  -101,  -950,  -950,  -950,  -950,  -950,  -950,    -8,   214,
    -950,  -950,  -950,  -227,   133,  -950,   389,  -950,  -950,  -254,
    -950,    77,  -918,  -406,  -950,  -950,  -950,  -950,  -649,  -950,
    -950,  -950,  -950,  -950,   199,  -950,  -950,   192,   280,  -950,
    -704,  -950,   142,  -950,  -950,  -950,  -950,  -950,  -950,   113,
    -861,    20,  -950,  -950,  -950,  -949,  -950,  -950,  -950,  -950,
     543,  -950,  -950,  -950,   289,  -950,  -950,    23,   406,  -950,
     216,  -950,  -950,  -950,     7,  -950,  -950,  -950,  -950,  -950,
    -950,     9,  -950,  -950,  -950,  -896,  -950,  -950,   170,  -229,
    -950,  -950,  -950,  -950,    42,    99,   246,  -950,  -950,  -950,
    -950,   904,  -950,   655,    22,  -399,  -950,  -950,  -950,  -950,
    -950,   575,  -950,  -950,  -950,   303,  -950,  -950,   -75,  -950,
     882,   883,   884,   875,   886,   285,  -950,   306,   293,   284,
     537,   325,   409,   691,   493,   553,   572,  -950,   481,  -950
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    78,    39,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   457,   342,   273,   274,   275,
     500,   501,   444,   209,   321,   452,   322,   323,   604,   605,
     732,   123,   124,   189,   126,    41,   127,     2,     3,     4,
       5,     6,     7,    13,     8,    19,    20,    21,    22,    23,
      27,    28,    24,    47,   496,   497,   672,   728,   903,   639,
     640,   560,    30,    31,   858,   279,   177,   503,    62,   175,
     276,   398,   280,   178,   283,   404,   504,   800,   737,   823,
     748,   749,   750,   835,   631,   723,   632,   725,   633,   458,
     606,   849,   429,   430,   431,   432,   210,   433,   434,   435,
     751,   752,   850,   851,   917,   852,   914,   993,  1023,   994,
    1052,  1024,  1049,  1025,   383,  1027,   436,   918,   964,   997,
     965,   911,   753,   754,   755,   824,   859,   860,   861,   920,
     969,   561,   970,   359,    32,   286,   341,   653,   405,   406,
     507,   407,   408,   801,   509,   654,    33,   288,   409,   410,
     512,   411,   412,   413,   514,   517,   660,   757,   758,   759,
      35,    36,   292,   418,    74,   293,   419,   529,   673,   768,
     522,   523,   665,   770,   771,   873,    37,   290,   415,   524,
     525,   526,  1004,   670,  1005,    48,    15,   129,   130,   237,
     131,   132,   133,   217,   218,   339,    16,    17,   134,   607,
     608,   609,   703,   564,   565,   697,   566,   567,   568,   569,
     490,   570,   933,   571,   572,   573,   935,   574,   575,   576,
     577,   936,   578,   579,   618,   808,   714,   805,   715,   806,
     716,   892,   803,   580,   937,   581,   582,   938,   583,   783,
     688,  1008,   939,   784,  1009,   785,   880,   584,   940,   585,
     683,   586,   587,   588,   589,   590,   591,   987,   988,   888,
     793,   944,   985,  1017,  1021,  1047,  1105,  1066,  1096,  1081,
    1097,  1082,  1083,   385,   386,   135,   136,   137,   138,   139,
     332,   614,   709,   710,   190,   191,   142,   360,   481,   143,
     144,   327,   459,   328,   361,   193,   194,   298,   299,   420,
     440,   300,   438,   448,   195,   196,   197,   317,   198,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   302,   165
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   145,   356,   384,   461,    34,   282,   539,   562,   216,
     807,    40,   646,   367,    29,   296,   563,   320,    44,   506,
     927,   297,    34,   971,   816,   960,   600,  1010,   477,   731,
     207,    29,   365,   736,   761,   145,   187,   782,   815,   726,
     484,   910,   706,    79,   542,   245,   188,   713,   206,   205,
     253,    38,   205,   254,   168,   125,   255,   256,   204,  1011,
     205,    11,     9,    83,    40,   251,   334,  -524,    -6,   320,
     125,    38,   125,   125,   125,   125,   -71,   446,    18,   817,
      -5,   294,   166,   819,  -524,    38,   205,   428,   629,   125,
     125,   173,   257,   171,   205,   252,   211,    46,    14,  -198,
     354,   894,   281,  1022,    11,   221,    26,   145,   354,   893,
     221,   890,   208,   221,   192,   904,   727,   246,   140,   637,
    1055,   282,    63,   445,  1062,  1063,   220,    75,  1010,   638,
     187,   225,  1058,   140,   227,   140,   140,   140,   140,   707,
     188,    43,   397,    87,   854,   855,   241,   856,   948,    26,
     818,  -312,   140,   140,   818,    83,   403,   602,  1092,   319,
    1094,   125,   676,   263,   258,   414,   743,   128,   284,  1084,
     264,   259,   168,   260,   489,   141,   700,    42,   169,   221,
    1061,    11,   265,  1108,   208,    11,   622,   603,   949,   205,
     141,    18,   141,   141,   141,   141,    11,   324,   326,   326,
     220,   128,   331,   513,   281,   905,   908,  1084,   192,   141,
     141,   382,   678,   208,   205,   350,   345,   281,   615,   325,
     329,   349,   704,   241,   140,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   337,   125,   125,   125,
     125,   125,   125,   125,   125,  -198,   421,   894,   269,   212,
     896,   991,   205,   351,   213,   358,   352,   848,   999,   270,
     562,  1000,   173,   320,   277,   208,   369,   370,   563,  -284,
     284,   462,   541,   128,   713,    11,   848,   975,    11,   456,
     125,   141,   508,   284,   891,    76,   402,    11,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   208,
     140,   140,   140,   140,   140,   140,   140,   140,   426,   423,
    -284,    77,    11,   763,   664,   854,   855,   669,   856,   221,
     427,    -6,   221,    11,   956,    11,   447,   782,   637,   782,
     693,    80,    11,    -5,   469,   651,   241,   -80,   638,   449,
     -80,    81,   -77,   140,   182,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,    83,   141,   141,   141,
     141,   141,   141,   141,   141,   277,   619,    82,   281,   296,
      12,   712,   231,    84,    85,   297,   170,   232,  -534,    86,
     719,   720,  -534,   722,   242,  -534,   474,   437,    88,   243,
    -534,   475,   145,   233,   261,   426,  1002,   998,   262,   167,
     141,   243,   232,   167,   266,   319,  -534,   427,   267,   180,
     521,   741,   630,   320,   320,   320,   166,   527,   233,   520,
     533,   221,   125,   221,   426,   645,   221,   173,   782,   963,
     172,   281,   781,   760,   284,   174,   427,   179,   491,   181,
     176,  -537,   534,   324,   536,  -537,   125,   537,  -537,    -6,
     208,   612,    -6,  -537,   442,   492,   240,   203,   443,   208,
     493,    -5,   214,   494,    -5,   680,   125,   215,   977,  -537,
     335,   336,  -393,  -393,   437,    -6,   610,   934,   611,   495,
     222,   344,  -593,   223,   346,   140,  -587,    -5,   353,   355,
     357,   647,  -669,   636,   224,   641,  -669,   284,   364,   510,
     366,   368,   648,   515,   776,   659,   777,   208,    -6,   140,
     760,   760,   226,   208,   562,   634,   635,   827,   228,  -587,
      -5,  -670,   563,   229,   675,  -670,   230,   677,   234,   140,
     221,   882,   562,   333,   235,   426,   376,   377,   426,   455,
     563,   836,   141,   460,   963,   390,   391,   427,   236,   238,
     427,   387,   388,   389,  1018,   319,   701,   702,   128,   378,
     379,   380,   381,   244,   247,   901,   141,   192,   248,   681,
     249,   934,   250,  -606,   268,   689,  -606,   271,   692,   278,
    -606,   695,   898,  -606,    11,   204,   141,  -606,   287,   277,
     285,   364,  -606,   324,   289,   972,   399,   291,  -606,   301,
    -606,   303,   304,   318,   -26,  -606,   333,  -606,   205,   208,
     208,   208,   338,  -606,   666,   592,   340,   671,   425,  1069,
     347,   343,   348,   362,   912,   363,   395,   685,   184,   396,
     199,   200,   201,   202,   491,   401,   934,   934,   804,   -22,
    -292,   417,   439,   451,   450,   912,   240,    64,   219,   721,
     454,   492,    65,   463,    75,   464,   493,   465,   942,   494,
     945,   466,   467,   470,   746,   468,   472,   471,   767,   476,
     934,   473,   934,   477,   478,   495,   479,   766,    66,  -606,
     480,   482,   484,   531,   485,   486,   642,    67,    68,   487,
      69,   593,   125,   498,    70,   934,    71,    72,   799,   499,
     -21,   502,   505,   511,   516,   425,   528,   530,   532,   786,
    -598,   535,   788,   789,   538,   943,   794,   540,   601,   627,
     592,    73,  1067,   617,  1012,   616,   625,   626,   182,   620,
     820,   621,   623,   624,   425,   628,   652,   649,   655,   657,
     656,   746,   746,   658,   674,   682,   610,   686,   594,   687,
     690,   691,   445,   696,   698,   140,   694,   775,   699,  1019,
     711,   717,   426,   865,   426,  -607,   713,   705,  -607,   356,
     595,   718,  -607,   367,   427,  -607,   427,   762,   724,  -607,
     734,   739,   730,   426,  -607,   763,  1029,   773,  1056,  1057,
    -607,   778,  -607,  1045,   779,   427,   593,  -607,   877,  -607,
     392,   393,   394,   780,   791,  -607,   787,  -338,   790,   795,
     797,  1080,   141,   798,   802,   809,   811,  1050,   810,   610,
     812,   813,  1026,   731,   814,  1026,   821,  1088,   442,   825,
    1091,   900,   826,   864,   764,  -345,   878,   879,   441,  1086,
     909,   837,   281,   853,   863,   425,   881,   862,   425,  1080,
     592,   883,   884,   594,   596,  -338,   592,  -338,   885,   886,
    -338,   889,   874,  -345,   887,  -338,   906,   592,   895,   913,
     916,  -607,  -338,   804,   919,   595,   923,   921,  -338,  -312,
    -338,   926,   950,   952,   953,   305,   954,   957,   306,   973,
     959,  -338,   307,   961,  -393,   308,  -338,  1026,   967,   309,
     924,   925,  1037,   689,   310,   974,   978,   979,   647,   976,
     311,  -345,   312,   221,   980,   862,   986,   313,   518,   314,
     765,   426,   981,  -419,   962,   315,   593,   125,   145,  1003,
    1006,  -192,   593,   427,  -227,  1020,  1028,  1031,   597,  -338,
    1033,  -338,  1034,   593,  -338,  1038,  1035,  1039,  1040,  -338,
    1042,   995,  1041,   995,  1043,  1044,  -338,   281,  1048,   596,
     932,   140,  -338,  -312,  -338,  1051,   947,   427,  1053,   240,
     281,  1065,  1068,  1046,  1070,  1072,  1077,  1073,  1071,  1074,
    -338,  1075,   125,   594,  1076,  1078,  1089,  1090,  1095,   594,
     140,   316,  1099,  1100,  1101,  1103,  1102,   772,   598,   774,
     594,  1014,  1015,  1106,   519,   595,  1107,   426,   272,   644,
     400,   595,   708,    45,    10,    49,   643,   599,   141,   427,
     729,   955,   595,   647,   416,   733,    11,   650,   738,   902,
     875,    65,   876,   983,   437,   747,   284,   984,   426,   962,
     221,   872,   533,   597,  1079,   140,   992,   141,   958,  1087,
     427,  1007,  1064,   592,   775,   756,   996,    66,  1016,   592,
     421,  1030,  1060,   689,  1054,   922,    67,    68,   915,    69,
     966,  1001,   425,    70,   425,    71,    72,   740,   857,   907,
     742,   769,  1079,   941,   990,   483,   796,   951,   897,   596,
     989,  1013,   684,   425,   128,   596,   592,  1093,   899,   792,
      73,    11,   141,   598,   946,  1104,   596,  1085,   422,  1098,
      98,   330,  1109,    99,   613,   679,  1059,   437,   100,   932,
     947,   592,   599,   423,   374,   101,   735,     0,   371,   593,
     372,   102,   373,   103,   543,   593,   375,     0,     0,   592,
       0,     0,     0,     0,   592,  1085,   592,   592,   592,   105,
       0,   592,     0,  1007,     0,  1016,     0,     0,     0,     0,
       0,     0,     0,   424,   141,     0,     0,     0,     0,     0,
       0,     0,   593,   597,     0,     0,     0,   968,  1059,   597,
     857,     0,     0,     0,   421,     0,   594,     0,     0,     0,
     597,     0,   594,     0,     0,     0,     0,   593,     0,     0,
       0,     0,   141,     0,     0,     0,     0,     0,   595,   592,
       0,     0,   592,   592,   595,   593,     0,     0,     0,     0,
     593,     0,   593,   593,   593,    11,     0,   593,     0,   594,
     667,   425,   422,   598,    98,     0,     0,    99,     0,   598,
     531,     0,   100,     0,     0,     0,   592,   592,   592,   101,
     598,   595,   599,     0,   594,   102,  1032,   103,   599,     0,
    1036,   185,    90,    91,     0,   982,     0,     0,   668,   599,
     186,   592,   594,   105,     0,     0,   595,   594,     0,   594,
     594,   594,     0,     0,   594,   593,     0,     0,   593,   593,
       0,     0,   596,     0,   595,     0,     0,     0,   596,   595,
       0,   595,   595,   595,     0,     0,   595,     0,     0,    97,
       0,    98,     0,     0,    99,     0,     0,   425,     0,   100,
       0,     0,   593,   593,   593,     0,   101,     0,     0,     0,
       0,     0,   102,     0,   103,   596,     0,   104,     0,     0,
       0,  -165,   594,     0,     0,   594,   594,   593,   425,     0,
     105,     0,     0,   106,   107,     0,   108,     0,     0,     0,
     596,     0,     0,     0,   595,   109,     0,   595,   595,  -206,
       0,     0,     0,     0,     0,   111,   597,     0,   596,   594,
     594,   594,   597,   596,     0,   596,   596,   596,     0,  -165,
     596,  -165,     0,     0,  -165,     0,     0,     0,     0,  -165,
       0,   595,   595,   595,   594,     0,  -165,     0,     0,     0,
       0,     0,  -165,  -312,  -165,     0,  -206,     0,     0,   597,
       0,     0,     0,     0,     0,     0,   595,     0,     0,     0,
    -165,   744,     0,     0,     0,  -206,   598,     0,     0,     0,
    -165,     0,   598,     0,   597,  -206,  -165,     0,   596,     0,
     445,   596,   596,  -165,   745,   599,     0,     0,     0,     0,
       0,   599,   597,     0,     0,     0,     0,   597,     0,   597,
     597,   597,     0,     0,   597,     0,     0,     0,     0,   598,
       0,  -206,     0,     0,     0,   596,   596,   596,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   599,     0,
       0,  -165,     0,  -165,   598,     0,  -165,     0,     0,     0,
     596,  -165,     0,     0,     0,     0,     0,     0,  -165,     0,
       0,     0,   598,   599,  -165,  -312,  -165,   598,  -206,   598,
     598,   598,   597,     0,   598,   597,   597,     0,     0,     0,
       0,   599,  -165,   744,     0,     0,   599,  -206,   599,   599,
     599,     0,  -165,   599,     0,     0,     0,  -206,  -165,     0,
       0,     0,   445,     0,     0,     0,   822,     0,     0,   597,
     597,   597,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   598,     0,   597,   598,   598,     0,     0,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
       0,   599,    92,     0,   599,   599,    93,    94,     0,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,   598,
     598,   598,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,   599,   599,
     599,    97,     0,    98,   598,     0,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,   101,     0,
       0,     0,     0,   599,   102,     0,   103,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,   183,    90,
      91,     0,   105,     0,     0,   106,   107,    92,   108,     0,
       0,    93,    94,     0,     0,    95,    96,   109,     0,     0,
       0,     0,   110,     0,     0,     0,     0,   111,  -605,     0,
       0,  -605,     0,     0,     0,  -605,     0,     0,  -605,    11,
       0,     0,  -605,     0,   231,     0,    97,  -605,    98,   232,
       0,    99,     0,  -605,     0,  -605,   100,     0,     0,     0,
    -605,     0,  -605,   101,     0,   233,     0,     0,  -605,   102,
       0,   103,   421,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,   185,    90,    91,     0,   105,     0,     0,
     106,   107,   186,   108,     0,     0,    93,    94,     0,     0,
      95,    96,   109,     0,     0,     0,     0,   110,     0,     0,
       0,     0,   111,    11,     0,     0,     0,     0,     0,     0,
     422,     0,    98,     0,  -393,    99,     0,     0,     0,     0,
     100,    97,     0,    98,  -605,   423,    99,   101,     0,     0,
       0,   100,     0,   102,     0,   103,     0,     0,   101,     0,
       0,   185,    90,    91,   102,     0,   103,     0,     0,   104,
     186,   105,     0,     0,    93,    94,     0,     0,    95,    96,
       0,     0,   105,     0,     0,   106,   107,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,   454,     0,     0,     0,     0,   111,     0,    97,
       0,    98,     0,     0,    99,     0,     0,     0,    83,   100,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   295,
      90,    91,   102,     0,   103,     0,     0,   104,   186,  -589,
       0,     0,    93,    94,     0,     0,    95,    96,     0,     0,
     105,     0,     0,   106,   107,     0,   108,   556,   453,    11,
       0,     0,     0,     0,     0,   109,   239,     0,    98,     0,
     445,    99,     0,     0,     0,   111,   100,    97,     0,    98,
       0,     0,    99,   101,     0,     0,    83,   100,     0,   102,
       0,   103,     0,     0,   101,     0,     0,   185,    90,    91,
     102,     0,   103,     0,     0,   104,   186,   105,     0,     0,
      93,    94,     0,     0,    95,    96,     0,     0,   105,     0,
       0,   106,   107,     0,   108,     0,     0,    11,     0,     0,
       0,     0,     0,   109,   239,     0,    98,     0,  -393,    99,
       0,     0,     0,   111,   100,    97,     0,    98,     0,     0,
      99,   101,     0,     0,     0,   100,   421,   102,     0,   103,
       0,     0,   101,     0,     0,   185,    90,    91,   102,     0,
     103,     0,     0,   104,   186,   105,     0,     0,    93,    94,
       0,     0,    95,    96,     0,     0,   105,     0,     0,   106,
     107,     0,   108,     0,     0,     0,     0,    11,     0,     0,
       0,   109,     0,     0,   422,     0,    98,     0,     0,    99,
       0,   111,     0,    97,   100,    98,     0,     0,    99,   661,
       0,   101,     0,   100,     0,     0,     0,   102,     0,   103,
     101,     0,     0,     0,     0,     0,   102,     0,   103,   421,
     662,   104,     0,     0,     0,   105,   663,     0,     0,     0,
     185,    90,    91,     0,   105,     0,     0,   106,   107,   186,
     108,     0,     0,    93,    94,     0,     0,    95,    96,   109,
       0,     0,     0,     0,   445,     0,     0,  -481,     0,   111,
      11,     0,     0,     0,     0,     0,     0,   422,     0,    98,
       0,     0,    99,     0,     0,     0,     0,   100,    97,     0,
      98,     0,     0,    99,   101,     0,     0,     0,   100,   421,
     102,     0,   103,     0,     0,   101,     0,     0,   185,    90,
      91,   102,     0,   103,     0,     0,   104,   186,   105,     0,
       0,    93,    94,     0,     0,    95,    96,     0,     0,   105,
       0,     0,   106,   107,     0,   108,     0,     0,     0,     0,
      11,     0,     0,     0,   109,     0,     0,   422,     0,    98,
       0,     0,    99,     0,   111,     0,    97,   100,    98,     0,
       0,    99,   423,     0,   101,     0,   100,     0,     0,     0,
     102,     0,   103,   101,     0,     0,   183,    90,    91,   102,
       0,   103,     0,     0,   104,    92,     0,     0,   105,    93,
      94,     0,     0,    95,    96,     0,     0,   105,     0,     0,
     106,   107,   488,   108,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,   454,     0,     0,
       0,     0,   111,     0,    97,     0,    98,     0,     0,    99,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,   101,     0,   421,   185,    90,    91,   102,     0,   103,
       0,     0,   104,   186,     0,     0,     0,    93,    94,     0,
       0,    95,    96,     0,     0,   105,     0,     0,   106,   107,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,    11,     0,     0,     0,     0,     0,
     111,   422,    97,    98,    98,     0,    99,    99,     0,     0,
       0,   100,   100,     0,   544,    90,     0,     0,   101,   101,
       0,     0,     0,   545,   102,   102,   103,   103,    94,     0,
     104,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,   546,   105,   105,     0,     0,   106,   107,     0,   108,
       0,     0,     0,     0,     0,     0,     0,   847,   109,     0,
       0,   547,    97,   548,    98,  -401,     0,    99,   111,   549,
       0,   550,   100,     0,     0,     0,     0,     0,     0,   101,
     551,   552,     0,     0,     0,   102,  -312,   103,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   553,     0,   105,     0,     0,   106,   554,   555,   108,
     556,     0,   544,    90,     0,   557,     0,  -237,   109,     0,
     558,   545,   559,   445,     0,     0,    94,  -401,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   547,
      97,   548,    98,     0,  -165,    99,     0,   549,     0,   550,
     100,     0,     0,     0,     0,     0,     0,   101,   551,   552,
       0,     0,     0,   102,  -312,   103,     0,     0,   104,     0,
       0,     0,  -206,     0,     0,     0,     0,     0,     0,   553,
       0,   105,     0,     0,   106,   554,   555,   108,   556,     0,
       0,     0,  -165,   557,  -165,  -237,   109,  -165,   558,     0,
     559,   445,  -165,     0,     0,  -264,     0,     0,     0,  -165,
       0,     0,   544,    90,     0,  -165,  -312,  -165,     0,  -206,
       0,   545,     0,     0,     0,     0,    94,     0,     0,     0,
      96,     0,     0,  -165,   744,     0,     0,     0,  -206,   546,
       0,     0,     0,  -165,     0,     0,     0,     0,  -206,  -165,
       0,     0,     0,   445,     0,     0,     0,  -288,     0,   547,
      97,   548,    98,   713,     0,    99,     0,   549,     0,   550,
     100,     0,     0,     0,     0,     0,     0,   101,   551,   552,
       0,     0,     0,   102,  -312,   103,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   553,
       0,   105,     0,     0,   106,   554,   555,   108,   556,     0,
     544,    90,     0,   557,     0,  -237,   109,     0,   558,   545,
     559,   445,     0,     0,    94,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   547,    97,   548,
      98,     0,     0,    99,     0,   549,     0,   550,   100,     0,
       0,     0,     0,   928,    90,   101,   551,   552,     0,     0,
       0,   102,   545,   103,     0,     0,   104,    94,     0,     0,
       0,    96,     0,     0,     0,     0,     0,   553,     0,   105,
     546,     0,   106,   554,   555,   108,   556,     0,     0,     0,
       0,   557,     0,     0,   109,     0,   558,     0,   559,   445,
     547,    97,   548,    98,     0,     0,    99,     0,   549,     0,
     550,   100,     0,     0,     0,   421,     0,     0,   101,   929,
     930,     0,     0,     0,   102,     0,   103,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     553,     0,   105,     0,     0,   106,   554,   555,   108,   556,
       0,     0,     0,     0,   557,     0,    11,   109,     0,   931,
       0,   559,   445,   422,     0,    98,     0,     0,    99,     0,
       0,     0,     0,   100,     0,   421,     0,     0,   828,     0,
     101,     0,     0,     0,     0,     0,   102,     0,   103,     0,
       0,     0,     0,     0,     0,     0,   829,   830,     0,   831,
       0,     0,     0,   173,   105,   832,     0,     0,     0,     0,
       0,     0,     0,     0,   833,     0,    11,     0,     0,     0,
     834,   838,     0,   422,     0,    98,     0,     0,    99,     0,
       0,     0,     0,   100,     0,   183,    90,     0,   839,     0,
     101,     0,     0,     0,   545,     0,   102,     0,   103,    94,
     840,     0,     0,    96,     0,     0,   841,   842,     0,   843,
       0,     0,  -479,     0,   105,   844,   845,     0,     0,   846,
       0,     0,     0,   421,     0,     0,     0,     0,     0,   847,
       0,     0,     0,    97,     0,    98,     0,     0,    99,     0,
       0,     0,     0,   100,     0,   183,    90,     0,     0,     0,
     101,   173,     0,     0,   545,  -483,   102,     0,   103,    94,
       0,   104,     0,    96,    11,     0,     0,     0,     0,   866,
       0,   422,     0,    98,   105,     0,    99,   106,     0,   867,
     108,   100,     0,   183,    90,     0,     0,     0,   101,   109,
       0,     0,   545,    97,   102,    98,   103,    94,    99,     0,
       0,    96,     0,   100,   868,     0,     0,   869,     0,     0,
     101,     0,   105,   870,   871,     0,   102,     0,   103,     0,
       0,   104,     0,   183,    90,     0,     0,   847,     0,     0,
       0,    97,   545,    98,   105,     0,    99,   106,     0,     0,
     108,   100,     0,     0,     0,     0,     0,     0,   101,   109,
       0,   205,   183,    90,   102,     0,   103,     0,     0,   104,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,   105,    98,     0,   106,    99,     0,   108,     0,
       0,   100,     0,     0,     0,     0,     0,   109,   101,     0,
       0,     0,     0,     0,   102,     0,   103,     0,     0,   104,
      97,     0,    98,     0,     0,    99,     0,     0,     0,     0,
     100,    11,   105,     0,     0,   106,    50,   101,   108,     0,
       0,     0,     0,   102,    51,   103,     0,   109,   104,     0,
      52,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,   106,     0,     0,   108,     0,     0,
       0,    54,    55,     0,    56,    57,   109,     0,    58,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
       8,    76,   231,   257,   330,    10,   176,   438,   445,   110,
     714,    11,   499,   242,    10,   186,   445,   205,    18,   405,
     881,   186,    27,   919,   727,   914,   451,   976,     3,     3,
     104,    27,     3,   648,   664,   110,    92,   686,   724,    24,
       3,    30,    24,    43,   443,    43,    92,    54,   104,    31,
      31,     3,    31,    34,    24,    76,    37,    38,     3,   977,
      31,    44,     0,     3,    64,     6,     3,    13,    12,   257,
      91,     3,    93,    94,    95,    96,     0,   304,    72,    30,
      24,   182,     3,    30,    30,     3,    31,   296,   487,   110,
     111,    31,    73,    14,    31,    36,   104,    80,     7,    44,
      79,   805,   176,   992,    44,   113,    30,   182,    79,   116,
     118,   797,   104,   121,    92,   818,   101,   115,    76,    93,
      95,   291,    31,   112,  1042,  1043,   113,    36,  1077,   103,
     186,   118,    95,    91,   121,    93,    94,    95,    96,   121,
     186,    93,   112,    75,    84,    85,   134,    87,    19,    30,
     101,    75,   110,   111,   101,     3,   279,    65,  1076,   205,
    1078,   182,    25,     7,    32,   288,    25,    76,   176,  1065,
      14,    39,    24,    41,   383,    76,   601,     3,    30,   187,
    1041,    44,    26,  1101,   176,    44,     3,    95,    59,    31,
      91,    72,    93,    94,    95,    96,    44,   205,   206,   207,
     187,   110,   210,   412,   278,   820,   836,  1103,   186,   110,
     111,   257,   538,   205,    31,    57,   224,   291,   463,   206,
     207,   229,   608,   211,   182,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   214,   258,   259,   260,
     261,   262,   263,   264,   265,    24,     3,   951,     3,    24,
      30,   954,    31,    95,    29,   233,    98,   752,    95,    14,
     697,    98,    31,   451,   173,   257,   244,   245,   697,     3,
     278,     3,   442,   182,    54,    44,   771,   926,    44,    45,
     301,   182,     3,   291,     3,    12,   278,    44,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   291,
     258,   259,   260,   261,   262,   263,   264,   265,   296,    66,
      44,    24,    44,    19,   523,    84,    85,   526,    87,   327,
     296,    12,   330,    44,    30,    44,   304,   976,    93,   978,
     557,    30,    44,    24,   342,   505,   324,    77,   103,   317,
      80,    24,    82,   301,    35,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,     3,   258,   259,   260,
     261,   262,   263,   264,   265,   274,   467,    77,   442,   540,
      82,   616,    24,    51,    52,   540,    24,    29,    17,    57,
     625,   626,    21,   628,    24,    24,    24,   296,    66,    29,
      29,    29,   467,    45,    16,   383,    24,    24,    20,    77,
     301,    29,    29,    81,    17,   451,    45,   383,    21,    87,
     415,   656,   487,   601,   602,   603,     3,   417,    45,   415,
     428,   429,   443,   431,   412,   499,   434,    31,  1077,   916,
       3,   505,   686,   660,   442,    84,   412,    86,    64,    88,
      71,    17,   429,   451,   431,    21,   467,   434,    24,    12,
     442,   459,    12,    29,     9,    81,   134,    24,    13,   451,
      86,    24,    12,    89,    24,    28,   487,    24,    28,    45,
     212,   213,    44,    45,   383,    12,   454,   883,   456,   105,
      24,   223,    19,    29,   226,   443,    23,    24,   230,   231,
     232,   499,    17,   493,    24,   495,    21,   505,   240,   408,
     242,   243,   502,   412,    28,   513,    30,   499,    12,   467,
     737,   738,    29,   505,   951,   491,   492,   744,    29,    23,
      24,    17,   951,    24,   532,    21,    24,   535,    12,   487,
     538,   785,   969,   211,    24,   523,   251,   252,   526,   325,
     969,   750,   443,   329,  1031,   261,   262,   523,    13,    13,
     526,   258,   259,   260,   985,   601,   602,   603,   467,   253,
     254,   255,   256,    45,    10,   810,   467,   545,   113,   547,
      47,   977,     9,     8,     3,   553,    11,    30,   556,    65,
      15,   559,   809,    18,    44,     3,   487,    22,    12,   498,
     112,   333,    27,   601,   112,   921,   274,    65,    33,    13,
      35,    13,    23,    57,    83,    40,   284,    42,    31,   601,
     602,   603,    57,    48,   523,   445,    19,   526,   296,  1050,
      79,    57,     3,     3,   851,    19,    30,   550,    91,    30,
      93,    94,    95,    96,    64,    37,  1042,  1043,   713,    24,
      13,    83,    13,    19,    37,   872,   324,    44,   111,   627,
     112,    81,    49,    12,   563,     3,    86,     3,   885,    89,
     887,    13,    19,     3,   660,   116,    79,   345,   673,     3,
    1076,   349,  1078,     3,     3,   105,    46,   673,    75,   114,
      13,     3,     3,   425,     3,    46,   116,    84,    85,    28,
      87,   445,   713,    19,    91,  1101,    93,    94,   706,    65,
      24,    83,    19,    13,   112,   383,   112,    19,    24,   687,
       3,    24,   690,   691,     3,   886,   694,    19,    19,    19,
     550,   118,  1048,   112,   978,    12,    12,    12,    35,   471,
     730,   473,   474,   475,   412,    12,    30,   112,    19,    19,
     119,   737,   738,     3,     3,     3,   724,    12,   445,    12,
      12,    12,   112,   116,    30,   713,    12,   680,    30,   986,
      13,     3,   750,   763,   752,     8,    54,    46,    11,   998,
     445,     3,    15,  1002,   750,    18,   752,     3,    35,    22,
      30,   116,   110,   771,    27,    19,   995,     3,  1033,  1034,
      33,    30,    35,  1020,    30,   771,   550,    40,   776,    42,
     263,   264,   265,   109,    55,    48,    30,     3,    30,    30,
      19,  1065,   713,   116,    13,    23,    13,  1026,    12,   797,
      13,    13,   993,     3,    19,   996,    24,  1072,     9,   120,
    1075,   809,     3,    12,    30,    31,    12,    28,   301,  1066,
     848,   750,   916,   752,    30,   523,    30,   756,   526,  1103,
     680,    13,    13,   550,   445,    51,   686,    53,    13,    12,
      56,    13,   771,    59,   104,    61,     3,   697,    28,     3,
     100,   114,    68,   948,   112,   550,    30,    13,    74,    75,
      76,    19,    28,    30,    13,     8,    19,    30,    11,    13,
      12,     3,    15,    12,    44,    18,    92,  1068,   919,    22,
     878,   879,  1003,   881,    27,    13,    12,    12,   916,    30,
      33,   107,    35,   921,    12,   824,    13,    40,    30,    42,
     116,   909,    62,    62,   916,    48,   680,   948,  1003,    59,
      30,    24,   686,   909,    13,    67,    19,    19,   445,    51,
      12,    53,    12,   697,    56,    30,   116,    13,    28,    61,
      13,   959,    30,   961,    13,   113,    68,  1031,    13,   550,
     883,   919,    74,    75,    76,     3,   889,   943,    13,   647,
    1044,    12,    19,   104,    24,    12,    30,    13,    98,    13,
      92,    12,  1003,   680,    13,    62,    30,    30,    30,   686,
     948,   114,    13,    13,    13,    30,    13,   675,   445,   677,
     697,   979,   980,    30,   116,   680,    30,   995,   172,   498,
     274,   686,   614,    18,     5,    27,   496,   445,   919,   995,
     635,   904,   697,  1031,   291,   639,    44,   503,   652,   814,
     772,    49,   774,   943,   943,   660,  1044,   943,  1026,  1031,
    1048,   771,  1050,   550,  1065,  1003,   958,   948,   909,  1068,
    1026,   974,  1044,   883,   977,   660,   961,    75,   981,   889,
       3,   996,  1040,  1041,  1031,   872,    84,    85,   858,    87,
     917,   969,   750,    91,   752,    93,    94,   655,   756,   825,
     657,   673,  1103,   884,   951,   363,   697,   895,   808,   680,
     948,   978,   549,   771,  1003,   686,   926,  1077,   809,   693,
     118,    44,  1003,   550,   888,  1098,   697,  1065,    51,  1086,
      53,   207,  1103,    56,   459,   540,  1039,  1026,    61,  1042,
    1043,   951,   550,    66,   249,    68,   645,    -1,   246,   883,
     247,    74,   248,    76,   443,   889,   250,    -1,    -1,   969,
      -1,    -1,    -1,    -1,   974,  1103,   976,   977,   978,    92,
      -1,   981,    -1,  1076,    -1,  1078,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,  1065,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   926,   680,    -1,    -1,    -1,   919,  1101,   686,
     858,    -1,    -1,    -1,     3,    -1,   883,    -1,    -1,    -1,
     697,    -1,   889,    -1,    -1,    -1,    -1,   951,    -1,    -1,
      -1,    -1,  1103,    -1,    -1,    -1,    -1,    -1,   883,  1039,
      -1,    -1,  1042,  1043,   889,   969,    -1,    -1,    -1,    -1,
     974,    -1,   976,   977,   978,    44,    -1,   981,    -1,   926,
      49,   909,    51,   680,    53,    -1,    -1,    56,    -1,   686,
     982,    -1,    61,    -1,    -1,    -1,  1076,  1077,  1078,    68,
     697,   926,   680,    -1,   951,    74,   998,    76,   686,    -1,
    1002,     3,     4,     5,    -1,   943,    -1,    -1,    87,   697,
      12,  1101,   969,    92,    -1,    -1,   951,   974,    -1,   976,
     977,   978,    -1,    -1,   981,  1039,    -1,    -1,  1042,  1043,
      -1,    -1,   883,    -1,   969,    -1,    -1,    -1,   889,   974,
      -1,   976,   977,   978,    -1,    -1,   981,    -1,    -1,    51,
      -1,    53,    -1,    -1,    56,    -1,    -1,   995,    -1,    61,
      -1,    -1,  1076,  1077,  1078,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,   926,    -1,    79,    -1,    -1,
      -1,     3,  1039,    -1,    -1,  1042,  1043,  1101,  1026,    -1,
      92,    -1,    -1,    95,    96,    -1,    98,    -1,    -1,    -1,
     951,    -1,    -1,    -1,  1039,   107,    -1,  1042,  1043,    31,
      -1,    -1,    -1,    -1,    -1,   117,   883,    -1,   969,  1076,
    1077,  1078,   889,   974,    -1,   976,   977,   978,    -1,    51,
     981,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
      -1,  1076,  1077,  1078,  1101,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    -1,    78,    -1,    -1,   926,
      -1,    -1,    -1,    -1,    -1,    -1,  1101,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,   883,    -1,    -1,    -1,
     102,    -1,   889,    -1,   951,   107,   108,    -1,  1039,    -1,
     112,  1042,  1043,     3,   116,   883,    -1,    -1,    -1,    -1,
      -1,   889,   969,    -1,    -1,    -1,    -1,   974,    -1,   976,
     977,   978,    -1,    -1,   981,    -1,    -1,    -1,    -1,   926,
      -1,    31,    -1,    -1,    -1,  1076,  1077,  1078,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   926,    -1,
      -1,    51,    -1,    53,   951,    -1,    56,    -1,    -1,    -1,
    1101,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,   969,   951,    74,    75,    76,   974,    78,   976,
     977,   978,  1039,    -1,   981,  1042,  1043,    -1,    -1,    -1,
      -1,   969,    92,    93,    -1,    -1,   974,    97,   976,   977,
     978,    -1,   102,   981,    -1,    -1,    -1,   107,   108,    -1,
      -1,    -1,   112,    -1,    -1,    -1,   116,    -1,    -1,  1076,
    1077,  1078,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1039,    -1,  1101,  1042,  1043,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,  1039,    12,    -1,  1042,  1043,    16,    17,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1076,
    1077,  1078,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,  1076,  1077,
    1078,    51,    -1,    53,  1101,    -1,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,  1101,    74,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    92,    -1,    -1,    95,    96,    12,    98,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,   107,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,    44,
      -1,    -1,    22,    -1,    24,    -1,    51,    27,    53,    29,
      -1,    56,    -1,    33,    -1,    35,    61,    -1,    -1,    -1,
      40,    -1,    42,    68,    -1,    45,    -1,    -1,    48,    74,
      -1,    76,     3,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    92,    -1,    -1,
      95,    96,    12,    98,    -1,    -1,    16,    17,    -1,    -1,
      20,    21,   107,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,   117,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    44,    56,    -1,    -1,    -1,    -1,
      61,    51,    -1,    53,   114,    66,    56,    68,    -1,    -1,
      -1,    61,    -1,    74,    -1,    76,    -1,    -1,    68,    -1,
      -1,     3,     4,     5,    74,    -1,    76,    -1,    -1,    79,
      12,    92,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      -1,    -1,    92,    -1,    -1,    95,    96,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,    -1,    51,
      -1,    53,    -1,    -1,    56,    -1,    -1,    -1,     3,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,     3,
       4,     5,    74,    -1,    76,    -1,    -1,    79,    12,    13,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,
      92,    -1,    -1,    95,    96,    -1,    98,    99,    43,    44,
      -1,    -1,    -1,    -1,    -1,   107,    51,    -1,    53,    -1,
     112,    56,    -1,    -1,    -1,   117,    61,    51,    -1,    53,
      -1,    -1,    56,    68,    -1,    -1,     3,    61,    -1,    74,
      -1,    76,    -1,    -1,    68,    -1,    -1,     3,     4,     5,
      74,    -1,    76,    -1,    -1,    79,    12,    92,    -1,    -1,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    92,    -1,
      -1,    95,    96,    -1,    98,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,   107,    51,    -1,    53,    -1,    44,    56,
      -1,    -1,    -1,   117,    61,    51,    -1,    53,    -1,    -1,
      56,    68,    -1,    -1,    -1,    61,     3,    74,    -1,    76,
      -1,    -1,    68,    -1,    -1,     3,     4,     5,    74,    -1,
      76,    -1,    -1,    79,    12,    92,    -1,    -1,    16,    17,
      -1,    -1,    20,    21,    -1,    -1,    92,    -1,    -1,    95,
      96,    -1,    98,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,   107,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,
      -1,   117,    -1,    51,    61,    53,    -1,    -1,    56,    66,
      -1,    68,    -1,    61,    -1,    -1,    -1,    74,    -1,    76,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,     3,
      87,    79,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
       3,     4,     5,    -1,    92,    -1,    -1,    95,    96,    12,
      98,    -1,    -1,    16,    17,    -1,    -1,    20,    21,   107,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    30,    -1,   117,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    51,    -1,
      53,    -1,    -1,    56,    68,    -1,    -1,    -1,    61,     3,
      74,    -1,    76,    -1,    -1,    68,    -1,    -1,     3,     4,
       5,    74,    -1,    76,    -1,    -1,    79,    12,    92,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    -1,    -1,    92,
      -1,    -1,    95,    96,    -1,    98,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,   107,    -1,    -1,    51,    -1,    53,
      -1,    -1,    56,    -1,   117,    -1,    51,    61,    53,    -1,
      -1,    56,    66,    -1,    68,    -1,    61,    -1,    -1,    -1,
      74,    -1,    76,    68,    -1,    -1,     3,     4,     5,    74,
      -1,    76,    -1,    -1,    79,    12,    -1,    -1,    92,    16,
      17,    -1,    -1,    20,    21,    -1,    -1,    92,    -1,    -1,
      95,    96,   106,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,   117,    -1,    51,    -1,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,     3,     3,     4,     5,    74,    -1,    76,
      -1,    -1,    79,    12,    -1,    -1,    -1,    16,    17,    -1,
      -1,    20,    21,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
     117,    51,    51,    53,    53,    -1,    56,    56,    -1,    -1,
      -1,    61,    61,    -1,     3,     4,    -1,    -1,    68,    68,
      -1,    -1,    -1,    12,    74,    74,    76,    76,    17,    -1,
      79,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    92,    92,    -1,    -1,    95,    96,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   107,    -1,
      -1,    50,    51,    52,    53,    54,    -1,    56,   117,    58,
      -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    92,    -1,    -1,    95,    96,    97,    98,
      99,    -1,     3,     4,    -1,   104,    -1,   106,   107,    -1,
     109,    12,   111,   112,    -1,    -1,    17,   116,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    -1,     3,    56,    -1,    58,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    51,   104,    53,   106,   107,    56,   109,    -1,
     111,   112,    61,    -1,    -1,   116,    -1,    -1,    -1,    68,
      -1,    -1,     3,     4,    -1,    74,    75,    76,    -1,    78,
      -1,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,    30,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   107,   108,
      -1,    -1,    -1,   112,    -1,    -1,    -1,   116,    -1,    50,
      51,    52,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
       3,     4,    -1,   104,    -1,   106,   107,    -1,   109,    12,
     111,   112,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    -1,    60,    61,    -1,
      -1,    -1,    -1,     3,     4,    68,    69,    70,    -1,    -1,
      -1,    74,    12,    76,    -1,    -1,    79,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    90,    -1,    92,
      30,    -1,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,   109,    -1,   111,   112,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    58,    -1,
      60,    61,    -1,    -1,    -1,     3,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    92,    -1,    -1,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,    44,   107,    -1,   109,
      -1,   111,   112,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,     3,    -1,    -1,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    87,
      -1,    -1,    -1,    31,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    44,    -1,    -1,    -1,
     108,    49,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,     3,     4,    -1,    66,    -1,
      68,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    17,
      78,    -1,    -1,    21,    -1,    -1,    84,    85,    -1,    87,
      -1,    -1,    30,    -1,    92,    93,    94,    -1,    -1,    97,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,     3,     4,    -1,    -1,    -1,
      68,    31,    -1,    -1,    12,    13,    74,    -1,    76,    17,
      -1,    79,    -1,    21,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    53,    92,    -1,    56,    95,    -1,    59,
      98,    61,    -1,     3,     4,    -1,    -1,    -1,    68,   107,
      -1,    -1,    12,    51,    74,    53,    76,    17,    56,    -1,
      -1,    21,    -1,    61,    84,    -1,    -1,    87,    -1,    -1,
      68,    -1,    92,    93,    94,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,     3,     4,    -1,    -1,   107,    -1,    -1,
      -1,    51,    12,    53,    92,    -1,    56,    95,    -1,    -1,
      98,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,   107,
      -1,    31,     3,     4,    74,    -1,    76,    -1,    -1,    79,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    92,    53,    -1,    95,    56,    -1,    98,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,   107,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,
      51,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      61,    44,    92,    -1,    -1,    95,    49,    68,    98,    -1,
      -1,    -1,    -1,    74,    57,    76,    -1,   107,    79,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,    84,    85,    -1,    87,    88,   107,    -1,    91,    -1,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   123,   159,   160,   161,   162,   163,   164,   166,     0,
     166,    44,    82,   165,   307,   308,   318,   319,    72,   167,
     168,   169,   170,   171,   174,   320,    30,   172,   173,   183,
     184,   185,   256,   268,   281,   282,   283,   298,     3,   125,
     154,   157,     3,    93,   154,   157,    80,   175,   307,   173,
      49,    57,    63,    66,    84,    85,    87,    88,    91,    93,
      94,   118,   190,   307,    44,    49,    75,    84,    85,    87,
      91,    93,    94,   118,   286,   307,    12,    24,   124,   154,
      30,    24,    77,     3,   125,   125,   125,    75,   125,     3,
       4,     5,    12,    16,    17,    20,    21,    51,    53,    56,
      61,    68,    74,    76,    79,    92,    95,    96,    98,   107,
     112,   117,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   153,   154,   155,   156,   158,   307,   309,
     310,   312,   313,   314,   320,   397,   398,   399,   400,   401,
     406,   407,   408,   411,   412,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   451,     3,   125,    24,    30,
      24,    14,     3,    31,   186,   191,    71,   188,   195,   186,
     125,   186,    35,     3,   442,     3,    12,   127,   131,   155,
     406,   407,   416,   417,   418,   426,   427,   428,   430,   442,
     442,   442,   442,    24,     3,    31,   127,   132,   133,   145,
     218,   320,    24,    29,    12,    24,   313,   315,   316,   442,
     137,   320,    24,    29,    24,   137,    29,   137,    29,    24,
      24,    24,    29,    45,    12,    24,    13,   311,    13,    51,
     125,   128,    24,    29,    45,    43,   115,    10,   113,    47,
       9,     6,    36,    31,    34,    37,    38,    73,    32,    39,
      41,    16,    20,     7,    14,    26,    17,    21,     3,     3,
      14,    30,   124,   139,   140,   141,   192,   307,    65,   187,
     194,   132,   134,   196,   320,   112,   257,    12,   269,   112,
     299,    65,   284,   287,   313,     3,   236,   237,   419,   420,
     423,    13,   450,    13,    23,     8,    11,    15,    18,    22,
      27,    33,    35,    40,    42,    48,   114,   429,    57,   131,
     136,   146,   148,   149,   320,   137,   320,   413,   415,   137,
     413,   320,   402,   125,     3,   218,   218,   416,    57,   317,
      19,   258,   138,    57,   218,   320,   218,    79,     3,   320,
      57,    95,    98,   218,    79,   218,   401,   218,   416,   255,
     409,   416,     3,    19,   218,     3,   218,   401,   218,   416,
     416,   432,   433,   434,   435,   436,   437,   437,   439,   439,
     439,   439,   131,   236,   331,   395,   396,   440,   440,   440,
     441,   441,   442,   442,   442,    30,    30,   112,   193,   125,
     141,    37,   133,   188,   197,   260,   261,   263,   264,   270,
     271,   273,   274,   275,   188,   300,   196,    83,   285,   288,
     421,     3,    51,    66,   106,   125,   128,   153,   213,   214,
     215,   216,   217,   219,   220,   221,   238,   307,   424,    13,
     422,   442,     9,    13,   144,   112,   325,   416,   425,   416,
      37,    19,   147,    43,   112,   321,    45,   137,   211,   414,
     321,   211,     3,    12,     3,     3,    13,    19,   116,   320,
       3,   125,    79,   125,    24,    29,     3,     3,     3,    46,
      13,   410,     3,   312,     3,     3,    46,    28,   106,   213,
     332,    64,    81,    86,    89,   105,   176,   177,    19,    65,
     142,   143,    83,   189,   198,    19,   258,   262,     3,   266,
     307,    13,   272,   213,   276,   307,   112,   277,    30,   116,
     183,   281,   292,   293,   301,   302,   303,   154,   112,   289,
      19,   218,    24,   320,   137,    24,   137,   137,     3,   210,
      19,   134,   417,   445,     3,    12,    30,    50,    52,    58,
      60,    69,    70,    90,    96,    97,    99,   104,   109,   111,
     183,   253,   282,   283,   325,   326,   328,   329,   330,   331,
     333,   335,   336,   337,   339,   340,   341,   342,   344,   345,
     355,   357,   358,   360,   369,   371,   373,   374,   375,   376,
     377,   378,   400,   408,   427,   443,   444,   446,   447,   448,
     148,    19,    65,    95,   150,   151,   212,   321,   322,   323,
     416,   416,   320,   415,   403,   255,    12,   112,   346,   313,
     218,   218,     3,   218,   218,    12,    12,    19,    12,   417,
     430,   206,   208,   210,   153,   153,   154,    93,   103,   181,
     182,   154,   116,   177,   139,   132,   135,   320,   154,   112,
     199,   134,    30,   259,   267,    19,   119,    19,     3,   320,
     278,    66,    87,    93,   213,   294,   307,    49,    87,   213,
     305,   307,   178,   290,     3,   320,    25,   320,   211,   423,
      28,   416,     3,   372,   372,   333,    12,    12,   362,   416,
      12,    12,   416,   325,    12,   416,   116,   327,    30,    30,
     148,   131,   131,   324,   258,    46,    24,   121,   145,   404,
     405,    13,   255,    54,   348,   350,   352,     3,     3,   255,
     255,   416,   255,   207,    35,   209,    24,   101,   179,   179,
     110,     3,   152,   182,    30,   450,   178,   200,   200,   116,
     263,   255,   273,    25,    93,   116,   183,   201,   202,   203,
     204,   222,   223,   244,   245,   246,   247,   279,   280,   281,
     325,   206,     3,    19,    30,   116,   183,   281,   291,   292,
     295,   296,   125,     3,   125,   333,    28,    30,    30,    30,
     109,   331,   340,   361,   365,   367,   416,    30,   416,   416,
      30,    55,   380,   382,   416,    30,   328,    19,   116,   320,
     199,   265,    13,   354,   430,   349,   351,   352,   347,    23,
      12,    13,    13,    13,    19,   212,   152,    30,   101,    30,
     154,    24,   116,   201,   247,   120,     3,   325,    66,    84,
      85,    87,    93,   102,   108,   205,   213,   307,    49,    66,
      78,    84,    85,    87,    93,    94,    97,   107,   191,   213,
     224,   225,   227,   307,    84,    85,    87,   125,   186,   248,
     249,   250,   307,    30,    12,   154,    49,    59,    84,    87,
      93,    94,   225,   297,   307,   218,   218,   416,    12,    28,
     368,    30,   331,    13,    13,    13,    12,   104,   381,    13,
     212,     3,   353,   116,   352,    28,    30,   350,   325,   376,
     416,   255,   208,   180,   152,   178,     3,   265,   206,   320,
      30,   243,   325,     3,   228,   250,   100,   226,   239,   112,
     251,    13,   243,    30,   416,   416,    19,   362,     3,    69,
      70,   109,   333,   334,   335,   338,   343,   356,   359,   364,
     370,   346,   325,   236,   383,   325,   382,   333,    19,    59,
      28,   349,    30,    13,    19,   180,    30,    30,   227,    12,
     226,    12,   133,   135,   240,   242,   251,   155,   218,   252,
     254,   397,   211,    13,    13,   340,    30,    28,    12,    12,
      12,    62,   125,   216,   217,   384,    13,   379,   380,   354,
     326,   152,   228,   229,   231,   320,   229,   241,    24,    95,
      98,   253,    24,    59,   304,   306,    30,   333,   363,   366,
     367,   334,   331,   361,   416,   416,   333,   385,   210,   325,
      67,   386,   226,   230,   233,   235,   236,   237,    19,   213,
     230,    19,   218,    12,    12,   116,   218,   313,    30,    13,
      28,    30,    13,    13,   113,   325,   104,   387,    13,   234,
     213,     3,   232,    13,   242,    95,   255,   255,    95,   333,
     416,   362,   334,   334,   133,    12,   389,   211,    19,   210,
      24,    98,    12,    13,    13,    12,    13,    30,    62,   155,
     331,   391,   393,   394,   397,   406,   325,   235,   255,    30,
      30,   255,   334,   363,   334,    30,   390,   392,   379,    13,
      13,    13,    13,    30,   386,   388,    30,    30,   334,   393
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   122,   123,   124,   124,   125,   126,   127,   127,   128,
     128,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   133,   134,   135,   136,   136,
     136,   137,   138,   138,   139,   140,   140,   140,   141,   142,
     142,   143,   143,   144,   145,   146,   147,   147,   147,   148,
     148,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   161,   162,   162,   163,   164,   164,   165,   166,
     166,   167,   167,   167,   167,   168,   169,   170,   171,   172,
     172,   172,   173,   173,   173,   174,   175,   175,   176,   176,
     176,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     179,   180,   180,   181,   181,   181,   182,   182,   183,   183,
     183,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   192,   193,   193,   194,   195,   196,   197,
     197,   198,   199,   200,   200,   201,   201,   201,   201,   202,
     202,   202,   202,   203,   204,   204,   205,   205,   205,   205,
     205,   205,   205,   205,   206,   207,   207,   208,   209,   209,
     210,   211,   211,   212,   212,   213,   213,   214,   214,   215,
     215,   215,   216,   216,   217,   217,   217,   218,   218,   219,
     220,   221,   221,   221,   222,   223,   223,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   229,   229,   230,   230,   231,   232,
     232,   233,   234,   234,   235,   235,   236,   236,   237,   238,
     238,   239,   240,   241,   241,   242,   242,   243,   243,   244,
     245,   246,   247,   247,   248,   248,   248,   248,   249,   250,
     251,   252,   252,   253,   253,   254,   254,   254,   254,   255,
     255,   256,   257,   258,   258,   259,   259,   260,   260,   261,
     262,   262,   263,   264,   264,   265,   265,   266,   267,   268,
     269,   270,   270,   271,   272,   272,   273,   273,   274,   274,
     275,   276,   277,   278,   278,   279,   279,   280,   281,   281,
     282,   283,   283,   284,   284,   285,   285,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   287,   288,   289,   290,
     290,   291,   291,   291,   291,   291,   292,   293,   293,   294,
     294,   294,   294,   295,   296,   296,   297,   297,   297,   297,
     297,   297,   297,   298,   299,   300,   300,   301,   301,   301,
     301,   301,   302,   303,   303,   304,   304,   305,   305,   305,
     306,   307,   307,   307,   308,   309,   309,   310,   311,   311,
     312,   313,   313,   313,   314,   315,   315,   316,   317,   317,
     318,   319,   320,   320,   321,   322,   322,   323,   324,   324,
     325,   326,   327,   327,   328,   328,   328,   329,   329,   330,
     331,   332,   332,   333,   333,   333,   333,   333,   333,   334,
     334,   334,   334,   334,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   336,   337,   338,
     339,   340,   340,   340,   340,   340,   340,   340,   341,   342,
     343,   344,   344,   345,   346,   346,   347,   347,   348,   348,
     349,   349,   350,   350,   350,   351,   352,   353,   353,   354,
     355,   356,   357,   358,   358,   359,   359,   360,   361,   361,
     362,   362,   363,   363,   364,   365,   366,   367,   368,   368,
     369,   370,   371,   372,   372,   373,   374,   375,   376,   377,
     378,   379,   379,   380,   381,   381,   382,   383,   384,   385,
     385,   386,   387,   388,   388,   389,   390,   390,   391,   392,
     392,   393,   393,   394,   394,   395,   396,   397,   397,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   399,
     399,   399,   399,   400,   400,   400,   401,   402,   403,   403,
     404,   404,   405,   405,   406,   406,   406,   407,   407,   408,
     408,   408,   408,   408,   408,   409,   410,   410,   411,   411,
     411,   411,   411,   411,   411,   412,   412,   412,   412,   413,
     414,   414,   415,   416,   416,   417,   418,   418,   419,   419,
     420,   420,   421,   421,   422,   422,   423,   423,   424,   424,
     425,   425,   426,   426,   427,   428,   428,   428,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     430,   430,   430,   431,   431,   432,   432,   433,   433,   434,
     434,   435,   435,   436,   436,   436,   437,   437,   437,   437,
     437,   437,   438,   438,   439,   439,   439,   439,   440,   440,
     440,   441,   441,   441,   441,   442,   442,   442,   442,   442,
     443,   444,   445,   445,   445,   445,   445,   446,   446,   446,
     446,   447,   448,   449,   449,   449,   450,   450,   451
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     0,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     5,     5,     1,     2,     2,     2,
       2,     2,     2,     0,     3,     1,     2,     0,     1,     1,
       0,     2,     3,     2,     3,     2,     2,     3,     0,     1,
       1,     3,     1,     0,     2,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     1,     3,     1,
       1,     3,     2,     1,     0,     5,     2,     0,     1,     2,
       0,     1,     1,     1,     1,     3,     5,     6,     6,     1,
       2,     0,     1,     1,     1,     8,     1,     0,     1,     2,
       0,     3,     4,     4,     3,     6,     3,     0,     3,     4,
       0,     3,     0,     1,     2,     0,     1,     1,     1,     1,
       1,     8,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     0,     2,     2,     2,     3,
       0,     3,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     2,     2,     0,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     5,     1,     0,     1,
       1,     2,     2,     2,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       0,     1,     1,     6,     2,     0,     1,     0,     4,     2,
       0,     2,     3,     0,     3,     1,     2,     0,     5,     1,
       1,     2,     2,     3,     0,     1,     1,     1,     1,     1,
       2,     4,     2,     0,     1,     1,     1,     1,     6,     1,
       4,     1,     0,     1,     0,     6,     6,     8,     8,     1,
       0,     5,     5,     1,     0,     1,     0,     1,     0,     2,
       3,     0,     6,     2,     0,     1,     0,     1,     2,     7,
       3,     1,     0,     2,     3,     0,     3,     1,     2,     0,
       5,     1,     3,     2,     0,     1,     1,     3,     1,     1,
       7,     2,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     2,
       0,     1,     1,     1,     1,     1,     4,     2,     0,     1,
       1,     1,     1,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     2,     0,     1,     1,     1,
       1,     1,     8,     2,     0,     1,     0,     1,     1,     1,
       2,     1,     1,     1,     5,     1,     0,     2,     3,     0,
       3,     1,     1,     1,     4,     1,     0,     2,     3,     0,
       2,     5,     2,     0,     4,     1,     0,     2,     3,     0,
       3,     2,     2,     0,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       7,     3,     5,     5,     4,     4,     2,     0,     2,     0,
       3,     0,     4,     3,     3,     4,     4,     3,     0,     1,
       5,     5,     7,     1,     1,     1,     1,     9,     1,     0,
       1,     0,     1,     0,     9,     2,     1,     2,     3,     0,
       7,     7,     3,     1,     0,     3,     3,     3,     3,     5,
       8,     1,     0,     2,     2,     0,     5,     3,     2,     3,
       0,     2,     5,     1,     0,     4,     1,     0,     2,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     1,     3,     3,     7,     4,     4,     0,
       1,     0,     1,     1,     3,     3,     5,     4,     4,     4,
       7,     7,     7,     7,     9,     2,     3,     0,     4,     4,
       4,     4,     6,     4,     3,     4,     4,     4,     4,     2,
       2,     0,     4,     1,     1,     3,     3,     1,     1,     0,
       2,     2,     3,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     5,     5,     2,     0,     5
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

#line 2931 "src/parser.tab.c"

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

#line 1849 "src/parser.y"



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
	// build_graph();
	return 0;
}
