class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for(int i=n-1; i>=0; i--){
            if(num[i]%2 == 0){
                num.pop_back();
            }
            else{
                return num;
            }
        }
        return num;
    }
};