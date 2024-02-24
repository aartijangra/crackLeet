class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> res;
        for(int i=0; i<n; i++){
            int k = target - nums[i];
            for(int j=i+1; j<n; j++){
                if(nums[j] == k){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
      return res;  
    }
};