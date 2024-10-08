class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(int row, int col, vector<string>& temp, int n){
        for(int i=row-1; i>=0; i--){
            if(temp[i][col] == 'Q') return false;
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(temp[i][j] == 'Q') return false;
        }
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
            if(temp[i][j] == 'Q') return false;
        }
        return true;
    }
    void solve(int n, vector<string>& temp, int row){
        if(row == n){
            ans.push_back(temp);
            return;    
        }
        for(int col=0; col<n; col++){
            if(isSafe(row, col, temp, n)){
                temp[row][col] = 'Q';
                solve(n, temp, row+1);
                temp[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n, string(n, '.'));
        solve(n, temp, 0);
        return ans;
    }
};