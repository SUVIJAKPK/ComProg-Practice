#include <bits/stdc++.h>
using namespace std;

vector<pair<int , int>> vec_wrap;

vector<int> result;

void waapppp(int start , int stop ){
    
    if(start == stop){
        result.push_back(start);
    }

    if(start > stop){
        result.clear();

    }

    auto itr = find_if(vec_wrap.begin() , vec_wrap.end() , [&](auto & e){ return e.first == start; });
    if(itr != vec_wrap.end()){
        result.push_back(start);
        start = itr->second;
        waapppp(start , stop);
    }
}

int main(){
    int num_wap , start , end;
    cin >> num_wap >> start >> end;
    int wap_start , wap_end;
    for(int i = 0; i < num_wap; i++){
        cin >> wap_start >> wap_end;
        vec_wrap.push_back({wap_start , wap_end});
    }
    waapppp(start , end);

    auto itr_seach = find(result.begin() , result.end() , end);
    if(itr_seach != result.end()){
        int i = 0;
        for(auto e : result){
            cout << e ;
            if(i < result.size() - 1) cout << " -> ";
            i++;
        }
    }else cout << "no";
    

}