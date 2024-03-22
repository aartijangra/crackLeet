class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //finding dip index
        int ind = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }
        
        //edge case
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            
        }
        
        
        //swap and then reverse remaining array
        else{
        for(int i=n-1; i>=ind; i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
        
        }
        
    }
};