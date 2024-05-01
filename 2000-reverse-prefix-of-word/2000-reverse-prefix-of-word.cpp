class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int pos = -1;
        for(int i=0; i<n; i++){
            if(word[i] == ch){
                pos = i;
                break;
            }
        }
        int s =0;
        while(pos>s){
            swap(word[s++] , word[pos--]);
        }
       return word; 
    }
};