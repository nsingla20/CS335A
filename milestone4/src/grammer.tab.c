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


// field declaration added
// removed type arguments - generic not supported
// removed type parameters from method declaration
// assumption: classes declared before use
// assumption: array size is given as integer literal only
// assumption: {} are used for scope in loops and if else
// assumption: variable name is not t{number} or L{number}
// type check for expressions - done
// check method parameters dont have same name - done
// array access - tc done
// constructor - done
// return type check - done
// no. of arguments and type in method call - done
// scope of variables - done
// field access - tc done - partially
// support for this keyword - tc done
// if else tac - done
// while tac - done
// break continue - done
// array size - done

// TODO
// String support
// type casting when?
// type checking for switch
// no return statement in method - should be error
// constructor call
// class inheritence
// method overriding
// method overloading
// public private access
// instanceof
// support for super?
// +int/+float

/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1


// Data structures to store the symbol table
struct info {
  string type;
  string kind;
  int size;
  int offset;
  int line_no;
  unordered_set<string> modifier;
  int table_idx = -1;
};

struct local_symbol_table {
  string name;
  int parent;
  int size = 0;
  map<string,info> table;
  int class_table = 0;
  string parent_class = "";
  int method_table = 0;
  string return_type = "";
  vector<pair<string,struct info>> parameters;
};

vector<local_symbol_table> symbol_table;

int cur_table_idx = -1;
unordered_set<string> modifiers;
string cur_type = "";
int cur_size = 0;
bool create_new_table = true;
string package_name = "";
vector<string> import_list;
int param_declaration = 0;
bool ignoreDeclaration = false;



// Data structures to store the three address code
// <operator, arg1, arg2, result>
vector<pair<string,vector<vector<string>>>> tac_code;
vector<vector<string>> assembly;
stack<int> label_stack, loop_entry, loop_exit;
stack<vector<vector<string>>> temp_code;
int tmp_count = 1;
int label_count = 1;
int cur_method = -1;
bool addToTemp = false;
vector<pair<string,vector<struct expr*>>> methods;     //methods and there arguments

map<string,string> meth_and_ret;

map<string,int> size_map = {
  {"byte", 1},
  {"short", 2},
  {"int", 4},
  {"long", 8},
  {"float", 4},
  {"double", 8},
  {"boolean", 1},
  {"char", 2},
  {"void", 0},
  {"reference", 0},
  {"null", 0},
  {"class", 0}
};

// Function declarations
void createTable(string name="", int class_table=0, string parent_class="", int method_table=0, bool link=false);
struct info createInfo(string, string, int, int, int, unordered_set<string>, int table_idx = -1);
unordered_set<string> split_modifiers(string);
void insertSymbol(string, struct info *);
int getCurSize();
void updateSize(int);
void checkDeclaration(string);
string lookupType(string);
int lookupOffset(string);
int getType(string);
string getFinalType(string, string);
void typeCheck(string, string);
void specificTypeCheck(string, string, string);
void checkReturnType(string);
int checkMethodArgs(string, string);
string getFieldVariableType(string);
int getArraySize(string);
void copyString(char **, string);
void copyData(struct expr **e, string s="", string type="", string v = "");
string storeTemp(string op, string arg1, string arg2="_");
string storeTempWithType(string, string, string, string, string);
void pushInstruction(string, string, string, string);
void pushInstructionWithType(string, string, string, string, string, string);
void popLastInstruction();
void checkAndPushInstruction(string, string, string, string, int mode=0);
void pushTempCode();
string call_procedure(struct expr*,struct expr*);
string find_type_expr(string meth);

void yyerror(char const *);


