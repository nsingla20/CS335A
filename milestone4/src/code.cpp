#include<bits/stdc++.h>

using namespace std;
int main(){
    ifstream fin("assembly.s");
    ofstream fout("final.s");
    vector<string> output;

    std::string line;
    while (getline(fin, line)) { 
        int sign = -1;
        int idx = -1;
        for(int i=1;i<line.size();i++){
            if(line[i] == '='){
                if(line[i-1] == '-'){
                    sign = 1;               // -=
                    idx = i-2;
                }
                else if(line[i-1] == '+'){
                    sign = 2;               // +=
                    idx = i-2;
                }
                else{
                    sign = 0;
                    idx = i-1;
                }
                break;
            }
        }
        if(idx != -1){
            if(sign == 0){
                // fout<<"\tmovq "<<line.substr(idx+3,-1)<<", "<<line.substr(0,idx+1)<<"\n";
                line = "\tmovq " + line.substr(idx+3,-1) + ", " + line.substr(0,idx+1) + "\n";
            }
            else if(sign == 1){
                // fout<<"\tSUB "<<line.substr(0,idx+1)<<", "<<line.substr(idx+3,-1)<<"\n";
                line = "\tsubq " + line.substr(0,idx+1) + ", " + line.substr(idx+3,-1) + "\n";
            }
            else if(sign == 2){
                // fout<<"\tADD "<<line.substr(0,idx+1)<<", "<<line.substr(idx+3,-1)<<"\n";
                line = "\taddq " + line.substr(0,idx+1) + ", " + line.substr(idx+3,-1) + "\n";
            }
        }

        for(int i = 1;i<line.size();i++){
            if(line[i-1] == ' ' && line[i] == ' '){
                line.erase(i,1);
                i--;
            }
            if(line[i] == '\t'){
                line.erase(i,1);
                i--;
            }
        }
        output.push_back(line);
    }
    for(int i = 0;i<output.size();i++){
        fout<<output[i];
    }
    return 0;
}