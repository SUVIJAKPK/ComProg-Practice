#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin>>ws,a);
    for(int i=0; i<a.size(); i++){
        if(a[i] == '(' ) {
            a[i]= '[';
            continue;
        }

        if(a[i] == '[' ) { 
            a[i]= '(';
            continue;
        }
        if(a[i] == ')' ) {
            a[i]= ']';
            continue;
        }
        if(a[i] == ']' ) {
            a[i]= ')';
            continue;
        }
    }
    cout << a;
}



