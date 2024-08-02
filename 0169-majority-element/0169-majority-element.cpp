class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moores voting algo
        int n = nums.size();
        int cnt=0;
        int el = 0;
        for(int i=0; i<n; i++){
            if(cnt == 0){
                cnt++;
                el = nums[i];
            }
            else if(el == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0; i<n; i++){
            if(nums[i] == el) cnt1++;
        }
        if(cnt1 > n/2) return el;
        else return -1;
    }
};