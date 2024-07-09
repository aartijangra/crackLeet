class Solution {
public:
    int fun(vector<int>& nums, int k){
        int l=0; int r=0; int n = nums.size();
        int sum = 0; int count = 0;
        while(r<n){
            sum+=nums[r] % 2 == 0 ? 0 : 1;
            
            while( l<=r && sum>k){
                sum-=nums[l] % 2 == 0 ? 0 : 1;
                l++;
            }
            count = count+(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return fun(nums,k)-fun(nums,k-1);
    }
};