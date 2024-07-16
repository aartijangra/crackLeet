//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void sumfunc(int ind, int sum, vector<int>& arr, int n, vector<int>& result){
      if(ind == n){    //base case
          result.push_back(sum);
          return;
      }
      //pick
      sumfunc(ind+1, sum+arr[ind], arr, n, result);
      //not pick
      sumfunc(ind+1, sum, arr, n, result);
  }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> result;
        sumfunc(0,0,arr,n,result);
        // sort(result.begin(), result.end());
        return result;
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