#include <bits/stdc++.h>
using namespace std;
int main() {
    string t;
    int k, ch=0, num=1;
    cin>>t; cin>>k;
    for(int i=0; i<t.size(); i++){
        if(t[i] == t[i+1]){
            num++;
        }else{
            if(num >= k){

            }else{
                for(int j=1; j<=num; j++){
                    cout << t[i];
                }
            }
            num = 1;
        }
    }
}