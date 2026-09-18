// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     double L=0, U, a;
//     cin>>a;
//     U=a;
//     double x=(U+L)/2.0;
//     for(int i=0; true; i++){
//         if(abs(a-pow(x,2)) <= pow(10,-10)*max(a,pow(x,2))) break;
//         if(pow(x,2)>a) x=(L+x)/2.0;
//         else if(pow(x,2)<a) x=(U+x)/2.0;
//     }
//     cout<<x;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    double a;
    cin >> a;

    double L = 0.0, U = a;
    double x;

    while (true) {
        x = (L + U) / 2.0;
        double power = pow(10.0, x);
        double error = fabs(power - a);

        if (error <= 1e-10 * max(a, power)) break;

        if (power > a) U = x;
        else L = x;
    }

    cout << x << endl;
    return 0;
}