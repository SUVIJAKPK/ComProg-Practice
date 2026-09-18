#include <bits/stdc++.h>
using namespace std;
int main(){
    double a;
    string w;
    cin>>a;
    // string s = to_string(a);
    // if(s.length()==4 || s.length()==7 || s.length()==10.0) tmp=1.00;
    if(a >= 1000){
        a/=1000;
        w='K';
    }
    if(a >= 1000){
        a/=1000;
        w='M';
    }
    if(a >= 1000){
        a/=1000;
        w='B';
    }
    if (w != "") {
        if (a < 10)
            cout << fixed << setprecision(1);
        else
            cout << fixed << setprecision(0);
    }
    cout << a << w;
}
