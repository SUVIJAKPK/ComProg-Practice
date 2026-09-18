#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    if(!(a=="0")){
    if(a[0]=='-') cout << "negative"<<endl;
    else cout << "positive"<<endl;
    if(stoi(a)%2==0) cout << "even";
    else cout << "odd";
    }else cout << "zero" << endl << "even";
}