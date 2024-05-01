class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int val = 0;
        for(int i=0; i<n; i++){
            if(word[i] == ch){
                val =i;
                break;
            }
        }
        int s = 0;
        while(s<val){
            swap(word[s++], word[val--]);
        }
       return word; 
    }
};