#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , vector<string>> playlist; // song , name
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string sentence;
        getline(cin , sentence);
        int count = 0;
        for(auto e : sentence){
            if(e == ',') break;
            count++;
        }
        string song = sentence.substr(0 , count);
        string name = sentence.substr(count + 2 , sentence.size());
        
        if(!playlist[song].empty()){
            playlist[song].push_back(name);
        }else{
            playlist[song] = {name};
        }
    }

    string qu;
    getline(cin , qu);
    int start = 0 , count = 0;
    for(auto l = qu.begin(); l != qu.end(); l++){
        if(*l == ','){
            string po = qu.substr(start , count);
            cout << po << " -> ";
            if(playlist[po].empty()){
                cout << "Not found" << endl;;
            }else{
                int dd = 0;
                for(auto k : playlist[po]){
                    cout << k;
                    if(dd != playlist[po].size() - 1) cout << ", ";
                    dd++;
                }
                cout << endl;
            }
            l += 2;
            count += 2;
            start += count;
            count = 0;
        }
        count ++;
    }
    string po = qu.substr(start , count);
    cout << po << " -> ";
    if(playlist[po].empty()){
        cout << "Not found" << endl;;
    }else{
        int dd = 0;
        for(auto k : playlist[po]){
            cout << k;
            if(dd != playlist[po].size() - 1) cout << ", ";
            dd++;
        }
        cout << endl;
    }

}