class Solution {
public:
    void func(int ind, vector<int>& candidates, int target, vector<int>& ds, vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(ds);
            return;    //to stop the infinite loop --- to stop the condition
        }
        for(int i=ind; i<candidates.size(); i++){
            if(candidates[i] > target) break;
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            ds.push_back(candidates[i]);
            func(i+1, candidates, target-candidates[i], ds, ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        func(0,candidates,target,ds,ans);
        return ans;
    }
};