#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d,max=0,min=0;
    cin>>a>>b>>c>>d;
    if(a>=b && a>=c && a>=d) max=a;
    else if(b>=a && b>=c && b>=d) max=b;
    else if(c>=a && c>=b && c>=d) max=c;
    else max=d;
    if(a<=b && a<=c && a<=d) min=a;
    else if(b<=a && b<=c && b<=d) min=b;
    else if(c<=a && c<=b && c<=d) min=c;
    else min=d;
    double x= (a+b+c+d-max-min)/2.0;
    cout<<round(x*100.0)/100.0;
}