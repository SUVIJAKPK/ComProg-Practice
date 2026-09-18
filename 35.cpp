#include <bits/stdc++.h>
using namespace std;
int main() {
    float p;
    cin >> p;
    double k=1 , t=1;
    while(true){
        t=(t*(365-(k-1)))/365.0;
        if(1-t >= p){
            break;
        }else k++;
    }
    cout<<k;
}