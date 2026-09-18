#include <bits/stdc++.h>
using namespace std;

set<string> result;

void anagram(string s , int l , int r){
    if (l == r) {
        result.insert(s); // บันทึก permutation
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);            // สลับตัวอักษร
        anagram(s, l + 1, r);        // ทำต่อจากตำแหน่งถัดไป
        swap(s[l], s[i]);            // สลับกลับ (backtrack)
    }
}

int main(){
    string n; cin >> n;

    anagram(n , 0 , n.size() - 1);

    for(auto e : result){
        cout << e << " ";
    }
}