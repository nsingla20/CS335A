#include<bits/stdc++.h>

using namespace std;

void segrigate(string line,int lineno,vector<vector<int>> &temp_vars){
    string num = "";
    int flag = 0;
    for(int i = 0;i<line.size();i++){
        if(line[i] == 't' && (i + 1 < line.size()) && line[i+1] >= '0' && line[i+1] <= '9' ){
            flag = 1;
            continue;
        }
        if(flag == 1){
            if(line[i] >= '0' && line[i] <= '9'){
                num+=line[i];
            }
            else{
                temp_vars[stoi(num)].push_back(lineno);
                num = "";
            }
        }
    }
    if(num != ""){
        temp_vars[stoi(num)].push_back(lineno);
    }
    return;
}

void map_temp_lineno(vector<vector<int>> &temp_vars,vector<string> output){
    string line;

    for(int i = 0;i<output.size();i++){ 
        segrigate(line,i,temp_vars);
    }
    return;
}

void replace_with_reg(vector<string>&lines, vector<vector<int>>line_temp){
    // contains the line no, where the temp variable is used
    vector<int> index(1000,0);     
    // contains the register assigned to the temp variable         
    vector<int> assigned_reg(1000,-1);

    // scratch registers : rsi, rdi, rdx, rcx, r8, r9, r10, r11
    map<int,string> reg { 
        {0,"%rsi"},
        {1,"%rdi"},
        {2,"%rdx"}, 
        {3,"%rcx"},
        {4,"%r8"},
        {5,"%r9"},
        {6,"%r10"},
        {7,"%r11"},
    };
    vector<int> occupied(8,0);

    for(int i = 0;i<lines.size();i++){
        string num = "";
        vector<int> regs;
        int flag = 0;
        for(int j = 0;j<lines[i].size();j++){
            if(lines[i][j] == 't' && (j + 1 < lines[i].size()) && lines[i][j+1] >= '0' && lines[i][j+1] <= '9' ){
                flag = 1;
                continue;
            }
            if(flag == 1){
                if(lines[i][j] >= '0' && lines[i][j] <= '9'){
                    num+=lines[i][j];
                }
                else{
                    // have num
                    if(assigned_reg[stoi(num)] == -1){
                        // not assigned
                        for(int l = 0;l<8;l++){
                            if(occupied[l] == 0){
                                occupied[l] = 1;
                                assigned_reg[stoi(num)] = l;
                                index[stoi(num)]++;
                                regs.push_back(stoi(num));

                                int h = j - 1;
                                int k = num.size() + 1;
                                cout<<lines[i];
                                // cout<<k<<" "<<h<<" "<<num<<"------\n";
                                while(k--){
                                    lines[i].erase(lines[i].begin() + h);
                                    h--;
                                }
                                cout<<lines[i];
                                lines[i].insert(h+1,reg[l]);
                                // cout<<lines[i]<<"+++++++\n";
                                break;
                            }
                        }

                    }
                    else{
                        // already assigned
                        int h = j - 1;
                        int k = num.size() + 1;
                        while(k--){
                            lines[i].erase(lines[i].begin() + h);
                            h--;
                        }
                        lines[i].insert(h+1,reg[assigned_reg[stoi(num)]]);
                        index[stoi(num)]++;
                        regs.push_back(stoi(num));
                    }
                    flag = 0;
                    num = "";
                }
            }
        }
        for(int i = 0;i<regs.size();i++){
            if(line_temp[regs[i]].size()<index[regs[i]]){
                // not used
                occupied[assigned_reg[regs[i]]] = 0;
                assigned_reg[regs[i]] = -1;
            }
        }
    }
    return;
}

int main(){
    ifstream fin("assembly.s");
    ofstream fout("final.s");
    vector<string> output;

    vector<vector<int>> temp_vars(1000);
    string line;
    int lineno = 0;


    while (getline(fin, line)) { 
        int sign = -1;
        int idx = -1;

        // change ebp to rbp
        for(int i = 0; i<line.size()-2 && line.size()>2 ;i++){
            if(line[i] == 'e' && line[i+1] == 'b' && line[i+2] == 'p'){
                line[i] = 'r';
                if(line[i-1]!='%'){
                    line.insert(i,"%");
                }
            }
        }

        if(line.size() > 2 && line[1] == 'i'&& line[2]=='f'){
            // cout<<line<<"\n";
            string tempt;
            int flag = 0;
            for(int i = 0;i<line.size();i++){
                if(line[i] == 't'){
                    flag = 1;
                }
                else if(flag && line[i] == ' '){
                    break;
                }
                if(flag == 1){
                    tempt+=line[i];
                }
            }
            flag = 0;
            string tempL;
            for(int i = 0;i<line.size();i++){
                if(line[i] == 'L'){
                    flag = 1;
                }
                else if(flag == 1 && line[i] == ' '){
                    break;
                }

                if(flag == 1){
                    tempL+=line[i];
                }
            }
            string p,q;
            p = "\tcmpq $0, " + tempt + "\n";
            q = "\tje " + tempL + "\n";
            output.push_back(p);
            output.push_back(q);
            continue; 
        }

        // Operators to instructions
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
                line = "\tmovq " + line.substr(idx+2,-1) + ", " + line.substr(0,idx+1) + "\n";
            }
            else if(sign == 1){
                line = "\tsubq " + line.substr(0,idx+1) + ", " + line.substr(idx+3,-1) + "\n";
            }
            else if(sign == 2){
                line = "\taddq " + line.substr(0,idx+1) + ", " + line.substr(idx+3,-1) + "\n";
            }
        }

        //formating
        if(idx!=-1){
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
        }
        else{
            line+="\n";
        }

        output.push_back(line);
        lineno++;
    }

    // store lineno corresponding to temp_vars
    map_temp_lineno(temp_vars,output);
    // replace temprorary variables with scratch register
    replace_with_reg(output,temp_vars);

    for(int i = 0;i<output.size();i++){
        fout<<output[i];
    }
    return 0;
}