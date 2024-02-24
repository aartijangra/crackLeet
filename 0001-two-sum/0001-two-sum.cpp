class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            int a = nums[i];
            int k = target - a;
            if(mpp.find(k) != mpp.end()){
                return {mpp[k],i};
            }
            mpp[a] = i;
        }
       return {};
       } 
    };

