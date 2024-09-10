class Solution {
public:
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
        
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen = 0;
        int start_ind = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(check(s,i,j)){
                    if(j-i+1 > maxlen){
                        maxlen = j-i+1;
                        start_ind = i;
                    }
                }
            }
        }
        return s.substr(start_ind, maxlen);
    }
};