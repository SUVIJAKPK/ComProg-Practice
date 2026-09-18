#include <bits/stdc++.h>
using namespace std;

int F(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    if(n % 2 == 0){
        n /= 2;
        int fn = F(n);
        int fn1 = F(n-1);
        return (2 * fn1 + fn) * fn;
    }else{
        n = (n + 1)/2;
        int fn = F(n);
        int fn1 = F(n-1);
        return pow(fn , 2) + pow(fn1 , 2);
    }
}

int M(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;

    int sum = 0;
    for(int k = 0; k <= n-2; k++){
        sum += M(k) * M(n-2-k);
    }

    return M(n-1) + sum;
}

int S(int n) { 
    if(n == 1) return 1;
    if(n == 2) return 1;
    int sn = S(n-1);
    int snn = S(n-2);
    return ((6 * n - 9) * sn - (n - 3) * snn) / n;
}

int D(int n) {
    if(n == 0) return 1;
    int dn = D(n - 1);
    return n * dn + pow(-1 , n);
}

int main() {
    map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
    string fn;
    int p;
    while (cin >> fn >> p) {
    if (func.find(fn) != func.end())
        cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}
