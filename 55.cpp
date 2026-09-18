#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower((unsigned char)c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

pair<string,string> splitAtFirstVowel(const string &w) {
    for (size_t i = 0; i < w.size(); ++i) {
        if (isVowel(w[i])) {
            return { w.substr(0, i), w.substr(i) };
        }
    }
    return { w, string() };
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    if (!getline(cin, line)) return 0;

    stringstream ss(line);
    vector<string> words;
    string tok;
    while (ss >> tok) words.push_back(tok);

    if (words.size() >= 2) {
        auto p1 = splitAtFirstVowel(words.front());
        auto p2 = splitAtFirstVowel(words.back());

        words.front() = p1.first + p2.second;
        words.back()  = p2.first + p1.second;
    }

    for (size_t i = 0; i < words.size(); ++i) {
        if (i) cout << ' ';
        cout << words[i];
    }
    cout << '\n';
    return 0;
}
