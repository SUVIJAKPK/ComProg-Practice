#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n , m;
    map<string , string> mp1 , mp2;
    cin >> n;
    for(int i=0; i<n; i++){
        string name , last , tele;
        cin >> name >> last >> tele;
        string full = name + " " + last;
        mp1[full] = tele;
        mp2[tele] = full;
    }
    
    cin >> m;
    for(int i=0; i<m; i++){
        string se;
        getline(cin >> ws , se);
        if(mp1.find(se) != mp1.end()) cout << se << " --> " << mp1[se] << endl;
        else if(mp2.find(se) != mp2.end()) cout << se << " --> " << mp2[se] << endl;
        else cout << se << " --> " << "Not found" << endl ;
    }
}