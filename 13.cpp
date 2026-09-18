#include <bits/stdc++.h>
using namespace std;
int main(){
    long long name1,name2;
    double gpax1,gpax2;
    char com1,com2,ca11,ca12,ca21,ca22;
    cin>>name1>>gpax1>>com1>>ca11>>ca21;
    cin>>name2>>gpax2>>com2>>ca12>>ca22;
    bool pass1=(com1=='A')&&(ca11=='C'||ca11=='B'||ca11=='A')&&(ca21=='C'||ca21=='B'||ca21=='A'),pass2=(com2=='A')&&(ca12=='C'||ca12=='B'||ca12=='A')&&(ca22=='C'||ca22=='B'||ca22=='A');
    if(pass1&&pass2){
        if(gpax1>gpax2) cout << name1;
        else if(gpax2>gpax1) cout << name2;
        else{
            if(ca11<ca12) cout << name1;
            else if(ca12<ca11) cout << name2;
            else{
                if(ca21<ca22) cout << name1;
                else if(ca22<ca21) cout << name2;
                else cout<<"Both";
            }
        }
    }
    else if(pass1) cout << name1;
    else if(pass2) cout << name2;
    else cout << "None";
    // int n1, n2;
    // double g1, g2;
    // char cp1,cp2, cal11, cal12, cal21, cal22;
    // cin >> n1 >> g1 >> cal11 >> cal21;
    // cin >> n2 >> g2 >> cal12 >> cal22;
    // if (g1 > g2) cout << n1;
    // else if (g1 < g2) cout << n2;
    // else {
    //     if (cal11 > cal12) cout << n1;
    //     else if (cal12 > cal11) cout << n2;
    //     else {
    //         if (cal21 > cal22) cout << n1;
    //         else if (cal22 > cal21) cout << n2;
    //         else cout << "Both";
    //     }
    // }
}