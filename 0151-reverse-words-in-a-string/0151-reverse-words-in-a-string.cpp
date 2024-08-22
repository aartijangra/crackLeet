class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ans = "";
        string result = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                ans+=s[i];
            }
            else{
                if(!ans.empty()) v.push_back(ans);
                ans="";
            }
            
            
        }
        if(!ans.empty()) v.push_back(ans);
        for(int i=v.size()-1; i>=0; i--){
                result+=v[i];
                if(i!=0) result+=' ';
            }
        return result;
    }
};