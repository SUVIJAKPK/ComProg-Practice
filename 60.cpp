#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int , int> MaVec;
    int num;
    while(cin >> num){
        auto itr = MaVec.find(num);
        if(itr == MaVec.end()){
            MaVec[num] = 1;
        }else itr->second++;
    }

    cout << MaVec.size() << endl;

    int i = 0;
    for(auto e : MaVec){
        if(i < 10) cout << e.first << " ";
        i++;
    }
}