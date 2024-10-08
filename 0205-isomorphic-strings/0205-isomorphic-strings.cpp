class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> indexs(200,0);
        vector<int> indext(200,0);
        
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++){
            if(indexs[s[i]] != indext[t[i]]) return false;
            
            indexs[s[i]] = i+1;
            indext[t[i]] = i+1;
        }
        return true;
    }
};