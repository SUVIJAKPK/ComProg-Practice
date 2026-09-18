#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<string , double>> lisk , li;
    string product;
    double sell;
    while(cin >> product && product != "END"){
        cin >> sell;
        lisk.push_back({product , sell});
    }

    string buy;
    while(cin >> buy){
        bool found = false;

        auto itr_list = find_if(lisk.begin() , lisk.end() , [&](auto & i){ return i.first == buy; });
        auto itr_li = find_if(li.begin() , li.end() , [&](auto & t){ return t.first == buy; });

        if(itr_list != lisk.end()){
            if(itr_li != li.end()){
                itr_li->second += itr_list->second;
            }else{
                li.push_back(*itr_list);
            }
        }
    }

    if(!li.empty()){
        vector<pair<double , string>> ans;
        for(auto & k : li){
            ans.push_back({k.second * -1 , k.first});
        }
        sort(ans.begin() , ans.end());

        int i = 0;
        for(auto e : ans){
            if(i >= 3) break; 
            cout << e.second << " " << e.first * -1 << endl;
            i++;
        }
    }else cout << "No Sales";
}