#line 218 "grammer.tab.c"

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
  YYSYMBOL_TOK_INTEGERLITERAL = 4,         /* TOK_INTEGERLITERAL  */
  YYSYMBOL_TOK_FLOATLITERAL = 5,           /* TOK_FLOATLITERAL  */
  YYSYMBOL_TOK_BOOLEANLITERAL = 6,         /* TOK_BOOLEANLITERAL  */
  YYSYMBOL_TOK_CHARLITERAL = 7,            /* TOK_CHARLITERAL  */
  YYSYMBOL_TOK_STRINGLITERAL = 8,          /* TOK_STRINGLITERAL  */
  YYSYMBOL_TOK_TEXTBLOCKLITERAL = 9,       /* TOK_TEXTBLOCKLITERAL  */
  YYSYMBOL_TOK_NULLLITERAL = 10,           /* TOK_NULLLITERAL  */
  YYSYMBOL_TOK_33 = 11,                    /* "!"  */
  YYSYMBOL_TOK_3361 = 12,                  /* "!="  */
  YYSYMBOL_TOK_37 = 13,                    /* "%"  */
  YYSYMBOL_TOK_3761 = 14,                  /* "%="  */
  YYSYMBOL_TOK_38 = 15,                    /* "&"  */
  YYSYMBOL_TOK_3838 = 16,                  /* "&&"  */
  YYSYMBOL_TOK_3861 = 17,                  /* "&="  */
  YYSYMBOL_TOK_40 = 18,                    /* "("  */
  YYSYMBOL_TOK_41 = 19,                    /* ")"  */
  YYSYMBOL_TOK_42 = 20,                    /* "*"  */
  YYSYMBOL_TOK_4261 = 21,                  /* "*="  */
  YYSYMBOL_TOK_43 = 22,                    /* "+"  */
  YYSYMBOL_TOK_4343 = 23,                  /* "++"  */
  YYSYMBOL_TOK_4361 = 24,                  /* "+="  */
  YYSYMBOL_TOK_44 = 25,                    /* ","  */
  YYSYMBOL_TOK_45 = 26,                    /* "-"  */
  YYSYMBOL_TOK_4545 = 27,                  /* "--"  */
  YYSYMBOL_TOK_4561 = 28,                  /* "-="  */
  YYSYMBOL_TOK_4562 = 29,                  /* "->"  */
  YYSYMBOL_TOK_46 = 30,                    /* "."  */
  YYSYMBOL_TOK_464646 = 31,                /* "..."  */
  YYSYMBOL_TOK_47 = 32,                    /* "/"  */
  YYSYMBOL_TOK_4761 = 33,                  /* "/="  */
  YYSYMBOL_TOK_58 = 34,                    /* ":"  */
  YYSYMBOL_TOK_5858 = 35,                  /* "::"  */
  YYSYMBOL_TOK_59 = 36,                    /* ";"  */
  YYSYMBOL_TOK_60 = 37,                    /* "<"  */
  YYSYMBOL_TOK_6060 = 38,                  /* "<<"  */
  YYSYMBOL_TOK_606061 = 39,                /* "<<="  */
  YYSYMBOL_TOK_6061 = 40,                  /* "<="  */
  YYSYMBOL_TOK_61 = 41,                    /* "="  */
  YYSYMBOL_TOK_6161 = 42,                  /* "=="  */
  YYSYMBOL_TOK_62 = 43,                    /* ">"  */
  YYSYMBOL_TOK_6261 = 44,                  /* ">="  */
  YYSYMBOL_TOK_6262 = 45,                  /* ">>"  */
  YYSYMBOL_TOK_626261 = 46,                /* ">>="  */
  YYSYMBOL_TOK_626262 = 47,                /* ">>>"  */
  YYSYMBOL_TOK_62626261 = 48,              /* ">>>="  */
  YYSYMBOL_TOK_63 = 49,                    /* "?"  */
  YYSYMBOL_TOK_91 = 50,                    /* "["  */
  YYSYMBOL_TOK_93 = 51,                    /* "]"  */
  YYSYMBOL_TOK_94 = 52,                    /* "^"  */
  YYSYMBOL_TOK_9461 = 53,                  /* "^="  */
  YYSYMBOL_TOK_abstract = 54,              /* "abstract"  */
  YYSYMBOL_TOK_assert = 55,                /* "assert"  */
  YYSYMBOL_TOK_boolean = 56,               /* "boolean"  */
  YYSYMBOL_TOK_break = 57,                 /* "break"  */
  YYSYMBOL_TOK_byte = 58,                  /* "byte"  */
  YYSYMBOL_TOK_case = 59,                  /* "case"  */
  YYSYMBOL_TOK_catch = 60,                 /* "catch"  */
  YYSYMBOL_TOK_char = 61,                  /* "char"  */
  YYSYMBOL_TOK_class = 62,                 /* "class"  */
  YYSYMBOL_TOK_continue = 63,              /* "continue"  */
  YYSYMBOL_TOK_default = 64,               /* "default"  */
  YYSYMBOL_TOK_do = 65,                    /* "do"  */
  YYSYMBOL_TOK_double = 66,                /* "double"  */
  YYSYMBOL_TOK_else = 67,                  /* "else"  */
  YYSYMBOL_TOK_enum = 68,                  /* "enum"  */
  YYSYMBOL_TOK_extends = 69,               /* "extends"  */
  YYSYMBOL_TOK_final = 70,                 /* "final"  */
  YYSYMBOL_TOK_finally = 71,               /* "finally"  */
  YYSYMBOL_TOK_float = 72,                 /* "float"  */
  YYSYMBOL_TOK_for = 73,                   /* "for"  */
  YYSYMBOL_TOK_if = 74,                    /* "if"  */
  YYSYMBOL_TOK_implements = 75,            /* "implements"  */
  YYSYMBOL_TOK_import = 76,                /* "import"  */
  YYSYMBOL_TOK_instanceof = 77,            /* "instanceof"  */
  YYSYMBOL_TOK_int = 78,                   /* "int"  */
  YYSYMBOL_TOK_interface = 79,             /* "interface"  */
  YYSYMBOL_TOK_long = 80,                  /* "long"  */
  YYSYMBOL_TOK_new = 81,                   /* "new"  */
  YYSYMBOL_TOK_package = 82,               /* "package"  */
  YYSYMBOL_TOK_permits = 83,               /* "permits"  */
  YYSYMBOL_TOK_private = 84,               /* "private"  */
  YYSYMBOL_TOK_protected = 85,             /* "protected"  */
  YYSYMBOL_TOK_public = 86,                /* "public"  */
  YYSYMBOL_TOK_record = 87,                /* "record"  */
  YYSYMBOL_TOK_return = 88,                /* "return"  */
  YYSYMBOL_TOK_sealed = 89,                /* "sealed"  */
  YYSYMBOL_TOK_short = 90,                 /* "short"  */
  YYSYMBOL_TOK_static = 91,                /* "static"  */
  YYSYMBOL_TOK_strictfp = 92,              /* "strictfp"  */
  YYSYMBOL_TOK_super = 93,                 /* "super"  */
  YYSYMBOL_TOK_switch = 94,                /* "switch"  */
  YYSYMBOL_TOK_synchronized = 95,          /* "synchronized"  */
  YYSYMBOL_TOK_this = 96,                  /* "this"  */
  YYSYMBOL_TOK_throw = 97,                 /* "throw"  */
  YYSYMBOL_TOK_throws = 98,                /* "throws"  */
  YYSYMBOL_TOK_transient = 99,             /* "transient"  */
  YYSYMBOL_TOK_transitive = 100,           /* "transitive"  */
  YYSYMBOL_TOK_try = 101,                  /* "try"  */
  YYSYMBOL_TOK_var = 102,                  /* "var"  */
  YYSYMBOL_TOK_void = 103,                 /* "void"  */
  YYSYMBOL_TOK_volatile = 104,             /* "volatile"  */
  YYSYMBOL_TOK_while = 105,                /* "while"  */
  YYSYMBOL_TOK_yield = 106,                /* "yield"  */
  YYSYMBOL_TOK_123 = 107,                  /* "{"  */
  YYSYMBOL_TOK_124 = 108,                  /* "|"  */
  YYSYMBOL_TOK_12461 = 109,                /* "|="  */
  YYSYMBOL_TOK_124124 = 110,               /* "||"  */
  YYSYMBOL_TOK_125 = 111,                  /* "}"  */
  YYSYMBOL_TOK_126 = 112,                  /* "~"  */
  YYSYMBOL_113_ = 113,                     /* '='  */
  YYSYMBOL_TERNARY = 114,                  /* TERNARY  */
  YYSYMBOL_UMINUS = 115,                   /* UMINUS  */
  YYSYMBOL_UPLUS = 116,                    /* UPLUS  */
  YYSYMBOL_PREINC = 117,                   /* PREINC  */
  YYSYMBOL_PREDEC = 118,                   /* PREDEC  */
  YYSYMBOL_CAST = 119,                     /* CAST  */
  YYSYMBOL_SWITCH = 120,                   /* SWITCH  */
  YYSYMBOL_POSTINC = 121,                  /* POSTINC  */
  YYSYMBOL_POSTDEC = 122,                  /* POSTDEC  */
  YYSYMBOL_123_ = 123,                     /* '.'  */
  YYSYMBOL_PARENTHESES = 124,              /* PARENTHESES  */
  YYSYMBOL_ARRAY_ACCESS = 125,             /* ARRAY_ACCESS  */
  YYSYMBOL_YYACCEPT = 126,                 /* $accept  */
  YYSYMBOL_input = 127,                    /* input  */
  YYSYMBOL_128_modifier_multiopt = 128,    /* modifier.multiopt  */
  YYSYMBOL_modifier = 129,                 /* modifier  */
  YYSYMBOL_130_dot_ind_multiopt = 130,     /* dot_ind.multiopt  */
  YYSYMBOL_type = 131,                     /* type  */
  YYSYMBOL_primitive_type = 132,           /* primitive_type  */
  YYSYMBOL_numeric_type = 133,             /* numeric_type  */
  YYSYMBOL_integral_type = 134,            /* integral_type  */
  YYSYMBOL_floating_point_type = 135,      /* floating_point_type  */
  YYSYMBOL_reference_type = 136,           /* reference_type  */
  YYSYMBOL_class_or_interface_type = 137,  /* class_or_interface_type  */
  YYSYMBOL_array_type = 138,               /* array_type  */
  YYSYMBOL_dims = 139,                     /* dims  */
  YYSYMBOL_type_parameter = 140,           /* type_parameter  */
  YYSYMBOL_141_type_bound_opt = 141,       /* type_bound.opt  */
  YYSYMBOL_type_bound = 142,               /* type_bound  */
  YYSYMBOL_additional_bound = 143,         /* additional_bound  */
  YYSYMBOL_144_additional_bound_multiopt = 144, /* additional_bound.multiopt  */
  YYSYMBOL_un_name = 145,                  /* un_name  */
  YYSYMBOL_compilation_unit = 146,         /* compilation_unit  */
  YYSYMBOL_ordinary_compilation_unit = 147, /* ordinary_compilation_unit  */
  YYSYMBOL_148_1 = 148,                    /* $@1  */
  YYSYMBOL_149_2 = 149,                    /* $@2  */
  YYSYMBOL_150_package_declaration_opt = 150, /* package_declaration.opt  */
  YYSYMBOL_package_declaration = 151,      /* package_declaration  */
  YYSYMBOL_152_import_declaration_multiopt = 152, /* import_declaration.multiopt  */
  YYSYMBOL_import_declaration = 153,       /* import_declaration  */
  YYSYMBOL_single_type_import_declaration = 154, /* single_type_import_declaration  */
  YYSYMBOL_type_import_on_demand_declaration = 155, /* type_import_on_demand_declaration  */
  YYSYMBOL_single_static_import_declaration = 156, /* single_static_import_declaration  */
  YYSYMBOL_static_import_on_demand_declaration = 157, /* static_import_on_demand_declaration  */
  YYSYMBOL_158_top_level_class_or_interface_declaration_multiopt = 158, /* top_level_class_or_interface_declaration.multiopt  */
  YYSYMBOL_top_level_class_or_interface_declaration = 159, /* top_level_class_or_interface_declaration  */
  YYSYMBOL_160_com_type_name_multiopt = 160, /* com_type_name.multiopt  */
  YYSYMBOL_class_declaration = 161,        /* class_declaration  */
  YYSYMBOL_normal_class_declaration = 162, /* normal_class_declaration  */
  YYSYMBOL_163_3 = 163,                    /* $@3  */
  YYSYMBOL_164_type_parameters_opt = 164,  /* type_parameters.opt  */
  YYSYMBOL_165_class_extends_opt = 165,    /* class_extends.opt  */
  YYSYMBOL_166_class_implements_opt = 166, /* class_implements.opt  */
  YYSYMBOL_167_class_permits_opt = 167,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 168,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 169,      /* type_parameter_list  */
  YYSYMBOL_170_com_type_parameter_multiopt = 170, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 171,            /* class_extends  */
  YYSYMBOL_class_implements = 172,         /* class_implements  */
  YYSYMBOL_interface_type_list = 173,      /* interface_type_list  */
  YYSYMBOL_174_com_interface_type_multiopt = 174, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 175,            /* class_permits  */
  YYSYMBOL_class_body = 176,               /* class_body  */
  YYSYMBOL_177_class_body_declaration_multiopt = 177, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 178,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 179, /* class_member_declaration  */
  YYSYMBOL_field_declaration = 180,        /* field_declaration  */
  YYSYMBOL_variable_declarator_list = 181, /* variable_declarator_list  */
  YYSYMBOL_182_com_variable_declarator_multiopt = 182, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 183,      /* variable_declarator  */
  YYSYMBOL_184_eq_variable_initializer_opt = 184, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 185,   /* variable_declarator_id  */
  YYSYMBOL_186_dims_opt = 186,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 187,     /* variable_initializer  */
  YYSYMBOL_method_declaration = 188,       /* method_declaration  */
  YYSYMBOL_method_header = 189,            /* method_header  */
  YYSYMBOL_190_4 = 190,                    /* $@4  */
  YYSYMBOL_191_5 = 191,                    /* $@5  */
  YYSYMBOL_192_throws_opt = 192,           /* throws.opt  */
  YYSYMBOL_method_parameters = 193,        /* method_parameters  */
  YYSYMBOL_194_6 = 194,                    /* $@6  */
  YYSYMBOL_195_formal_parameter_list_opt = 195, /* formal_parameter_list.opt  */
  YYSYMBOL_formal_parameter_list = 196,    /* formal_parameter_list  */
  YYSYMBOL_197_com_formal_parameter_multiopt = 197, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 198,         /* formal_parameter  */
  YYSYMBOL_variable_arity_parameter = 199, /* variable_arity_parameter  */
  YYSYMBOL_throws = 200,                   /* throws  */
  YYSYMBOL_exception_type_list = 201,      /* exception_type_list  */
  YYSYMBOL_202_com_exception_type_multiopt = 202, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 203,           /* exception_type  */
  YYSYMBOL_method_body = 204,              /* method_body  */
  YYSYMBOL_instance_initializer = 205,     /* instance_initializer  */
  YYSYMBOL_constructor_declaration = 206,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 207,   /* constructor_declarator  */
  YYSYMBOL_208_7 = 208,                    /* $@7  */
  YYSYMBOL_simple_type_name = 209,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 210,         /* constructor_body  */
  YYSYMBOL_211_block_statements_opt = 211, /* block_statements.opt  */
  YYSYMBOL_enum_declaration = 212,         /* enum_declaration  */
  YYSYMBOL_enum_body = 213,                /* enum_body  */
  YYSYMBOL_214_com_opt = 214,              /* com.opt  */
  YYSYMBOL_215_enum_body_declarations_opt = 215, /* enum_body_declarations.opt  */
  YYSYMBOL_216_enum_constant_list_opt = 216, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 217,       /* enum_constant_list  */
  YYSYMBOL_218_com_enum_constant_multiopt = 218, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 219,            /* enum_constant  */
  YYSYMBOL_220_class_body_opt = 220,       /* class_body.opt  */
  YYSYMBOL_enum_body_declarations = 221,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 222,       /* record_declaration  */
  YYSYMBOL_record_header = 223,            /* record_header  */
  YYSYMBOL_224_record_component_list_opt = 224, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 225,    /* record_component_list  */
  YYSYMBOL_226_com_record_component_multiopt = 226, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 227,         /* record_component  */
  YYSYMBOL_variable_arity_record_component = 228, /* variable_arity_record_component  */
  YYSYMBOL_record_body = 229,              /* record_body  */
  YYSYMBOL_230_record_body_declaration_multiopt = 230, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 231,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 232, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 233,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 234, /* normal_interface_declaration  */
  YYSYMBOL_235_interface_extends_opt = 235, /* interface_extends.opt  */
  YYSYMBOL_236_interface_permits_opt = 236, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 237,        /* interface_extends  */
  YYSYMBOL_interface_permits = 238,        /* interface_permits  */
  YYSYMBOL_interface_body = 239,           /* interface_body  */
  YYSYMBOL_240_interface_member_declaration_multiopt = 240, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 241, /* interface_member_declaration  */
  YYSYMBOL_interface_method_declaration = 242, /* interface_method_declaration  */
  YYSYMBOL_array_initializer = 243,        /* array_initializer  */
  YYSYMBOL_244_variable_initializer_list_opt = 244, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 245, /* variable_initializer_list  */
  YYSYMBOL_246_com_variable_initializer_multiopt = 246, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 247,                    /* block  */
  YYSYMBOL_248_8 = 248,                    /* $@8  */
  YYSYMBOL_249_9 = 249,                    /* $@9  */
  YYSYMBOL_block_statements = 250,         /* block_statements  */
  YYSYMBOL_251_block_statement_multiopt = 251, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 252,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 253, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 254, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 255, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 256,      /* local_variable_type  */
  YYSYMBOL_statement = 257,                /* statement  */
  YYSYMBOL_statement_without_trailing_substatement = 258, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 259,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 260,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 261,     /* expression_statement  */
  YYSYMBOL_statement_expression = 262,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 263,        /* if_then_statement  */
  YYSYMBOL_if_then_else_statement = 264,   /* if_then_else_statement  */
  YYSYMBOL_265_10 = 265,                   /* $@10  */
  YYSYMBOL_if_condition = 266,             /* if_condition  */
  YYSYMBOL_assert_statement = 267,         /* assert_statement  */
  YYSYMBOL_switch_statement = 268,         /* switch_statement  */
  YYSYMBOL_switch_block = 269,             /* switch_block  */
  YYSYMBOL_270_switch_rule_multi = 270,    /* switch_rule.multi  */
  YYSYMBOL_271_switch_block_statement_group_multiopt = 271, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_272_switch_label_col_multiopt = 272, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 273,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 274, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 275,             /* switch_label  */
  YYSYMBOL_276_com_case_constant_multiopt = 276, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 277,            /* case_constant  */
  YYSYMBOL_while_statement = 278,          /* while_statement  */
  YYSYMBOL_279_11 = 279,                   /* $@11  */
  YYSYMBOL_280_12 = 280,                   /* $@12  */
  YYSYMBOL_do_statement = 281,             /* do_statement  */
  YYSYMBOL_282_13 = 282,                   /* $@13  */
  YYSYMBOL_for_statement = 283,            /* for_statement  */
  YYSYMBOL_284_14 = 284,                   /* $@14  */
  YYSYMBOL_285_15 = 285,                   /* $@15  */
  YYSYMBOL_286_16 = 286,                   /* $@16  */
  YYSYMBOL_287_17 = 287,                   /* $@17  */
  YYSYMBOL_basic_for_init = 288,           /* basic_for_init  */
  YYSYMBOL_289_18 = 289,                   /* $@18  */
  YYSYMBOL_basic_for_tail = 290,           /* basic_for_tail  */
  YYSYMBOL_291_19 = 291,                   /* $@19  */
  YYSYMBOL_enhanced_for_tail = 292,        /* enhanced_for_tail  */
  YYSYMBOL_293_expression_opt = 293,       /* expression.opt  */
  YYSYMBOL_294_for_update_opt = 294,       /* for_update.opt  */
  YYSYMBOL_for_update = 295,               /* for_update  */
  YYSYMBOL_statement_expression_list = 296, /* statement_expression_list  */
  YYSYMBOL_297_com_statement_expression_multiopt = 297, /* com_statement_expression.multiopt  */
  YYSYMBOL_break_statement = 298,          /* break_statement  */
  YYSYMBOL_299_IDENTIFIER_opt = 299,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 300,          /* yield_statement  */
  YYSYMBOL_continue_statement = 301,       /* continue_statement  */
  YYSYMBOL_return_statement = 302,         /* return_statement  */
  YYSYMBOL_throw_statement = 303,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 304,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 305,            /* try_statement  */
  YYSYMBOL_306_catches_opt = 306,          /* catches.opt  */
  YYSYMBOL_catches = 307,                  /* catches  */
  YYSYMBOL_308_catch_clause_multiopt = 308, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 309,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 310,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 311,               /* catch_type  */
  YYSYMBOL_312_vt_class_type_multiopt = 312, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 313,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 314, /* try_with_resources_statement  */
  YYSYMBOL_315_finally_opt = 315,          /* finally.opt  */
  YYSYMBOL_resource_specification = 316,   /* resource_specification  */
  YYSYMBOL_317_semcol_opt = 317,           /* semcol.opt  */
  YYSYMBOL_resource_list = 318,            /* resource_list  */
  YYSYMBOL_319_semcol_resource_multiopt = 319, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 320,                 /* resource  */
  YYSYMBOL_variable_access = 321,          /* variable_access  */
  YYSYMBOL_pattern = 322,                  /* pattern  */
  YYSYMBOL_type_pattern = 323,             /* type_pattern  */
  YYSYMBOL_primary = 324,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 325,     /* primary_no_new_array  */
  YYSYMBOL_hold_Literal = 326,             /* hold_Literal  */
  YYSYMBOL_class_instance_creation_expression = 327, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 328, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_field_access = 329,             /* field_access  */
  YYSYMBOL_array_access = 330,             /* array_access  */
  YYSYMBOL_method_invocation = 331,        /* method_invocation  */
  YYSYMBOL_332_argument_list_opt = 332,    /* argument_list.opt  */
  YYSYMBOL_argument_list = 333,            /* argument_list  */
  YYSYMBOL_334_com_expression_multiopt = 334, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 335,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 336, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 337,                /* dim_exprs  */
  YYSYMBOL_338_dim_expr_multiopt = 338,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 339,                 /* dim_expr  */
  YYSYMBOL_expression = 340,               /* expression  */
  YYSYMBOL_assignment_expression = 341,    /* assignment_expression  */
  YYSYMBOL_assignment = 342,               /* assignment  */
  YYSYMBOL_left_hand_side = 343,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 344,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 345,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 346, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 347, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 348,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 349,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 350,           /* and_expression  */
  YYSYMBOL_equality_expression = 351,      /* equality_expression  */
  YYSYMBOL_relational_expression = 352,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 353,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 354,         /* shift_expression  */
  YYSYMBOL_additive_expression = 355,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 356, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 357,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 358, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 359, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 360, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 361,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 362, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 363, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 364,          /* cast_expression  */
  YYSYMBOL_switch_expression = 365         /* switch_expression  */
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
#define YYLAST   1759

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  126
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  240
/* YYNRULES -- Number of rules.  */
#define YYNRULES  451
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  713

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   378


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
       2,     2,     2,     2,     2,     2,   123,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   113,     2,     2,     2,     2,     2,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   124,   125
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   518,   518,   521,   522,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   538,   539,   543,   544,
     547,   548,   551,   552,   555,   556,   557,   558,   559,   562,
     563,   566,   567,   570,   573,   576,   577,   580,   583,   584,
     587,   590,   593,   594,   600,   611,   620,   623,   623,   623,
     626,   627,   630,   633,   634,   637,   638,   639,   640,   643,
     646,   649,   652,   655,   656,   659,   660,   661,   664,   665,
     670,   671,   672,   675,   675,   690,   691,   694,   695,   698,
     699,   702,   703,   706,   709,   712,   713,   716,   719,   722,
     725,   726,   729,   732,   735,   736,   739,   740,   741,   744,
     745,   746,   747,   750,   757,   760,   761,   764,   785,   786,
     789,   806,   807,   810,   811,   814,   817,   817,   838,   838,
     860,   861,   864,   864,   867,   868,   871,   874,   875,   878,
     896,   899,   917,   920,   923,   924,   927,   930,   931,   934,
     937,   940,   940,   963,   966,   969,   970,   973,   976,   979,
     980,   983,   984,   987,   988,   991,   994,   995,   998,  1001,
    1002,  1005,  1008,  1011,  1014,  1015,  1018,  1021,  1022,  1025,
    1026,  1029,  1032,  1035,  1036,  1039,  1040,  1043,  1050,  1053,
    1056,  1057,  1060,  1061,  1064,  1067,  1070,  1073,  1074,  1077,
    1078,  1079,  1080,  1083,  1089,  1095,  1096,  1099,  1105,  1109,
    1115,  1115,  1115,  1118,  1121,  1122,  1125,  1126,  1127,  1130,
    1131,  1134,  1137,  1140,  1141,  1144,  1145,  1146,  1147,  1148,
    1149,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,
    1161,  1162,  1163,  1164,  1167,  1170,  1173,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1185,  1192,  1192,  1202,  1210,  1211,
    1214,  1217,  1220,  1225,  1226,  1232,  1236,  1239,  1242,  1245,
    1248,  1251,  1256,  1261,  1264,  1269,  1272,  1275,  1278,  1282,
    1278,  1300,  1300,  1316,  1317,  1318,  1322,  1318,  1347,  1351,
    1347,  1378,  1378,  1384,  1384,  1411,  1416,  1417,  1420,  1421,
    1424,  1427,  1430,  1431,  1434,  1442,  1443,  1446,  1449,  1457,
    1463,  1466,  1469,  1470,  1471,  1474,  1475,  1478,  1481,  1482,
    1485,  1488,  1491,  1494,  1495,  1498,  1501,  1504,  1505,  1508,
    1511,  1512,  1515,  1518,  1519,  1522,  1523,  1526,  1527,  1530,
    1533,  1539,  1540,  1543,  1544,  1548,  1552,  1555,  1556,  1557,
    1558,  1559,  1562,  1563,  1564,  1565,  1566,  1567,  1568,  1571,
    1572,  1576,  1582,  1587,  1593,  1597,  1603,  1614,  1627,  1632,
    1638,  1644,  1651,  1652,  1655,  1661,  1665,  1668,  1671,  1674,
    1677,  1682,  1687,  1692,  1697,  1704,  1710,  1714,  1717,  1723,
    1726,  1727,  1730,  1743,  1749,  1750,  1771,  1772,  1773,  1774,
    1775,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1785,  1786,
    1794,  1795,  1803,  1804,  1812,  1813,  1821,  1822,  1830,  1831,
    1839,  1840,  1845,  1852,  1853,  1858,  1863,  1868,  1873,  1876,
    1882,  1890,  1891,  1897,  1903,  1911,  1912,  1919,  1927,  1928,
    1934,  1940,  1948,  1949,  1950,  1955,  1960,  1963,  1970,  1977,
    1978,  1983,  1988,  1989,  1992,  1993,  1994,  1995,  1998,  2006,
    2014,  2025
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
  "TOK_INTEGERLITERAL", "TOK_FLOATLITERAL", "TOK_BOOLEANLITERAL",
  "TOK_CHARLITERAL", "TOK_STRINGLITERAL", "TOK_TEXTBLOCKLITERAL",
  "TOK_NULLLITERAL", "\"!\"", "\"!=\"", "\"%\"", "\"%=\"", "\"&\"",
  "\"&&\"", "\"&=\"", "\"(\"", "\")\"", "\"*\"", "\"*=\"", "\"+\"",
  "\"++\"", "\"+=\"", "\",\"", "\"-\"", "\"--\"", "\"-=\"", "\"->\"",
  "\".\"", "\"...\"", "\"/\"", "\"/=\"", "\":\"", "\"::\"", "\";\"",
  "\"<\"", "\"<<\"", "\"<<=\"", "\"<=\"", "\"=\"", "\"==\"", "\">\"",
  "\">=\"", "\">>\"", "\">>=\"", "\">>>\"", "\">>>=\"", "\"?\"", "\"[\"",
  "\"]\"", "\"^\"", "\"^=\"", "\"abstract\"", "\"assert\"", "\"boolean\"",
  "\"break\"", "\"byte\"", "\"case\"", "\"catch\"", "\"char\"",
  "\"class\"", "\"continue\"", "\"default\"", "\"do\"", "\"double\"",
  "\"else\"", "\"enum\"", "\"extends\"", "\"final\"", "\"finally\"",
  "\"float\"", "\"for\"", "\"if\"", "\"implements\"", "\"import\"",
  "\"instanceof\"", "\"int\"", "\"interface\"", "\"long\"", "\"new\"",
  "\"package\"", "\"permits\"", "\"private\"", "\"protected\"",
  "\"public\"", "\"record\"", "\"return\"", "\"sealed\"", "\"short\"",
  "\"static\"", "\"strictfp\"", "\"super\"", "\"switch\"",
  "\"synchronized\"", "\"this\"", "\"throw\"", "\"throws\"",
  "\"transient\"", "\"transitive\"", "\"try\"", "\"var\"", "\"void\"",
  "\"volatile\"", "\"while\"", "\"yield\"", "\"{\"", "\"|\"", "\"|=\"",
  "\"||\"", "\"}\"", "\"~\"", "'='", "TERNARY", "UMINUS", "UPLUS",
  "PREINC", "PREDEC", "CAST", "SWITCH", "POSTINC", "POSTDEC", "'.'",
  "PARENTHESES", "ARRAY_ACCESS", "$accept", "input", "modifier.multiopt",
  "modifier", "dot_ind.multiopt", "type", "primitive_type", "numeric_type",
  "integral_type", "floating_point_type", "reference_type",
  "class_or_interface_type", "array_type", "dims", "type_parameter",
  "type_bound.opt", "type_bound", "additional_bound",
  "additional_bound.multiopt", "un_name", "compilation_unit",
  "ordinary_compilation_unit", "$@1", "$@2", "package_declaration.opt",
  "package_declaration", "import_declaration.multiopt",
  "import_declaration", "single_type_import_declaration",
  "type_import_on_demand_declaration", "single_static_import_declaration",
  "static_import_on_demand_declaration",
  "top_level_class_or_interface_declaration.multiopt",
  "top_level_class_or_interface_declaration", "com_type_name.multiopt",
  "class_declaration", "normal_class_declaration", "$@3",
  "type_parameters.opt", "class_extends.opt", "class_implements.opt",
  "class_permits.opt", "type_parameters", "type_parameter_list",
  "com_type_parameter.multiopt", "class_extends", "class_implements",
  "interface_type_list", "com_interface_type.multiopt", "class_permits",
  "class_body", "class_body_declaration.multiopt",
  "class_body_declaration", "class_member_declaration",
  "field_declaration", "variable_declarator_list",
  "com_variable_declarator.multiopt", "variable_declarator",
  "eq_variable_initializer.opt", "variable_declarator_id", "dims.opt",
  "variable_initializer", "method_declaration", "method_header", "$@4",
  "$@5", "throws.opt", "method_parameters", "$@6",
  "formal_parameter_list.opt", "formal_parameter_list",
  "com_formal_parameter.multiopt", "formal_parameter",
  "variable_arity_parameter", "throws", "exception_type_list",
  "com_exception_type.multiopt", "exception_type", "method_body",
  "instance_initializer", "constructor_declaration",
  "constructor_declarator", "$@7", "simple_type_name", "constructor_body",
  "block_statements.opt", "enum_declaration", "enum_body", "com.opt",
  "enum_body_declarations.opt", "enum_constant_list.opt",
  "enum_constant_list", "com_enum_constant.multiopt", "enum_constant",
  "class_body.opt", "enum_body_declarations", "record_declaration",
  "record_header", "record_component_list.opt", "record_component_list",
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
  "block", "$@8", "$@9", "block_statements", "block_statement.multiopt",
  "block_statement", "local_class_or_interface_declaration",
  "local_variable_declaration_statement", "local_variable_declaration",
  "local_variable_type", "statement",
  "statement_without_trailing_substatement", "empty_statement",
  "labeled_statement", "expression_statement", "statement_expression",
  "if_then_statement", "if_then_else_statement", "$@10", "if_condition",
  "assert_statement", "switch_statement", "switch_block",
  "switch_rule.multi", "switch_block_statement_group.multiopt",
  "switch_label_col.multiopt", "switch_rule",
  "switch_block_statement_group", "switch_label",
  "com_case_constant.multiopt", "case_constant", "while_statement", "$@11",
  "$@12", "do_statement", "$@13", "for_statement", "$@14", "$@15", "$@16",
  "$@17", "basic_for_init", "$@18", "basic_for_tail", "$@19",
  "enhanced_for_tail", "expression.opt", "for_update.opt", "for_update",
  "statement_expression_list", "com_statement_expression.multiopt",
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
  "array_access", "method_invocation", "argument_list.opt",
  "argument_list", "com_expression.multiopt", "method_reference",
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
  "post_decrement_expression", "cast_expression", "switch_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-588)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-448)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   155,   173,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
      99,   119,   211,  -588,    17,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,   222,   200,    52,   210,   137,  -588,  -588,
    1480,  -588,  -588,  -588,  -588,  -588,  -588,  -588,   193,  -588,
     207,  -588,   277,   306,  -588,   309,  -588,  -588,  -588,   311,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,   231,   283,  -588,
     284,   249,   284,   284,  -588,  -588,   331,   268,  -588,   222,
     246,  -588,   273,   336,   287,  -588,   327,   222,   249,  -588,
    -588,   349,  -588,   377,  -588,   222,   301,  -588,   402,   249,
     222,  -588,  -588,   358,  -588,  -588,   305,   361,   386,   340,
     366,  -588,  -588,  -588,   222,   289,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,    33,  -588,  -588,  -588,  -588,
    -588,   348,  -588,   385,  -588,  -588,  -588,   299,  -588,   331,
     222,  -588,  -588,   222,   391,  -588,   374,   389,   349,  -588,
    -588,  -588,   412,   367,   372,  -588,   392,  -588,  -588,   408,
    -588,   349,   317,  -588,  1155,  -588,   314,  -588,   377,   401,
     -11,  -588,  -588,   381,   402,   -53,   222,  -588,   401,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  1155,   879,
    1155,  1155,  1155,  1155,   402,    50,   410,  -588,  1155,   723,
      59,   384,  -588,  -588,  -588,   753,   827,  -588,   420,  -588,
    -588,  -588,   417,  -588,  -588,  1090,  -588,    -8,   433,   342,
     403,   438,    27,    35,  -588,   188,   201,   186,  -588,  -588,
    -588,  -588,   215,  -588,  -588,  -588,  -588,   168,  -588,  -588,
     222,  -588,  -588,  1575,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  1615,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,   195,   106,  -588,  -588,  -588,
     435,   437,  -588,  -588,  -588,  -588,   411,    32,   461,   467,
    1155,  -588,  1155,    14,   468,  1155,    42,   469,  1155,   424,
    1155,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  1155,  1155,  1155,  1155,  1155,  1155,
    1155,  1155,  1155,  1155,  1155,  1155,  1155,   355,  1155,  1155,
    1155,  1155,  1155,  1155,  1155,  1155,  -588,  -588,  1615,  -588,
     349,   474,   476,     4,  1306,     6,   480,     4,   387,   382,
    -588,  1155,  -588,  1034,    -3,   348,  -588,  1155,    -3,   348,
     470,  -588,   472,   477,   222,   114,  -588,  -588,  -588,   442,
     481,  -588,  -588,   444,   317,   417,  -588,   471,   433,   342,
    -588,  -588,    27,    35,    35,   188,   188,   188,   188,  -588,
    -588,   498,  -588,   501,  -588,  -588,   201,   201,   201,   186,
     186,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
     473,  1155,  -588,  1155,   503,   503,  -588,   490,   491,  1155,
     492,   493,  1155,    19,  -588,  1155,   322,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,   478,  -588,  -588,  -588,  -588,
    -588,   479,   446,  -588,  1520,  -588,  -588,  -588,  -588,  -588,
     171,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,   118,
     303,  -588,  -588,  -588,   215,   280,   320,   121,   483,  -588,
     482,  -588,   222,   382,  -588,  1306,   499,  -588,  -588,   475,
    1060,  -588,   372,  -588,   486,   502,  -588,  -588,  1155,   413,
    -588,   504,   521,   522,  -588,  1155,  -588,  -588,  -588,  -588,
    1155,   348,  -588,   509,   509,  1520,   238,  -588,   495,   496,
    1520,  1347,  1155,   505,  -588,  1155,  1155,   506,    25,   484,
     422,   520,   507,   428,  1197,  -588,  -588,  -588,  -588,  1155,
    1155,  -588,  -588,  -588,  -588,   525,  1060,  -588,  -588,  -588,
    -588,  -588,   434,   532,  -588,  -588,  -588,   366,  -588,  -588,
    1155,  -588,   317,   533,   175,  -588,   535,  -588,   536,  -588,
    -588,   387,   387,  -588,  1155,  -588,  -588,  -588,   451,  -588,
    -588,   355,   524,   539,  -588,   542,   544,  -588,   194,  -588,
     528,  -588,  -588,    59,   184,   547,   500,   508,  -588,   484,
    1155,  -588,  -588,  -588,  1520,   550,  -588,   501,  -588,   548,
    -588,  1655,   555,  -588,   556,  -588,   560,   464,  -588,  -588,
    1155,  -588,   -15,   175,  -588,   558,  1155,  -588,   532,  -588,
    -588,   552,   571,  1155,   566,  -588,  -588,  -588,   413,   422,
    -588,   573,   561,  -588,   422,  -588,   484,   500,  -588,   575,
    -588,  1520,   564,  -588,   222,    53,  -588,  -588,  -588,  1060,
    -588,  -588,  -588,  -588,  -588,   -13,  -588,   562,  1009,   582,
     584,  -588,  1155,  -588,   904,  1155,  -588,  -588,  -588,    25,
     308,   585,  -588,  -588,  -588,  -588,  -588,  -588,   904,  -588,
     602,  -588,   556,  -588,   581,  -588,   577,  -588,  -588,  -588,
     578,  -588,   348,   596,   580,  -588,  -588,  -588,  -588,   501,
     422,  1520,   599,  -588,  -588,  -588,  -588,  1155,  -588,  1415,
    -588,  -588,   583,   904,   586,   512,  -588,  -588,  -588,  1520,
    -588,  -588,  -588,   606,   904,   222,  -588,  1520,   608,  -588,
    -588,  1520,  -588
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      51,     0,     0,     2,    46,    47,    50,    17,     1,    54,
       0,    48,     0,    52,     0,    64,    53,    55,    56,    57,
      58,    16,    44,     0,     0,     4,     0,     0,    59,    67,
       0,    63,    65,    70,    71,    72,    66,   178,     0,    45,
       0,     8,     0,     0,    10,     0,     7,     6,     5,     0,
      11,     9,    12,    14,    13,    15,     3,    45,     0,    60,
      76,    80,    76,    76,    61,    62,     0,    78,    75,     0,
       0,    79,   181,     0,    39,    86,     0,     0,    80,    77,
      91,    33,    88,   154,   147,     0,   183,   180,   165,    80,
       0,    37,    38,    84,    83,    87,    82,    89,     0,     0,
     150,   153,   157,   184,     0,     0,   182,    21,    24,    28,
      30,    29,    26,    27,    25,     0,    18,    20,    22,    23,
      19,    31,    32,     0,   164,   168,   170,     0,    43,     0,
       0,    73,    81,     0,     0,   149,   152,   155,    69,   188,
     179,   169,     0,     0,    34,   163,   166,   174,   162,    40,
      85,    69,     0,    90,   363,    95,     0,   151,     0,   185,
       4,   171,    35,     0,     0,     4,     0,    42,    92,    95,
      74,   342,   343,   344,   345,   346,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   334,     0,   445,
     444,   331,   333,   337,   349,   338,   339,   340,     0,   362,
     341,   332,   366,   379,   381,     0,   380,   398,   400,   402,
     404,   406,   408,   410,   418,   413,   421,   425,   428,   432,
     433,   436,   439,   446,   447,   442,   443,     4,   148,   156,
       0,   192,   186,     0,   190,   191,   187,   189,    36,   167,
     200,   172,     0,   101,   175,    96,    99,   100,    97,    98,
     173,   176,   102,   139,    41,     4,   445,   338,   339,   441,
       0,     0,   434,   437,   435,   438,     0,     0,     0,     0,
       0,   440,   363,     0,     0,     0,     0,     0,     0,     0,
       0,   364,   389,   395,   387,   390,   391,   388,   392,   386,
     393,   394,   396,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   448,   449,     0,    94,
      68,     0,     0,     0,     4,    44,     0,     0,   121,   141,
      93,     0,   336,     0,     0,   112,   377,   363,     0,   112,
     354,   369,     0,     0,     0,     0,   335,   350,   367,     0,
     353,   351,   368,     0,   160,   366,   382,     0,   401,   403,
     405,   407,   409,   412,   411,   414,   416,   415,   417,   214,
     213,   419,   330,     0,   420,   329,   422,   423,   424,   426,
     427,   431,   429,   430,   141,   118,   116,   138,   193,   137,
      44,     0,   234,     0,   296,   296,   271,     0,     0,   287,
       0,     0,     0,     0,   268,     0,   383,   209,   201,   210,
     221,   145,   205,   206,   207,     0,   208,   215,   222,   216,
     223,     0,   217,   218,     0,   224,   225,   219,   226,   220,
       0,   227,   233,   228,   229,   231,   230,   232,   304,   337,
     340,   237,   238,   239,     0,   240,   241,   112,     0,   106,
     109,   115,     0,     0,   120,     4,     0,   177,   450,     0,
     196,   373,   111,   371,   375,     0,   374,   372,   363,     0,
     358,     0,     0,     0,   356,   363,   357,   159,   158,   365,
       0,   112,   212,     0,     0,     0,     0,   295,     0,     0,
       0,   281,     0,     0,   286,     0,     0,     0,     0,   306,
       0,     0,     0,     0,     4,   211,   236,   245,   244,     0,
     287,   273,   274,   110,   103,   104,     0,   107,   136,   132,
     135,   140,     0,     4,   378,   199,   114,   150,   195,   113,
       0,   376,   160,     0,   256,   451,   355,   370,     0,   399,
     122,   121,   121,   235,     0,   248,   294,   298,     0,   275,
     293,     0,     0,     0,   299,     0,     0,   300,   327,   325,
     321,   324,   326,     0,   338,     0,     0,   302,   309,   306,
       0,   297,   202,   204,     0,     0,   283,     0,   108,   133,
     144,     0,     0,   124,   128,   130,   197,     0,   352,   360,
       0,   264,     0,   258,   253,     0,   363,   359,     4,   119,
     117,     0,     0,   287,   291,   282,   278,   247,     0,     0,
     320,     0,   322,     4,     0,   303,   307,   318,   305,     0,
     246,     0,     0,   105,     0,     0,   142,     4,   126,     0,
     194,   266,   267,   251,   254,     0,   255,     0,     0,     0,
       0,   249,     0,   276,     0,   287,   250,   301,   319,     0,
       0,     0,   315,   308,   317,   316,   269,   285,   289,   134,
       0,   129,   128,   198,   263,   252,     0,   258,   260,   261,
       0,   361,   112,     0,     0,   292,   279,   323,   314,     0,
       0,     0,     0,   288,   290,   131,   127,     0,   257,     4,
     259,   123,     0,   289,     0,   312,   311,   310,   270,     0,
     265,   262,   272,     0,   289,     0,   284,     0,     0,   313,
     277,     0,   280
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -588,  -588,  -154,  -588,  -588,   -87,    94,  -588,  -588,  -588,
     323,   -67,  -588,  -107,   514,  -588,  -588,  -588,  -588,   -14,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,   497,   -18,  -588,  -588,   264,  -588,
     -36,  -588,  -588,  -588,  -588,  -588,  -588,   546,  -588,  -588,
     494,   452,   485,  -588,  -588,   259,  -588,    57,  -588,  -587,
    -331,  -495,  -588,   414,  -588,  -588,  -191,   165,  -588,    54,
    -588,    -7,    24,  -588,  -588,  -588,  -588,    29,   330,  -588,
    -588,  -588,  -588,   343,   209,   205,  -588,  -588,   136,  -588,
    -588,  -588,  -588,   510,   132,  -588,  -588,  -588,  -588,  -588,
    -588,   515,  -588,  -588,  -588,  -588,  -588,    -9,  -302,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,    10,  -588,  -588,
    -588,  -162,  -588,  -588,   -24,  -588,   162,  -588,  -588,  -294,
    -588,  -376,  -588,  -588,  -588,  -588,  -472,  -588,  -588,  -588,
    -588,  -588,  -588,    61,  -588,  -588,     7,    79,  -588,  -567,
    -588,    -6,  -588,  -588,  -588,  -588,  -588,  -588,  -588,  -588,
    -588,  -588,  -588,  -588,  -588,  -588,  -588,  -483,  -493,  -588,
     181,  -588,  -588,   291,  -588,  -588,  -588,    40,  -588,  -588,
     113,   115,  -588,    71,  -588,  -588,  -588,    75,  -588,  -588,
    -588,  -588,  -588,  -588,    39,  -588,  -588,  -588,  -486,  -588,
    -588,  -109,  -128,  -121,   -50,    -4,  -267,  -588,   339,  -588,
    -588,   430,  -588,   234,    38,  -588,    12,  -588,  -588,  -465,
    -588,   406,   407,   415,   400,   409,    66,  -588,    60,    65,
      49,    88,   122,   138,  -588,   154,   235,   300,  -588,  -588
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    30,    56,    10,   370,   116,   117,   118,   119,
     120,   121,   122,   462,    75,    91,    92,   167,   149,   189,
       3,     4,     9,    15,     5,     6,    11,    16,    17,    18,
      19,    20,    25,    31,   159,   407,    33,   152,    67,    78,
      70,   131,    68,    76,    93,    79,    71,    82,    97,   132,
     477,   227,   319,   245,   246,   448,   515,   449,   517,   450,
     513,   525,   247,   327,   484,   483,   453,   541,   598,   582,
     583,   628,   584,   585,   454,   519,   579,   520,   388,   248,
     249,   328,   456,   329,   457,   408,    34,    84,   136,   156,
     100,   101,   137,   102,   478,   157,    35,    89,   123,   124,
     146,   125,   126,   148,   165,   250,   251,   252,    37,    86,
     105,    87,   106,   140,   160,   236,   237,   526,   527,   528,
     586,   410,   324,   503,   411,   504,   412,   413,   414,   415,
     373,   416,   417,   418,   419,   420,   421,   422,   423,   574,
     424,   425,   426,   535,   592,   593,   635,   594,   636,   595,
     664,   631,   427,   501,   681,   428,   490,   429,   603,   674,
     645,   694,   430,   551,   511,   622,   512,   493,   682,   683,
     684,   604,   431,   488,   432,   433,   434,   435,   436,   437,
     566,   567,   616,   568,   651,   679,   695,   615,   438,   655,
     500,   611,   560,   612,   561,   562,   374,   375,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   281,   200,
     201,   335,   464,   336,   202,   203,   204,   205,   294,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   115,    80,   253,   463,   343,   233,    32,   467,    26,
      95,   242,   563,   372,   144,   539,    36,    39,    80,   550,
      22,   578,   409,   128,  -143,   231,   637,   576,    22,   171,
     172,   173,   174,   175,   176,   177,   141,   498,   661,   301,
     387,   295,    96,   391,   590,   350,   590,   163,   508,   591,
     337,   591,   -49,   127,   240,    81,   481,   257,   241,   257,
     257,   257,   257,    81,   142,   253,   153,   257,   666,   302,
     465,    81,   303,   318,    81,   304,    81,   115,   305,   306,
     268,   107,   333,   108,   660,   269,   109,     1,    29,   276,
     138,   110,   696,   253,   277,   344,   633,   111,   665,   254,
     232,   318,   296,   112,   460,   113,   184,   345,    23,   543,
     346,   240,   307,  -143,   548,   114,   151,   267,   185,    81,
     643,   187,   666,   344,   272,   632,   240,   369,   258,    12,
     258,   258,   258,   258,   663,    13,   273,  -243,   258,  -116,
      39,   274,   234,  -243,   472,   347,   322,   243,   351,   473,
      81,   235,    81,   409,  -243,   326,   275,    40,     7,   334,
     338,   389,   676,   563,   256,   389,   256,   256,   256,   256,
      81,   143,   675,     8,   256,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   550,   257,   257,   257,
     257,   257,   257,   257,   257,    14,    57,   -33,   620,   313,
     703,   533,   409,  -328,   559,   509,   314,   510,   538,   243,
     257,   708,   272,    58,    21,   439,   320,   261,   315,    81,
    -328,   550,   632,   311,   273,    22,   308,   312,    81,   274,
      27,   326,   550,   309,   590,   310,    28,   243,   316,   591,
      38,   499,   317,    59,   275,   657,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   605,   258,   258,
     258,   258,   258,   258,   258,   258,   259,    64,   262,   263,
     264,   265,   544,   260,   545,   240,   271,   471,   266,  -161,
      60,   258,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,    81,   256,   256,   256,   256,   256,   256,
     256,   256,   240,  -446,    81,   698,   330,  -446,   342,    61,
     406,    22,    62,   349,    63,   439,   353,   256,   355,    65,
     440,    66,  -242,   706,    69,   -33,    72,    73,  -242,   639,
      81,   710,   356,   357,    74,   712,   441,    77,   569,  -242,
     272,   691,    85,  -447,   461,  -445,   439,  -447,   466,  -445,
     599,   600,   273,    83,    88,   559,    90,   274,    22,   257,
     379,   380,    41,   365,   366,   367,   368,   363,   364,   581,
      94,   459,   275,   376,   377,   378,   439,   564,    44,    98,
      99,   439,   439,   129,   104,   518,   133,   409,   130,    39,
     134,   135,    46,    47,    48,   439,   139,    50,   143,    51,
      52,   381,   382,   383,   145,    22,   147,    53,    54,   154,
     155,   107,    55,   108,   158,   161,   109,   164,   162,   458,
     440,   110,   163,   166,   169,   228,   230,   111,   270,   261,
     258,   486,   238,   112,   278,   113,   441,   494,    81,   279,
     497,   406,   280,   502,   581,   114,   442,   647,   258,   297,
     298,   440,   652,   300,   331,   299,   332,   369,   107,   650,
     108,   333,   443,   109,   340,   439,   256,   441,   110,   257,
     341,   348,   352,   581,   111,   354,   668,   385,   444,   386,
     112,   440,   113,   447,   558,   452,   440,   440,   468,   455,
     406,   469,   114,   474,   625,   476,   470,   441,   529,   475,
     440,   -19,   441,   441,   481,   480,   487,   485,   491,   492,
     495,   496,   439,   507,   505,   506,   441,   523,   697,   514,
     534,   532,   337,   516,   536,   537,   524,   540,   564,   240,
     553,   546,   547,   555,   556,   439,   530,    81,   570,   572,
     258,   554,   557,   571,   565,   580,   442,   575,   494,   439,
     577,  -125,   589,   596,   529,   597,   602,   518,   607,   445,
     606,   608,   443,   609,   610,   613,   257,    81,   459,   621,
     440,   614,   439,   624,   626,   630,   256,   442,   444,  -305,
     439,   627,   601,   678,   439,   629,   441,   638,   641,   642,
     439,   644,   648,   443,   656,   439,   667,   649,   439,   258,
     658,   671,   439,   672,   680,   685,   687,   442,   619,   444,
      81,   688,   442,   442,   690,   692,   693,   440,   699,   702,
     705,   255,   704,   443,   446,   707,   442,   711,   443,   443,
     371,   103,   482,   441,   623,   558,    81,   258,   709,   444,
     440,   494,   443,   150,   444,   444,   170,   323,   168,   542,
     244,   662,   640,   659,   440,   686,   441,   451,   444,   445,
     522,   384,   521,   587,   588,   701,   573,   529,   229,   646,
     441,   634,   552,   256,   689,   406,   670,   440,   669,   239,
     673,   700,   617,   494,   618,   440,   489,   653,   677,   440,
     445,    81,   654,   441,   479,   440,   442,   339,   531,   361,
     440,   441,   358,   440,   359,   441,     0,   440,     0,   362,
       0,   441,   443,   360,     0,     0,   441,     0,     0,   441,
     445,     0,     0,   441,   446,   445,   445,     0,   444,     0,
       0,     0,     0,     0,     0,     0,     0,  -383,     0,   445,
    -383,   272,     0,   442,  -383,     0,     0,  -383,     0,     0,
       0,  -383,     0,   273,     0,   446,  -383,     0,   274,   443,
       0,     0,  -383,     0,  -383,     0,   442,  -384,     0,  -383,
    -384,  -383,     0,   275,  -384,   444,  -383,  -384,     0,     0,
     442,  -384,   443,     0,     0,   446,  -384,     0,     0,     0,
     446,   446,  -384,     0,  -384,     0,   443,     0,   444,  -384,
       0,  -384,     0,   442,   446,     0,  -384,     0,     0,   445,
       0,   442,   444,     0,     0,   442,     0,     0,     0,   443,
       0,   442,     0,     0,     0,     0,   442,   443,     0,   442,
       0,   443,  -383,   442,     0,   444,     0,   443,     0,     0,
       0,  -385,   443,   444,  -385,   443,     0,   444,  -385,   443,
       0,  -385,     0,   444,     0,  -385,   445,     0,   444,     0,
    -385,   444,  -384,     0,     0,   444,  -385,     0,  -385,     0,
       0,     0,     0,  -385,   446,  -385,     0,     0,     0,   445,
    -385,     0,    22,   171,   172,   173,   174,   175,   176,   177,
     178,     0,     0,   445,     0,     0,     0,   179,     0,     0,
       0,   180,   181,     0,     0,   182,   183,    22,   171,   172,
     173,   174,   175,   176,   177,     0,   445,     0,     0,     0,
       0,   446,   391,     0,   445,     0,     0,   181,   445,     0,
       0,   183,     0,     0,   445,   107,  -385,   108,     0,   445,
     109,     0,   445,     0,   446,   110,   445,     0,     0,     0,
       0,   111,     0,     0,     0,     0,     0,   112,   446,   113,
     184,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,   185,   186,     0,   187,     0,     0,     0,     0,
       0,   446,     0,     0,     0,   184,     0,     0,     0,   446,
       0,   188,     0,   446,     0,     0,     0,   185,     0,   446,
     187,     0,     0,     0,   446,     0,     0,   446,     0,     0,
       0,   446,    22,   171,   172,   173,   174,   175,   176,   177,
     178,     0,     0,     0,     0,     0,     0,   179,     0,     0,
       0,   180,   181,     0,     0,   182,   183,    22,   171,   172,
     173,   174,   175,   176,   177,   178,     0,     0,     0,     0,
       0,     0,   179,     0,     0,     0,   180,   181,     0,     0,
     182,   183,     0,    22,   171,   172,   173,   174,   175,   176,
     177,   178,     0,     0,     0,     0,     0,     0,   179,     0,
       0,     0,   180,   181,     0,   162,   182,   183,     0,     0,
     184,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   186,   282,   187,   402,   283,     0,     0,
       0,   284,     0,     0,   285,   184,   240,     0,   286,     0,
       0,   188,     0,   287,     0,     0,     0,   185,   186,   288,
     187,   289,     0,     0,     0,     0,   290,     0,   291,     0,
       0,   184,     0,   292,     0,     0,   188,     0,     0,     0,
       0,     0,     0,   185,   186,     0,   187,     0,    22,   171,
     172,   173,   174,   175,   176,   177,   178,   460,     0,     0,
       0,     0,   188,   179,     0,     0,     0,   180,   181,     0,
       0,   182,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
     390,   171,   172,   173,   174,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,   391,     0,     0,     0,     0,
     181,     0,     0,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,   392,     0,     0,   184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   185,   186,
       0,   187,   393,   107,   394,   108,  -203,     0,   109,     0,
     395,  -203,   396,   110,     0,     0,     0,   188,     0,   111,
     397,   398,     0,     0,     0,   112,     0,   113,   184,     0,
       0,     0,     0,     0,     0,   399,     0,   114,     0,     0,
     185,   400,   401,   187,   402,     0,     0,     0,   403,   369,
       0,     0,   404,   405,   240,     0,     0,     0,  -203,   390,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
       0,     0,     0,     0,   391,     0,     0,     0,     0,   181,
       0,     0,     0,   183,     0,     0,     0,     0,     0,     0,
       0,     0,   392,     0,     0,     0,     0,     0,     0,     0,
      22,   171,   172,   173,   174,   175,   176,   177,     0,     0,
       0,   393,   107,   394,   108,   391,     0,   109,     0,   395,
     181,   396,   110,     0,   183,     0,     0,     0,   111,   397,
     398,     0,     0,   549,   112,     0,   113,   184,     0,     0,
       0,     0,     0,     0,   399,     0,   114,     0,     0,   185,
     400,   401,   187,   402,     0,     0,     0,   403,   369,     0,
       0,   404,   405,   240,     0,     0,     0,  -146,   390,   171,
     172,   173,   174,   175,   176,   177,     0,     0,   184,     0,
       0,     0,     0,   391,     0,     0,     0,     0,   181,     0,
     185,     0,   183,   187,     0,     0,     0,     0,     0,     0,
       0,   392,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     393,   107,   394,   108,   590,     0,   109,     0,   395,   591,
     396,   110,     0,     0,     0,     0,     0,   111,   397,   398,
       0,     0,     0,   112,     0,   113,   184,     0,     0,     0,
       0,     0,     0,   399,     0,   114,     0,     0,   185,   400,
     401,   187,   402,     0,     0,     0,   403,   369,     0,     0,
     404,   405,   240,   390,   171,   172,   173,   174,   175,   176,
     177,     0,     0,     0,    41,     0,     0,     0,   391,     0,
       0,     0,    42,   181,     0,     0,     0,   183,    43,     0,
      44,     0,     0,     0,     0,     0,   392,     0,     0,    45,
       0,     0,     0,     0,    46,    47,    48,    49,     0,    50,
       0,    51,    52,     0,     0,   393,     0,   394,    22,    53,
      54,     0,     0,   395,    55,   396,     0,     0,     0,     0,
       0,     0,     0,   397,   398,     0,     0,     0,     0,     0,
       0,   184,     0,     0,     0,     0,     0,     0,   399,     0,
       0,     0,     0,   185,   400,   401,   187,   402,   325,     0,
       0,   403,     0,     0,     0,   404,   405,   240,     0,    41,
       0,   107,     0,   108,     0,     0,   109,    42,     0,     0,
       0,   110,     0,    43,     0,    44,     0,   111,     0,     0,
       0,     0,     0,   112,    45,   113,     0,     0,    22,    46,
      47,    48,    49,     0,    50,   114,    51,    52,     0,    41,
       0,   107,     0,   108,    53,    54,   109,    42,   321,    55,
       0,   110,     0,    43,     0,    44,     0,   111,     0,     0,
       0,     0,     0,   112,    45,   113,     0,     0,     0,    46,
      47,    48,    49,     0,    50,   114,    51,    52,     0,    41,
       0,   107,     0,   108,    53,    54,   109,     0,   321,    55,
       0,   110,     0,     0,     0,    44,     0,   111,     0,     0,
       0,     0,     0,   112,     0,   113,     0,     0,     0,    46,
      47,    48,     0,     0,    50,   114,    51,    52,     0,     0,
       0,     0,     0,     0,    53,    54,     0,     0,     0,    55
};

