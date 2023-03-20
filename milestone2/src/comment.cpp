#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    fstream fs ("parser.y", ios::in);
    fstream out ("grammer.y", ios::out);

    string line;
    int q = 1;

    vector<string> page;
    vector<vector<string>> list;

    while(getline(fs, line)){
        page.push_back(line);
    }

    int action = 0;
    
    for(int i = 0; i < 1334; i++){
        for(int j = 0; j < page[i].size();j++){
            if(page[i][j] == '{' && j!=page[i].size()-1){
                cout<<page[i]<<"\n";
                page[i] = page[i].substr(0,j);
                cout<<page[i]<<"\n";
                break;
            }
        }
    }

    for(int i = 0; i < page.size(); i++){
        out<<page[i]<<"\n";
    }


    fs.close();
    return 0;
}