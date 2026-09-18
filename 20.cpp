#include <bits/stdc++.h>
using namespace std;
int main(){
    // int a,b,c,d,e,temp=0;
    // cin>>a;
    // cin>>b;
    // cin>>c;
    // cin>>d;
    // cin>>e;
    // if(a>b){
    //     temp=a; a=b; b=temp; //max b
    // }
    // if(c>d){
    //     temp=c; c=d; d=temp; //max d
    // }
    // if(a>c){
    //     temp=a; a=c; c=temp; //max c
    // }
    // if(b>d){
    //     temp=b; b=d; d=temp; //max d
    // }
    // if(c>b){
    //     temp=c; c=b; b=temp; //max d
    // }
    // // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    // // a=e;
    // // if(a>b){
    // //     temp=a; a=b; b=temp; 
    // // }
    // // if(c>a){
    // //     b=temp; b=d; d=temp;
    // //     a=c;
    // // }
    // // if(a>d){
    // //     cout << d;
    // // }else cout << a;
    // if((e>a && e>c) && (e<d && e<b)) cout << e;
    // else if(e<c) cout << c;
    // else if(e>b) cout << b;
    int nums[5];
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + 5);
    cout << nums[2];

}