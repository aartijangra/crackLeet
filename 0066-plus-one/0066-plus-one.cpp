// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         for(int i = n-1; i>=0; i--){
//             if(i == n-1){
//                 digits[i]++;
//             }
//             if(digits[i] == 10){
//                 digits[i] = 0;
//                 if(i != 10){
//                     digits[i-1]++;
//                 }
//                 else{
//                     digits.push_back(0);
//                     digits[i] = 1;
//                 }
//             }
            
//         }
//         return digits;
//     }
// };
class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                v[i]++;
            if(v[i] == 10){
                v[i] = 0;
                if(i != 0){
                    v[i-1]++;
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};