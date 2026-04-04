class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> mp;
        int maxKey = 0;

        // Step 1: group elements by diagonal (i + j)
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                mp[i + j].push_back(nums[i][j]);
                maxKey = max(maxKey, i + j);
            }
        }

        vector<int> res;

        // Step 2: traverse diagonals
        for (int d = 0; d <= maxKey; d++) {
            // reverse order (important)
            for (int k = mp[d].size() - 1; k >= 0; k--) {
                res.push_back(mp[d][k]);
            }
        }

        return res;
    }
};
