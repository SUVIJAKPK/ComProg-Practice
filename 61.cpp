#include <bits/stdc++.h>
using namespace std;
int main() {
    string keyword; cin >> keyword;
    keyword += "$";
    vector<string> roundloop;
    for(auto itr = 0; itr < keyword.size(); itr++){
        rotate(keyword.begin(), keyword.begin() + 1, keyword.end());
        roundloop.push_back(keyword);
    }
    sort(roundloop.begin() , roundloop.end());
    string ans;
    for(auto e : roundloop){
        ans += e[keyword.size() - 1];
    }
    cout << ans;
}