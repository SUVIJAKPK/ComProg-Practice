#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    double arr[50][50];
    cin>>r; cin>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    double n[50][50];

    for(int i=0; i<r-2; i++){
        for(int j=0; j<c-2; j++){
            n[i][j]=round(((arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2])/9.0)*100)/100.0;
        }
    }



    for(int i=0; i<r-2; i++){
        cout << "\n";
        for(int j=0; j<c-2; j++){
            cout << n[i][j] << " ";
        }
    }
    
}