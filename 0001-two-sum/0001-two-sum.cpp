class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int,int> mpp;
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

//        class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> map;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int k = target - nums[i];
//             if (map.count(k)) {
//                 return {map[k], i};
//             }
//             map[nums[i]] = i;
//         }
//         return {};
//     }
// };