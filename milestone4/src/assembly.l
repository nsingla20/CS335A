
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
vector<string> assembly;
vector<string> lc0;


%}
MethodName      [a-zA-Z0-9.]*:\n
Identifier      [a-zA-Z0-9. ]*
Stackptr        [ ]*"stackptr"[ ]*
Assignment      [a-zA-Z]+[= ]+[a-zA-Z]+[^\n]
Sign            [=\-\+\%>!]+
Offbp           \*\([a-z]+[-+ ]+[0-9]+\)


%option c++
%option noyywrap
%option yylineno

%%
{MethodName}    {string h(yytext); assembly.push_back(h);}//cout<<"here";}
"beginfunc\n"     {}
"push ebp"      {assembly.push_back("\tpushq \%rbp");}
"endfunc"       {;}
{Stackptr}      {assembly[assembly.size() - 1]+="\%rsp";}
{Identifier}    {   string h(yytext);

                    for(int i = 0;(h.size() > 3) && i<h.size() - 3;i++){
                        if(h[i] == 'i' && h[i+1] == 'n' && h[i+2] == 't'){
                            h.erase(i,1);
                            h.erase(i,1);
                            h.erase(i,1);
                            break;
                        }
                    }
                    int flag = 0;
                    for(int i = 0;i<h.size();i++){
                        if(h[i]!=' ' && (h[i] <= '0' || h[i] >= '9')){
                            flag = 1;
                            break;
                        }
                    }

                    if(flag == 0){
                        for(int i = 0;i<h.size();i++){
                            if(h[i] >= '0' && h[i] <= '9'){
                                h.insert(i,"$");
                                break;
                            }
                        }
                    }


                    assembly[assembly.size()-1]+=h;
                }
{Offbp}       {//cout<<yytext<<"++++++\n";
                string h(yytext);
                string a;
                int sign = 0;
                string reg;
                for(int i = 0;i<h.size();i++){
                    if(h[i]>='a' && h[i] <= 'z'){
                        reg+=h[i];
                    }
                    if(h[i]>='0' && h[i] <= '9'){
                        a+=h[i];
                    }
                    if(h[i] == '-'){
                        sign=0;
                    }
                    if(h[i] == '+'){
                        sign=1;
                    }
                }
                string p;
                if(sign == 1){
                    p = "+" + a + "(\%"+reg+")";
                }
                else{
                    p = "-" + a + "(\%"+reg+")";
                }
                assembly[assembly.size() - 1]+=p;
                }
{Sign}          {   
                    assembly[assembly.size() - 1]+=yytext;
                }     
"\t"            {}
"\n"            {assembly.push_back("\t");}
.               {cout<<"Unrecognised lexeme:"<<yytext<<" at line:"<<yylineno<<endl;return 1;}
%%

void dump_assembly_pre(){
    return;
}

void dump_assembly(){
    ofstream fout("assembly.s");
    fout<<".section    .rodata\n.LC0:\n\t.string    \"%d\\n\"\n\t.text\n\t.globl    main\n";
    dump_assembly_pre();
    for(int i=0; i<assembly.size(); i++){
        fout<<assembly[i]<<endl;
    }
    return;
}

int main(int argc,char **argv){

    ++argv, --argc;  
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    if ( argc > 0 ){
        fin.open(argv[0]);
        lexer->switch_streams(fin,cout);
    }
    lexer->yylex();
    dump_assembly();
    return 0;
}



