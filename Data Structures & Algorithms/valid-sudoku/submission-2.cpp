class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<int>v1(10,0);
            vector<int>v2(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j] != '.') {
                    v1[board[i][j]-'0']++;
                    if(v1[board[i][j]-'0']>1)return false;
                }
                if(board[j][i] != '.') {
                    v2[board[j][i]-'0']++;
                    if(v2[board[j][i]-'0']>1)return false;
                }
            }
        }
        for(int k=1;k<=3;k++){
            for(int l=1;l<=3;l++){
                vector<int>v3(10,0);
                for(int i=k*3-3;i<k*3;i++){
                    for(int j=l*3-3;j<l*3;j++){
                        if(board[i][j] != '.') {
                            v3[board[i][j]-'0']++;
                            if(v3[board[i][j]-'0']>1)return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
