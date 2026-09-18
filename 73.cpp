#include <bits/stdc++.h>
using namespace std;
int main() {
    string name1 , name2;
    set<pair<string , string>> team;
    while(cin >> name1){
        cin >> name2;
        team.insert({name1 , name2});
    }

    set<string> te;
    for(auto e:team){
        bool ch = true;
        for(auto c:team){
            if(e.first == c.second){
                ch = false;
                break;
            }
        }
        if(ch) te.insert(e.first);
    }
    if(!te.empty()){
        for(auto e:te) cout << e << " ";
    }else cout << "None";
}