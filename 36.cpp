#include <bits/stdc++.h>
using namespace std;
char num[] = {'0','1','2','3','4','5','6','7','8','9'};
int ch[10];
int main(){
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        char c;
        c = s[i];
        if(('0' <= c) && ('9' >= c)){
            for(int j=0; j<10; j++){
                if(c == num[j]){
                    ch[j] = 1;
                    break;
                }
            }
        }
    }

    // for(int i=0; i<10; i++){
    //     cout << ch[i] << " ";
    //     cout << num[i];
    // }

    bool check=false;
    for(int i=0; i<10; i++){
        if(ch[i] == 0){
            if(check) cout << ",";
            cout << num[i];
            check = true;
        }
    }
    if(!check) cout << "None";
}