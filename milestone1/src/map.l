
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
ofstream fo;
map<char,int> m;
%}

%option c++
%option noyywrap
Separator                   \(|\)|\{|\}|\[|\]|;|,|\.|\.\.\.|@|::
Operator                    =|>|<|!|~|\?|\->|==|>=|<=|!=|&&|\|\||\+\+|\-\-|\+|\-|\*|\/|&|\||\^|%|<<|>>|>>>|\+=|\-=|\*=|\/=|&=|\|=|\^=|%=|<<=|>>=|>>>=|:
word                        [A-Za-z]+
Insi                        {Separator}|{Operator}|{word}
%%
\n                          {}
.                           {m[yytext[0]]=int(yytext[0]);}
%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("tokens");
    fo.open("replacement");
    lexer->switch_streams(fin,cout);
    lexer->yylex();
    for(auto i:m){
        fo<<i.first<<'\t'<<i.second<<endl;
    }
    fin.close();
    fo.close();
    return 0;
}

