#include <bits/stdc++.h>
using namespace std;
vector<string> split(string line, char delimiter) {
    vector<string> ve_st;
    string sa;
    for(auto f : line){
        if(f == delimiter){
            ve_st.push_back(sa);
            sa.clear();
            continue;
        }
        sa += f;
    }
    ve_st.push_back(sa);
    return ve_st;
}

int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) {
    if(e.empty()) continue;
    cout << '(' << e << ')';
 }
}
