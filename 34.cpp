#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int firstMax=-99999,firstMin=99999,secondMax=-99999,secondMin=99999;
    for(int i=1; true; i++){
        cin >> a;
        if(a == -999 || a == -998) break;
        cin >> b;
        if(i % 2 != 0){
            firstMax = max(a,firstMax);
            firstMin = min(a,firstMin);
            secondMax = max(b,secondMax);
            secondMin = min(b,secondMin);
        }else{
            firstMax = max(b,firstMax);
            firstMin = min(b,firstMin);
            secondMax = max(a,secondMax);
            secondMin = min(a,secondMin);
        }
        //cout << a << " " << b << endl;
        //cout << firstMin << " " << secondMax << endl;

    }
    if(a == -999){
        cout << secondMin << " " << firstMax ;
    }else if(a == -998) cout << firstMin << " " << secondMax;
}