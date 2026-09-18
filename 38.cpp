#include <bits/stdc++.h>
using namespace std;

double arr[100];

int main(){
    int n;
    int num=0;
    cin >> n;
    for(int j=0; j<n; j++){
        cin >> arr[j];
    }
    for(int i=1; i<n-1; i++){
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            num++;
        }
    }
    cout << num;
}