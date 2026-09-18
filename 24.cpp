#include <bits/stdc++.h>
using namespace std;
int main() {
    string word,senten;
    cin >> word;
    getline(cin>>ws,senten);
    int len=word.length(), pos=0, sum=0;

    for(int i=0; i<senten.length(); i++){
        int found = senten.find(word,pos);
        int last = found+len;
        
        if (found == string::npos) break;

        bool check=false;

        if(isalpha(senten[found-1])) check=true;

        if(last <= senten.length() && isalpha(senten[last])) check=true;

        if(!check){
            sum++;
        }

        pos=last;
        // cout<<found<<endl;

    }
    
    cout<< sum;
    return 0;
}