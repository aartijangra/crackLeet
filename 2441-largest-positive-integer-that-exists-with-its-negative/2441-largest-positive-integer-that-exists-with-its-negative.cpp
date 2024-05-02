class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int res = -1;
        for(int it : st){
            if(st.find(-it) != st.end()){
                res = max(res, it);
            }
        }
        return res;
    }
};