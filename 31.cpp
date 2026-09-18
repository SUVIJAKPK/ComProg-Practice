#include <bits/stdc++.h>
using namespace std;
int main() {
    string st;
    cin >> st;
    int num=1;
    for(int i=0; i<st.size(); i++){
        if(st[i] == st[i+1]){
            num++;
        }else{
            cout<<st[i]<<" "<<num<<" ";
            num=1;
        }
    }
}