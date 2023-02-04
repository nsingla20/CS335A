
%{
#include<bits/stdc++.h>
#include <fstream>
#include <sstream>
using namespace std;

int stage;        // stage 1 = unicode replace,


//File Handling
ofstream fo;
ifstream fi;

//tokenisation
vector<string> lexs;
vector<string> v = {"Keyword","Separator","Literal","Operator","Identifier"};
map<string,pair<int,int>> m;

void add(int i,string value){
    if(find(lexs.begin(),lexs.end(),value)==lexs.end()){
        lexs.push_back(value);
        m[value]={i,1};
    }else{
        m[value]={i,m[value].second+1};
    }
}
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



Literal                 {IntegerLiteral}|{FloatingPointLiteral}|{BooleanLiteral}|{CharacterLiteral}|{StringLiteral}|{TextBlock}|{NullLiteral}

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
%option c++
%option noyywrap
%option yylineno

%x unicode_analysis
%x tokeniz

%%
    switch(stage){
        case 1:
            BEGIN(unicode_analysis);
            break;
        case 2:
            BEGIN(tokeniz);
            break;
    }
<unicode_analysis>{
    (\\)*{unicode}      {
        if(yyleng%2!=0){
            ECHO;
        }else{
            string in(yytext);
            string hx=in.substr(yyleng-4,4);
            char x = stoi(hx,0,16);
            unput(x);
            for(int i=0;i<yyleng-6;i++){
                unput('\\');
            }
        }
    }
}
<tokeniz>{
    {WhiteSpace}    {;}
    {Comment}       {;}
    {Keyword}       {add(0,yytext);}
    {Separator}     {add(1,yytext);}
    {Literal}       {add(2,yytext);}
    {Operator}      {add(3,yytext);}
    {Identifier}    {add(4,yytext);}
    .               {cout<<"Unrecognised lexeme:"<<yytext<<" at line:"<<yylineno<<endl;return 1;}
}

%%

void csv_writer(){
    ofstream f;
    f.open("ans.csv");
    f<<"Lexeme,Token,Count"<<endl;
    f.close();
    f.open("ans.csv",ios::app);
    for(auto l:lexs){
        f<<l<<","<<v[m[l].first]<<","<<m[l].second<<"\n";
    }
    f.close();
}

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    if ( argc > 0 ){
        fi.open(argv[0]);
        fo.open("my.ir");
        lexer->switch_streams(fi,fo);
    }

    stage=1;
    lexer->yylex();
    fi.close();
    fo.close();

    stage=2;
    /* yylineno=1; */
    fi.open("my.ir");
    lexer->switch_streams(fi,cout);
    lexer->yylex();
    fi.close();

    csv_writer();
    return 0;
}


