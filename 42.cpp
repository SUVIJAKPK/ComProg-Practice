#include <bits/stdc++.h>
using namespace std;
string country[100] , wh[100];
int money[100];
int main(){
    int n , sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> country[i] >> money[i];
    }
    cin >> ws;
    string tour;
    getline(cin , tour);
    
    int no=0;
    for(int i=4; i<tour.size(); i+=7){
        string co = tour.substr(i,2);
            wh[no++] = co;
    }

    for(int i=0; i<no; i++){
        bool che = true;
        if(i == 0) che = false;
        if(wh[i] == wh[i-1]){ 
            continue;
        }

        if(che){
            for(int j=0; j<n; j++){
                if(wh[i] == country[j]) sum += money[j];
            }
        }
    }

    cout << sum;

    // for(int i=0; i<10; i++){
    //     cout << wh[i];
    // }
}