#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string currency; double rate;
    vector<pair<string , double>> vec_currency = {{"THB" , 1.0}};
    for(int i=0; i<n; i++){
        cin >> currency >> rate;
        vec_currency.push_back({currency , rate});
    }

    cin >> ws;
    string input;
    getline(cin , input);
    stringstream ss(input);
    int money;
    ss >> money;
    vector<string> country;
    string cc;
    while(ss >> cc){
        country.push_back(cc);
    }

    auto t = country.begin();
    auto st = find_if(vec_currency.begin() , vec_currency.end() , [&](auto & p){ return p.first == *t;});
    double cur_before = (*st).second;
    int j = 0;
    for(auto e : country){
        auto itr = find_if(vec_currency.begin() , vec_currency.end() , [&](auto & p){ return p.first == e;});
        if(itr != vec_currency.end()){
            money = int(money * cur_before / (*itr).second);
            cur_before = (*itr).second;
        }
        cout << money << " " << (*itr).first;
        if(j < country.size()-1) cout << " -> ";
        j++;
    }
}