class Solution {
public:
    // time/space: O(n ^ 2)/O(n ^ 2)
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n2 = grid.size() * grid.size();
        unordered_set<int> seen;

        // find the duplicate integer `a`
        int a;
        for (auto& row : grid) {
            for (auto& num : row) {
                if (seen.count(num) != 0) a = num;
                seen.insert(num);
            }
        }
        
        // find the missing integer `b`
        int b;
        for (int num = 1; num <= n2; num++) {
            if (seen.count(num) == 0) b = num;
        }
        
        return {a, b};
    }
};