#include <bits/stdc++.h>
using namespace std;

int main() {
    string plate;
    long long m;
    cin >> plate >> m;

 
    int num = (plate[0] - '0');   
    char c1 = plate[1];          
    char c2 = plate[2];           
    int n = stoi(plate.substr(4)); 

 
    for (long long i = 0; i < m; i++) {
        n++;
        if (n > 999) {
            n = 0;
            c2++;
            if (c2 > 'Z') {
                c2 = 'A';
                c1++;
                if (c1 > 'Z') {
                    c1 = 'A';
                    num++;
                    if (num > 9) num = 0;
                }
            }
        }
    }

    cout << num << c1 << c2 << "-";
    cout << setw(3) << setfill('0') << n << "\n";

    return 0;
}
