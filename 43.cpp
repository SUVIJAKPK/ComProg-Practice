#include <bits/stdc++.h>
using namespace std;
int arr[100];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    int max=0;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]) max = i;
    }
    
    for(int i=0; i<max/2; i++){
        swap(arr[i] , arr[max-i]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i];
    }
}