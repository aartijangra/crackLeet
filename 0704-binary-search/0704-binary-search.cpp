class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = low + (high-low)/2; 
            if(nums[mid] == target) return mid; 
            else if(target > nums[mid]) low=mid+1;
            else high = mid-1;
        }
        return -1;
    }
};

// class Solution {
// public:
// 	int search(vector<int>& nums, int target) {
// 		int i=0, j=nums.size()-1, pos=-1;
// 		while(i<=j){
// 			int mid=i+(j-i)/2;
// 			if(nums[mid]==target){pos=mid; break;}
// 			else if(nums[mid]>target){j=mid-1;}
// 			else{i=mid+1;}
// 		}
// 		return pos;
// 	}
// };