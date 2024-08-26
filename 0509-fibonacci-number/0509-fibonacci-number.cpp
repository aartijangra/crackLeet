class Solution {
public:
    int fib(int n) {
        //recursion
//         if(n<=1) return n;
//         return fib(n-1)+fib(n-2);
        
        //memoization
//         if(n<=1) return n;
//         vector<int> dp(n+1, -1);
        
//         if(dp[n] != -1) return dp[n];
        
//         return dp[n] = fib(n-1) + fib(n-2);
        
        //tabulation
        vector<int> dp(n+1);
        if(n<=1) return n;
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};