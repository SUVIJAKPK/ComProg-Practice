#include <bits/stdc++.h>
using namespace std;
string dec2hex(int d) {
    vector<pair<int , string>> hexx = {{0,"0"},{1,"1"},{2,"2"},{3,"3"},{4,"4"},{5,"5"},{6,"6"},{7,"7"},{8,"8"},{9,"9"},{10,"A"},{11,"B"},{12,"C"},{13,"D"},{14,"E"},{15,"F"}};
    if(d < 16){
        auto itr = find_if(hexx.begin() , hexx.end() , [&](auto & e){ return e.first == d;});
        return (*itr).second;
    }
    return dec2hex(d/16) + dec2hex(d%16);
}
int main() {
    int d;
    while (cin >> d) {
        cout << d << " -> " << dec2hex(d) << endl;
    }
    return 0;
}