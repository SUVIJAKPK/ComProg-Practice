#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<string , string>> number = {{"a","2"} , {"b","22"} , {"c","222"}
    , {"d","3"} , {"e","33"} , {"f","333"} , {"g","4"} , {"h","44"} , {"i","444"}
    , {"j","5"} , {"k","55"} , {"l","555"} , {"m","6"} , {"n","66"} , {"o","666"}
    , {"p","7"} , {"q","77"} , {"r","777"} , {"s","7777"} , {"t","8"} , {"u","88"}
    , {"v","888"} , {"w","9"} , {"x","99"} , {"y","999"} , {"z","9999"} , {" ","0"}    
    };

    string type;
    while(cin >> type){
        if(type == "T2K"){
            string sentence; getline(cin , sentence);
            int i = 0;
            cout << ">> ";
            for(auto e : sentence){
                if(i == 0){
                    i++;
                    continue;
                }
                if(isupper(e)) e = tolower(e);
                string tt = ""; tt += e;
                auto itr_t2k = find_if(number.begin() , number.end() , [&](auto & p){ return p.first == tt; });
                if(itr_t2k != number.end()){
                    cout << itr_t2k->second << " ";
                }
                i++;
            }
            cout << endl;
        }else if(type == "K2T"){
            string sen , num; getline(cin , sen);
            stringstream ss(sen);
            cout << ">> ";
            while(ss >> num){
                auto itr_k2t = find_if(number.begin() , number.end() , [&](auto & u){ return u.second == num; });
                if(itr_k2t != number.end()){
                    cout << itr_k2t->first;
                }
            }
            cout << endl;
        }
    }
}