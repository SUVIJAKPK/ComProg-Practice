#include <bits/stdc++.h>
using namespace std;
int main() {
    int n_have; cin >> n_have;
    string icecream; double sell;
    vector<pair<string , double>> shop;
    for(int i = 0; i < n_have; i++){
        cin >> icecream >> sell;
        shop.push_back(make_pair(icecream , sell));
    }

    int n_buy; cin >> n_buy;
    double amount , sum = 0;
    bool sales = true;
    vector<pair<double , string>> top;
    for(int i = 0; i < n_buy; i++){
        cin >> icecream >> amount;
        auto itr = find_if(shop.begin() , shop.end() , [&](auto & e){ return e.first == icecream; });
        if(itr != shop.end()){
            auto tt = find_if(top.begin() , top.end() , [&](auto & p){ return p.second == icecream; });
            if(tt != top.end()){
                tt->first -= itr->second * amount; 
            }else top.push_back(make_pair(itr->second * amount *-1 , icecream));
            sum += itr->second * amount;
            sales = false;
        }
    }
    sort(top.begin() , top.end());

    if(sales) cout << "No ice cream sales";
    else{
        cout << "Total ice cream sales: " << sum << endl;
        cout << "Top sales: ";
        auto ii = top.begin();
        double maxx = ii->first * -1;
        for(auto too : top){
            too.first *= -1;
            if(too.first == maxx) cout << too.second << " ";
        }
    }
}