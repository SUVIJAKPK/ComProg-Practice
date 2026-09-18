#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n , m;
    cin >> n;
    map<string , string> mp1 , mp2;
    for(int i=0; i<n; i++){
        string nm1 , nm2;
        cin >> nm1 >> nm2;
        mp1[nm1] = nm2;
        mp2[nm2] = nm1;
    }
    
    cin >> m;
    for(int i=0; i<m; i++){
        string se;
        cin >> se;
        if(mp1.find(se) != mp1.end()) cout << mp1[se] << endl;
        else if(mp2.find(se) != mp2.end()) cout << mp2[se] << endl;
        else cout << "Not found" << endl ;
    }
}