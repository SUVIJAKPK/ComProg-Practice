#include <bits/stdc++.h>
using namespace std;
int main(){
    int day,mon,year;
    cin>>day;
    cin>>mon;
    cin>>year;
    year-=543;
    bool feb=(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    // if((year%4==0 && year%100!=0)|| (year%400==0)){
    //     feb = true;
    // }
    int sum=0;
    if(mon>=2) sum+=31; //jan
    if(mon>=3 && feb) sum+=29; //feb29
    if(mon>=3 && !feb) sum+=28; //feb28
    if(mon>=4) sum+=31; //mar
    if(mon>=5) sum+=30; //apil
    if(mon>=6) sum+=31; //may
    if(mon>=7) sum+=30; //june
    if(mon>=8) sum+=31; //july
    if(mon>=9) sum+=31; //aug
    if(mon>=10) sum+=30; //sep
    if(mon>=11) sum+=31; //oct
    if(mon>=12) sum+=30; //Nov
    // int sum=0;
    // int monthDay[]={31, feb ? 29:28 ,31,30,31,30,31,31,30,31,30};
    // for(int i=0; i+1<mon; i++){
    //     sum += monthDay[i];
    // }
    cout << sum+day;
}