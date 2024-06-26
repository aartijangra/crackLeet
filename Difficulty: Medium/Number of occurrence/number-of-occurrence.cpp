//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int first(int nums[], int n, int target){
	    int low = 0;
	    int high = n-1;
	    int first = -1;
	    while(low<=high){
	        int mid = low+(high-low)/2;
	        if(nums[mid] == target){
	            first = mid;
	            high = mid-1;
	        }
	        else if(nums[mid] > target) 
	        high = mid-1;
	        else 
	        low = mid+1;
	    }
	    return first;
	}
	int last(int nums[], int n, int target){
	    int low = 0;
	    int high = n-1;
	    int last = -1;
	    while(low<=high){
	        int mid = low+(high-low)/2;
	        if(nums[mid] == target){
	            last = mid;
	            low = mid+1;
	        }
	        else if(nums[mid] > target) high = mid-1;
	        else low = mid+1;
	    }
	    return last;
	}
	
	int count(int arr[], int n, int x) {
	    int one = first(arr,n,x);
	    if(one == -1) return 0;
	    int two = last(arr,n,x);
	    return two-one+1;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends