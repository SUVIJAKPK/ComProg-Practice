#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    bool bo = false;
    cin >> a;
    if (a == "01" || a == "02" || a == "20" || a == "21" || a == "22" || a == "23" || a == "24" || a == "25" ||
        a == "26" || a == "27" || a == "28" || a == "29" || a == "30" || a == "31" || a == "32" ||
        a == "33" || a == "34" || a == "35" || a == "36" || a == "37" || a == "38" || a == "39" ||
        a == "40" || a == "51" || a == "53" || a == "55" || a == "58") {
        bo = true;
    }
    if (bo) cout << "OK";
    else cout << "Error";
}