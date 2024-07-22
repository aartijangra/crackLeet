class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, char k){
        for(int i=0; i<9; i++){
            if(board[row][i] == k) return false;
            if(board[i][col] == k) return false;
            
        }
        int sr = (row/3)*3;
        int sc = (col/3)*3;
        for(int i=sr; i<sr+3; i++){
            for(int j=sc; j<sc+3; j++){
                if(board[i][j] == k) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    for(char k='1'; k<='9'; k++){
                        if(isSafe(i, j, board, k)){
                            board[i][j] = k;
                            if(solve(board)) return true;
                            board[i][j] = '.';
                        }  
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};