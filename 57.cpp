#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> ve;

    bool bo = true;
    for(int i=0; i<n; i++){
        int k; cin >> k;
        if(bo){
            ve.push_back(k);
            bo = false;
        }else{
            ve.insert(ve.begin() , k);
            bo = true;
        }
    }

    int k , i=0;
    while(cin >> k && k != -1){
        if(bo){
            ve.push_back(k);
            bo = false;
        }else{
            ve.insert(ve.begin() , k);
            bo = true;
        }
        i++;
    }

    for(auto e:ve){
        if(e == ve[0])cout << '[';
        if(e == ve[ve.size()-1]) cout << e << ']';
        else cout << e << ", ";
    }
}