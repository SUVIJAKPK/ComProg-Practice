#include <bits/stdc++.h>
using namespace std;
double arr[100];
int main(){
    int num;
    cin >> num;
    for(int i=0; i<num; i++) cin >> arr[i];

    for(int i=0; i<num; i++){
        double som = arr[i];
        for(int j=i-1; j>=0; j--){
            som = arr[j] + (1.0/som);
        }
        cout << setprecision(10) << som << endl;
    }
    
}