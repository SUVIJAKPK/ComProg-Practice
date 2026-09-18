#include <bits/stdc++.h>
using namespace std;

string s[] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
string ss[] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
string name;
int main(){
    int n;
    cin >> n;
    for(int j=0; j<n; j++){
        bool tt = false;
        cin >> name;
        for(int i=0; i<10; i++){
            if(name == s[i]){
                cout << ss[i] << endl;
                tt = true;
                break;
            }else if(name == ss[i]){
                cout << s[i] << endl;
                tt = true;
                break;
            }
        }
        if(!tt) cout << "Not found" << endl;
    }

}