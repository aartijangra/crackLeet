class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        set <int> st;
        for(auto it : matrix){
            for(auto it2 : it){
                st.insert(it2);
            }
        }
        if(st.find(target) != st.end())
        return true;
        else return false;
    }
};