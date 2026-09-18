#include <bits/stdc++.h>
using namespace std;
int main(){
    double xm , ym , xe , ye , re , rp , c , C , B , A , a , b;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    c = re-rp;  //50
    A = xm-xe; //45
    B = ym-ye; //49
    C = sqrt(pow(A,2)+pow(B,2)); //66.528
    a = round((c/C) *A); 
    b = round((c/C) *B);
    // cout << A << " " << B <<endl;
    // cout << C << " " << c <<endl;
    // cout << a << " " << b <<endl;
    cout << xe+a << " " << ye+b ;
}