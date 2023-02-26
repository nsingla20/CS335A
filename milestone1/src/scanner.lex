%option noyywrap
%option yylineno

%{

/* DECLARATIONS */

#include <bits/stdc++.h>
#include "parser.tab.h"

using namespace std;

%}

/* DEFINITIONS */

/* Line Terminators */
LINETERM    [\n\r]|(\r\n)

/* White Space */
WS          [ \t\f]+

/* Comments */
SINGLELINE	"//".*
MULTILINE	"/*"([^*]|\*+[^*/])*\*+"/"
COMMENT    {SINGLELINE}|{MULTILINE}

/* Keywords */
KEYW    	abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|\_
CTXKEYWORDS exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield
KEYWORD   	{KEYW}|{CTXKEYWORDS}

/* Identifiers */
IDENTIFIER	[a-zA-Z\_]([a-zA-Z0-9\_])*

/* Literals */

/* Integer Literals */
USS			\_+
INTTYPE	 	[lL]

NONZERO		[1-9]
DIGIT		0|{NONZERO}
DIGORUS		{DIGIT}|\_
DIGANDUSS	{DIGORUS}+
DIGITS		{DIGIT}|{DIGIT}{DIGANDUSS}?{DIGIT}
DECNUM		0|{NONZERO}{DIGITS}?|{NONZERO}{USS}{DIGITS}

HEXDIGIT	[a-fA-F0-9]
HEXDORUS	{HEXDIGIT}|\_
HEXDANDUSS	{HEXDORUS}+
HEXDIGITS	{HEXDIGIT}|{HEXDIGIT}{HEXDANDUSS}?{HEXDIGIT}
HEXNUM		0[xX]{HEXDIGITS}

OCTDIGIT	[0-7]
OCTDORUS	{OCTDIGIT}|\_
OCTDANDUSS	{OCTDORUS}+
OCTDIGITS	{OCTDIGIT}|{OCTDIGIT}{OCTDANDUSS}?{OCTDIGIT}
OCTNUM		0{OCTDIGITS}|0{USS}{OCTDIGITS}

BINDIGIT	[0-1]
BINDORUS	{BINDIGIT}|\_
BINDANDUSS	{BINDORUS}+
BINDIGITS	{BINDIGIT}|{BINDIGIT}{BINDANDUSS}?{BINDIGIT}
BINNUM		0[bB]{BINDIGITS}

BININT		{BINNUM}{INTTYPE}?
OCTINT		{OCTNUM}{INTTYPE}?
DECINT		{DECNUM}{INTTYPE}?
HEXINT		{HEXNUM}{INTTYPE}?

INTEGER		{BININT}|{OCTINT}|{DECINT}|{HEXINT}

/* Floating Point Literals */
FLOATTYPE	[fFdD]
SIGNEDINT	[+-]?{DIGITS}
EXP			[eE]{SIGNEDINT}
DECFLOAT	{DIGITS}\.{DIGITS}?{EXP}?{FLOATTYPE}?|\.{DIGITS}{EXP}?{FLOATTYPE}?|{DIGITS}{EXP}{FLOATTYPE}?|{DIGITS}{EXP}?{FLOATTYPE}

BINEXP		[pP]{SIGNEDINT}
HEXSIG		{HEXNUM}\.?|0[xX]{HEXDIGITS}?\.{HEXDIGITS}
HEXFLOAT	{HEXSIG}{BINEXP}{FLOATTYPE}?

FLOAT		{DECFLOAT}|{HEXFLOAT}

/* Boolean Literals */
BOOLEAN		true|false

/* Character Literals */
SINGLECHAR	[^'\\]
OCTALESC	\\([0-7]|[0-7][0-7]|[0-3][0-7][0-7])
ESCAPESEQ	\\[bstnfr\'\"\\]|{OCTALESC}
CHAR		\'{SINGLECHAR}\'|\'{ESCAPESEQ}\'
/* Confirm this */

/* String Literals */
STRINGCHAR	[^"\\]|{ESCAPESEQ}
STRING		\"{STRINGCHAR}*\"

/* Text Blocks */
TBCHAR		[^\\]|{ESCAPESEQ}|{LINETERM}
TEXTBLOCK	\"\"\"{WS}*{LINETERM}{TBCHAR}*\"\"\"

/* Null Literal */
NULL		null

LITERALS	{INTEGER}|{FLOAT}|{BOOLEAN}|{CHAR}|{STRING}|{TEXTBLOCK}|{NULL}

/* Separators */
DELIMITER	"("|")"|"{"|"}"|"["|"]"|";"|","|"."|"..."|"@"|"::"

/* Operators */
OPERATOR	"="|">"|"<"|"!"|"~"|"?"|":"|"->"|"=="|">="|"<="|"!="|"&&"|"||"|"++"|"--"|"+"|"-"|"*"|"/"|"&"|"|"|"^"|"%"|"<<"|">>"|">>>"|"+="|"-="|"*="|"/="|"&="|"|="|"^="|"%="|"<<="|">>="|">>>="


%%


    /* RULES */
{KEYWORD}/\n|[ ]+		{ return (KEYWORD); }
{LITERAL}				{ return (LITERAL); }
{IDENTIFIER}			{ return (IDENTIFIER); }
{OPERATOR}     		    { return (OPERATOR); }
{DELIMITER}    		    { return (DELIMITER); }
{COMMENT}      		    /* ignore comments */
{WS}|{LINETERM} 		/* ignore white space */
.			   			{ return yytext[0]; }


%%


/* USER CODE */
