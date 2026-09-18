#include <bits/stdc++.h>
using namespace std;

int main() {
    string id , grade;
    vector<string> abc = {"F","D","D+","C","C+","B","B+","A","A"};
    vector<pair<string , string>> student;
    while(cin >> id){
        if(id[0] == 'q') break;
        cin >> grade;
        student.push_back({id , grade});
    }

    string id_up;
    while(cin >> id_up){
        // cout << id_up << endl;
        auto itr = find_if(student.begin() , student.end() , [&](auto & e){ return e.first == id_up; });
        if(itr != student.end()){
            auto aa = find(abc.begin() , abc.end() , (*itr).second);
            aa++;
            (*itr).second = *aa;
            // cout << id_up << endl;
        }
    }

    for(auto & p : student){
        cout << p.first << " " << p.second << endl;
    }
}