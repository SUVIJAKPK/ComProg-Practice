#include <bits/stdc++.h>
using namespace std;

bool CheckRow(vector<vector<string>> & bingo){
    for(int i = 0; i < 5; i++){
        bool check_row = true;
        for(int j = 0; j < 5; j++){
            if(bingo[i][j] != "*"){
                check_row = false;
                break;
            }
        }
        if(check_row) return true;
    }
    return false;
}

bool CheckCol(vector<vector<string>> & bingo){
    for(int i = 0; i < 5; i++){
        bool check_col = true;
        for(int j = 0; j < 5; j++){
            if(bingo[j][i] != "*"){
                check_col = false;
                break;
            }
        }
        if(check_col) return true;
    }
    return false;
}

bool CheckX(vector<vector<string>> & bingo){
    bool check_x = true;
    for(int i = 0; i < 5; i++){
        if(bingo[i][i] != "*"){
            check_x = false;
            break;
        }
    }
    if(check_x) return true;
    return false;
}

bool CheckY(vector<vector<string>> & bingo){
    bool check_y = true;
    for(int i = 0; i < 5; i++){
        if(bingo[i][4 - i] != "*"){
            check_y = false;
            break;
        }
    }
    if(check_y) return true;
    return false;
}

int main(){
    vector<char> title;
    vector<vector<string>> bingo(5 , vector<string>(5));
    vector<vector<string>> ans(5 , vector<string>(5));
    char B , I , N , G , O;
    cin >> B >> I >> N >> G >> O;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> bingo[i][j];
            ans[i][j] = bingo[i][j];
        }
    }

    string num; int turn = 1;
    while(cin >> num){
        string ri = num.substr(0 , 1);
        string bi = num.substr(1 , num.size() - 1);

        if(ri == "B"){
            for(int i = 0; i < 5; i++){
                if(bingo[i][0] == bi){ 
                    // cout << bingo[i][0] << endl;
                    bingo[i][0] = "*";
                }
            }
        }

        if(ri == "I"){
            for(int i = 0; i < 5; i++){
                if(bingo[i][1] == bi) bingo[i][1] = "*";
            }
        }

        if(ri == "N"){
            for(int i = 0; i < 5; i++){
                if(bingo[i][2] == bi) bingo[i][2] = "*";
            }
        }

        if(ri == "G"){
            for(int i = 0; i < 5; i++){
                if(bingo[i][3] == bi) bingo[i][3] = "*";
            }
        }

        if(ri == "O"){
            for(int i = 0; i < 5; i++){
                if(bingo[i][4] == bi) bingo[i][4] = "*";
            }
        }

        if(CheckRow(bingo) || CheckCol(bingo) || CheckX(bingo) || CheckY(bingo)){
            cout << turn << endl;

            if(CheckRow(bingo)){
                int row_rr = 0 ;
                for(; row_rr < 5; row_rr++){
                    bool check_row = true;
                    for(int col_rr = 0; col_rr < 5; col_rr++){
                        if(bingo[row_rr][col_rr] != "*"){
                            check_row = false;
                            break;
                        }
                    }
                    int cols = 0;
                    if(check_row){
                        for(; cols < 5; cols++){
                            if(ans[row_rr][cols] == "*") continue;
                            if(cols == 0) cout << 'B' << ans[row_rr][cols] << ", ";
                            if(cols == 1) cout << 'I' << ans[row_rr][cols] << ", ";
                            if(cols == 2) cout << 'N' << ans[row_rr][cols] << ", ";
                            if(cols == 3) cout << 'G' << ans[row_rr][cols] << ", ";
                            if(cols == 4) cout << 'O' << ans[row_rr][cols] << endl;
                        }
                        break;
                    }
                }
            }
            
            if(CheckCol(bingo)){
                int col = 0 , rr;
                for(; col < 5; col++){
                    bool check_col = true;
                    for(int row = 0; row < 5; row++){
                        if(bingo[row][col] != "*"){
                            check_col = false;
                            break;
                        }else rr = row;
                    }
        
                    int rows = 0;
                    if(check_col){
                        for(; rows < 5; rows++){
                            if(ans[rows][col] == "*") continue;
                            if(col == 0) cout << 'B' << ans[rows][col];
                            if(col == 1) cout << 'I' << ans[rows][col];
                            if(col == 2) cout << 'N' << ans[rows][col];
                            if(col == 3) cout << 'G' << ans[rows][col];
                            if(col == 4) cout << 'O' << ans[rows][col];
                            if(rows != 4) cout << ", ";
                        }
                        cout << endl;
                        break;
                    }
                }
            }

            if(CheckX(bingo)){
                bool check_x = true;
                for(int i = 0; i < 5; i++){
                    if(bingo[i][i] != "*"){
                        check_x = false;
                        break;
                    }
                }
                if(check_x){
                    for(int i = 0; i < 5; i++){
                            if(i == 0) cout << 'B' << ans[i][i] << ", ";
                            if(i == 1) cout << 'I' << ans[i][i] << ", ";
                            if(i == 3) cout << 'G' << ans[i][i] << ", ";
                            if(i == 4) cout << 'O' << ans[i][i] << endl;
                        
                    }
                }
            }

            if(CheckY(bingo)){
                bool check_y = true;
                for(int i = 0; i < 5; i++){
                    if(bingo[i][4 - i] != "*"){
                        check_y = false;
                        break;
                    }
                }
                if(check_y){
                    for(int i = 0; i < 5; i++){
                            if(i == 0) cout << 'B' << ans[4 - i][i] << ", ";
                            if(i == 1) cout << 'I' << ans[4 - i][i] << ", ";
                            if(i == 3) cout << 'G' << ans[4 - i][i] << ", ";
                            if(i == 4) cout << 'O' << ans[4 - i][i] << endl;
                        
                    }
                }
            }
            
            break;
        }
        turn++;
    }
}