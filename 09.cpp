#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string bc=b+c;
    int numc=0,numb=0;
    numc=pow(10,c.length())-1;
    numb=pow(10,b.length());
    int numbc=numc*numb;

    // cout << numc<< endl <<c.length()<< endl << c;
    // double ans=((bc-'0')-(b-'0'))/numbc;
    // cout <<numc<<endl<< numbc << endl;
    int up = (numbc*stoi(a))+(stoi(bc)-stoi(b));
    int low = numbc;
    int g = gcd(up,low);
    // cout << up << " " << low << endl;
    cout << up/g << " / " << low/g;
    return 0;
}