#include <bits/stdc++.h>
using namespace std;
char az[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int al[26];
int main(){
    string toey; getline(cin , toey);
    for(char ch : toey){
        if(ch >= 'A' && ch <= 'Z') ch = tolower(ch);
        for(int i=0; i<26; i++){
            if(az[i] == ch){
                al[i] +=1;
            }
        }
    }

    for(int i=0; i<26; i++){
        if(al[i] > 0){
            cout << az[i] << " -> " << al[i] << endl;
        }
    }    
}