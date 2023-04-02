
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

"!"			{yylval->s=strdup(yytext);return TOK_33;}
"!="			{yylval->s=strdup(yytext);return TOK_3361;}
"%"			{yylval->s=strdup(yytext);return TOK_37;}
"%="			{yylval->s=strdup(yytext);return TOK_3761;}
"&"			{yylval->s=strdup(yytext);return TOK_38;}
"&&"			{yylval->s=strdup(yytext);return TOK_3838;}
"&="			{yylval->s=strdup(yytext);return TOK_3861;}
"("			{yylval->s=strdup(yytext);return TOK_40;}
")"			{yylval->s=strdup(yytext);return TOK_41;}
"*"			{yylval->s=strdup(yytext);return TOK_42;}
"*="			{yylval->s=strdup(yytext);return TOK_4261;}
"+"			{yylval->s=strdup(yytext);return TOK_43;}
"++"			{yylval->s=strdup(yytext);return TOK_4343;}
"+="			{yylval->s=strdup(yytext);return TOK_4361;}
","			{yylval->s=strdup(yytext);return TOK_44;}
"-"			{yylval->s=strdup(yytext);return TOK_45;}
"--"			{yylval->s=strdup(yytext);return TOK_4545;}
"-="			{yylval->s=strdup(yytext);return TOK_4561;}
"->"			{yylval->s=strdup(yytext);return TOK_4562;}
"."			{yylval->s=strdup(yytext);return TOK_46;}
"..."			{yylval->s=strdup(yytext);return TOK_464646;}
"/"			{yylval->s=strdup(yytext);return TOK_47;}
"/="			{yylval->s=strdup(yytext);return TOK_4761;}
":"			{yylval->s=strdup(yytext);return TOK_58;}
"::"			{yylval->s=strdup(yytext);return TOK_5858;}
";"			{yylval->s=strdup(yytext);return TOK_59;}
"<"			{yylval->s=strdup(yytext);return TOK_60;}
"<<"			{yylval->s=strdup(yytext);return TOK_6060;}
"<<="			{yylval->s=strdup(yytext);return TOK_606061;}
"<="			{yylval->s=strdup(yytext);return TOK_6061;}
"="			{yylval->s=strdup(yytext);return TOK_61;}
"=="			{yylval->s=strdup(yytext);return TOK_6161;}
">"			{yylval->s=strdup(yytext);return TOK_62;}
">="			{yylval->s=strdup(yytext);return TOK_6261;}
">>"			{yylval->s=strdup(yytext);return TOK_6262;}
">>="			{yylval->s=strdup(yytext);return TOK_626261;}
">>>"			{yylval->s=strdup(yytext);return TOK_626262;}
">>>="			{yylval->s=strdup(yytext);return TOK_62626261;}
"?"			{yylval->s=strdup(yytext);return TOK_63;}
"["			{yylval->s=strdup(yytext);return TOK_91;}
"]"			{yylval->s=strdup(yytext);return TOK_93;}
"^"			{yylval->s=strdup(yytext);return TOK_94;}
"^="			{yylval->s=strdup(yytext);return TOK_9461;}
"abstract"			{yylval->s=strdup(yytext);return TOK_abstract;}
"assert"			{yylval->s=strdup(yytext);return TOK_assert;}
"boolean"			{yylval->s=strdup(yytext);return TOK_boolean;}
"break"			{yylval->s=strdup(yytext);return TOK_break;}
"byte"			{yylval->s=strdup(yytext);return TOK_byte;}
"case"			{yylval->s=strdup(yytext);return TOK_case;}
"catch"			{yylval->s=strdup(yytext);return TOK_catch;}
"char"			{yylval->s=strdup(yytext);return TOK_char;}
"class"			{yylval->s=strdup(yytext);return TOK_class;}
"continue"			{yylval->s=strdup(yytext);return TOK_continue;}
"default"			{yylval->s=strdup(yytext);return TOK_default;}
"do"			{yylval->s=strdup(yytext);return TOK_do;}
"double"			{yylval->s=strdup(yytext);return TOK_double;}
"else"			{yylval->s=strdup(yytext);return TOK_else;}
"enum"			{yylval->s=strdup(yytext);return TOK_enum;}
"extends"			{yylval->s=strdup(yytext);return TOK_extends;}
"final"			{yylval->s=strdup(yytext);return TOK_final;}
"finally"			{yylval->s=strdup(yytext);return TOK_finally;}
"float"			{yylval->s=strdup(yytext);return TOK_float;}
"for"			{yylval->s=strdup(yytext);return TOK_for;}
"if"			{yylval->s=strdup(yytext);return TOK_if;}
"implements"			{yylval->s=strdup(yytext);return TOK_implements;}
"import"			{yylval->s=strdup(yytext);return TOK_import;}
"instanceof"			{yylval->s=strdup(yytext);return TOK_instanceof;}
"int"			{yylval->s=strdup(yytext);return TOK_int;}
"interface"			{yylval->s=strdup(yytext);return TOK_interface;}
"long"			{yylval->s=strdup(yytext);return TOK_long;}
"new"			{yylval->s=strdup(yytext);return TOK_new;}
"package"			{yylval->s=strdup(yytext);return TOK_package;}
"permits"			{yylval->s=strdup(yytext);return TOK_permits;}
"private"			{yylval->s=strdup(yytext);return TOK_private;}
"protected"			{yylval->s=strdup(yytext);return TOK_protected;}
"public"			{yylval->s=strdup(yytext);return TOK_public;}
"record"			{yylval->s=strdup(yytext);return TOK_record;}
"return"			{yylval->s=strdup(yytext);return TOK_return;}
"sealed"			{yylval->s=strdup(yytext);return TOK_sealed;}
"short"			{yylval->s=strdup(yytext);return TOK_short;}
"static"			{yylval->s=strdup(yytext);return TOK_static;}
"strictfp"			{yylval->s=strdup(yytext);return TOK_strictfp;}
"super"			{yylval->s=strdup(yytext);return TOK_super;}
"switch"			{yylval->s=strdup(yytext);return TOK_switch;}
"synchronized"			{yylval->s=strdup(yytext);return TOK_synchronized;}
"this"			{yylval->s=strdup(yytext);return TOK_this;}
"throw"			{yylval->s=strdup(yytext);return TOK_throw;}
"throws"			{yylval->s=strdup(yytext);return TOK_throws;}
"transient"			{yylval->s=strdup(yytext);return TOK_transient;}
"transitive"			{yylval->s=strdup(yytext);return TOK_transitive;}
"try"			{yylval->s=strdup(yytext);return TOK_try;}
"var"			{yylval->s=strdup(yytext);return TOK_var;}
"void"			{yylval->s=strdup(yytext);return TOK_void;}
"volatile"			{yylval->s=strdup(yytext);return TOK_volatile;}
"while"			{yylval->s=strdup(yytext);return TOK_while;}
"yield"			{yylval->s=strdup(yytext);return TOK_yield;}
"{"			{yylval->s=strdup(yytext);return TOK_123;}
"|"			{yylval->s=strdup(yytext);return TOK_124;}
"|="			{yylval->s=strdup(yytext);return TOK_12461;}
"||"			{yylval->s=strdup(yytext);return TOK_124124;}
"}"			{yylval->s=strdup(yytext);return TOK_125;}
"~"			{yylval->s=strdup(yytext);return TOK_126;}

{IntegerLiteral}            {yylval->s=strdup(yytext);return TOK_INTEGERLITERAL;}
{FloatingPointLiteral}      {yylval->s=strdup(yytext);return TOK_FLOATLITERAL;}
{BooleanLiteral}            {yylval->s=strdup(yytext);return TOK_BOOLEANLITERAL;}
{CharacterLiteral}          {yylval->s=strdup(yytext);return TOK_CHARLITERAL;}
{StringLiteral}             {yylval->s=strdup(yytext);return TOK_STRINGLITERAL;}
{TextBlock}                 {yylval->s=strdup(yytext);return TOK_TEXTBLOCKLITERAL;}
{NullLiteral}               {yylval->s=strdup(yytext);return TOK_NULLLITERAL;}
{Identifier}                {yylval->s=strdup(yytext);return TOK_IDENTIFIER;}
.                           {;}
%%


