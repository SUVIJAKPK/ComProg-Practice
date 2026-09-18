#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int , string>> song_time;
    string name , act , type , time;
    while(cin >> name >> act >> type >> time){
        int di_min = 0;
        for(auto p : time){
            if(isdigit(p) && p != ':'){
                di_min++;
            }else break;
        }
        int min = stoi(time.substr(0 , di_min)) * 60;
        int second = stoi(time.substr(di_min + 1 , time.size() - di_min));
        int all_time = min + second;
        auto itr = find_if(song_time.begin() , song_time.end() , [&](auto & e){ return e.second == type; });

        if(itr != song_time.end()){
            itr->first -= all_time;
        }else song_time.push_back(make_pair(all_time * -1 , type));
    }
    sort(song_time.begin() , song_time.end());

    int i = 0;
    for(auto b : song_time){
        if(i >= 3) break;
        b.first *= -1;
        int minn = b.first / 60;
        int secondd = b.first - (minn * 60);
        cout << b.second << " --> " << minn << ":" << secondd << endl;
        i++;
    }
}