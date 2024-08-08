class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = word.find(ch);
        int e = pos;
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