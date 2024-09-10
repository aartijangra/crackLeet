class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         sort(strs.begin(), strs.end());
        
        int n = strs.size();
        string result="";
       
        string f = strs[0];
        string l = strs[n-1];
        for(int i=0; i<f.size(); i++){
            if(f[i]!=l[i]) break;
            result+=f[i];
        }
        return result;
    }
};