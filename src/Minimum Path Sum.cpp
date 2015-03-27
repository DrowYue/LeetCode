class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        vector<vector<int> > dp(grid.size());
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                dp[i].push_back(0);
        dp[0][0] = grid[0][0];
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                int x = i - 1, y = j - 1;
                if (x >= 0 && y >= 0)   dp[i][j] = min(dp[x][j], dp[i][y]) + grid[i][j];
                else if (x < 0)         dp[i][j] = dp[i][y] + grid[i][j];
                else if (y < 0)         dp[i][j] = dp[x][j] + grid[i][j];
            }
        }
        return dp[grid.size() - 1][grid[0].size() - 1];
    }
};