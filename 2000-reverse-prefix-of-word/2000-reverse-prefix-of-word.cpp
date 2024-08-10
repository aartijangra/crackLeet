class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        int pos = word.find(ch);
        int e = pos;
        int n = word.length();
        
        if(pos == string::npos) return word;
        else{
        for(int i=0; i<e; i++){
            swap(word[i], word[e]);
            e--;
        }
            return word;
        }
        return word;
    }
};