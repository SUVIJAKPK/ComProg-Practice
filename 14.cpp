#include <bits/stdc++.h>
using namespace std;
int main(){
    string ph;
    cin >> ph;
    string hh=ph.substr(0,2);
    if(hh=="06"||hh=="08"||hh=="09")cout<< "Mobile number";
    else cout<<"Not a mobile number";
}