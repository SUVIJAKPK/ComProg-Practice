#include <bits/stdc++.h>
using namespace std;
int arr[100][100] , ni[100];
int main(){
    int n; cin >> n;
    int io=0 , zero=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            ni[io] = arr[i][j];
            if(ni[io] == 0) zero = i+1; 
            io++;
        }
    }

    int sum = 0;
    for(int i=0; i<io; i++){
        for(int j=i; j<io; j++){
            if(ni[i] > ni[j] && ni[i] != 0 && ni[j] != 0){
                sum++;
            }
        }
    }
    // cout << sum << endl;
    // cout << zero << endl;

    bool evenn = false; if(n % 2 == 0) evenn = true;
    bool evensum = false; if(sum % 2 == 0) evensum = true;
    bool evenzero = false; if(zero % 2 == 0) evenzero = true;

    if(!evenn && evensum) cout << "YES";
    else if(evenn && evensum && evenzero) cout << "YES";
    else if(evenn && !evensum && !evenzero) cout << "YES";
    else cout << "NO";

}