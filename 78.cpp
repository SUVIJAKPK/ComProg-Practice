#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string , vector<string>> ma;
    vector<string> tier_name;
    string cartoon , name;
    while(cin >> cartoon >> name){
        if(ma.find(name) == ma.end()){
            ma[name] = vector<string>();
            tier_name.push_back(name);
        }
        ma[name].push_back(cartoon);
    }

    for(auto e : tier_name){
        cout << e << ": ";
        for(auto c : ma[e]) cout << c << " ";
        cout << endl;
    }
}