#include <bits/stdc++.h>
using namespace std;
int main() {
    int h;
    cin >> h;

    for (int i=0; i < h; i++) {
        int spaces = h - i - 1;
        int poin = 2 * i - 1;

        for (int j = 0; j < spaces; j++)
            cout << '.';

        cout << '*';

        if(i!=h-1){
        for (int j = 0; j < poin; j++)
            cout << '.';
        }else{
            for (int j = 0; j < poin; j++)
            cout << '*';
        }

        if(i!=0){
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}