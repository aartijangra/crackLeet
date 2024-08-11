class Solution {
public:
    string largestGoodInteger(string num) {   
        int n = num.length();
        string ans = ""; string current="";
        for(int i=0; i<n; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                current = num.substr(i, 3);
            }
            ans = max(current, ans);
        }
        
        return ans;
    }
};