#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,point=0;
    string st;
    cin >> num;
    for(int i=0; i<=num; i++){
        getline(cin, st);

        // if(st[0] != 'R'){
        //     cout << "WRONG_INPUT" << endl;
        //     continue;
        // }else if(st.size() > 1){ 
        //     if(st[3] == 'R'){
        //     cout << "WRONG_INPUT" << endl;
        //     continue;
        //     }
        // }else if(st[st.size() - 1] == 'G'){
        //     if(st[st.size() - 2] != 'Y'){
        //         cout << "WRONG_INPUT" << endl;
        //         continue;
        //     }
        // }else if(st[st.size() - 1] == 'N'){
        //     if(st[st.size() - 2] != 'G'){
        //         cout << "WRONG_INPUT" << endl;
        //         continue;
        //     }
        // }else if(st[st.size() - 1] == 'B'){
        //     if(st[st.size() - 2] != 'N'){
        //         cout << "WRONG_INPUT" << endl;
        //         continue;
        //     }
        // }else if(st[st.size() - 1] == 'P'){
        //     if(st[st.size() - 2] != 'B'){
        //         cout << "WRONG_INPUT" << endl;
        //         continue;
        //     }
        // }else if(st[st.size() - 1] == 'K'){
        //     if(st[st.size() - 2] != 'P'){
        //         cout << "WRONG_INPUT" << endl;
        //         continue;
        //     }
        // }

        for(int j=0; j<st.size(); j++){
            if(st[j] == 'R') point += 1;
            else if(st[j] == 'Y') point += 2;
            else if(st[j] == 'G') point += 3;
            else if(st[j] == 'N') point += 4;
            else if(st[j] == 'B') point += 5;
            else if(st[j] == 'P') point += 6;
            else if(st[j] == 'K') point += 7;
            else continue;
        }
        if(point > 0){
            cout << point << endl;
            point = 0;
        }
    }
}