static const yytype_int16 yycheck[] =
{
      14,    88,    69,   165,   335,   272,   160,    25,   339,    23,
      77,   165,   498,   307,   121,   480,    25,     3,    85,   491,
       3,   516,   324,    90,    18,    36,   593,   510,     3,     4,
       5,     6,     7,     8,     9,    10,     3,    18,   625,    12,
      36,    49,    78,    18,    59,     3,    59,    50,   424,    64,
      18,    64,     0,    89,   107,    69,     3,   178,   111,   180,
     181,   182,   183,    77,    31,   227,   133,   188,   635,    42,
     337,    85,    37,   227,    88,    40,    90,   164,    43,    44,
      30,    56,    50,    58,    31,    35,    61,    82,    36,    30,
     104,    66,   679,   255,    35,    81,   111,    72,   111,   166,
     111,   255,   110,    78,   107,    80,    81,    93,    91,   485,
      96,   107,    77,   107,   490,    90,   130,   184,    93,   133,
     603,    96,   689,    81,    18,   590,   107,   102,   178,    30,
     180,   181,   182,   183,   629,    36,    30,    19,   188,    18,
       3,    35,   160,    25,    30,   273,   233,   165,   276,    35,
     164,   160,   166,   455,    36,   242,    50,    20,     3,   266,
     267,   323,   645,   649,   178,   327,   180,   181,   182,   183,
     184,    50,   644,     0,   188,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   658,   308,   309,   310,
     311,   312,   313,   314,   315,    76,     3,     3,   574,    13,
     693,   468,   504,    19,   498,    34,    20,    36,   475,   227,
     331,   704,    18,    20,     3,   324,   230,   179,    32,   233,
      36,   693,   687,    22,    30,     3,    38,    26,   242,    35,
      30,   318,   704,    45,    59,    47,    36,   255,    23,    64,
      30,   403,    27,    36,    50,   621,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   551,   308,   309,
     310,   311,   312,   313,   314,   315,   178,    36,   180,   181,
     182,   183,    34,   179,    36,   107,   188,   344,   184,   111,
       3,   331,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   107,    23,   318,   681,   111,    27,   270,     3,
     324,     3,     3,   275,     3,   424,   278,   331,   280,    36,
     324,    37,    19,   699,    75,     3,    62,    63,    25,   596,
     344,   707,   294,   295,     3,   711,   324,    69,   500,    36,
      18,   672,    69,    23,   334,    23,   455,    27,   338,    27,
     541,   542,    30,   107,    18,   649,    69,    35,     3,   480,
     311,   312,    54,   303,   304,   305,   306,   301,   302,   523,
      43,   333,    50,   308,   309,   310,   485,   498,    70,    30,
       3,   490,   491,    25,    83,   452,    25,   689,    83,     3,
      50,    25,    84,    85,    86,   504,   107,    89,    50,    91,
      92,   313,   314,   315,    19,     3,   107,    99,   100,    18,
      36,    56,   104,    58,    25,     3,    61,    25,    51,   331,
     424,    66,    50,    15,   107,   111,    25,    72,    18,   391,
     480,   393,    51,    78,    50,    80,   424,   399,   452,    19,
     402,   455,    25,   405,   598,    90,   324,   609,   498,    16,
     108,   455,   614,    15,    19,    52,    19,   102,    56,   613,
      58,    50,   324,    61,     3,   574,   480,   455,    66,   590,
       3,     3,     3,   627,    72,    51,   638,     3,   324,     3,
      78,   485,    80,     3,   498,    98,   490,   491,    18,   107,
     504,    19,    90,    51,   581,    51,    19,   485,   460,    18,
     504,     3,   490,   491,     3,    34,     3,    34,    18,    18,
      18,    18,   621,    67,    36,    36,   504,    18,   680,    36,
     107,    19,    18,    41,     3,     3,    51,    18,   649,   107,
     492,    36,    36,   495,   496,   644,    50,   551,    18,   111,
     590,    36,    36,    36,    60,   111,   424,   509,   510,   658,
      25,    19,    19,    18,   516,    19,   105,   624,    19,   324,
      36,    19,   424,    19,    36,    18,   687,   581,   530,    19,
     574,    71,   681,    25,    19,   111,   590,   455,   424,    71,
     689,    25,   544,   650,   693,    25,   574,    29,    36,    18,
     699,    25,    19,   455,    19,   704,    34,    36,   707,   649,
      36,    19,   711,    19,    19,     3,    25,   485,   570,   455,
     624,    34,   490,   491,    36,    19,    36,   621,    19,    36,
     108,   169,    36,   485,   324,    19,   504,    19,   490,   491,
     307,    85,   373,   621,   577,   649,   650,   687,   705,   485,
     644,   603,   504,   129,   490,   491,   152,   233,   151,   484,
     165,   627,   598,   624,   658,   662,   644,   327,   504,   424,
     455,   318,   453,   527,   532,   689,   504,   629,   158,   608,
     658,   592,   491,   687,   667,   689,   638,   681,   638,   164,
     642,   687,   569,   645,   569,   689,   395,   616,   649,   693,
     455,   705,   617,   681,   355,   699,   574,   267,   464,   299,
     704,   689,   296,   707,   297,   693,    -1,   711,    -1,   300,
      -1,   699,   574,   298,    -1,    -1,   704,    -1,    -1,   707,
     485,    -1,    -1,   711,   424,   490,   491,    -1,   574,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,   504,
      17,    18,    -1,   621,    21,    -1,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    -1,   455,    33,    -1,    35,   621,
      -1,    -1,    39,    -1,    41,    -1,   644,    14,    -1,    46,
      17,    48,    -1,    50,    21,   621,    53,    24,    -1,    -1,
     658,    28,   644,    -1,    -1,   485,    33,    -1,    -1,    -1,
     490,   491,    39,    -1,    41,    -1,   658,    -1,   644,    46,
      -1,    48,    -1,   681,   504,    -1,    53,    -1,    -1,   574,
      -1,   689,   658,    -1,    -1,   693,    -1,    -1,    -1,   681,
      -1,   699,    -1,    -1,    -1,    -1,   704,   689,    -1,   707,
      -1,   693,   109,   711,    -1,   681,    -1,   699,    -1,    -1,
      -1,    14,   704,   689,    17,   707,    -1,   693,    21,   711,
      -1,    24,    -1,   699,    -1,    28,   621,    -1,   704,    -1,
      33,   707,   109,    -1,    -1,   711,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,   574,    48,    -1,    -1,    -1,   644,
      53,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,   658,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,   681,    -1,    -1,    -1,
      -1,   621,    18,    -1,   689,    -1,    -1,    23,   693,    -1,
      -1,    27,    -1,    -1,   699,    56,   109,    58,    -1,   704,
      61,    -1,   707,    -1,   644,    66,   711,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    78,   658,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    93,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   681,    -1,    -1,    -1,    81,    -1,    -1,    -1,   689,
      -1,   112,    -1,   693,    -1,    -1,    -1,    93,    -1,   699,
      96,    -1,    -1,    -1,   704,    -1,    -1,   707,    -1,    -1,
      -1,   711,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    22,    23,    -1,    51,    26,    27,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    14,    96,    97,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    81,   107,    -1,    28,    -1,
      -1,   112,    -1,    33,    -1,    -1,    -1,    93,    94,    39,
      96,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    81,    -1,    53,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    -1,    96,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   107,    -1,    -1,
      -1,    -1,   112,    18,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    55,    56,    57,    58,    59,    -1,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,   112,    -1,    72,
      73,    74,    -1,    -1,    -1,    78,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   101,   102,
      -1,    -1,   105,   106,   107,    -1,    -1,    -1,   111,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    55,    56,    57,    58,    18,    -1,    61,    -1,    63,
      23,    65,    66,    -1,    27,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    36,    78,    -1,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    97,    -1,    -1,    -1,   101,   102,    -1,
      -1,   105,   106,   107,    -1,    -1,    -1,   111,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,
      93,    -1,    27,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    -1,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    -1,    78,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    96,    97,    -1,    -1,    -1,   101,   102,    -1,    -1,
     105,   106,   107,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    54,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    62,    23,    -1,    -1,    -1,    27,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    89,
      -1,    91,    92,    -1,    -1,    55,    -1,    57,     3,    99,
     100,    -1,    -1,    63,   104,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,     3,    -1,
      -1,   101,    -1,    -1,    -1,   105,   106,   107,    -1,    54,
      -1,    56,    -1,    58,    -1,    -1,    61,    62,    -1,    -1,
      -1,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    -1,    -1,     3,    84,
      85,    86,    87,    -1,    89,    90,    91,    92,    -1,    54,
      -1,    56,    -1,    58,    99,   100,    61,    62,   103,   104,
      -1,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    92,    -1,    54,
      -1,    56,    -1,    58,    99,   100,    61,    -1,   103,   104,
      -1,    66,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,   104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    82,   127,   146,   147,   150,   151,     3,     0,   148,
     130,   152,    30,    36,    76,   149,   153,   154,   155,   156,
     157,     3,     3,    91,   145,   158,   145,    30,    36,    36,
     128,   159,   161,   162,   212,   222,   233,   234,    30,     3,
      20,    54,    62,    68,    70,    79,    84,    85,    86,    87,
      89,    91,    92,    99,   100,   104,   129,     3,    20,    36,
       3,     3,     3,     3,    36,    36,    37,   164,   168,    75,
     166,   172,   164,   164,     3,   140,   169,    69,   165,   171,
     137,   145,   173,   107,   213,    69,   235,   237,    18,   223,
      69,   141,   142,   170,    43,   137,   166,   174,    30,     3,
     216,   217,   219,   173,    83,   236,   238,    56,    58,    61,
      66,    72,    78,    80,    90,   131,   132,   133,   134,   135,
     136,   137,   138,   224,   225,   227,   228,   166,   137,    25,
      83,   167,   175,    25,    50,    25,   214,   218,   145,   107,
     239,     3,    31,    50,   139,    19,   226,   107,   229,   144,
     140,   145,   163,   137,    18,    36,   215,   221,    25,   160,
     240,     3,    51,    50,    25,   230,    15,   143,   160,   107,
     176,     4,     5,     6,     7,     8,     9,    10,    11,    18,
      22,    23,    26,    27,    81,    93,    94,    96,   112,   145,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     335,   336,   340,   341,   342,   343,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   177,   111,   219,
      25,    36,   111,   128,   161,   233,   241,   242,    51,   227,
     107,   111,   128,   161,   178,   179,   180,   188,   205,   206,
     231,   232,   233,   247,   137,   177,   145,   329,   330,   357,
     132,   340,   357,   357,   357,   357,   132,   137,    30,    35,
      18,   357,    18,    30,    35,    50,    30,    35,    50,    19,
      25,   334,    14,    17,    21,    24,    28,    33,    39,    41,
      46,    48,    53,   109,   344,    49,   110,    16,   108,    52,
      15,    12,    42,    37,    40,    43,    44,    77,    38,    45,
      47,    22,    26,    13,    20,    32,    23,    27,   128,   178,
     145,   103,   131,   189,   248,     3,   131,   189,   207,   209,
     111,    19,    19,    50,   139,   337,   339,    18,   139,   337,
       3,     3,   340,   332,    81,    93,    96,   328,     3,   340,
       3,   328,     3,   340,    51,   340,   340,   340,   347,   348,
     349,   350,   351,   352,   352,   354,   354,   354,   354,   102,
     131,   136,   255,   256,   322,   323,   355,   355,   355,   356,
     356,   357,   357,   357,   209,     3,     3,    36,   204,   247,
       3,    18,    36,    55,    57,    63,    65,    73,    74,    88,
      94,    95,    97,   101,   105,   106,   145,   161,   211,   234,
     247,   250,   252,   253,   254,   255,   257,   258,   259,   260,
     261,   262,   263,   264,   266,   267,   268,   278,   281,   283,
     288,   298,   300,   301,   302,   303,   304,   305,   314,   327,
     331,   342,   358,   359,   361,   362,   363,     3,   181,   183,
     185,   204,    98,   192,   200,   107,   208,   210,   357,   340,
     107,   243,   139,   186,   338,   332,   243,   186,    18,    19,
      19,   137,    30,    35,    51,    18,    51,   176,   220,   334,
      34,     3,   181,   191,   190,    34,   340,     3,   299,   299,
     282,    18,    18,   293,   340,    18,    18,   340,    18,   247,
     316,   279,   340,   249,   251,    36,    36,    67,   257,    34,
      36,   290,   292,   186,    36,   182,    41,   184,   137,   201,
     203,   210,   211,    18,    51,   187,   243,   244,   245,   340,
      50,   339,    19,   332,   107,   269,     3,     3,   332,   345,
      18,   193,   193,   257,    34,    36,    36,    36,   257,    36,
     262,   289,   296,   340,    36,   340,   340,    36,   145,   255,
     318,   320,   321,   324,   329,    60,   306,   307,   309,   247,
      18,    36,   111,   252,   265,   340,   293,    25,   187,   202,
     111,   128,   195,   196,   198,   199,   246,   214,   220,    19,
      59,    64,   270,   271,   273,   275,    18,    19,   194,   192,
     192,   340,   105,   284,   297,   255,    36,    19,    19,    19,
      36,   317,   319,    18,    71,   313,   308,   306,   307,   340,
     257,    19,   291,   183,    25,   131,    19,    25,   197,    25,
     111,   277,   345,   111,   273,   272,   274,   275,    29,   332,
     195,    36,    18,   293,    25,   286,   269,   247,    19,    36,
     128,   310,   247,   309,   313,   315,    19,   257,    36,   203,
      31,   185,   198,   187,   276,   111,   275,    34,   247,   303,
     340,    19,    19,   340,   285,   262,   293,   320,   137,   311,
      19,   280,   294,   295,   296,     3,   197,    25,    34,   272,
      36,   186,    19,    36,   287,   312,   185,   247,   257,    19,
     277,   250,    36,   294,    36,   108,   257,    19,   294,   137,
     257,    19,   257
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   126,   127,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   135,
     135,   136,   136,   137,   138,   139,   139,   140,   141,   141,
     142,   143,   144,   144,   145,   145,   146,   148,   149,   147,
     150,   150,   151,   152,   152,   153,   153,   153,   153,   154,
     155,   156,   157,   158,   158,   159,   159,   159,   160,   160,
     161,   161,   161,   163,   162,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   169,   170,   170,   171,   172,   173,
     174,   174,   175,   176,   177,   177,   178,   178,   178,   179,
     179,   179,   179,   180,   181,   182,   182,   183,   184,   184,
     185,   186,   186,   187,   187,   188,   190,   189,   191,   189,
     192,   192,   194,   193,   195,   195,   196,   197,   197,   198,
     198,   199,   200,   201,   202,   202,   203,   204,   204,   205,
     206,   208,   207,   209,   210,   211,   211,   212,   213,   214,
     214,   215,   215,   216,   216,   217,   218,   218,   219,   220,
     220,   221,   222,   223,   224,   224,   225,   226,   226,   227,
     227,   228,   229,   230,   230,   231,   231,   232,   233,   234,
     235,   235,   236,   236,   237,   238,   239,   240,   240,   241,
     241,   241,   241,   242,   243,   244,   244,   245,   246,   246,
     248,   249,   247,   250,   251,   251,   252,   252,   252,   253,
     253,   254,   255,   256,   256,   257,   257,   257,   257,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   259,   260,   261,   262,   262,   262,
     262,   262,   262,   262,   263,   265,   264,   266,   267,   267,
     268,   269,   269,   270,   270,   271,   271,   272,   272,   273,
     273,   273,   274,   275,   275,   276,   276,   277,   279,   280,
     278,   282,   281,   283,   283,   284,   285,   283,   286,   287,
     283,   289,   288,   291,   290,   292,   293,   293,   294,   294,
     295,   296,   297,   297,   298,   299,   299,   300,   301,   302,
     303,   304,   305,   305,   305,   306,   306,   307,   308,   308,
     309,   310,   311,   312,   312,   313,   314,   315,   315,   316,
     317,   317,   318,   319,   319,   320,   320,   321,   321,   322,
     323,   324,   324,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   326,   326,   326,   326,   326,   326,   326,   327,
     327,   327,   328,   329,   329,   329,   330,   330,   331,   331,
     331,   331,   332,   332,   333,   334,   334,   335,   335,   335,
     335,   336,   336,   336,   336,   337,   338,   338,   339,   340,
     341,   341,   342,   343,   343,   343,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   345,   345,
     346,   346,   347,   347,   348,   348,   349,   349,   350,   350,
     351,   351,   351,   352,   352,   352,   352,   352,   352,   353,
     353,   354,   354,   354,   354,   355,   355,   355,   356,   356,
     356,   356,   357,   357,   357,   357,   357,   358,   359,   360,
     360,   360,   360,   360,   361,   361,   361,   361,   362,   363,
     364,   365
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     2,     1,     0,
       3,     2,     2,     0,     1,     3,     1,     0,     0,     5,
       1,     0,     4,     2,     0,     1,     1,     1,     1,     3,
       5,     6,     6,     2,     0,     1,     1,     1,     3,     0,
       1,     1,     1,     0,     9,     1,     0,     1,     0,     1,
       0,     1,     0,     3,     2,     3,     0,     2,     2,     2,
       3,     0,     3,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     3,     0,     2,     2,     0,
       2,     1,     0,     1,     1,     3,     0,     5,     0,     5,
       1,     0,     0,     5,     1,     0,     2,     3,     0,     3,
       1,     4,     2,     2,     3,     0,     1,     1,     1,     1,
       4,     0,     5,     1,     3,     1,     0,     5,     5,     1,
       0,     1,     0,     1,     0,     2,     3,     0,     7,     1,
       0,     2,     7,     3,     1,     0,     2,     3,     0,     2,
       1,     3,     3,     2,     0,     1,     1,     3,     1,     7,
       1,     0,     1,     0,     2,     3,     3,     2,     0,     1,
       1,     1,     1,     3,     4,     1,     0,     2,     3,     0,
       0,     0,     5,     2,     2,     0,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     4,     4,     3,     5,
       5,     3,     4,     1,     2,     2,     0,     3,     0,     4,
       3,     3,     4,     3,     1,     3,     0,     1,     0,     0,
       7,     0,     8,     2,     2,     0,     0,    10,     0,     0,
      11,     0,     4,     0,     7,     4,     1,     0,     1,     0,
       1,     2,     3,     0,     3,     1,     0,     3,     3,     3,
       3,     5,     3,     4,     1,     1,     0,     2,     2,     0,
       5,     3,     2,     3,     0,     2,     5,     1,     0,     4,
       1,     0,     2,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     6,     3,     3,     5,     4,     4,     4,     6,
       6,     8,     1,     0,     2,     3,     0,     3,     3,     3,
       5,     4,     4,     4,     4,     2,     2,     0,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     5
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
  case 3: /* modifier.multiopt: modifier.multiopt modifier  */
#line 521 "grammer.y"
                                { modifiers.insert((yyvsp[0].e)->s); copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s) + " " + string((yyvsp[0].e)->s)); }
