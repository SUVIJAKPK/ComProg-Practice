#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int> vec;
    int target; cin >> target;
    int n;
    while(cin >> n){
        vec.insert(n);
    }

    int count = 0;
    for(auto a : vec){
        int miss = target - a;
        auto itr = vec.find(miss);
        if(itr != vec.end()){
            count++;
        }
    }

    cout << count / 2;
}