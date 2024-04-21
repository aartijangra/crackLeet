class Solution {
public:
    // time/space: O(n ^ 2)/O(n ^ 2)
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n2 = grid.size() * grid.size();
        unordered_set<int> seen;

        // find the duplicate integer `repeat`
        int repeat;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (seen.count(grid[i][j]) != 0) 
                    repeat = grid[i][j];
                seen.insert(grid[i][j]);
            }
        }
        
        // find the missing integer `miss`
        int miss;
        for (int num = 1; num <= n2; num++) {
            if (seen.count(num) == 0) 
                miss = num;
        }
        
        return {repeat, miss};
    }
};
