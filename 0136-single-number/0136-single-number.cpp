class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int allXOR = 0;
        for(int i=0; i<nums.size(); i++){
            allXOR = allXOR ^ nums[i];
        }
        return allXOR;
    }
};