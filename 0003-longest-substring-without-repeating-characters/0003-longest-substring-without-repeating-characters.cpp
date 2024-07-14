class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0; int r=0;
        int n= s.size();
        int maxlen = 0;
        set<char> st;
        while(r<n){
            
            
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
                
            }
            st.insert(s[r]);
            maxlen=max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};