#line 2425 "grammer.tab.c"
    break;

  case 4: /* modifier.multiopt: %empty  */
#line 522 "grammer.y"
         {copyData(&(yyval.e));}
#line 2431 "grammer.tab.c"
    break;

  case 16: /* dot_ind.multiopt: dot_ind.multiopt "." TOK_IDENTIFIER  */
#line 538 "grammer.y"
                                                    { copyString(&((yyval.e)->s), string((yyvsp[-2].e)->s) + "." + string((yyvsp[0].e)->s)); }
#line 2437 "grammer.tab.c"
    break;

  case 17: /* dot_ind.multiopt: %empty  */
#line 539 "grammer.y"
         {copyData(&(yyval.e));}
#line 2443 "grammer.tab.c"
    break;

  case 18: /* type: primitive_type  */
#line 543 "grammer.y"
                              { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); cur_type = string((yyvsp[0].e)->s); }
#line 2449 "grammer.tab.c"
    break;

  case 19: /* type: reference_type  */
#line 544 "grammer.y"
                              { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); cur_type = string((yyvsp[0].e)->s); }
#line 2455 "grammer.tab.c"
    break;

  case 20: /* primitive_type: numeric_type  */
#line 547 "grammer.y"
                                          { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2461 "grammer.tab.c"
    break;

  case 22: /* numeric_type: integral_type  */
#line 551 "grammer.y"
                                          { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2467 "grammer.tab.c"
    break;

  case 23: /* numeric_type: floating_point_type  */
#line 552 "grammer.y"
                                { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2473 "grammer.tab.c"
    break;

  case 24: /* integral_type: "byte"  */
#line 555 "grammer.y"
                      { cur_size = 1; }
#line 2479 "grammer.tab.c"
    break;

  case 25: /* integral_type: "short"  */
#line 556 "grammer.y"
                      { cur_size = 2; }
#line 2485 "grammer.tab.c"
    break;

  case 26: /* integral_type: "int"  */
#line 557 "grammer.y"
                      { cur_size = 4; }
#line 2491 "grammer.tab.c"
    break;

  case 27: /* integral_type: "long"  */
#line 558 "grammer.y"
                      { cur_size = 8; }
#line 2497 "grammer.tab.c"
    break;

  case 28: /* integral_type: "char"  */
#line 559 "grammer.y"
                      { cur_size = 2; }
#line 2503 "grammer.tab.c"
    break;

  case 29: /* floating_point_type: "float"  */
#line 562 "grammer.y"
                      { cur_size = 4; }
#line 2509 "grammer.tab.c"
    break;

  case 30: /* floating_point_type: "double"  */
#line 563 "grammer.y"
                      { cur_size = 8; }
#line 2515 "grammer.tab.c"
    break;

  case 31: /* reference_type: class_or_interface_type  */
#line 566 "grammer.y"
                                  { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2521 "grammer.tab.c"
    break;

  case 32: /* reference_type: array_type  */
#line 567 "grammer.y"
                                                { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2527 "grammer.tab.c"
    break;

  case 33: /* class_or_interface_type: un_name  */
#line 570 "grammer.y"
                           { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2533 "grammer.tab.c"
    break;

  case 34: /* array_type: class_or_interface_type dims  */
#line 573 "grammer.y"
                                  { copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2539 "grammer.tab.c"
    break;

  case 35: /* dims: "[" "]"  */
#line 576 "grammer.y"
                                              { copyString(&((yyval.e)->s), "[]"); }
#line 2545 "grammer.tab.c"
    break;

  case 36: /* dims: dims "[" "]"  */
#line 577 "grammer.y"
                                  { copyString(&((yyval.e)->s), string((yyvsp[-2].e)->s) + "[]"); }
#line 2551 "grammer.tab.c"
    break;

  case 37: /* type_parameter: TOK_IDENTIFIER type_bound.opt  */
#line 580 "grammer.y"
                                  { copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2557 "grammer.tab.c"
    break;

  case 38: /* type_bound.opt: type_bound  */
#line 583 "grammer.y"
                                                { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2563 "grammer.tab.c"
    break;

  case 39: /* type_bound.opt: %empty  */
#line 584 "grammer.y"
         {copyData(&(yyval.e));}
#line 2569 "grammer.tab.c"
    break;

  case 40: /* type_bound: "extends" class_or_interface_type additional_bound.multiopt  */
#line 587 "grammer.y"
                                                                          { copyString(&((yyval.e)->s), " extends " + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2575 "grammer.tab.c"
    break;

  case 41: /* additional_bound: "&" class_or_interface_type  */
#line 590 "grammer.y"
                                                          { copyString(&((yyval.e)->s), " & " + string((yyvsp[0].e)->s)); }
#line 2581 "grammer.tab.c"
    break;

  case 43: /* additional_bound.multiopt: %empty  */
#line 594 "grammer.y"
         {copyData(&(yyval.e));}
#line 2587 "grammer.tab.c"
    break;

  case 44: /* un_name: TOK_IDENTIFIER  */
#line 600 "grammer.y"
                                    {
          checkDeclaration(string((yyvsp[0].e)->s));
          string type = lookupType(string((yyvsp[0].e)->s));
          if (type == "")
            type = "unknown type";
          int offset = lookupOffset(string((yyvsp[0].e)->s));
          // string v1 = storeTemp("getOffset(" + string($1->s) + ")", "", "_");
          // string v2 = storeTemp("* rhs", "ebp", v1);
          string v2 = storeTemp("* rhs", "(ebp - "+to_string(offset)+")","_");
          copyData(&(yyval.e), string((yyvsp[0].e)->s), type, v2);
        }
#line 2603 "grammer.tab.c"
    break;

  case 45: /* un_name: un_name "." TOK_IDENTIFIER  */
#line 611 "grammer.y"
                                    {
          string s = string((yyvsp[-2].e)->s) + "." + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, s, s);
          // TODO: fix type, 3AC
        }
#line 2613 "grammer.tab.c"
    break;

  case 47: /* $@1: %empty  */
#line 623 "grammer.y"
                          { ignoreDeclaration = true; }
#line 2619 "grammer.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 623 "grammer.y"
                                                                                    { ignoreDeclaration = false; }
#line 2625 "grammer.tab.c"
    break;

  case 51: /* package_declaration.opt: %empty  */
#line 627 "grammer.y"
         {copyData(&(yyval.e));}
#line 2631 "grammer.tab.c"
    break;

  case 52: /* package_declaration: "package" TOK_IDENTIFIER dot_ind.multiopt ";"  */
#line 630 "grammer.y"
                                                      { package_name = string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s); }
#line 2637 "grammer.tab.c"
    break;

  case 53: /* import_declaration.multiopt: import_declaration.multiopt import_declaration  */
#line 633 "grammer.y"
                                                            { import_list.push_back((yyvsp[0].e)->s); }
#line 2643 "grammer.tab.c"
    break;

  case 54: /* import_declaration.multiopt: %empty  */
#line 634 "grammer.y"
         {copyData(&(yyval.e));}
#line 2649 "grammer.tab.c"
    break;

  case 59: /* single_type_import_declaration: "import" un_name ";"  */
#line 643 "grammer.y"
                                                              { copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s)); }
#line 2655 "grammer.tab.c"
    break;

  case 60: /* type_import_on_demand_declaration: "import" un_name "." "*" ";"  */
#line 646 "grammer.y"
                                                                          { copyString(&((yyval.e)->s), string((yyvsp[-3].e)->s) + ".*"); }
#line 2661 "grammer.tab.c"
    break;

  case 61: /* single_static_import_declaration: "import" "static" un_name "." TOK_IDENTIFIER ";"  */
#line 649 "grammer.y"
                                                              { copyString(&((yyval.e)->s), "static " + string((yyvsp[-3].e)->s) + "." + string((yyvsp[-1].e)->s)); }
#line 2667 "grammer.tab.c"
    break;

  case 62: /* static_import_on_demand_declaration: "import" "static" un_name "." "*" ";"  */
#line 652 "grammer.y"
                                                                { copyString(&((yyval.e)->s), "static " + string((yyvsp[-3].e)->s) + ".*"); }
#line 2673 "grammer.tab.c"
    break;

  case 64: /* top_level_class_or_interface_declaration.multiopt: %empty  */
#line 656 "grammer.y"
         {copyData(&(yyval.e));}
#line 2679 "grammer.tab.c"
    break;

  case 68: /* com_type_name.multiopt: com_type_name.multiopt "," un_name  */
#line 664 "grammer.y"
                                              { copyString(&((yyval.e)->s), string((yyvsp[-2].e)->s) + "," + string((yyvsp[0].e)->s)); }
#line 2685 "grammer.tab.c"
    break;

  case 69: /* com_type_name.multiopt: %empty  */
#line 665 "grammer.y"
         {copyData(&(yyval.e));}
#line 2691 "grammer.tab.c"
    break;

  case 73: /* $@3: %empty  */
#line 675 "grammer.y"
                                                                                                                          {
                          int offset = symbol_table[cur_table_idx].size;
                          struct info cur_info = createInfo("", "class", 0, offset, yylineno, modifiers);
                          string name = string((yyvsp[-4].e)->s);
                          insertSymbol(name, &cur_info);
                          modifiers.clear();
                          if(cur_table_idx>-1 && symbol_table[cur_table_idx].name!="")name = symbol_table[cur_table_idx].name+"."+name;
                          createTable( name, 1, (yyvsp[-2].e)->s, 0, true);
                        }
#line 2705 "grammer.tab.c"
    break;

  case 74: /* normal_class_declaration: modifier.multiopt "class" TOK_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt $@3 class_body  */
#line 683 "grammer.y"
                                     {
                          int prev_index = cur_table_idx;
                          cur_table_idx = symbol_table[cur_table_idx].parent;
                          symbol_table[cur_table_idx].size += symbol_table[prev_index].size;
                        }
#line 2715 "grammer.tab.c"
    break;

  case 75: /* type_parameters.opt: type_parameters  */
#line 690 "grammer.y"
                                          { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2721 "grammer.tab.c"
    break;

  case 76: /* type_parameters.opt: %empty  */
#line 691 "grammer.y"
         {copyData(&(yyval.e));}
#line 2727 "grammer.tab.c"
    break;

  case 77: /* class_extends.opt: class_extends  */
#line 694 "grammer.y"
                                    { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2733 "grammer.tab.c"
    break;

  case 78: /* class_extends.opt: %empty  */
#line 695 "grammer.y"
         {copyData(&(yyval.e));}
#line 2739 "grammer.tab.c"
    break;

  case 79: /* class_implements.opt: class_implements  */
#line 698 "grammer.y"
                                        { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2745 "grammer.tab.c"
    break;

  case 80: /* class_implements.opt: %empty  */
#line 699 "grammer.y"
         {copyData(&(yyval.e));}
#line 2751 "grammer.tab.c"
    break;

  case 81: /* class_permits.opt: class_permits  */
#line 702 "grammer.y"
                                    { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2757 "grammer.tab.c"
    break;

  case 82: /* class_permits.opt: %empty  */
#line 703 "grammer.y"
         {copyData(&(yyval.e));}
#line 2763 "grammer.tab.c"
    break;

  case 83: /* type_parameters: "<" type_parameter_list ">"  */
#line 706 "grammer.y"
                                                  { copyString(&((yyval.e)->s), "<" + string((yyvsp[-1].e)->s) + ">"); }
#line 2769 "grammer.tab.c"
    break;

  case 84: /* type_parameter_list: type_parameter com_type_parameter.multiopt  */
#line 709 "grammer.y"
                                              { copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2775 "grammer.tab.c"
    break;

  case 85: /* com_type_parameter.multiopt: com_type_parameter.multiopt "," type_parameter  */
#line 712 "grammer.y"
                                                    { copyString(&((yyval.e)->s), string((yyvsp[-2].e)->s) + "," + string((yyvsp[0].e)->s)); }
#line 2781 "grammer.tab.c"
    break;

  case 86: /* com_type_parameter.multiopt: %empty  */
#line 713 "grammer.y"
         {copyData(&(yyval.e));}
#line 2787 "grammer.tab.c"
    break;

  case 87: /* class_extends: "extends" class_or_interface_type  */
#line 716 "grammer.y"
                                          { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2793 "grammer.tab.c"
    break;

  case 88: /* class_implements: "implements" interface_type_list  */
#line 719 "grammer.y"
                                                  { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2799 "grammer.tab.c"
    break;

  case 89: /* interface_type_list: class_or_interface_type com_interface_type.multiopt  */
#line 722 "grammer.y"
                                                                  { copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2805 "grammer.tab.c"
    break;

  case 90: /* com_interface_type.multiopt: com_interface_type.multiopt "," class_or_interface_type  */
#line 725 "grammer.y"
                                                                  { copyString(&((yyval.e)->s), string((yyvsp[-2].e)->s) + "," + string((yyvsp[0].e)->s)); }
#line 2811 "grammer.tab.c"
    break;

  case 91: /* com_interface_type.multiopt: %empty  */
#line 726 "grammer.y"
         {copyData(&(yyval.e));}
#line 2817 "grammer.tab.c"
    break;

  case 92: /* class_permits: "permits" un_name com_type_name.multiopt  */
#line 729 "grammer.y"
                                                          { copyString(&((yyval.e)->s), " permits " + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2823 "grammer.tab.c"
    break;

  case 93: /* class_body: "{" class_body_declaration.multiopt "}"  */
#line 732 "grammer.y"
                                                                  { copyString(&((yyval.e)->s), "{" + string((yyvsp[-1].e)->s) + "}"); }
#line 2829 "grammer.tab.c"
    break;

  case 94: /* class_body_declaration.multiopt: class_body_declaration.multiopt class_body_declaration  */
#line 735 "grammer.y"
                                                          { copyString(&((yyval.e)->s), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s)); }
#line 2835 "grammer.tab.c"
    break;

  case 95: /* class_body_declaration.multiopt: %empty  */
#line 736 "grammer.y"
         {copyData(&(yyval.e));}
#line 2841 "grammer.tab.c"
    break;

  case 96: /* class_body_declaration: class_member_declaration  */
#line 739 "grammer.y"
                                            { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2847 "grammer.tab.c"
    break;

  case 97: /* class_body_declaration: instance_initializer  */
#line 740 "grammer.y"
                                              { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2853 "grammer.tab.c"
    break;

  case 98: /* class_body_declaration: constructor_declaration  */
#line 741 "grammer.y"
                                                    { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2859 "grammer.tab.c"
    break;

  case 99: /* class_member_declaration: field_declaration  */
#line 744 "grammer.y"
                                                  { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2865 "grammer.tab.c"
    break;

  case 100: /* class_member_declaration: method_declaration  */
#line 745 "grammer.y"
                                                { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2871 "grammer.tab.c"
    break;

  case 101: /* class_member_declaration: class_declaration  */
#line 746 "grammer.y"
                                                  { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2877 "grammer.tab.c"
    break;

  case 102: /* class_member_declaration: interface_declaration  */
#line 747 "grammer.y"
                                              { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2883 "grammer.tab.c"
    break;

  case 103: /* field_declaration: modifier.multiopt type variable_declarator_list ";"  */
#line 750 "grammer.y"
                                                         {
              modifiers.clear();
              cur_type = "";
              cur_size = 0;
            }
#line 2893 "grammer.tab.c"
    break;

  case 106: /* com_variable_declarator.multiopt: %empty  */
#line 761 "grammer.y"
         {copyData(&(yyval.e));}
#line 2899 "grammer.tab.c"
    break;

  case 107: /* variable_declarator: variable_declarator_id eq_variable_initializer.opt  */
#line 764 "grammer.y"
                                                      {
          copyData(&(yyval.e), (yyvsp[-1].e)->s, (yyvsp[-1].e)->type);
          string symbol = string((yyvsp[-1].e)->s);
          string type = lookupType(symbol);
          if (string((yyvsp[0].e)->s) != "") {
            typeCheck(type, (yyvsp[0].e)->type);
            pushInstruction("_", (yyvsp[0].e)->v, "_", (yyvsp[-1].e)->v);

            string dims = string((yyvsp[-1].e)->type);
            if (dims.size() >= 2 && dims[0] == '[' && dims[1] == ']') {
              int sz = getArraySize((yyvsp[0].e)->v);
              int base_size = symbol_table[cur_table_idx].table[symbol].size;
              symbol_table[cur_table_idx].size -= base_size;
              symbol_table[cur_table_idx].table[symbol].size = sz*base_size;
              symbol_table[cur_table_idx].size += sz*base_size;
              updateSize(sz*base_size - base_size);
            }
          }
        }
#line 2923 "grammer.tab.c"
    break;

  case 108: /* eq_variable_initializer.opt: "=" variable_initializer  */
#line 785 "grammer.y"
                              { copyData(&(yyval.e), (yyvsp[0].e)->s, (yyvsp[0].e)->type, (yyvsp[0].e)->v); }
#line 2929 "grammer.tab.c"
    break;

  case 109: /* eq_variable_initializer.opt: %empty  */
#line 786 "grammer.y"
         {copyData(&(yyval.e));}
#line 2935 "grammer.tab.c"
    break;

  case 110: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 789 "grammer.y"
                            {
                int offset = getCurSize();
                if (param_declaration == 0) {

                  string type = cur_type + string((yyvsp[0].e)->s);
                  struct info cur_info = createInfo(type, "variable", cur_size, offset, yylineno, modifiers);
                  updateSize(cur_size);
                  insertSymbol((yyvsp[-1].e)->s, &cur_info);
                  symbol_table[cur_table_idx].size += cur_size;
                  // pushInstruction("param", to_string(cur_size), "_", "");
                  // pushInstruction("call", "allocmem", "1", "_");
                  pushInstruction("-stackptr", to_string(cur_size), "_", "_");
                }
                copyData(&(yyval.e), (yyvsp[-1].e)->s, (yyvsp[0].e)->s, "*(ebp - "+to_string(offset)+")");
              }
#line 2955 "grammer.tab.c"
    break;

  case 111: /* dims.opt: dims  */
#line 806 "grammer.y"
                            { copyString(&((yyval.e)->s), string((yyvsp[0].e)->s)); }
#line 2961 "grammer.tab.c"
    break;

  case 112: /* dims.opt: %empty  */
#line 807 "grammer.y"
         {copyData(&(yyval.e));}
#line 2967 "grammer.tab.c"
    break;

  case 115: /* method_declaration: modifier.multiopt method_header method_body  */
#line 814 "grammer.y"
                                              { cur_table_idx = symbol_table[cur_table_idx].parent; cur_method = -1; }
#line 2973 "grammer.tab.c"
    break;

  case 116: /* $@4: %empty  */
#line 817 "grammer.y"
                      {
              // symbol table entry
              int offset = symbol_table[cur_table_idx].size;
              struct info cur_info = createInfo((yyvsp[-1].e)->s, "method", 0, offset, yylineno, modifiers);
              string name = string((yyvsp[0].e)->s);
              insertSymbol(name, &cur_info);
              modifiers.clear();
              string class_name = symbol_table[cur_table_idx].name;
              createTable(name, 0, "", 1, true);
              symbol_table[cur_table_idx].return_type = string((yyvsp[-1].e)->s);
              cur_size = 0;
              param_declaration = 1;
              // 3AC
              pair<string, vector<vector<string>>> p;
              p.first = class_name + "." + name;
              tac_code.push_back(p);
              cur_method = tac_code.size() - 1;
              methods.push_back({(yyvsp[-1].e)->s,vector<struct expr*>()});
              meth_and_ret.insert({(yyvsp[0].e)->s,(yyvsp[-1].e)->s});
              tmp_count = label_count = 1;
            }
#line 2999 "grammer.tab.c"
    break;

  case 118: /* $@5: %empty  */
#line 838 "grammer.y"
                          {
              // symbol table entry
              int offset = symbol_table[cur_table_idx].size;
              struct info cur_info = createInfo("void", "method", 0, offset, yylineno, modifiers);
              string name = string((yyvsp[0].e)->s);
              insertSymbol(name, &cur_info);
              modifiers.clear();
              string class_name = symbol_table[cur_table_idx].name;
              createTable(name, 0, "", 1, true);
              symbol_table[cur_table_idx].return_type = "void";
              cur_size = 0;
              // 3AC
              pair<string, vector<vector<string>>> p;
              p.first = class_name + "." + name;
              tac_code.push_back(p);
              cur_method = tac_code.size() - 1;
              methods.push_back({(yyvsp[-1].e)->s,vector<struct expr*>()});
              meth_and_ret.insert({(yyvsp[0].e)->s,(yyvsp[-1].e)->s});
              tmp_count = label_count = 1;
            }
#line 3024 "grammer.tab.c"
    break;

  case 121: /* throws.opt: %empty  */
#line 861 "grammer.y"
         {copyData(&(yyval.e));}
#line 3030 "grammer.tab.c"
    break;

  case 122: /* $@6: %empty  */
#line 864 "grammer.y"
         { param_declaration = 1;}
#line 3036 "grammer.tab.c"
    break;

  case 123: /* method_parameters: "(" $@6 formal_parameter_list.opt ")" dims.opt  */
#line 864 "grammer.y"
                                                                             { param_declaration = 0;}
#line 3042 "grammer.tab.c"
    break;

  case 125: /* formal_parameter_list.opt: %empty  */
#line 868 "grammer.y"
         {copyData(&(yyval.e));}
#line 3048 "grammer.tab.c"
    break;

  case 128: /* com_formal_parameter.multiopt: %empty  */
#line 875 "grammer.y"
         {copyData(&(yyval.e));}
#line 3054 "grammer.tab.c"
    break;

  case 129: /* formal_parameter: modifier.multiopt type variable_declarator_id  */
#line 878 "grammer.y"
                                                {
                string type = string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->type);
                int offset = getCurSize();
                struct info cur_info = createInfo(type, "parameter", cur_size, offset, yylineno, modifiers);
                updateSize(cur_size);
                for (auto itr = symbol_table[cur_table_idx].parameters.begin(); itr != symbol_table[cur_table_idx].parameters.end(); itr++) {
                  if (itr->first == (yyvsp[0].e)->s) {
                    cout << "Error at line no " << yylineno << ": " << "Parameter with name " << string((yyvsp[0].e)->s) << " already declared" << endl;
                  }
                }
                symbol_table[cur_table_idx].parameters.push_back({(yyvsp[0].e)->s,cur_info});
                cur_size = 0;
                struct expr *ep=(struct expr*)malloc(sizeof(struct expr));
                ep->type=new char[type.length() + 1];
                strcpy(ep->type, type.c_str());
                ep->s=(yyvsp[0].e)->s;
                methods[cur_method].second.push_back(ep);
              }
#line 3077 "grammer.tab.c"
    break;

  case 131: /* variable_arity_parameter: modifier.multiopt type "..." TOK_IDENTIFIER  */
#line 899 "grammer.y"
                                                        {
                string type = string((yyvsp[-2].e)->s) + "...";
                int offset = getCurSize();
                struct info cur_info = createInfo(type, "parameter", cur_size, offset, yylineno, modifiers);
                updateSize(cur_size);
                for (auto itr = symbol_table[cur_table_idx].parameters.begin(); itr != symbol_table[cur_table_idx].parameters.end(); itr++) {
                  if (itr->first == (yyvsp[0].e)->s) {
                    cout << "Error at line no " << yylineno << ": " << "Parameter with name " << string((yyvsp[0].e)->s) << " already declared" << endl;
                  }
                }
                symbol_table[cur_table_idx].parameters.push_back({(yyvsp[0].e)->s,cur_info});
                struct expr *ep=(struct expr*)malloc(sizeof(struct expr));
                ep->type=type.data();
                ep->s=(yyvsp[0].e)->s;
                methods[cur_method].second.push_back(ep);
              }
#line 3098 "grammer.tab.c"
    break;

  case 135: /* com_exception_type.multiopt: %empty  */
#line 924 "grammer.y"
         {copyData(&(yyval.e));}
#line 3104 "grammer.tab.c"
    break;

  case 140: /* constructor_declaration: modifier.multiopt constructor_declarator throws.opt constructor_body  */
#line 937 "grammer.y"
                                                                       { cur_table_idx = symbol_table[cur_table_idx].parent; cur_method = -1; }
#line 3110 "grammer.tab.c"
    break;

  case 141: /* $@7: %empty  */
#line 940 "grammer.y"
                   {
              // Symbol table entry
              symbol_table[cur_table_idx].return_type = string((yyvsp[0].e)->s);
              int offset = symbol_table[cur_table_idx].size;
              struct info cur_info = createInfo((yyvsp[0].e)->s, "constructor", 0, offset, yylineno, modifiers);
              string name = string((yyvsp[0].e)->s);
              insertSymbol(name, &cur_info);
              modifiers.clear();
              string class_name = symbol_table[cur_table_idx].name;
              createTable(name, 0, "", 1, true);
              symbol_table[cur_table_idx].return_type = string((yyvsp[0].e)->s);
              param_declaration = 1;
              // 3AC
              pair<string, vector<vector<string>>> p;
              p.first = class_name + ".ctor";
              tac_code.push_back(p);
              cur_method = tac_code.size() - 1;
              methods.push_back({(yyvsp[0].e)->s,vector<struct expr*>()});
              meth_and_ret.insert({(yyvsp[0].e)->s,"void"});
              tmp_count = label_count = 1;
  }
#line 3136 "grammer.tab.c"
    break;

  case 142: /* constructor_declarator: simple_type_name $@7 "(" formal_parameter_list.opt ")"  */
#line 960 "grammer.y"
                                            { param_declaration = 0; }
#line 3142 "grammer.tab.c"
    break;

  case 146: /* block_statements.opt: %empty  */
#line 970 "grammer.y"
         {copyData(&(yyval.e));}
#line 3148 "grammer.tab.c"
    break;

  case 149: /* com.opt: ","  */
#line 979 "grammer.y"
                                { copyData(&(yyval.e), ",", ""); }
#line 3154 "grammer.tab.c"
    break;

  case 150: /* com.opt: %empty  */
#line 980 "grammer.y"
         {copyData(&(yyval.e));}
#line 3160 "grammer.tab.c"
    break;

  case 152: /* enum_body_declarations.opt: %empty  */
#line 984 "grammer.y"
         {copyData(&(yyval.e));}
#line 3166 "grammer.tab.c"
    break;

  case 154: /* enum_constant_list.opt: %empty  */
#line 988 "grammer.y"
         {copyData(&(yyval.e));}
#line 3172 "grammer.tab.c"
    break;

  case 157: /* com_enum_constant.multiopt: %empty  */
#line 995 "grammer.y"
         {copyData(&(yyval.e));}
#line 3178 "grammer.tab.c"
    break;

  case 160: /* class_body.opt: %empty  */
#line 1002 "grammer.y"
         {copyData(&(yyval.e));}
#line 3184 "grammer.tab.c"
    break;

  case 165: /* record_component_list.opt: %empty  */
#line 1015 "grammer.y"
         {copyData(&(yyval.e));}
#line 3190 "grammer.tab.c"
    break;

  case 168: /* com_record_component.multiopt: %empty  */
#line 1022 "grammer.y"
         {copyData(&(yyval.e));}
#line 3196 "grammer.tab.c"
    break;

  case 174: /* record_body_declaration.multiopt: %empty  */
#line 1036 "grammer.y"
         {copyData(&(yyval.e));}
#line 3202 "grammer.tab.c"
    break;

  case 181: /* interface_extends.opt: %empty  */
#line 1057 "grammer.y"
         {copyData(&(yyval.e));}
#line 3208 "grammer.tab.c"
    break;

  case 183: /* interface_permits.opt: %empty  */
#line 1061 "grammer.y"
         {copyData(&(yyval.e));}
#line 3214 "grammer.tab.c"
    break;

  case 188: /* interface_member_declaration.multiopt: %empty  */
#line 1074 "grammer.y"
         {copyData(&(yyval.e));}
#line 3220 "grammer.tab.c"
    break;

  case 194: /* array_initializer: "{" variable_initializer_list.opt com.opt "}"  */
#line 1089 "grammer.y"
                                                                {
          string s = string((yyvsp[-3].e)->s) + string((yyvsp[-2].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, "", s);
        }
#line 3229 "grammer.tab.c"
    break;

  case 196: /* variable_initializer_list.opt: %empty  */
#line 1096 "grammer.y"
         {copyData(&(yyval.e));}
#line 3235 "grammer.tab.c"
    break;

  case 197: /* variable_initializer_list: variable_initializer com_variable_initializer.multiopt  */
#line 1099 "grammer.y"
                                                                {
          string s = string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, "", s);
        }
#line 3244 "grammer.tab.c"
    break;

  case 198: /* com_variable_initializer.multiopt: com_variable_initializer.multiopt "," variable_initializer  */
#line 1105 "grammer.y"
                                                                {
          string s = string((yyvsp[-2].e)->s) + "," + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, "", s);
        }
#line 3253 "grammer.tab.c"
    break;

  case 199: /* com_variable_initializer.multiopt: %empty  */
#line 1109 "grammer.y"
         {copyData(&(yyval.e));}
#line 3259 "grammer.tab.c"
    break;

  case 200: /* $@8: %empty  */
#line 1115 "grammer.y"
          { createTable(); }
#line 3265 "grammer.tab.c"
    break;

  case 201: /* $@9: %empty  */
#line 1115 "grammer.y"
                                                  { cur_table_idx = symbol_table[cur_table_idx].parent; }
#line 3271 "grammer.tab.c"
    break;

  case 205: /* block_statement.multiopt: %empty  */
#line 1122 "grammer.y"
         {copyData(&(yyval.e));}
#line 3277 "grammer.tab.c"
    break;

  case 244: /* if_then_statement: if_condition statement  */
#line 1185 "grammer.y"
                         {                  //if_condition statement
          int label = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label));
        }
#line 3287 "grammer.tab.c"
    break;

  case 245: /* $@10: %empty  */
#line 1192 "grammer.y"
                             {
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label_count), 1);
          label_stack.push(label_count++);
        }
#line 3296 "grammer.tab.c"
    break;

  case 246: /* if_then_else_statement: if_then_statement "else" $@10 statement  */
#line 1195 "grammer.y"
                    {       // statement
          int label = label_stack.top();
          label_stack.pop();
           checkAndPushInstruction("label", "_", "_", "L" + to_string(label));
        }
#line 3306 "grammer.tab.c"
    break;

  case 247: /* if_condition: "if" "(" expression ")"  */
#line 1202 "grammer.y"
                                  {
          specificTypeCheck((yyvsp[-1].e)->type, "boolean", "condition");
          string v = storeTemp("!", (yyvsp[-1].e)->v);
          checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        }
#line 3317 "grammer.tab.c"
    break;

  case 251: /* switch_block: "{" switch_rule.multi "}"  */
#line 1217 "grammer.y"
                                                        {
          copyData(&(yyval.e), "{" + string((yyvsp[-1].e)->s) + "}", (yyvsp[-1].e)->type);
        }
#line 3325 "grammer.tab.c"
    break;

  case 252: /* switch_block: "{" switch_block_statement_group.multiopt switch_label_col.multiopt "}"  */
#line 1220 "grammer.y"
                                                                                         {
          copyData(&(yyval.e), "{" + string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + "}", (yyvsp[-2].e)->type);
        }
#line 3333 "grammer.tab.c"
    break;

  case 254: /* switch_rule.multi: switch_rule.multi switch_rule  */
#line 1226 "grammer.y"
                                 {
          copyData(&(yyval.e), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s), (yyvsp[-1].e)->type);
          typeCheck((yyvsp[-1].e)->type, (yyvsp[0].e)->type);
        }
#line 3342 "grammer.tab.c"
    break;

  case 255: /* switch_block_statement_group.multiopt: switch_block_statement_group.multiopt switch_block_statement_group  */
#line 1232 "grammer.y"
                                                                         {
          copyData(&(yyval.e), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
          typeCheck((yyvsp[-1].e)->type, (yyvsp[0].e)->type);
        }
#line 3351 "grammer.tab.c"
    break;

  case 256: /* switch_block_statement_group.multiopt: %empty  */
#line 1236 "grammer.y"
         {copyData(&(yyval.e));}
#line 3357 "grammer.tab.c"
    break;

  case 257: /* switch_label_col.multiopt: switch_label_col.multiopt switch_label ":"  */
#line 1239 "grammer.y"
                                                {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + ":", (yyvsp[-1].e)->type);
        }
#line 3365 "grammer.tab.c"
    break;

  case 258: /* switch_label_col.multiopt: %empty  */
#line 1242 "grammer.y"
         {copyData(&(yyval.e));}
#line 3371 "grammer.tab.c"
    break;

  case 259: /* switch_rule: switch_label "->" expression ";"  */
#line 1245 "grammer.y"
                                                 {
          copyData(&(yyval.e), string((yyvsp[-3].e)->s) + " -> " + string((yyvsp[-1].e)->s) + ";", (yyvsp[-1].e)->type);
        }
#line 3379 "grammer.tab.c"
    break;

  case 260: /* switch_rule: switch_label "->" block  */
#line 1248 "grammer.y"
                                 {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " -> " + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
        }
#line 3387 "grammer.tab.c"
    break;

  case 261: /* switch_rule: switch_label "->" throw_statement  */
#line 1251 "grammer.y"
                                         {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " -> " + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
        }
#line 3395 "grammer.tab.c"
    break;

  case 262: /* switch_block_statement_group: switch_label ":" switch_label_col.multiopt block_statements  */
#line 1256 "grammer.y"
                                                                         {
          copyData(&(yyval.e), string((yyvsp[-3].e)->s) + ":" + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s), (yyvsp[-1].e)->type);
        }
#line 3403 "grammer.tab.c"
    break;

  case 263: /* switch_label: "case" case_constant com_case_constant.multiopt  */
#line 1261 "grammer.y"
                                                         {
          copyData(&(yyval.e), "case " + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s), (yyvsp[-1].e)->type);
        }
#line 3411 "grammer.tab.c"
    break;

  case 264: /* switch_label: "default"  */
#line 1264 "grammer.y"
                  {
          copyData(&(yyval.e), "default", "");
        }
#line 3419 "grammer.tab.c"
    break;

  case 265: /* com_case_constant.multiopt: com_case_constant.multiopt "," case_constant  */
#line 1269 "grammer.y"
                                                          {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + ", " + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
        }
#line 3427 "grammer.tab.c"
    break;

  case 266: /* com_case_constant.multiopt: %empty  */
#line 1272 "grammer.y"
         {copyData(&(yyval.e));}
#line 3433 "grammer.tab.c"
    break;

  case 268: /* $@11: %empty  */
#line 1278 "grammer.y"
            {
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count);
          label_stack.push(label_count++);
        }
#line 3443 "grammer.tab.c"
    break;

  case 269: /* $@12: %empty  */
#line 1282 "grammer.y"
                                         {
          specificTypeCheck((yyvsp[-1].e)->type, "boolean", "condition");
          string v = storeTemp("!", (yyvsp[-1].e)->v);
          checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          loop_exit.push(label_count);
          label_stack.push(label_count++);
        }
#line 3455 "grammer.tab.c"
    break;

  case 270: /* while_statement: "while" $@11 "(" expression ")" $@12 statement  */
#line 1288 "grammer.y"
                    {
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
        }
#line 3470 "grammer.tab.c"
    break;

  case 271: /* $@13: %empty  */
#line 1300 "grammer.y"
         {
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count);
          label_stack.push(label_count++);
          loop_exit.push(label_count++);
        }
#line 3481 "grammer.tab.c"
    break;

  case 272: /* do_statement: "do" $@13 statement "while" "(" expression ")" ";"  */
#line 1305 "grammer.y"
                                                                    {
          specificTypeCheck((yyvsp[-2].e)->type, "boolean", "condition");
          int label = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("if goto", (yyvsp[-2].e)->v, "_", "L" + to_string(label));
          pushInstruction("goto", "_", "_", "L" + to_string(loop_exit.top()));
          loop_entry.pop();
          loop_exit.pop();
        }
#line 3495 "grammer.tab.c"
    break;

  case 275: /* $@14: %empty  */
#line 1318 "grammer.y"
                        {
          createTable();
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        }
#line 3505 "grammer.tab.c"
    break;

  case 276: /* $@15: %empty  */
#line 1322 "grammer.y"
                               {
          if (string((yyvsp[0].e)->s) != "") {
            specificTypeCheck((yyvsp[0].e)->type, "boolean", "condition");
            string v = storeTemp("!", (yyvsp[0].e)->v);
            checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          }
          loop_exit.push(label_count);
          label_stack.push(label_count++);
          addToTemp = true;
          vector<vector<string>> temp;
          temp_code.push(temp);
          pushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count++);
        }
#line 3524 "grammer.tab.c"
    break;

  case 277: /* for_statement: "for" "(" ";" $@14 expression.opt $@15 ";" for_update.opt ")" statement  */
#line 1335 "grammer.y"
                                                 {
          pushTempCode();
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
#line 3541 "grammer.tab.c"
    break;

  case 278: /* $@16: %empty  */
#line 1347 "grammer.y"
                                                  {
          createTable();
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        }
#line 3551 "grammer.tab.c"
    break;

  case 279: /* $@17: %empty  */
#line 1351 "grammer.y"
                               {
          if (string((yyvsp[0].e)->s) != "") {
            specificTypeCheck((yyvsp[0].e)->type, "boolean", "condition");
            string v = storeTemp("!", (yyvsp[0].e)->v);
            checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          }
          loop_exit.push(label_count);
          label_stack.push(label_count++);
          addToTemp = true;
          vector<vector<string>> temp;
          temp_code.push(temp);
          pushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count++);
        }
#line 3570 "grammer.tab.c"
    break;

  case 280: /* for_statement: "for" "(" statement_expression_list ";" $@16 expression.opt $@17 ";" for_update.opt ")" statement  */
#line 1364 "grammer.y"
                                                 {
          pushTempCode();
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
#line 3587 "grammer.tab.c"
    break;

  case 281: /* $@18: %empty  */
#line 1378 "grammer.y"
                 { createTable(); }
#line 3593 "grammer.tab.c"
    break;

  case 282: /* basic_for_init: "for" "(" $@18 local_variable_declaration  */
#line 1378 "grammer.y"
                                                               {
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        }
#line 3602 "grammer.tab.c"
    break;

  case 283: /* $@19: %empty  */
#line 1384 "grammer.y"
                              {
          if (string((yyvsp[0].e)->s) != "") {
            specificTypeCheck((yyvsp[0].e)->type, "boolean", "condition");
            string v = storeTemp("!", (yyvsp[0].e)->v);
            checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          }
          loop_exit.push(label_count);
          label_stack.push(label_count++);
          addToTemp = true;
          vector<vector<string>> temp;
          temp_code.push(temp);
          pushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count++);
        }
#line 3621 "grammer.tab.c"
    break;

  case 284: /* basic_for_tail: ";" expression.opt $@19 ";" for_update.opt ")" statement  */
#line 1397 "grammer.y"
                                                 {
          pushTempCode();
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
#line 3638 "grammer.tab.c"
    break;

  case 285: /* enhanced_for_tail: ":" expression ")" statement  */
#line 1411 "grammer.y"
                                     {
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
#line 3646 "grammer.tab.c"
    break;

  case 287: /* expression.opt: %empty  */
#line 1417 "grammer.y"
         {copyData(&(yyval.e));}
#line 3652 "grammer.tab.c"
    break;

  case 288: /* for_update.opt: for_update  */
#line 1420 "grammer.y"
                        { addToTemp = false; }
#line 3658 "grammer.tab.c"
    break;

  case 289: /* for_update.opt: %empty  */
#line 1421 "grammer.y"
         {copyData(&(yyval.e));addToTemp = false;}
#line 3664 "grammer.tab.c"
    break;

  case 293: /* com_statement_expression.multiopt: %empty  */
#line 1431 "grammer.y"
         {copyData(&(yyval.e));}
#line 3670 "grammer.tab.c"
    break;

  case 294: /* break_statement: "break" IDENTIFIER.opt ";"  */
#line 1434 "grammer.y"
                                         {
          if (loop_exit.empty()) {
            cout << "Error in line no " << yylineno << ": break statement outside loop" << endl;
          }
          pushInstruction("goto", "_", "_", "L" + to_string(loop_exit.top()));
        }
#line 3681 "grammer.tab.c"
    break;

  case 296: /* IDENTIFIER.opt: %empty  */
#line 1443 "grammer.y"
         {copyData(&(yyval.e));}
#line 3687 "grammer.tab.c"
    break;

  case 298: /* continue_statement: "continue" IDENTIFIER.opt ";"  */
#line 1449 "grammer.y"
                                     {
          if (loop_entry.empty()) {
            cout << "Error in line no " << yylineno << ": continue statement outside loop" << endl;
          }
          pushInstruction("goto", "_", "_", "L" + to_string(loop_entry.top()));
        }
#line 3698 "grammer.tab.c"
    break;

  case 299: /* return_statement: "return" expression.opt ";"  */
#line 1457 "grammer.y"
                                   {
          pushInstruction("return", (yyvsp[-1].e)->v, "_", "_");
          checkReturnType((yyvsp[-1].e)->type);
        }
#line 3707 "grammer.tab.c"
    break;

  case 306: /* catches.opt: %empty  */
#line 1475 "grammer.y"
         {copyData(&(yyval.e));}
#line 3713 "grammer.tab.c"
    break;

  case 309: /* catch_clause.multiopt: %empty  */
#line 1482 "grammer.y"
         {copyData(&(yyval.e));}
#line 3719 "grammer.tab.c"
    break;

  case 314: /* vt_class_type.multiopt: %empty  */
#line 1495 "grammer.y"
         {copyData(&(yyval.e));}
#line 3725 "grammer.tab.c"
    break;

  case 318: /* finally.opt: %empty  */
#line 1505 "grammer.y"
         {copyData(&(yyval.e));}
#line 3731 "grammer.tab.c"
    break;

  case 321: /* semcol.opt: %empty  */
#line 1512 "grammer.y"
         {copyData(&(yyval.e));}
#line 3737 "grammer.tab.c"
    break;

  case 324: /* semcol_resource.multiopt: %empty  */
#line 1519 "grammer.y"
         {copyData(&(yyval.e));}
#line 3743 "grammer.tab.c"
    break;

  case 334: /* primary_no_new_array: "this"  */
#line 1544 "grammer.y"
                                                {
          copyData(&(yyval.e), (yyvsp[0].e)->s, "this", "this");
          /* TODO: get type from class name */
        }
#line 3752 "grammer.tab.c"
    break;

  case 335: /* primary_no_new_array: un_name "." "this"  */
#line 1548 "grammer.y"
                                                  {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + ".this", "this");
          /* TODO: get type from class name */
        }
#line 3761 "grammer.tab.c"
    break;

  case 336: /* primary_no_new_array: "(" expression ")"  */
#line 1552 "grammer.y"
                                                  {
          copyData(&(yyval.e), (yyvsp[-1].e)->s, (yyvsp[-1].e)->type);
        }
#line 3769 "grammer.tab.c"
    break;

  case 342: /* hold_Literal: TOK_INTEGERLITERAL  */
#line 1562 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "int", (yyvsp[0].e)->s); }
#line 3775 "grammer.tab.c"
    break;

  case 343: /* hold_Literal: TOK_FLOATLITERAL  */
#line 1563 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "float", (yyvsp[0].e)->s); }
#line 3781 "grammer.tab.c"
    break;

  case 344: /* hold_Literal: TOK_BOOLEANLITERAL  */
#line 1564 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "boolean", (yyvsp[0].e)->s); }
#line 3787 "grammer.tab.c"
    break;

  case 345: /* hold_Literal: TOK_CHARLITERAL  */
#line 1565 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "char", (yyvsp[0].e)->s); }
#line 3793 "grammer.tab.c"
    break;

  case 346: /* hold_Literal: TOK_STRINGLITERAL  */
#line 1566 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "String", (yyvsp[0].e)->s); }
#line 3799 "grammer.tab.c"
    break;

  case 347: /* hold_Literal: TOK_TEXTBLOCKLITERAL  */
#line 1567 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "TextBlock", (yyvsp[0].e)->s); }
#line 3805 "grammer.tab.c"
    break;

  case 348: /* hold_Literal: TOK_NULLLITERAL  */
#line 1568 "grammer.y"
                          { copyData(&(yyval.e), (yyvsp[0].e)->s, "null", (yyvsp[0].e)->s); }
#line 3811 "grammer.tab.c"
    break;

  case 350: /* class_instance_creation_expression: un_name "." unqualified_class_instance_creation_expression  */
#line 1572 "grammer.y"
                                                                {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + "." + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
          // TODO: get type from class name
        }
#line 3820 "grammer.tab.c"
    break;

  case 351: /* class_instance_creation_expression: primary "." unqualified_class_instance_creation_expression  */
#line 1576 "grammer.y"
                                                                {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + "." + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
          // TODO: get type from class name
        }
#line 3829 "grammer.tab.c"
    break;

  case 352: /* unqualified_class_instance_creation_expression: "new" class_or_interface_type "(" argument_list.opt ")" class_body.opt  */
#line 1582 "grammer.y"
                                                                                 {
          copyData(&(yyval.e), string((yyvsp[-4].e)->s) + "(" + string((yyvsp[-2].e)->s) + ")", (yyvsp[-4].e)->s);
        }
#line 3837 "grammer.tab.c"
    break;

  case 353: /* field_access: primary "." TOK_IDENTIFIER  */
#line 1587 "grammer.y"
                                {
          string s = string((yyvsp[-2].e)->s) + "." + string((yyvsp[0].e)->s);
          string type = getFieldVariableType(s);
          copyData(&(yyval.e), s, type, s);
          // TODO: get type
        }
#line 3848 "grammer.tab.c"
    break;

  case 354: /* field_access: "super" "." TOK_IDENTIFIER  */
#line 1593 "grammer.y"
                                        {
          copyData(&(yyval.e), "super." + string((yyvsp[0].e)->s), "");
          // TODO: get type
        }
#line 3857 "grammer.tab.c"
    break;

  case 355: /* field_access: un_name "." "super" "." TOK_IDENTIFIER  */
#line 1597 "grammer.y"
                                                  {
          copyData(&(yyval.e), string((yyvsp[-4].e)->s) + ".super." + string((yyvsp[-2].e)->s), "");
          // TODO: get type
        }
#line 3866 "grammer.tab.c"
    break;

  case 356: /* array_access: un_name "[" expression "]"  */
#line 1603 "grammer.y"
                                                          {
          string type = (yyvsp[-3].e)->type;
          if (type.length() >= 2 && type.substr(type.length() - 2) == "[]" ) {
            type = type.substr(0, type.length() - 2);
          } else {
            cout << "Error at line no " << yylineno << ": Expected array for array access, found " << type << endl;
          }
          string s = string((yyvsp[-3].e)->s) + "[" + string((yyvsp[-1].e)->s) + "]";
          copyData(&(yyval.e), s, type, s);
          specificTypeCheck((yyvsp[-1].e)->type, "int", "array index");
        }
#line 3882 "grammer.tab.c"
    break;

  case 357: /* array_access: primary_no_new_array "[" expression "]"  */
#line 1614 "grammer.y"
                                                                     {
          string type = (yyvsp[-3].e)->type;
          if (type.length() >= 2 && type.substr(type.length() - 2) == "[]" ) {
            type = type.substr(0, type.length() - 2);
          } else {
            cout << "Error at line no " << yylineno << ": Expected array for array access, found " << type << endl;
          }
          string s = string((yyvsp[-3].e)->s) + "[" + string((yyvsp[-1].e)->s) + "]";
          copyData(&(yyval.e), s, type, s);
          specificTypeCheck((yyvsp[-1].e)->type, "int", "array index");
        }
#line 3898 "grammer.tab.c"
    break;

  case 358: /* method_invocation: un_name "(" argument_list.opt ")"  */
#line 1627 "grammer.y"
                                                  {
          // check no. of arguments and their type
          string v=call_procedure((yyvsp[-3].e),(yyvsp[-1].e));
          copyData(&(yyval.e), string((yyvsp[-3].e)->s) + "(" + string((yyvsp[-1].e)->s) + ")", (yyvsp[-3].e)->type, v);
        }
#line 3908 "grammer.tab.c"
    break;

  case 359: /* method_invocation: primary "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1632 "grammer.y"
                                                                {
          string v=call_procedure((yyvsp[-3].e),(yyvsp[-1].e));
          copyData(&(yyval.e), string((yyvsp[-5].e)->s) + "." + string((yyvsp[-3].e)->s) + "(" + string((yyvsp[-1].e)->s) + ")", v);

          // TODO: get type
        }
#line 3919 "grammer.tab.c"
    break;

  case 360: /* method_invocation: "super" "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1638 "grammer.y"
                                                                   {
          string v=call_procedure((yyvsp[-3].e),(yyvsp[-1].e));
          copyData(&(yyval.e), "super." + string((yyvsp[-3].e)->s) + "(" + string((yyvsp[-1].e)->s) + ")", "");

          // TODO: get type
        }
#line 3930 "grammer.tab.c"
    break;

  case 361: /* method_invocation: un_name "." "super" "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1644 "grammer.y"
                                                                                 {
          copyData(&(yyval.e), string((yyvsp[-7].e)->s) + ".super." + string((yyvsp[-3].e)->s) + "(" + string((yyvsp[-1].e)->s) + ")", "");
          call_procedure((yyvsp[-3].e),(yyvsp[-1].e));
          // TODO: get type
        }
#line 3940 "grammer.tab.c"
    break;

  case 363: /* argument_list.opt: %empty  */
#line 1652 "grammer.y"
         {copyData(&(yyval.e));}
#line 3946 "grammer.tab.c"
    break;

  case 364: /* argument_list: expression com_expression.multiopt  */
#line 1655 "grammer.y"
                                       {
          // pushInstruction("param", $1->v, "_", "_");
          copyData(&(yyval.e), string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s), string((yyvsp[-1].e)->type) + string((yyvsp[0].e)->type),string((yyvsp[-1].e)->v) + string((yyvsp[0].e)->v));
        }
#line 3955 "grammer.tab.c"
    break;

  case 365: /* com_expression.multiopt: "," expression com_expression.multiopt  */
#line 1661 "grammer.y"
                                                {
          // pushInstruction("param", $2->v, "_", "_");
          copyData(&(yyval.e), "," + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s),  "," + string((yyvsp[-1].e)->type) + string((yyvsp[0].e)->type), "," + string((yyvsp[-1].e)->v) + string((yyvsp[0].e)->v));
        }
#line 3964 "grammer.tab.c"
    break;

  case 366: /* com_expression.multiopt: %empty  */
#line 1665 "grammer.y"
         {copyData(&(yyval.e));}
#line 3970 "grammer.tab.c"
    break;

  case 367: /* method_reference: un_name "::" TOK_IDENTIFIER  */
#line 1668 "grammer.y"
                                                                      {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + "::" + string((yyvsp[0].e)->s), "");
        }
#line 3978 "grammer.tab.c"
    break;

  case 368: /* method_reference: primary "::" TOK_IDENTIFIER  */
#line 1671 "grammer.y"
                                                    {
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + "::" + string((yyvsp[0].e)->s), "");
        }
#line 3986 "grammer.tab.c"
    break;

  case 369: /* method_reference: "super" "::" TOK_IDENTIFIER  */
#line 1674 "grammer.y"
                                                      {
          copyData(&(yyval.e), "super::" + string((yyvsp[0].e)->s), "");
        }
#line 3994 "grammer.tab.c"
    break;

  case 370: /* method_reference: un_name "." "super" "::" TOK_IDENTIFIER  */
#line 1677 "grammer.y"
                                                        {
          copyData(&(yyval.e), string((yyvsp[-4].e)->s) + ".super::" + string((yyvsp[0].e)->s), "");
        }
#line 4002 "grammer.tab.c"
    break;

  case 371: /* array_creation_expression: "new" primitive_type dim_exprs dims.opt  */
#line 1682 "grammer.y"
                                                          {
          string type = string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->type) + string((yyvsp[0].e)->s);
          string s = "new " + string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, type, (yyvsp[-1].e)->s);
        }
#line 4012 "grammer.tab.c"
    break;

  case 372: /* array_creation_expression: "new" class_or_interface_type dim_exprs dims.opt  */
#line 1687 "grammer.y"
                                                          {
          string type = string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->type) + string((yyvsp[0].e)->s);
          string s = "new " + string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, type, (yyvsp[-1].e)->s);
        }
#line 4022 "grammer.tab.c"
    break;

  case 373: /* array_creation_expression: "new" primitive_type dims array_initializer  */
#line 1692 "grammer.y"
                                                          {
          string type = string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s);
          string s = "new " + string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, type, (yyvsp[0].e)->s);
        }
#line 4032 "grammer.tab.c"
    break;

  case 374: /* array_creation_expression: "new" class_or_interface_type dims array_initializer  */
#line 1697 "grammer.y"
                                                                {
          string type = string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s);
          string s = "new " + string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, type, (yyvsp[0].e)->s);
        }
