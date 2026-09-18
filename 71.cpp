#include <bits/stdc++.h>
using namespace std;
bool anagram(string s1 , string s2){
    // if(s1.size() != s2.size()) return false;

    multiset<char> e1;
    for(auto c : s1){
        if(c == ' ') continue;
        if(isupper(c)) c = tolower(c);
        e1.insert(c);
    }

    multiset<char> e2;
    for(auto c : s2){
        if(c == ' ') continue;
        if(isupper(c)) c = tolower(c);
        e2.insert(c);
    }

    if(e1 == e2) return true;
    else return false;
}
int main() {
    string s1 , s2;
    getline(cin >> ws , s1);
    getline(cin >> ws , s2);

    if(anagram(s1 , s2)) cout << "YES";
    else cout << "NO";


}