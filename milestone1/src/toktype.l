
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
ofstream fo;
vector<string> v;
%}

%option c++
%option noyywrap
Separator                   \(|\)|\{|\}|\[|\]|;|,|\.|\.\.\.|@|::
Operator                    =|>|<|!|~|\?|\->|==|>=|<=|!=|&&|\|\||\+\+|\-\-|\+|\-|\*|\/|&|\||\^|%|<<|>>|>>>|\+=|\-=|\*=|\/=|&=|\|=|\^=|%=|<<=|>>=|>>>=|:
word                        [A-Za-z]+
Insi                        {Separator}|{Operator}|{word}
%%
[a-zA-Z_.]+/[:]              {
    v.push_back(yytext);
}
%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("trygra");
    fo.open("typesgra");
    lexer->switch_streams(fin,cout);
    lexer->yylex();
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    for(auto i:v){
        fo<<"%type<i> "<<i<<endl;
    }
    return 0;
}

