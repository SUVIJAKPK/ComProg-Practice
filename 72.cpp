#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , count = 0;
    bool ch = true;
    set<int> se;
    while(cin >> n && ch){
        if(se.find(n) != se.end()){
            cout << se.size() + 1 ;
            ch = false;
        }
        se.insert(n);
    }
    if(ch) cout << "-1";
}