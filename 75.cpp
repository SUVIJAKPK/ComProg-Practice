#include <bits/stdc++.h>
using namespace std;
set<int> U(vector<set<int>> an){
    set<int> all;
    for(auto & s : an){
        all.insert(s.begin() , s.end());
    }
    return all;
}

set<int> I(vector<set<int>> an){
    auto itr = an.begin();
    set<int> common = *itr;
    for(int i=0; itr != an.end(); itr++){
        set<int> in;
        for(auto & a : common){
            auto h = (*itr).find(a);
            if(h != (*itr).end()) in.insert(a);
        }
        common = in;
    }
    return common;
}

set<int> D(vector<set<int>> an){
    set<int> allofone;
    auto itr = an.begin(); 
    set<int> fir = *itr;
    itr++;
    for(; itr != an.end(); itr++){
        allofone.insert((*itr).begin() , (*itr).end());
    }

    set<int> jj;
    for(auto t : fir){
        if(allofone.find(t) == allofone.end()) jj.insert(t);
    }
    return jj;
}

int main() {
    vector<set<int>> uni;
    string ss;
    while(getline(cin , ss)){
        stringstream stos(ss);
        int num;
        set<int> sett;
        while(stos >> num){
            sett.insert(num);
        }
        uni.push_back(sett);
    }
    
    cout << "U: ";
    if(!U(uni).empty()){
        for(auto e : U(uni)){
            cout << e << " ";
        }
    }else cout << "empty set";
    cout << endl;

    
    cout << "I: ";
    if(!I(uni).empty()){
        for(auto e : I(uni)){
            cout << e << " ";
        }
    }else cout << "empty set";
    cout << endl;

    cout << "D: ";
    if(!D(uni).empty()){
        for(auto e : D(uni)){
            cout << e << " ";
        }
    }else cout << "empty set";
    cout << endl;
}