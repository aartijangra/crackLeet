//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  vector<string> ans;
  void solve(int i, int j, vector<vector<int>>& mat, string str , vector<vector<int>>&visited){
      int m = mat.size();
      int n = mat[0].size();  //col size
      if(i==m-1 && j==n-1){
          ans.push_back(str);
          return;
      }
      visited[i][j] = 1;
      if(i+1<n && mat[i+1][j]==1 && !visited[i+1][j]){
          solve(i+1, j, mat, str+'D', visited);
      }
      if(i-1>=0 && mat[i-1][j]==1 && !visited[i-1][j]){
          solve(i-1, j, mat, str+'U', visited);
      }
      if(j-1>=0 && mat[i][j-1]==1 && !visited[i][j-1]){
          solve(i, j-1, mat, str+'L', visited);
      }
      if(j+1<n && mat[i][j+1]==1 && !visited[i][j+1]){
          solve(i, j+1, mat, str+'R', visited);
      }
      visited[i][j]=0;
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        string str;
        int m = mat.size();
        int n = mat[0].size();  //col size
        vector<vector<int>> visited (m , vector<int>(n, 0));
        if(mat[0][0] == 1){
            solve(0 , 0 ,mat ,str ,  visited);
        }
        return ans;
    }                                                                                      
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends