class Solution {

public:

    int maximalSquare(vector<vector<char>>& matrix) {

        int n = matrix.size();

        if (n == 0) return 0;

        int m = matrix[0].size();

        std::vector<std::vector<int>> dp(n, std::vector<int>(m, 0));

        int max = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == '1') {

                    if (i > 0 && j > 0) {

                        dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + 1;

                    }

                    else dp[i][j] = 1;

                    if (dp[i][j] > max) max = dp[i][j];

                }

            }

        }

        return max*max;

    }

};