#line 4042 "grammer.tab.c"
    break;

  case 375: /* dim_exprs: dim_expr dim_expr.multiopt  */
#line 1704 "grammer.y"
                             {
          string s = string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, string((yyvsp[-1].e)->type) + string((yyvsp[0].e)->type), s);
        }
#line 4051 "grammer.tab.c"
    break;

  case 376: /* dim_expr.multiopt: dim_expr.multiopt dim_expr  */
#line 1710 "grammer.y"
                              {
          string s = string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s);
          copyData(&(yyval.e), s, string((yyvsp[-1].e)->type) + string((yyvsp[0].e)->type), s);
        }
#line 4060 "grammer.tab.c"
    break;

  case 377: /* dim_expr.multiopt: %empty  */
#line 1714 "grammer.y"
         {copyData(&(yyval.e));}
#line 4066 "grammer.tab.c"
    break;

  case 378: /* dim_expr: "[" expression "]"  */
#line 1717 "grammer.y"
                            {
          string s = "[" + string((yyvsp[-1].e)->s) + "]";
          copyData(&(yyval.e), s, "[]", s);
        }
#line 4075 "grammer.tab.c"
    break;

  case 382: /* assignment: left_hand_side assignment_operator expression  */
#line 1730 "grammer.y"
                                                  {
          string op = string((yyvsp[-1].e)->s);
          if (op == "=") {
            pushInstructionWithType("_", (yyvsp[0].e)->v, "_", (yyvsp[-2].e)->v, (yyvsp[-2].e)->type, (yyvsp[0].e)->type);
          } else {
            string v = storeTempWithType(op.substr(0,op.size()-1), (yyvsp[-2].e)->v, (yyvsp[0].e)->v, (yyvsp[-2].e)->type, (yyvsp[0].e)->type);
            pushInstructionWithType("_", v, "_", (yyvsp[-2].e)->v, (yyvsp[0].e)->type, (yyvsp[-2].e)->type);
          }
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + string((yyvsp[-1].e)->s) + string((yyvsp[0].e)->s), (yyvsp[-2].e)->type, (yyvsp[-2].e)->v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4091 "grammer.tab.c"
    break;

  case 383: /* left_hand_side: un_name  */
#line 1743 "grammer.y"
           {
          string offset = to_string(lookupOffset(string((yyvsp[0].e)->s)));
          string v = "*(ebp - " + offset + ")";
          copyData(&(yyval.e), string((yyvsp[0].e)->s), (yyvsp[0].e)->type, v);
          popLastInstruction();
        }
#line 4102 "grammer.tab.c"
    break;

  case 385: /* left_hand_side: array_access  */
#line 1750 "grammer.y"
                        {
          string s = string((yyvsp[0].e)->s);
          string a1 = "", a2 = "";
          bool flag = false;
          for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[') {
              flag = true;
            } else if (s[i] == ']') {
              break;
            } else {
              if (flag) {
                a2 += s[i];
              } else {
                a1 += s[i];
              }
            }
          }
          copyData(&(yyval.e), string((yyvsp[0].e)->s), (yyvsp[0].e)->type, (yyvsp[0].e)->s);
        }
