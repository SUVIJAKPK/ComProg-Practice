#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> first(vector<vector<int>> number){
    
    int sum = 0 , summ = 0 , left = 0;
    for(auto a = number.begin(); a != number.end();){
        bool cal = false;
        for(auto b = (*a).begin(); b != (*a).end(); b++){
            sum += *b;
        }
        left = 100 - sum;

        for(auto c = a + 1; c != number.end();){ 
            summ = accumulate((*c).begin() , (*c).end() , 0);
            if(left >= summ){
                for(auto cc : *c){
                    (*a).push_back(cc);
                }
                sort((*c).begin() , (*c).end());
                number.erase(c);
                cal = true;
                break;
            }
            summ = 0;
            c++;
        }
        summ = 0;
        if(!cal) a++;
        sum = 0 , left = 0;
    }
    return number;
}

vector<vector<int>> best(vector<vector<int>> number) {
    vector<vector<int>> groups;

    for (const auto & item : number) {
        if (item.empty()) continue;
        int val = item[0];

        int best_index = -1;
        int best_gap = INT_MAX;

        for (int i = 0; i < groups.size(); i++) {
            int sum = accumulate(groups[i].begin(), groups[i].end(), 0);
            if (sum + val <= 100) {
                int gap = 100 - (sum + val);
                if (gap < best_gap) {
                    best_gap = gap;
                    best_index = i;
                }
            }
        }

        if (best_index != -1) {
            groups[best_index].push_back(val);
        } else {
            groups.push_back({val});
        }
    }

    return groups;
}

void lineup(vector<vector<int>>& number) {
    for (auto & e : number) {
        sort(e.begin() , e.end());
    }

    sort(number.begin() , number.end() , [](auto & a , auto & b) {
        int sum_a = accumulate(a.begin(), a.end(), 0);
        int sum_b = accumulate(b.begin(), b.end(), 0);

        if (sum_a != sum_b) return sum_a > sum_b; 
        if (a.size() != b.size()) return a.size() < b.size(); 
        return a[0] < b[0]; 
    });
}


int main() {
    vector<vector<int>> number;
    string type; cin >> type;
    int n;
    while(cin >> n){
        number.push_back({n});
    }
    if(type == "first"){
        number = first(number);
        lineup(number);
        for(auto ff : number){
            for(auto gg : ff){
                cout << gg << " ";
            }
            cout << endl;
        }
    }
    
    if(type == "best"){
        number = best(number);
        lineup(number);
        for(auto ff : number){
            for(auto gg : ff){
                cout << gg << " ";
            }
            cout << endl;
        }
    }
}