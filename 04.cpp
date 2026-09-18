#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,ll;
    cin>> a;
    a -= 543;
    ll = (int)(a + (int)floor(a/4) + 11) %7;
    cout << (ll+6)%7 ;
}