#line 4126 "grammer.tab.c"
    break;

  case 399: /* conditional_expression: conditional_or_expression "?" expression ":" conditional_expression  */
#line 1786 "grammer.y"
                                                                                               {
          // 3AC?
          copyData(&(yyval.e), string((yyvsp[-4].e)->s) + " ? " + string((yyvsp[-2].e)->s) + " : " + string((yyvsp[0].e)->s), (yyvsp[-2].e)->type);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
          specificTypeCheck((yyvsp[-4].e)->type, "boolean", "?");
        }
#line 4137 "grammer.tab.c"
    break;

  case 401: /* conditional_or_expression: conditional_or_expression "||" conditional_and_expression  */
#line 1795 "grammer.y"
                                                                  {
          string v = storeTemp("||", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " || " + string((yyvsp[0].e)->s), "boolean", v);
          specificTypeCheck((yyvsp[-2].e)->type, "boolean", "||");
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "||");
        }
#line 4148 "grammer.tab.c"
    break;

  case 403: /* conditional_and_expression: conditional_and_expression "&&" inclusive_or_expression  */
#line 1804 "grammer.y"
                                                                 {
          string v = storeTemp("&&", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " && " + string((yyvsp[0].e)->s), "boolean", v);
          specificTypeCheck((yyvsp[-2].e)->type, "boolean", "&&");
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "&&");
        }
