class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int l = 0, r = n-1;
        
        while(l < r && nums[l] != -nums[r]){
            if(-nums[l] > nums[r]) l++;
            else r--;
        }
        return (l<r) ? nums[r] : -1;
    }
};