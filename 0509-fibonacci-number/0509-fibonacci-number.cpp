class Solution {
public:
    int fib(int n) {
        //recursion
//         if(n<=1) return n;
//         return fib(n-1)+fib(n-2);
        
        //memoization
        if(n<=1) return n;
        vector<int> dp(n+1, -1);
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = fib(n-1) + fib(n-2);
        
    }
};