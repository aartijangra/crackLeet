class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int diff1 = nums[j] - nums[i];
                for(int k=j+1; k<n; k++){
                    int diff2 = nums[k] - nums[j];
                    if(diff1 == diff && diff2 == diff) count++;
                }
            }
        }
        return count;
    }
};