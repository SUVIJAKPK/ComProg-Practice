#include <bits/stdc++.h>
using namespace std;
    int arr[100];
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int max1 = arr[100] , nuMa1 = 100 , max2 = arr[100] , nuMa2 = 100;
    for(int i = 0; i < n; i++){
        if(arr[i] >= max1){
            // if(arr[i] == max1)
            max2 = max1;
            nuMa2 = nuMa1;
            max1 = arr[i];
            nuMa1 = i;
        }else if(arr[i] > max2 && arr[i] != max1){
                max2 = arr[i];
                nuMa2 = i;
        }
    }
    if(nuMa2 > nuMa1){swap(nuMa2 , nuMa1);}
    
    int fr = arr[100] , fr_num = 100;
    for(int i=0; i<nuMa2; i++){
        if(arr[i] > fr){
            fr = arr[i];
            fr_num = i;
        }
    }

    int se = arr[100] , se_num = 100 ;
    for(int i=nuMa1 + 1; i<n; i++){
        if(arr[i] > se){
            se = arr[i];
            se_num = i;
        }
    }


    // cout << max1 << " " << nuMa1 << " " << max2 << " " << nuMa2 << endl ;
    // cout << fr << " " << fr_num << " " << se << " " << se_num << endl;

    bool ch = false;
    int sum = 0;
    for(int i = 0; i < n; i++){
        
        // if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
        //     ch = true;
        //     int be = arr[i-1] - arr[i];
        //     int fe = arr[i+1] - arr[i];
        //     if(be > fe) sum += be;
        //     else sum += fe;

        //     // cout << "be " << be << "fe " << fe;
        // }

        if(nuMa2 < i && i < nuMa1){
            sum += max2 - arr[i];
            ch = true;
        }else if(!ch && i > fr_num && i < nuMa2){
            sum += fr - arr[i];
        }else if(!ch && i > nuMa1 && i < se_num){
            sum += se - arr[i];
        }else if((i < fr_num || i > se_num) && (arr[i] < arr[i-1] && arr[i] < arr[i+1]) && (i != n-1) && (i != 0)){
            if(arr[i-1] > arr[i+1]){
                sum += arr[i+1] - arr[i];
            }else sum += arr[i-1] - arr[i];
        }

    }

    // cout << ch ;

    // for(int i=0; i<5; i++){
    //     cout << arr[i];
    // }

    cout << sum;

    // if(!ch) cout << "0";



}

