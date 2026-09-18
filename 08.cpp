#include <bits/stdc++.h>
using namespace std;
int main(){
    string id;
    int n12=0,som=0;
    cin >> id;
    for(int i=0; i<=11 ; i++){
        som +=(id[i]-'0')*(13-i);
    }
    n12 = (11-(som%11))%10;
    cout<<id[0]<<"-"<<id.substr(1,4)<<"-"<<id.substr(5,5)<<"-"<<id.substr(10,2)<<"-"<<n12;
}