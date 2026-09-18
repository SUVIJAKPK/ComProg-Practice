#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<string , vector<string>>> keyID;
    string id , key;
    for(int i=0; i < n; i++){
        cin >> id;
        keyID.push_back({id , {}});
        auto itr = find_if(keyID.begin() , keyID.end() , [&](auto & e){ return e.first == id; });
        while(cin >> key && key != "*"){
            (itr -> second).push_back(key);
        }
    }

    vector<pair<int , string>> anss;
    string ans_id;
    cin >> ans_id;
    bool ch = true;
    auto ans_itr = find_if(keyID.begin() , keyID.end() , [&](auto & p){ return p.first == ans_id; });
    if(ans_itr != keyID.end()){
        for(auto a : ans_itr -> second){
            int i = 0;
            for(auto b : keyID){
                if(ans_itr->first == b.first) continue;
                auto b_itr = find(b.second.begin() , b.second.end() , a);
                if(b_itr != b.second.end()){
                    auto tt_itr = find_if(anss.begin() , anss.end() , [&](auto & d){ return d.second == b.first; });                    
                    if(tt_itr == anss.end()) anss.push_back({i , b.first});
                    ch = false;
                }
                i++;
            }
        }
    }
    if(ch) cout << ">> Not Found";
    sort(anss.begin() , anss.end());
    for(auto k : anss){
        cout << ">> " << k.second << endl;
    }
}