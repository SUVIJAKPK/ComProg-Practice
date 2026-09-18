#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,lo;
    cin>> a;
    cin>> b;
    cin>> c;
    lo=sqrt(pow(b,2)-(4*a*c));
    cout << round(((-b-lo)/(2*a))*1e3)/1e3 << " " << round(((-b+lo)/(2*a))*1e3)/1e3;
    return 0;
}