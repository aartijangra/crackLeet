class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // vector<int> ans;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp){
        //     if(it.second > n/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;
        vector<int> ans;
        int n = nums.size();
        int cnt1=0, cnt2=0;
        int el1=0, el2=0;
        int c1=0, c2=0;
        for(int i=0; i<n; i++){
            if(cnt1==0 && el2!=nums[i]){
                cnt1++;
                el1=nums[i];
            }
            else if(cnt2==0 && el1!=nums[i]){
                cnt2++;
                el2=nums[i];
            }
            else if(el1==nums[i]){
                cnt1++;
            }
            else if(el2==nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] == el1) c1++;
            else if(nums[i] == el2) c2++;
        }
        if(c1 > n/3) ans.push_back(el1);
        if(c2 > n/3) ans.push_back(el2);
        return ans;
    }
};