#line 4159 "grammer.tab.c"
    break;

  case 405: /* inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression  */
#line 1813 "grammer.y"
                                                                 {
          string v = storeTemp("|", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " | " + string((yyvsp[0].e)->s), "int", v);
          specificTypeCheck((yyvsp[-2].e)->type, "boolean", "|");
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "|");
        }
#line 4170 "grammer.tab.c"
    break;

  case 407: /* exclusive_or_expression: exclusive_or_expression "^" and_expression  */
#line 1822 "grammer.y"
                                                 {
          string v = storeTemp("^", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " ^ " + string((yyvsp[0].e)->s), "int", v);
          specificTypeCheck((yyvsp[-2].e)->type, "boolean", "^");
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "^");
        }
#line 4181 "grammer.tab.c"
    break;

  case 409: /* and_expression: and_expression "&" equality_expression  */
#line 1831 "grammer.y"
                                                  {
          string v = storeTemp("&", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " & " + string((yyvsp[0].e)->s), "int", v);
          specificTypeCheck((yyvsp[-2].e)->type, "boolean", "&");
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "&");
        }
#line 4192 "grammer.tab.c"
    break;

  case 411: /* equality_expression: equality_expression "==" relational_expression  */
#line 1840 "grammer.y"
                                                          {
          string v = storeTemp("==", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " == " + string((yyvsp[0].e)->s), "boolean", v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4202 "grammer.tab.c"
    break;

  case 412: /* equality_expression: equality_expression "!=" relational_expression  */
#line 1845 "grammer.y"
                                                       {
          string v = storeTemp("!=", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " != " + string((yyvsp[0].e)->s), "boolean", v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4212 "grammer.tab.c"
    break;

  case 414: /* relational_expression: relational_expression "<" shift_expression  */
#line 1853 "grammer.y"
                                                {
          string v = storeTemp("<", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " < " + string((yyvsp[0].e)->s), "boolean", v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4222 "grammer.tab.c"
    break;

  case 415: /* relational_expression: relational_expression ">" shift_expression  */
#line 1858 "grammer.y"
                                                {
          string v = storeTemp(">", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " > " + string((yyvsp[0].e)->s), "boolean", v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4232 "grammer.tab.c"
    break;

  case 416: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1863 "grammer.y"
                                                  {
          string v = storeTemp("<=", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " <= " + string((yyvsp[0].e)->s), "boolean", v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4242 "grammer.tab.c"
    break;

  case 417: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1868 "grammer.y"
                                                 {
          string v = storeTemp(">=", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " >= " + string((yyvsp[0].e)->s), "boolean", v);
          typeCheck((yyvsp[-2].e)->type, (yyvsp[0].e)->type);
        }
#line 4252 "grammer.tab.c"
    break;

  case 419: /* instanceof_expression: relational_expression "instanceof" reference_type  */
#line 1876 "grammer.y"
                                                        {
          string v = storeTemp("instanceof", (yyvsp[-2].e)->v, (yyvsp[0].e)->s);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " instanceof " + string((yyvsp[0].e)->s), "boolean", v);
          specificTypeCheck((yyvsp[-2].e)->type, "reference", "instanceof");
          specificTypeCheck((yyvsp[0].e)->s, "class", "instanceof");
        }
#line 4263 "grammer.tab.c"
    break;

  case 420: /* instanceof_expression: relational_expression "instanceof" pattern  */
#line 1882 "grammer.y"
                                               {
          string v = storeTemp("instanceof", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " instanceof " + string((yyvsp[0].e)->s), "boolean", v);
          specificTypeCheck((yyvsp[-2].e)->type, "reference", "instanceof");
          specificTypeCheck((yyvsp[0].e)->type, "class", "instanceof");
        }
#line 4274 "grammer.tab.c"
    break;

  case 422: /* shift_expression: shift_expression "<<" additive_expression  */
#line 1891 "grammer.y"
                                                 {
          string v = storeTemp("<<", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " << " + string((yyvsp[0].e)->s), "int", v);
          specificTypeCheck((yyvsp[-2].e)->type, "int", "<<");
          specificTypeCheck((yyvsp[0].e)->type, "int", "<<");
        }
#line 4285 "grammer.tab.c"
    break;

  case 423: /* shift_expression: shift_expression ">>" additive_expression  */
#line 1897 "grammer.y"
                                                 {
          string v = storeTemp(">>", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " >> " + string((yyvsp[0].e)->s), "int", v);
          specificTypeCheck((yyvsp[-2].e)->type, "int", ">>");
          specificTypeCheck((yyvsp[0].e)->type, "int", ">>");
        }
#line 4296 "grammer.tab.c"
    break;

  case 424: /* shift_expression: shift_expression ">>>" additive_expression  */
#line 1903 "grammer.y"
                                                         {
          string v = storeTemp(">>>", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " >>> " + string((yyvsp[0].e)->s), "int", v);
          specificTypeCheck((yyvsp[-2].e)->type, "int", ">>>");
          specificTypeCheck((yyvsp[0].e)->type, "int", ">>>");
        }
#line 4307 "grammer.tab.c"
    break;

  case 426: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1912 "grammer.y"
                                                       {
          string v = storeTempWithType("+", (yyvsp[-2].e)->v, (yyvsp[0].e)->v, (yyvsp[-2].e)->type, (yyvsp[0].e)->type);
          // copyData(&$$, string($1->s) + " + " + string($3->s), getFinalType($1->type, $3->type), v);
          copyData(&(yyval.e), "addi " + string((yyvsp[-2].e)->s) + string((yyvsp[0].e)->s), getFinalType((yyvsp[-2].e)->type, (yyvsp[0].e)->type), v);
          specificTypeCheck((yyvsp[-2].e)->type, "Numeric", "+");
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "+");
        }
#line 4319 "grammer.tab.c"
    break;

  case 427: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1919 "grammer.y"
                                                       {
          string v = storeTempWithType("-", (yyvsp[-2].e)->v, (yyvsp[0].e)->v, (yyvsp[-2].e)->type, (yyvsp[0].e)->type);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " - " + string((yyvsp[0].e)->s), getFinalType((yyvsp[-2].e)->type, (yyvsp[0].e)->type), v);
          specificTypeCheck((yyvsp[-2].e)->type, "Numeric", "-");
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "-");
        }
#line 4330 "grammer.tab.c"
    break;

  case 429: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1928 "grammer.y"
                                                        {
          string v = storeTempWithType("*", (yyvsp[-2].e)->v, (yyvsp[0].e)->v, (yyvsp[-2].e)->type, (yyvsp[0].e)->type);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " * " + string((yyvsp[0].e)->s), getFinalType((yyvsp[-2].e)->type, (yyvsp[0].e)->type), v);
          specificTypeCheck((yyvsp[-2].e)->type, "Numeric", "*");
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "*");
        }
#line 4341 "grammer.tab.c"
    break;

  case 430: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1934 "grammer.y"
                                                        {
          string v = storeTempWithType("/", (yyvsp[-2].e)->v, (yyvsp[0].e)->v, (yyvsp[-2].e)->type, (yyvsp[0].e)->type);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " / " + string((yyvsp[0].e)->s), getFinalType((yyvsp[-2].e)->type, (yyvsp[0].e)->type), v);
          specificTypeCheck((yyvsp[-2].e)->type, "Numeric", "/");
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "/");
        }
#line 4352 "grammer.tab.c"
    break;

  case 431: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1940 "grammer.y"
                                                        {
          string v = storeTemp("%", (yyvsp[-2].e)->v, (yyvsp[0].e)->v);
          copyData(&(yyval.e), string((yyvsp[-2].e)->s) + " % " + string((yyvsp[0].e)->s), getFinalType((yyvsp[-2].e)->type, (yyvsp[0].e)->type), v);
          specificTypeCheck((yyvsp[-2].e)->type, "int", "%");
          specificTypeCheck((yyvsp[0].e)->type, "int", "%");
        }
#line 4363 "grammer.tab.c"
    break;

  case 434: /* unary_expression: "+" unary_expression  */
#line 1950 "grammer.y"
                                                  {
          string v = storeTemp("+", (yyvsp[0].e)->v);
          copyData(&(yyval.e), " + " + string((yyvsp[0].e)->s), (yyvsp[0].e)->type, v);
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "+");
        }
#line 4373 "grammer.tab.c"
    break;

  case 435: /* unary_expression: "-" unary_expression  */
#line 1955 "grammer.y"
                                                  {
          string v = storeTemp("-", (yyvsp[0].e)->v);
          copyData(&(yyval.e), " + " + string((yyvsp[0].e)->s), (yyvsp[0].e)->type, v);
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "-");
        }
#line 4383 "grammer.tab.c"
    break;

  case 437: /* pre_increment_expression: "++" unary_expression  */
#line 1963 "grammer.y"
                                            {
          pushInstructionWithType("+", (yyvsp[0].e)->v, "1", (yyvsp[0].e)->v, (yyvsp[0].e)->type, (yyvsp[0].e)->type);
          copyData(&(yyval.e), "++" + string((yyvsp[0].e)->s), (yyvsp[0].e)->type, (yyvsp[0].e)->v);
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "++");
        }
#line 4393 "grammer.tab.c"
    break;

  case 438: /* pre_decrement_expression: "--" unary_expression  */
#line 1970 "grammer.y"
                                                     {
          pushInstructionWithType("-", (yyvsp[0].e)->v, "1", (yyvsp[0].e)->v, (yyvsp[0].e)->type, (yyvsp[0].e)->type);
          copyData(&(yyval.e), "--" + string((yyvsp[0].e)->s), (yyvsp[0].e)->type, (yyvsp[0].e)->v);
          specificTypeCheck((yyvsp[0].e)->type, "Numeric", "++");
        }
#line 4403 "grammer.tab.c"
    break;

  case 440: /* unary_expression_not_plus_minus: "~" unary_expression  */
#line 1978 "grammer.y"
                                    {
          string v = storeTemp("~", (yyvsp[0].e)->v);
          copyData(&(yyval.e), "~" + string((yyvsp[0].e)->s), (yyvsp[0].e)->type, v);
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "~");
        }
#line 4413 "grammer.tab.c"
    break;

  case 441: /* unary_expression_not_plus_minus: "!" unary_expression  */
#line 1983 "grammer.y"
                                            {
          string v = storeTemp("!", (yyvsp[0].e)->v);
          copyData(&(yyval.e), "!" + string((yyvsp[0].e)->s), (yyvsp[0].e)->type, v);
          specificTypeCheck((yyvsp[0].e)->type, "boolean", "!");
        }
#line 4423 "grammer.tab.c"
    break;

  case 448: /* post_increment_expression: postfix_expression "++"  */
#line 1998 "grammer.y"
                                                {
          string v = storeTemp("_", (yyvsp[-1].e)->v, "_");
          copyData(&(yyval.e), string((yyvsp[-1].e)->s) + "++", (yyvsp[-1].e)->type, v);
          pushInstructionWithType("+", (yyvsp[-1].e)->v, "1", (yyvsp[-1].e)->v, (yyvsp[-1].e)->type, (yyvsp[-1].e)->type);
          specificTypeCheck((yyvsp[-1].e)->type, "Numeric", "++");
        }
#line 4434 "grammer.tab.c"
    break;

  case 449: /* post_decrement_expression: postfix_expression "--"  */
#line 2006 "grammer.y"
                                                      {
          string v = storeTemp("_", (yyvsp[-1].e)->v, "_");
          copyData(&(yyval.e), string((yyvsp[-1].e)->s) + "--", (yyvsp[-1].e)->type, v);
          pushInstructionWithType("-", (yyvsp[-1].e)->v, "1", (yyvsp[-1].e)->v, (yyvsp[-1].e)->type, (yyvsp[-1].e)->type);
          specificTypeCheck((yyvsp[-1].e)->type, "Numeric", "--");
        }
#line 4445 "grammer.tab.c"
    break;

  case 450: /* cast_expression: "(" primitive_type ")" unary_expression  */
#line 2014 "grammer.y"
                                                              {
          string v = storeTemp("(" + string((yyvsp[-2].e)->s) + ")", (yyvsp[0].e)->v);
          copyData(&(yyval.e), "(" + string((yyvsp[-2].e)->s) + ")" + string((yyvsp[0].e)->s), (yyvsp[-2].e)->s, v);
          if (string((yyvsp[-2].e)->s) == "boolean") {
            specificTypeCheck((yyvsp[0].e)->type, "boolean", "cast");
          } else {
            specificTypeCheck((yyvsp[0].e)->type, "Numeric", "cast");
          }
        }
#line 4459 "grammer.tab.c"
    break;

  case 451: /* switch_expression: "switch" "(" expression ")" switch_block  */
#line 2025 "grammer.y"
                                                                 {
          copyData(&(yyval.e), "switch (" + string((yyvsp[-2].e)->s) + ") " + string((yyvsp[0].e)->s), (yyvsp[0].e)->type);
          // checkSwitch($3->type);
        }
#line 4468 "grammer.tab.c"
    break;


#line 4472 "grammer.tab.c"

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

#line 2031 "grammer.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

void createTable(string name, int class_table, string parent_class, int method_table, bool link) {
  if (create_new_table) {
    struct local_symbol_table lst;
    lst.parent = cur_table_idx;
    lst.name = name;
    lst.class_table = class_table;
    lst.parent_class = parent_class;
    lst.method_table = method_table;
    if (link) {
      symbol_table[cur_table_idx].table[name].table_idx = symbol_table.size();
    }
    symbol_table.push_back(lst);
    cur_table_idx = symbol_table.size() - 1;
  }
  create_new_table = true;
}

void addLibrarySupport() {
  // add String class to symbol table
  struct info i1 = createInfo("", "class", 0, 0, 0, unordered_set<string>(), symbol_table.size());
  insertSymbol("String", &i1);
  struct info i2 = createInfo("", "class", 0, 0, 0, unordered_set<string>(), symbol_table.size());
  insertSymbol("System", &i2);
}

struct info createInfo(string type, string kind, int size, int offset, int line_no, unordered_set<string> modifier, int table_idx) {
  struct info i = {type, kind, size, offset, line_no, modifier, table_idx};
  return i;
}

void insertSymbol(string symbol, struct info *i) {
  if (symbol_table[cur_table_idx].table.find(symbol) == symbol_table[cur_table_idx].table.end()) {
    symbol_table[cur_table_idx].table[symbol] = *i;
  } else {
    cout << "Error at line no " << yylineno << ": " << symbol << " already declared in this scope\n";
  }
}

int getCurSize() {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      return symbol_table[i].size;
    }
    i = symbol_table[i].parent;
  }
  return symbol_table[cur_table_idx].size;
}

void updateSize(int sz) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      symbol_table[i].size += sz;
      return;
    }
    i = symbol_table[i].parent;
  }
  symbol_table[cur_table_idx].size += sz;
}

void checkDeclaration(string symbol) {
  int i = cur_table_idx;
  if (ignoreDeclaration) {
    return;
  }
  while (i != -1) {
    if (symbol_table[i].method_table) {
      for (int j = 0; j < symbol_table[i].parameters.size(); j++) {
        if (symbol_table[i].parameters[j].first == symbol) {
          return;
        }
      }
    }
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return;
    }
    i = symbol_table[i].parent;
  }
  cout << "Error at line no " << yylineno << ": Undeclared variable " << symbol << endl;
}

string lookupType(string symbol) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      for (int j = 0; j < symbol_table[i].parameters.size(); j++) {
        if (symbol_table[i].parameters[j].first == symbol) {
          return symbol_table[i].parameters[j].second.type;
        }
      }
    }
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return symbol_table[i].table[symbol].type;
    }
    i = symbol_table[i].parent;
  }
  return "";
}

int lookupOffset(string symbol) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      for (int j = 0; j < symbol_table[i].parameters.size(); j++) {
        if (symbol_table[i].parameters[j].first == symbol) {
          return symbol_table[i].parameters[j].second.offset;
        }
      }
    }
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return symbol_table[i].table[symbol].offset;
    }
    i = symbol_table[i].parent;
  }
  return 0;
}

int getType(string type) {
  if (type == "byte" || type == "short" || type == "int" || type == "long" || type == "char") {
    // Numeric type - type ok -> need casting if different types
    return 1;
  } else if (type == "float" || type == "double") {
    return 2;
  } else if (type == "boolean") {
    return 3;
  } else if (type == "String" || type == "TextBlock") {
    return 4;
  } else if (type == "void") {
    return 5;
  } else if (type == "reference") {
    return 6;
  } else if (type == "null") {
    return 7;
  } else if (type == "class") {
    return 8;
  } else {
    return 9;
  }
}

string getFinalType(string type1, string type2) {
  int t1 = getType(type1), t2 = getType(type2);
  if (t1 == 2 || t2 == 2) {
    return "double";
  }
  return "int";
}

