class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int m = n*(n+1)/2;
        int ans = m-sum;
        return ans;
    }
};