class Solution {
public:
    string reverse(string word, int pos){
        int s = 0;
        int e = pos;
        while(s<=e){
            swap(word[s++] , word[e--]);
        }
        return word;
    }
    
    string reversePrefix(string word, char ch) {
        int pos = word.find(ch);
        if(pos == string::npos) return word;
        else return reverse(word, pos);
    }
};