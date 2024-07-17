class Solution {
public:
    void func(int ind, vector<int>& candidates, int target, vector<int>& ds, vector<vector<int>>& ans ){
        
        if(ind == candidates.size()){
            if(target == 0) ans.push_back(ds);
            return;
        }
        
        //pick element
        if(candidates[ind] <= target){
            ds.push_back(candidates[ind]);
            func(ind, candidates, target-candidates[ind], ds, ans);
            ds.pop_back();
        }
        
        //not picking ele
        func(ind+1, candidates, target, ds, ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        func(0,candidates,target,ds,ans);
        return ans;
    }
};