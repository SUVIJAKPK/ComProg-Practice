#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (i > 0) {
            bool prevLower = islower(s[i - 1]);
            bool prevUpper = isupper(s[i - 1]);
            bool prevDigit = isdigit(s[i - 1]);
            bool curLower = islower(c);
            bool curUpper = isupper(c);
            bool curDigit = isdigit(c);

         
            if ((curUpper) ||                        
                (curDigit && isalpha(s[i - 1])) ||     
                (isalpha(c) && prevDigit))           
            {
                result += ", ";
            }
        }

        result += c;
    }

    cout << result << endl;
    return 0;
}
