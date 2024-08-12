class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s==t) return true;
        // return false;
        
        unordered_map<char,int> mpp;
        for(auto x: s){
            mpp[x]++;
        }
        for(auto x: t){
            mpp[x]--;
        }
        for(auto it: mpp){
            if(it.second != 0) return false;
        }
        return true;
    }
};