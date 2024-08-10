class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l=0; int r=0; int maxlen=0;
        unordered_set<int> st;
        for(int r=0; r<n; r++){
            if(st.find(s[r]) != st.end()){
                while(l<r && st.find(s[r]) != st.end()){
                  st.erase(s[l]);
                  l++;  
                }
                
            }
            st.insert(s[r]);
            maxlen = max(maxlen, r-l+1);
        }
        return maxlen;
    }
};