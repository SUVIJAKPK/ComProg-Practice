#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; 
    while(getline(cin >> ws , s)){
    char ch = s[s.size() - 1];
    int h=0 , sfs = 0;
    for(int i=0; i<s.size();){
        char c = s[i];
        if(c == ch){
            sfs++;
            if(sfs % 2 != 0){
                s.erase(h,i-h+1);
                i = h;
            }else i++;
            h = i-1;
        }else i++;
    }
    cout << s << endl;
    }
}