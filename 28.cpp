#include <bits/stdc++.h>
using namespace std;
int main() {
    string sen;
    while(getline(cin,sen)){
        if(sen.empty()) break;
        bool checkw = false , checkW = false , check0 = false , checka = false , checkb = false , checkc = false , checkd = false;
        bool stro = false , wea = false;
        if(sen.size()>=8){

            for(int i=0; i<sen.size(); i++){
                int w=sen[i];
                // cout<<w<<" ";
                if((w>='a' && w<='z')) checkw = true;
                if((w>='A' && w<='Z')) checkW = true;
                if((w>='0' && w<='9')) check0 = true;
                if((w>='!' && w<='/')) checka = true;
                if((w>=':' && w<='@')) checkb = true;
                if((w>='[' && w<='`')) checkc = true;
                if((w>='{' && w<='~')) checkd = true;
            }

            if(sen.size()>=12) stro = true;
            if(sen.size()>=8) wea = true;

            // for(int i=0; i<sen.size(); i++){
            //     int w=sen[i];
            //     if(w>'!' && w<'/' && w>':' && w<'@' && w>'[' && w<'`' && w>'{' && w<'~') checkS= true;
            // }
        }
        // cout<<checkW<<checkS;
        if(stro && (checka || checkb || checkc || checkd)  && check0 && checkW  && checkw) cout<<">> strong"<<endl;
        else if(wea && check0 && checkW  && checkw) cout<<">> weak"<<endl;
        else cout<<">> invalid"<<endl;
    }
    return 0;
}