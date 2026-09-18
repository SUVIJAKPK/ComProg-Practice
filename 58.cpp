#include <bits/stdc++.h>
using namespace std;
int main() {
    int num; cin >> num;
    int c = num;
    vector<int> v;
    while(num != 1){
        if(num % 2 == 0) num /= 2;
        else num = 3*num + 1;
        v.push_back(num);
    }
    
    if(v.size() < 15) cout << c << "->";
    int i = 0; 
    for(auto e : v){
        if(v.size() < 15 || i >= v.size() - 15){
            if(e == v[v.size() - 1]) cout << e;
            else cout << e << "->";
        }
        i++;
    }
}