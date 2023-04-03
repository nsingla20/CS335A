
%{
#include "grammer.tab.h"
// #include "parser.tab.h"

extern int yylineno;
%}
hex         [0-9]|[a-f]|[A-F]
unicode     \\u{hex}{4}

LineTerminator    \n|\r|\n\r

WhiteSpace        \t|{LineTerminator}|\f|[ ]

Comment             {TraditionalComment}|{EndOfLineComment}
TraditionalComment  [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]
EndOfLineComment    "//".*

Identifier          {IdentifierChars}
IdentifierChars     {JavaLetter}{JavaLetterOrDigit}*
JavaLetter          [A-Za-z\$_]
JavaLetterOrDigit   {JavaLetter}|[0-9]

ReservedKeyword     abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|_
ContextualKeyword   exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield
Keyword             {ReservedKeyword}|{ContextualKeyword}



NumericLiteral                 {IntegerLiteral}|{FloatingPointLiteral}|{BooleanLiteral}|{CharacterLiteral}
NonNumericLiteral               {StringLiteral}|{TextBlock}|{NullLiteral}

IntegerLiteral          {DecimalIntegerLiteral}|{HexIntegerLiteral}|{OctalIntegerLiteral}|{BinaryIntegerLiteral}

DecimalIntegerLiteral   {DecimalNumeral}{IntegerTypeSuffix}?
HexIntegerLiteral       {HexNumeral}{IntegerTypeSuffix}?
OctalIntegerLiteral     {OctalNumeral}{IntegerTypeSuffix}?
BinaryIntegerLiteral    {BinaryNumeral}{IntegerTypeSuffix}?
IntegerTypeSuffix       [lL]

DecimalNumeral          0|({NonZeroDigit}({Digits}?))|{NonZeroDigit}{Underscores}{Digits}
NonZeroDigit            [1-9]
Digits                  {Digit}|({Digit}({DigitsAndUnderscores}?){Digit})
Digit                   [0-9]
DigitsAndUnderscores    {DigitOrUnderscore}+
DigitOrUnderscore       {Digit}|_
Underscores             _+

HexNumeral              (0x{HexDigits})|(0X{HexDigits})
HexDigits               {HexDigit}|({HexDigit}({HexDigitsAndUnderscores}?){HexDigit})
HexDigit                [0-9a-fA-F]
HexDigitsAndUnderscores {HexDigitOrUnderscore}+
HexDigitOrUnderscore    {HexDigit}|_

OctalNumeral                (0{OctalDigits})|(0{Underscores}{OctalDigits})
OctalDigits                 ({OctalDigit})|({OctalDigit}({OctalDigitsAndUnderscores}?){OctalDigit})
OctalDigit                  [0-7]
OctalDigitsAndUnderscores   {OctalDigitOrUnderscore}+
OctalDigitOrUnderscore      {OctalDigit}|_

BinaryNumeral              (0b{BinaryDigits})|(0B{BinaryDigits})
BinaryDigits               {BinaryDigit}|({BinaryDigit}({BinaryDigitsAndUnderscores}?){BinaryDigit})
BinaryDigit                [01]
BinaryDigitsAndUnderscores {BinaryDigitOrUnderscore}+
BinaryDigitOrUnderscore    {BinaryDigit}|_

FloatingPointLiteral        {DecimalFloatingPointLiteral}|{HexadecimalFloatingPointLiteral}

DecimalFloatingPointLiteral ({Digits}\.{Digits}?{ExponentPart}?{FloatTypeSuffix}?)|(\.{Digits}{ExponentPart}?{FloatTypeSuffix}?)|({Digits}{ExponentPart}{FloatTypeSuffix}?)|({Digits}{ExponentPart}?{FloatTypeSuffix})
ExponentPart                {ExponentIndicator}|{SignedInteger}
ExponentIndicator           [eE]
SignedInteger               {Sign}?{Digits}
Sign                        [+-]
FloatTypeSuffix             [fFdD]

HexadecimalFloatingPointLiteral {HexSignificand}{BinaryExponent}{FloatTypeSuffix}?
HexSignificand                  ({HexNumeral}(\.?))|(0[xX]{HexDigits}\.{HexDigits})
BinaryExponent                  {BinaryExponentIndicator}{SignedInteger}
BinaryExponentIndicator         [pP]

BooleanLiteral              true|false

