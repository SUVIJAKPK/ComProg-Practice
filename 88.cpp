#include <bits/stdc++.h>
using namespace std;

int modd(int a , int k , int m){
    if(k == 0) return 1;
    int mo = modd(a , k/2 , m);
    int result;
    if(k % 2 == 0) result = (mo * mo) % m;
    else result = (a * (mo * mo)) % m;
    return result;
}

int main() {
    int a , k , m;
    cin >> a >> k >> m;
    cout << modd(a,k,m);    
}