class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int allXOR1 = 0;
        int allXOR2 = 0;
        for(int i=1; i<=n; i++){
            allXOR1 = allXOR1 ^ i;
        }
        for(int i=0; i<n; i++){
            allXOR2 = allXOR2 ^ nums[i];
        }
        int ans = allXOR1 ^ allXOR2;
        return ans;
    }
};