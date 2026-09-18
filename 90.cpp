#include <bits/stdc++.h>
using namespace std;

int H(int n) {
    if(n == 0) return 0;
        int hnn = 2 * H(n-1) + 1;
        return hnn;
}

int C(int n) {
    if(n == 0) return 1;
    int sum = 0;
    for(int i=0; i < n; i++){
        int ck = C(i);
        int ckk = C(n-1-i);
        sum += ck * ckk;
    }
    n++;
    return sum;
}

int M(int n);

int F(int n) {
    if(n == 0) return 1;
    return n - M(F(n-1));
}

int M(int n) {
    if(n == 0) return 0;
    return n - F(M(n-1));
}

int main() {
    map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
        cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}