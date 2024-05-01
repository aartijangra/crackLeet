class Solution {
public:
    string reversePrefix(string word, char ch) {
        int place =0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                place = i;
                break;
            }
        }
        int s = 0;
        while(s < place){
            swap(word[s++], word[place--]);
        }
        return word;
        
    }
};