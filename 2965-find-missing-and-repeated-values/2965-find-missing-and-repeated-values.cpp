class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_set <int> st;
        int n2 = grid.size() * grid.size();
        int a=-1; int b=-1;
        
        for(auto it : grid){
            for(auto it2 : it){
                if(st.count(it2) != 0) a=it2;
                st.insert(it2);
            }
        }
        
        for(int i = 1; i<=n2; i++){
            if(st.count(i) == 0) b=i;
        }
        
        return {a,b};
        
    }
};