void typeCheck(string type1, string type2) {
  if (type1.find('.') != string::npos)
    type1 = getFieldVariableType(type1);
  if (type2.find('.') != string::npos)
    type2 = getFieldVariableType(type2);
  int t1 = getType(type1), t2 = getType(type2);
  if ((t1 == 1 || t1 == 2) && (t2 == 1 || t2 == 2)) {
    return;
  }
  if (t1 != t2) {
    cout << "Error at line no " << yylineno << ": Type mismatch between " << type1 << " and " << type2 << endl;
  }
}

void specificTypeCheck(string type, string target, string op = "") {
  if (type.find('.') != string::npos)
    type = getFieldVariableType(type);
  int t1 = getType(type), t2 = getType(target);
  if (target == "Numeric") {
    if (t1 != 1 && t1 != 2) {
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  } else {
    if (t1 != t2) {
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else if (op == "array index")
        cout << "Error at line no " << yylineno << ": Array index must be of type int, found " << type << endl;
      else if (op == "condition")
        cout << "Error at line no " << yylineno << ": Condition must be of type boolean, found " << type << endl;
      else
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  }
}

void dump_table(string filename, vector<int> &table_ids, map<int,int> &scope) {
  ofstream fout(filename);
  if (symbol_table[table_ids[0]].class_table) {
    fout << "Class: " << symbol_table[table_ids[0]].name << endl;
    fout << "Parent Class: " << symbol_table[table_ids[0]].parent_class << endl << endl;
  } else if (symbol_table[table_ids[0]].method_table) {
    fout << "Method: " << symbol_table[table_ids[0]].name << endl;
    fout << "Return Type: " << symbol_table[table_ids[0]].return_type << endl;
    fout << "Parameters: ";
    for (auto it = symbol_table[table_ids[0]].parameters.begin(); it != symbol_table[table_ids[0]].parameters.end(); it++) {
      fout << it->first << " (type: " << it->second.type << "), ";
    }
    fout << endl << endl;
  } else {
    fout << "Global Symbol Table" << endl;
    fout << "Package Name: " << package_name << endl;
    fout << "Imports: ";
    for (auto it = import_list.begin(); it != import_list.end(); it++) {
      fout << '"' << *it << "\", ";
    }
    fout << endl << endl;
  }
  fout << "Symbol Name,Type,Kind,Size,Offset,Line Number,Modifier,Scope" << endl;
  for (int j = 0; j < table_ids.size(); j++) {
    for (auto it = symbol_table[table_ids[j]].table.begin(); it != symbol_table[table_ids[j]].table.end(); it++) {
      fout << it->first << "," << it->second.type << "," << it->second.kind << "," << it->second.size << "," << it->second.offset << "," << it->second.line_no <<  ",";
      for (auto it2 = it->second.modifier.begin(); it2 != it->second.modifier.end(); it2++) {
        fout << *it2 << " ";
      }
      fout << "," << scope[table_ids[j]] << endl;
    }
  }
  fout.close();
}

void print_symbol_table() {
  vector<int> global_st = {0};
  vector<int> class_st;
  vector<vector<int>> method_st;
  map<int,int> scope;
  int cur_scope = 1;
  for (int i = 1; i < symbol_table.size(); i++) {
    if (symbol_table[i].class_table == 1) {
      class_st.push_back(i);
    } else if (symbol_table[i].method_table == 1) {
      vector<int> temp;
      temp.push_back(i);
      method_st.push_back(temp);
    } else {
      method_st[method_st.size() - 1].push_back(i);
      scope[i] = cur_scope;
      cur_scope++;
    }
  }
  string filename = "symbol_tables\\st_global.csv";
  dump_table(filename, global_st, scope);
  for (int i = 0; i < class_st.size(); i++) {
    string filename = "symbol_tables\\st_class_" + symbol_table[class_st[i]].name + ".csv";
    vector<int> temp = {class_st[i]};
    dump_table(filename, temp, scope);
  }
  for (int i = 0; i < method_st.size(); i++) {
    string filename = "symbol_tables\\st_method_" + symbol_table[method_st[i][0]].name + ".csv";
    dump_table(filename, method_st[i], scope);
  }
  cout << "Symbol tables generated" << endl;
}

void copyString(char **c, string s) {
  // remove *c if already allocated
  *c = new char[s.length() + 1];
  strcpy(*c, s.c_str());
}

void copyData(struct expr **c, string s, string type, string v) {
  *c = new struct expr;
  copyString(&(*c)->s, s);
  copyString(&(*c)->type, type);
  copyString(&(*c)->v, v);
}

void checkReturnType(string type) {
  int i = cur_table_idx;
  string return_type = "";
  while (i != -1) {
    if (symbol_table[i].method_table) {
      return_type = symbol_table[i].return_type;
      break;
    }
    i = symbol_table[i].parent;
  }
  int t1 = getType(type), t2 = getType(return_type);
  if (t1 != t2) {
    cout << "Error at line no " << yylineno << ": Return type mismatch, expected " << return_type << " found " << type << endl;
  }
}

int get_index(string type){
  for(int i=0;i<symbol_table.size();i++){
    string tmp;
    if (symbol_table[i].method_table) {
      tmp = symbol_table[symbol_table[i].parent].name + "." + symbol_table[i].name;
    }else{
      tmp=symbol_table[i].name;
    }
    if(tmp == type)
      return i;
  }
  return -1;
}

int get_meth(string method_name){

  if (method_name == "System.out.println") {
    return -1;
  }
  int l=1;
  for(int i=0;i<method_name.length();i++){
    if(method_name[i]=='.'){
      l++;
    }
  }
  int i = cur_table_idx;
  // cout<<i;
  if(l==1){
    while(symbol_table[i].class_table ==0)i=symbol_table[i].parent;
    method_name = symbol_table[i].name + "." + method_name;
  }
  // while (i != -1) {
  //   if (symbol_table[i].method_table) {
  //     if (symbol_table[i].name == method_name) {
  //       return i;
  //     }
  //   } else if (symbol_table[i].class_table) {
  //     if (symbol_table[i].table.find(method_name) != symbol_table[i].table.end()) {
  //       i = symbol_table[i].table[method_name].table_idx;
  //       continue;
  //     }
  //   }
  //   i = symbol_table[i].parent;
  // }

  i=get_index(method_name);
  if (i == -1) {
    cout << "Error at line no " << yylineno << ": Method " << method_name << " not found" << endl;
    return -1;
  }
  return i;
}
int checkMethodArgs(string method_name, string args) {
  // cout<<args<<endl;
  vector<string> params_list;
  int i = get_meth(method_name);
  if (method_name == "System.out.println") {
    return 1;
  }
  if(i<0) return 0;
  for (auto it = symbol_table[i].parameters.begin(); it != symbol_table[i].parameters.end(); it++) {
    params_list.push_back(it->second.type);
  }

  vector<string> args_list;
  string temp = "";
  for (int i = 0; i < args.length(); i++) {
    if (args[i] == ',') {
      args_list.push_back(temp);
      temp = "";
    } else {
      temp += args[i];
    }
  }
  args_list.push_back(temp);
  if (params_list.size() != args_list.size()) {
    cout << "Error at line no " << yylineno << ": Number of arguments mismatch, expected " << params_list.size() << ", found " << args_list.size() << endl;
    return 0;
  }
  for (int i = 0; i < params_list.size(); i++) {
    int t1 = getType(params_list[i]), t2 = getType(args_list[i]);
    if (t1 != t2) {
      cout << "Error at line no " << yylineno << ": Argument type mismatch, expected argument " << i+1 << " to be of type " << params_list[i] << ", found " << args_list[i] << endl;
    }
  }
  return args_list.size();
}

// string find_type_expr(string meth){
//   int l=meth.length();
//   if(l==0)return "";
//   int i = meth.find('.');
//   if(i==string::npos){
//     i=l-1;
//   }
//   string tmp = meth.substr(0,i);
//   string after = meth.substr(i+1,l-i-1);
//   if(tmp=="this"||tmp=="super"){
//     int cur_table_idx_b = cur_table_idx;
//     while(symbol_table[cur_table_idx].class_table==0)cur_table_idx = symbol_table[cur_table_idx].parent;
//     string ans;
//     if(tmp=="this"){
//       ans=find_type_expr(after);
//     }else{

//     }
//     cur_table_idx = cur_table_idx_b;
//   }

// }

string call_procedure(struct expr* method_name, struct expr* args){
  string meth = method_name->s;
  int arg_cnt = checkMethodArgs(meth, args->type);
  int ret_size=0;
  // int i =get_meth(method_name->type);
  // if(i<0){
  //   cout<<"unknown method "+lookupType(meth)<<endl;
  //   return "";
  // }
  int meth_i = get_meth(meth);
  string meth_ret_type = "";
  if(meth_i>-1){
    meth_ret_type = symbol_table[meth_i].return_type;
  }
  if(size_map.find(meth_ret_type)!=size_map.end()){
    ret_size=size_map[meth_ret_type];
  }
  if(ret_size)pushInstruction("-stackptr", to_string(ret_size), "_", "_");
  string temp = "";
  string args_v(args->v);
  for (int i = 0; i < args_v.length(); i++) {
    if (args_v[i] == ',') {
      pushInstruction("param", temp, "_", "_");
      temp = "";
    } else {
      temp += args_v[i];
    }
  }
  pushInstruction("param", temp, "_", "_");
  string v = "";
  if (ret_size == 0)
    pushInstruction("call", meth, to_string(arg_cnt), "_");
  else{
    pushInstruction("call", meth, to_string(arg_cnt), "_");
    v = "t" + to_string(tmp_count++);
    pushInstruction("* rhs", "(stackptr + "+to_string(ret_size)+")", "_", v);
    pushInstruction("+stackptr", to_string(ret_size), "_", "_");
  }
  return v;
}

int getArraySize(string type) {
  int i = 0, sz = 1;
  if (type.size() == 0) {
    return 0;
  }
  if (type[type.size()-1] == '}') {
    for (int i = 0; i < type.length(); i++) {
      if (type[i] == ',') {
        sz++;
      }
    }
  }
  else {
    while (i < type.length()) {
      while (type[i] != '[') {
        i++;
      }
      string size = "";
      i++;
      while (type[i] != ']') {
        size += type[i];
        i++;
      }
      i++;
      sz *= (size.length()==0)?0:stoi(size);
    }
  }
  return sz;
}

string getFieldVariableType(string field) {
  vector<string> loc;
  string tmp = "";
  for (int i = 0; i < field.length(); i++) {
    if (field[i] == '.') {
      loc.push_back(tmp);
      tmp = "";
    } else {
      tmp += field[i];
    }
  }
  loc.push_back(tmp);
  if (loc[0] == "this") {
    int i = cur_table_idx;
    while (i != -1) {
      if (symbol_table[i].class_table) {
        loc[0] = symbol_table[i].name;
        break;
      }
      i = symbol_table[i].parent;
    }
  } else {
    loc[0] = lookupType(loc[0]);
  }
  int i = 0, j = 0;
  while (true) {
    if (symbol_table[i].table.find(loc[j]) != symbol_table[i].table.end()) {
      if (j == loc.size()-1) {
        return symbol_table[i].table[loc[j]].type;
      } else {
        i = symbol_table[i].table[loc[j]].table_idx;
        j++;
      }
    } else {
      cout << "Error at line no " << yylineno << ": " << field << " not found" << endl;
      break;
    }
  }
  return "unknown type";
}

string storeTemp(string op, string arg1, string arg2) {
  string temp_var = "t" + to_string(tmp_count++);
  pushInstruction(op, arg1, arg2, temp_var);
  return temp_var;
}

string storeTempWithType(string op, string arg1, string arg2, string type1, string type2) {
  string temp_var = "t" + to_string(tmp_count++);
  int t1 = getType(type1), t2 = getType(type2);
  if (t1 == 1 && t2 == 1) {
    pushInstruction(op + "int", arg1, arg2, temp_var);
  } else if (t1 == 2 && t2 == 2) {
    pushInstruction(op + "float", arg1, arg2, temp_var);
  } else if (t1 == 1 && t2 == 2) {
    string temp_var_1 = storeTemp("(float)", arg1, "_");
    pushInstruction(op + "float", temp_var_1, arg2, temp_var);
  } else if (t1 == 2 && t2 == 1) {
    string temp_var_1 = storeTemp("(float)", arg2, "_");
    pushInstruction(op + "float", arg1, temp_var_1, temp_var);
  } else {
    pushInstruction(op, arg1, arg2, temp_var);
  }
  return temp_var;
}

void pushInstruction(string op, string arg1, string arg2, string result) {
  vector<string> temp = {op, arg1, arg2, result};
  if (cur_method != -1) {
    if (!addToTemp) {
      tac_code[cur_method].second.push_back(temp);
    } else {
      temp_code.top().push_back(temp);
    }
  }
}

void pushInstructionWithType(string op, string arg1, string arg2, string result, string type1, string type2) {
  vector<string> temp = {op, arg1, arg2, result};
  if (cur_method == -1) {
    return;
  }
  if (op == "_" && arg2 == "_") {
    int t1 = getType(type1), t2 = getType(type2);
    if (t1 == 1 && t2 == 2) {
      string temp_var_1 = storeTemp("(int)", arg1, "_");
      temp[1] = temp_var_1;
    } else if (t1 == 2 && t2 == 1) {
      string temp_var_1 = storeTemp("(float)", arg1, "_");
      temp[1] = temp_var_1;
    }
  } else if (op == "+" || op == "-" || op == "*" || op == "/") {
    temp[0] = op + type1;
  }
  if (!addToTemp) {
    tac_code[cur_method].second.push_back(temp);
  } else {
    temp_code.top().push_back(temp);
  }
}

void checkAndPushInstruction(string op, string arg1, string arg2, string result, int mode) {
  vector<string> temp = {op, arg1, arg2, result};
  vector<string> temp2 = tac_code[cur_method].second[tac_code[cur_method].second.size()-1];
  if (mode == 1) {
    tac_code[cur_method].second.pop_back();
    tac_code[cur_method].second.push_back(temp);
    tac_code[cur_method].second.push_back(temp2);
  } else {
    tac_code[cur_method].second.push_back(temp);
  }
}

void popLastInstruction() {
  tac_code[cur_method].second.pop_back();
}

void pushTempCode() {
  vector<vector<string>> temp = temp_code.top();
  temp_code.pop();
  for (int i = 0; i < temp.size(); i++) {
    tac_code[cur_method].second.push_back(temp[i]);
  }
}

void optimizeTAC() {
  // remove redundant labels
  for (int i = 0; i < tac_code.size(); i++) {
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      // remove consecutive gotos
      if (tac_code[i].second[j][0] == "goto") {
        int k = j+1;
        if (k < tac_code[i].second.size() && tac_code[i].second[k][0] == "goto") {
          tac_code[i].second.erase(tac_code[i].second.begin()+k);
        }
      }
      if (tac_code[i].second[j][0] == "label") {
        int k = j+1;
        while (k < tac_code[i].second.size() && tac_code[i].second[k][0] == "label") {
          for (int l = 0; l < tac_code[i].second.size(); l++) {
            int sz = tac_code[i].second[l][0].size();
            if (sz >= 4) {
              string last4 = tac_code[i].second[l][0].substr(sz-4, sz);
              if (last4 == "goto" && tac_code[i].second[l][3] == tac_code[i].second[k][3])
                tac_code[i].second[l][3] = tac_code[i].second[j][3];
            }
          }
          tac_code[i].second.erase(tac_code[i].second.begin()+k);
        }
      }
    }

    unordered_set<string> used_labels;
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      // add used labels to set
      int sz = tac_code[i].second[j][0].size();
      if (sz >= 4) {
        string last4 = tac_code[i].second[j][0].substr(sz-4, sz);
        if (last4 == "goto") {
          used_labels.insert(tac_code[i].second[j][3]);
        }
      }
    }

    // remove labels that are not used
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      if (tac_code[i].second[j][0] == "label" && used_labels.find(tac_code[i].second[j][3]) == used_labels.end()) {
        tac_code[i].second.erase(tac_code[i].second.begin()+j);
        j--;
      }
    }

    // remove unused temporary variables
    unordered_set<string> usedTemp;
    for (int j = tac_code[i].second.size()-1; j >= 0; j--) {
      string var = tac_code[i].second[j][3];
      if (var.size() >= 2 && var[0] == 't' && var[1] <= '9' &&
          var[1] >= '0' && usedTemp.find(var) == usedTemp.end() &&
          tac_code[i].second[j][0] != "call") {
        tac_code[i].second.erase(tac_code[i].second.begin()+j);
        continue;
      }
      usedTemp.insert(tac_code[i].second[j][1]);
      usedTemp.insert(tac_code[i].second[j][2]);
    }
  }
}

// 3AC forms -
// 1. x = y               => <_, y, _, x>
// 2. x = op y            => <op, y, _, x>
// 3. x = y op z          => <op, y, z, x>
// 4. L:                  => <label, _, _, L>
// 5. goto L              => <goto, _, _, L>
// 6. if x goto L         => <if goto, x, _, L>
// 7. if x relop y goto L => <if relop goto, x, y, L>
// 8. parampush x             => <param, x, _, _>
// 9. call p, n           => <call, p, n, _>
// 10. y = call p, n      => <call, p, n, y>
// 11. return y           => <return, y, _, _>
// 12. x = y[i]           => <[] rhs, y, i, x>
// 13. x[i] = y           => <[] lhs, y, i, x>
// 14. x = &y             => <&, y, _, x>
// 15. x = *y             => <* rhs, y, _, x>
// 16. *x = y             => <* lhs, y, _, x>
// 17. push r             => <push, r, _, _>
// 18. stackptr+=x        => <+stackptr,x,_,_>
// 19. stackptr-=x        => <-stackptr,x,_,_>

void dump3AC_pre(ofstream &fout, int i){
  fout << "\tpush ebp" << endl;
  fout << "\tebp = stackptr" << endl;
  int of=4;
  for(int j=methods[i].second.size()-1;j>-1;j--){
    struct expr *ep=methods[i].second[j];
    int x=of;
    if(size_map.find(ep->type)!=size_map.end()){
      of+=size_map[ep->type];
      fout<<"\tstackptr -= "<<size_map[ep->type]<<endl;
    }
    // fout<<"\t"<<ep->s<<" = +"<<of<<"(ebp)"<<endl;
    fout<<"\t*(ebp - "<<x-4<<") = *(ebp + "<<of<<")"<<endl;
    // cout<<ep->type;
  }
}

void dump3AC_post(ofstream &fout, int i, string ret){
  int of=4;
  for(int j=methods[i].second.size()-1;j>-1;j--){
    struct expr *ep=methods[i].second[j];
    if(size_map.find(ep->type)!=size_map.end()){
      of+=size_map[ep->type];
    }
  }
  int tmp=of;
  string ret_type=methods[i].first;
  if(size_map.find(ret_type)!=size_map.end()){
    // cout<<ret_type;
    of+=size_map[ret_type];
  }
  if(ret!=""){
    fout<<"*(ebp + "<<of<<") = "<<ret<<endl<<"\t";
  }
  fout<<"stackptr = ebp + "<<tmp<<endl;
  fout<<"\tebp = *(ebp + 4)"<<endl;
  fout<<"\tret"<<endl;

}

void dump3AC() {
  optimizeTAC();
  ofstream fout("3AC.txt");

  for (int i = 0; i < tac_code.size(); i++) {
    string method = tac_code[i].first;
    fout << method << ":" << endl;
    fout << "\tbeginfunc" << endl;
    dump3AC_pre(fout,i);
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      vector<string> ins = tac_code[i].second[j];
      fout << "\t";
      if (ins[0] == "label")
        fout << ins[3] << ":";
      else if (ins[0] == "goto")
        fout << "goto " << ins[3];
      else if (ins[0] == "if goto")
        fout << "if " << ins[1] << " goto " << ins[3];
      else if (ins[0].size() > 7 && ins[0].substr(0, 1) == "if" && ins[0].substr(ins[0].size()-4, 4) == "goto")
        fout << "if " << ins[1] << " " << ins[0].substr(2, ins[0].size()-6) << " " << ins[2] << " goto " << ins[3];
      else if (ins[0] == "param")
        fout << "push " << ins[1];
      else if (ins[0] == "call") {
        if (ins[1] == "System.out.println") {
          ins[1] = "print";
        }
        if (ins[3] == "_")
          fout << "call " << ins[1] << " " << ins[2];
        else
          fout << ins[3] << " = call " << ins[1] << " " << ins[2];
      }else if(ins[0] == "push"){
        fout << "push "<< ins[1];
      }else if(ins[0] == "+stackptr"){
        fout << "stackptr += "<< ins[1];
      }else if(ins[0] == "-stackptr"){
        fout << "stackptr -= "<< ins[1];
      }else if (ins[0] == "return")
        dump3AC_post(fout,i,ins[1]);
      else if (ins[0] == "[] rhs")
        fout << ins[3] << " = " << ins[1] << "[" << ins[2] << "]";
      else if (ins[0] == "[] lhs")
        fout << ins[3] << "[" << ins[2] << "] = " << ins[1];
      else if (ins[0] == "&")
        fout << ins[3] << " = &" << ins[1];
      else if (ins[0] == "* rhs") {
        if (ins[2] == "_")
          fout << ins[3] << " = *" << ins[1];
        else
          fout << ins[3] << " = *(" << ins[1] << " + " << ins[2] << ")";
      }
      else if (ins[0] == "* lhs") {
        if (ins[2] == "_")
          fout << "*" << ins[3] << " = " << ins[1];
        else
          fout << "*(" << ins[3] << " + " << ins[2] << ") = " << ins[1];
      }
      else if (ins[0] == "_")
        fout << ins[3] << " = " << ins[1];
      else {
        if (ins[2] == "_")
          fout << ins[3] << " = " << ins[0] << " " << ins[1];
        else
          fout << ins[3] << " = " << ins[1] << " " << ins[0] << " " << ins[2];
      }
      fout << endl;
    }
    if (tac_code[i].second.size() == 0 || tac_code[i].second[tac_code[i].second.size()-1][0] != "return") {
      fout<<'\t';
      dump3AC_post(fout,i,"");
    }
    fout << "\tendfunc\n" << endl;
  }
  fout.close();
  cout << "3AC generated" << endl;
}

void dump_assembly(){
  ofstream fout("assembly.s");
  fout<<".section    .rodata\n.LC0:\n\t.string    \"%d\\n\"\n\t.text\n\t.globl    main\n";



}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
  createTable();
  addLibrarySupport();
	yyparse();
	fclose(yyin);
  print_symbol_table();
  dump3AC();
  dump_assembly();
	return 0;
}
