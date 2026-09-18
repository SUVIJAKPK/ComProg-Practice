#include <bits/stdc++.h>
using namespace std;
int arr[100][100] , red[100] , blue[100];
int main(){
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            cin >> arr[i][j];
            if((i + j) % 2 == 0){
                red[i] = arr[i][j];
            }else blue[i] = arr[i][j];
        }
    }
    // for(int i=0; i<n; i++){ cout << red[i] << " "; }
    // cout << endl;
    // for(int i=0; i<n; i++){ cout << blue[i] << " "; }

    string st; cin >> st; 
    if(st == "Zig-Zag"){
        int min = *min_element(red , red + n);
        int max = *max_element(blue , blue + n);
        cout << min << " " << max;
    }else if(st == "Zag-Zig"){
        int min = *min_element(blue , blue + n);
        int max = *max_element(red , red + n);
        cout << min << " " << max;
    }

}