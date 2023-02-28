
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
ofstream fo;
string curr;
%}

%option c++
%option noyywrap

match   [A-Za-z_. 0-9]+
terminal [A-Za-z_.]+
%%
"/*"[ ]*empty[ ]*"*/"             {
    fo<<yytext<<"\t\t\t";
    fo<<"{$$=-1;}";
}
{terminal}/[:]          {
    curr=yytext;
    fo<<yytext;
}
{match}/\n          {
    fo<<yytext<<"\t\t\t";
    string s(yytext);
    vector<string> v;
    bool b=false;
    string t="";
    for(char c:s){
        if(c==' '){
            if(b){
                v.push_back(t);
                b=false;
                t="";
            }
        }else{
            b=true;
            t+=c;
        }
    }
    if(t!=""){
        v.push_back(t);
        b=false;
        t="";
    }
    fo<<"{$$=createNode(\""<<curr<<"\");";
    if(curr=="input"){
        fo<<"startNode=$$;";
    }
    for(int i=0;i<v.size();i++){
        if(v[i][0]=='T'){
            fo<<"addChild($$,createNode($"<<i+1<<"));";
        }else{
            fo<<"if($"<<i+1<<" !=-1)addChild($$,$"<<i+1<<");";
        }
    }
    fo<<'}';
}

%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("finalgra_ir");
    fo.open("finalgra");
    lexer->switch_streams(fin,fo);
    lexer->yylex();
    return 0;
}

