#include <bits/stdc++.h>
using namespace std;
string addBigInt(string & a , string & b) {
    string A = a, B = b;
    if (A.size() < B.size()) A.insert(0 , B.size() - A.size() , '0');
    else if (B.size() < A.size()) B.insert(0 , A.size() - B.size() , '0');

    string result = "";
    int carry = 0;
    for (int i = A.size() - 1; i >= 0; i--) {
        int sum = (A[i] - '0') + (B[i] - '0') + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }
    if (carry) result.push_back(carry + '0');
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num, sum = "0";
    while (cin >> num) {
        if (num == "END") break;
        sum = addBigInt(sum, num);
    }
    cout << sum << endl;
    return 0;
}