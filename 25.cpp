#include <bits/stdc++.h>
using namespace std;
int main() {
    string ans,sol;
    int ch=0;
    getline(cin>>ws,sol);getline(cin>>ws,ans);
    if(sol.size() == ans.size()){
        for(int i=0; i<ans.size(); i++){
            if(ans[i] == sol[i]){
                ch++;
            }
        }
        cout<<ch;
    }else cout<< "Incomplete answer";

    // cout<<sol.size()<<" "<<ans.size();
}