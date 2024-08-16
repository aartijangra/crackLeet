class Solution {
public:
    bool rotateString(string s, string goal) {
        // int n = s.size();
        // for(int i=0; i<n; i++){
        //     s+=s[i];
        //     string sub = s.substr(i+1, n+1);
        //     if(sub==goal) return true;
        // }
        // return false;
        
        if(s.size() != goal.size()) return false;
        
        string concatenated = goal+goal;
        int n = s.size();
        int m = concatenated.size();
        int i=0; int j=0;
        while(i<m){
            if(concatenated[i] == s[j]){
                j++;
                i++;
                if(j==n) return true;
            }
            else{
                if(j!=0){
                    i=i-j+1;
                    j=0;
                }
                else{
                    i++;
                }
            }
        }
        return false;
    }
};