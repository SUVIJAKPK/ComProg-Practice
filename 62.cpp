#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<tuple<int , int , int , int>> counting; // number , amount , start , stop
    int n , i = 0 , before = -1 , amount = 1 , start = 0 , stop = 0 , max = 0;
    while(cin >> n){
        stop = i;
        if(before == n){
            amount++;
        }else{
            counting.push_back({before , amount , start , stop});
            amount = 1;
            start = i;
        }
        if(amount > max) max = amount;
        before = n;
        i++;
    }
    counting.push_back({n , amount , start , stop + 1});
    counting.erase(counting.begin());
    sort(counting.begin() , counting.end());

    for(auto e : counting){
        if(get<1>(e) == max){
            cout << get<0>(e) << " --> x[ " << get<2>(e) << " : " << get<3>(e) << " ]" << endl;
        }
    }
}