CharacterLiteral            '{SingleCharacter}'|'{EscapeSequence}'
SingleCharacter             [^\n'\\]

StringLiteral               \"{StringCharacter}*\"
StringCharacter             [^\n\"\\]|{EscapeSequence}

TextBlock                   \"\"\"{TextBlockWhiteSpace}*{LineTerminator}{TextBlockContent}\"\"\"
TextBlockWhiteSpace         [ \t\x0c]
TextBlockContent            ({TextBlockCharacter}*)
TextBlockCharacter          (\"){0,2}({TextBlockCharacterNotq}+)
TextBlockCharacterNotq      [^\"]|{EscapeSequence}

EscapeSequence              \\b|\\s|\\t|\\n|\\f|\\r|\\{LineTerminator}|\\\"|\\'|\\\\|{OctalEscape}
OctalEscape                 \\{OctalDigit}|\\{OctalDigit}{OctalDigit}|\\[0-3]{OctalDigit}{OctalDigit}

NullLiteral                 null

Separator                   \(|\)|\{|\}|\[|\]|;|,|\.|\.\.\.|@|::

Operator                    =|>|<|!|~|\?|\->|==|>=|<=|!=|&&|\|\||\+\+|\-\-|\+|\-|\*|\/|&|\||\^|%|<<|>>|>>>|\+=|\-=|\*=|\/=|&=|\|=|\^=|%=|<<=|>>=|>>>=|:

%option noyywrap
%option bison-bridge
%option yylineno

%%
{WhiteSpace}    {;}
{Comment}       {;}

"!"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_33;}
"!="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_3361;}
"%"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_37;}
"%="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_3761;}
"&"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_38;}
"&&"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_3838;}
"&="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_3861;}
"("			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_40;}
")"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_41;}
"*"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_42;}
"*="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4261;}
"+"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_43;}
"++"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4343;}
"+="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4361;}
","			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_44;}
"-"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_45;}
"--"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4545;}
"-="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4561;}
"->"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4562;}
"."			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_46;}
"..."			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_464646;}
"/"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_47;}
"/="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_4761;}
":"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_58;}
"::"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_5858;}
";"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_59;}
"<"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_60;}
"<<"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_6060;}
"<<="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_606061;}
"<="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_6061;}
"="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_61;}
"=="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_6161;}
">"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_62;}
">="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_6261;}
">>"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_6262;}
">>="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_626261;}
">>>"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_626262;}
">>>="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_62626261;}
"?"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_63;}
"["			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_91;}
"]"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_93;}
"^"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_94;}
"^="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_9461;}
"abstract"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_abstract;}
"assert"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_assert;}
"boolean"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_boolean;}
"break"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_break;}
"byte"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_byte;}
"case"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_case;}
"catch"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_catch;}
"char"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_char;}
"class"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_class;}
"continue"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_continue;}
"default"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_default;}
"do"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_do;}
"double"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_double;}
"else"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_else;}
"enum"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_enum;}
"extends"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_extends;}
"final"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_final;}
"finally"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_finally;}
"float"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_float;}
"for"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_for;}
"if"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_if;}
"implements"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_implements;}
"import"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_import;}
"instanceof"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_instanceof;}
"int"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_int;}
"interface"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_interface;}
"long"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_long;}
"new"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_new;}
"package"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_package;}
"permits"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_permits;}
"private"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_private;}
"protected"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_protected;}
"public"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_public;}
"record"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_record;}
"return"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_return;}
"sealed"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_sealed;}
"short"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_short;}
"static"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_static;}
"strictfp"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_strictfp;}
"super"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_super;}
"switch"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_switch;}
"synchronized"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_synchronized;}
"this"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_this;}
"throw"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_throw;}
"throws"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_throws;}
"transient"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_transient;}
"transitive"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_transitive;}
"try"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_try;}
"var"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_var;}
"void"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_void;}
"volatile"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_volatile;}
"while"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_while;}
"yield"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_yield;}
"{"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_123;}
"|"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_124;}
"|="			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_12461;}
"||"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_124124;}
"}"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_125;}
"~"			{struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_126;}

{IntegerLiteral}            {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_INTEGERLITERAL;}
{FloatingPointLiteral}      {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_FLOATLITERAL;}
{BooleanLiteral}            {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_BOOLEANLITERAL;}
{CharacterLiteral}          {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_CHARLITERAL;}
{StringLiteral}             {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_STRINGLITERAL;}
{TextBlock}                 {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_TEXTBLOCKLITERAL;}
{NullLiteral}               {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_NULLLITERAL;}
{Identifier}                {struct expr *tmp=(struct expr*)malloc(sizeof(*tmp));yylval->e=tmp;yylval->e->s=strdup(yytext);return TOK_IDENTIFIER;}
.                           {;}
%%


