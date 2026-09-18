#include <bits/stdc++.h>
using namespace std;
int main() {
    double n=0,sum=0,num;
    for(int i=1; true; i++){
        cin>>n;
        num=i;
        if(n==-1) break;
        sum+=n;
    }
    if(num==1) cout<< "No Data";
    else cout<< round((sum/(num-1))*100)/100;
}