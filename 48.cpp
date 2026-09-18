#include <bits/stdc++.h>
using namespace std;
int arr[100][100] , x[100][100] , y[100][100];
int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<4; k++){
                if(k % 2 == 0 && k > arr[i][0] && arr[i][2]){
                    
                }
            }
        }
    }


}