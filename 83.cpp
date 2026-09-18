#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<string , string>> map_station;
    set<string> ans;
    string station_one , station_two , som;
    while(getline(cin , som)){
        stringstream ss(som);
        ss >> station_one;

        if(!(ss >> station_two)){
            ans.insert(station_one);
            for(auto e : map_station){
                if(e.first == station_one){
                    ans.insert(e.second);
                    for(auto p : map_station){
                        if(p.first == e.second) ans.insert(p.second);
                        if(p.second == e.second) ans.insert(p.first);
                    }
                }

                if(e.second == station_one){
                    ans.insert(e.first);
                    for(auto p : map_station){
                        if(p.first == e.first) ans.insert(p.second);
                        if(p.second == e.first) ans.insert(p.first);
                    }
                }            
            }
        }else{
            map_station.push_back({station_one , station_two});
        }
    }

    for(auto r : ans){
        cout << r << endl;
    }
}