class Solution {
public:
    int fun(vector<int>& nums, int goal){
        int l=0; int r=0; int count=0; int n = nums.size(); int sum=0;
        while(r<n){
            sum+=nums[r];
            
            while(l<=r && sum>goal){
                sum-=nums[l];
                l++;
            }
            
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return fun(nums,goal) - fun(nums,goal-1);
    }
};