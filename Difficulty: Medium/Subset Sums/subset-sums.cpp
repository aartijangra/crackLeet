//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sumfun(int ind, vector<int>& arr, int sum, int n, vector<int>& ans){
        if(ind==n){
            ans.push_back(sum);
            return;
        }
        sumfun(ind+1, arr, sum+arr[ind], n, ans);
        sumfun(ind+1, arr, sum, n, ans);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        sumfun(0, arr, 0, n, ans);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends