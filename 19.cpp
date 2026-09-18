#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,dd,mm,yy,ans=0;
    bool leap1 = false,leap2 = false;
    cin >> d >> m >> y;
    cin >> dd >> mm >> yy;

    y-=543;
    yy-=543;

    if((y%4==0 && y%100!=0) || (y%400 == 0))leap1 = true;
    if((yy%4==0 && yy%100!=0) || (yy%400 == 0))leap2 = true;

    int diff_y = yy-y-1;
    ans += diff_y*365;

    if(m <= 1)ans+=31;
    if(m <= 2)ans+=28;
    if(m <= 3)ans+=31;
    if(m <= 4)ans+=30;
    if(m <= 5)ans+=31;
    if(m <= 6)ans+=30;
    if(m <= 7)ans+=31;
    if(m <= 8)ans+=31;
    if(m <= 9)ans+=30;
    if(m <= 10)ans+=31;
    if(m <= 11)ans+=30;
    if(m <= 12)ans+=31;
    if(m<=2 && leap1)ans++;
    ans-=d;

    if(mm > 1)ans+=31;
    if(mm > 2)ans+=28;
    if(mm > 3)ans+=31;
    if(mm > 4)ans+=30;
    if(mm > 5)ans+=31;
    if(mm > 6)ans+=30;
    if(mm > 7)ans+=31;
    if(mm > 8)ans+=31;
    if(mm > 9)ans+=30;
    if(mm > 10)ans+=31;
    if(mm > 11)ans+=30;
    if(mm > 12)ans+=31;
    if(mm>=2 && leap2)ans++;
    ans+=dd;
    
    double PI = M_PI;
    double tmp = 2*PI*ans;

    double physical = round(sin(tmp/23)*100.0)/100.0;
    double emotional = round(sin(tmp/28)*100.0)/100.0;
    double intellectual = round(sin(tmp/33)*100.0)/100.0;


    cout << ans << " " << physical << " " << emotional << " " << intellectual;
}