#include <bits/stdc++.h>
using namespace std;
string arr[100] , arr2[100] , arr3[100];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> ws;
    string wat;
    getline(cin , wat);
    // cout << arr[0];
    for(char as : wat){
        if(as == 'C'){
            for(int k=0; k<n/2; k++){
                swap(arr[k] , arr[k+n/2]);
            }
        }else if(as == 'S'){
            for(int k=0; k<n; k++) arr2[k] = arr[k];
            for(int l=0; l<=n/2; l++){
                arr[l*2] = arr2[l];
                arr[l*2 + 1] = arr2[l + n/2];
            }
            // for(int i=0; i<n; i++) cout << arr[i] << " ";
        }
    }
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    
    
}




// for(int k=0; k<n; k++){
//     if(k < n/2){
//         for(int p=0; p<n/2; p++) arr2[p] = arr[p];
//     }else for(int p=0; p<n/2; p++) arr3[p] = arr[k];
// }

// for(int i=0; i<n; i++) cout << arr3[i] << " ";

// // for(int b=0; b<n; b++){
// //     for(int a=0; a<n/2; a++){
// //         if(b % 2 != 0){
// //             arr[b] = arr2[a];
// //         }else arr[b] = arr3[a];
// //     }
// // }