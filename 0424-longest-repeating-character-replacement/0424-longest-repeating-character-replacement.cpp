class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, n=s.size(), maxi=0, maxlen=0;
        unordered_map<char,int> mp;
        
        while(r<n){
            mp[s[r]]++;
            maxi = max(maxi, mp[s[r]]);
            
            while((r-l+1)-maxi > k){
                mp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};