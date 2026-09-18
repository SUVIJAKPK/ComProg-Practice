#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    for(int i=2; i<=k; i++){
        while(k%i==0){
            cout << i;
            k /= i;
            if(k!=1) cout<<"*";
        }
    }
}