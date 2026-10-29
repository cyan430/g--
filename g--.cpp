#include<bits/stdc++.h>
using namespace std;
string code;
int p = 1;
vector<int> iar;
map<string, int> iarm;

void newint(){
    string s;
    while(code[p] != ' '){
        s += code[p];
    }
    iar.push_back(0);
    iarm[s] = iar.size()-1;
}

bool f_int(){
    string js = code.erase(p, 4);
    if(js == "int " || js == "int\n"){
        p+=4;
        newint();
        return 1;
    }
    else return 0;
}

int main(){
    freopen("g--code.cpp", "r", stdin);
    code += " ";
    string cins;
    while(cin >> cins){
        code += cins += '\n';
    }
    while(code[p] == '#'){
        while(code[p] != '\n' && p != code.size()-1){
            p++;
        }
    }
    while(p <= (int)code.size()-1){
        if(code[p] == ' '){
            p++;
        }
        if(code[p] == '\n'){
            p++;
        }
        if(f_int()){
            cout << "YES\n";
        }else{
            p++;
        }
    }
    return 0;
}
