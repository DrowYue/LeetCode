class Solution {
public:
    int rob(vector<int> &num) {
        if (!num.size())            return 0;
        else if (num.size() == 1)   return num[0];
        int res = max(num[0], num[1]);
        vector<int> dp = {num[0], num[1]};
        for (int i = 2; i < num.size(); i++) {
            if (i >= 3)         dp.push_back(num[i] + max(dp[i-2], dp[i-3]));
            else if (i == 2)    dp.push_back(num[i] + num[0]);
            res = max(res, dp[i]);
        }
        return res;
    }
};
