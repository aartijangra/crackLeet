class Solution {
public:
    // time/space: O(n ^ 2)/O(n ^ 2)
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n2 = grid.size() * grid.size();
        unordered_set<int> seen;

        // find the duplicate integer `a`
        int a;
        for (auto it : grid) {
            for (auto it2 : it) {
                if (seen.count(it2) != 0) a = it2;
                seen.insert(it2);
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