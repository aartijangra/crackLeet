class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        int i=0; 
        string ans="";
        while(i<n){
            if(ans.length()>0 && ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};