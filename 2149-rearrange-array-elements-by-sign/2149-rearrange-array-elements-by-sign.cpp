class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posind=0; int negind=1;
        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            if(nums[i] > 0) 
            {
                ans[posind] = nums[i];
                posind+=2;
            
            }
        else if(nums[i] < 0)
        {
            ans[negind] = nums[i];
            negind+=2;
            }
        }
return ans;
    }
};