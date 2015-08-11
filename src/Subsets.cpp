class Solution {
public:
    void dfs(int sta, std::vector<int> &num, std::vector<int> &now, std::vector<std::vector<int>> &res) {
        int len = num.size();
        res.push_back(now);
        for (int i = sta; i < len; i++) {
            now.push_back(num[i]);
            dfs(i+1, num, now, res);
            now.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::vector<int>    now;
        if (nums.empty())   return res;
        sort(nums.begin(), nums.end());
        dfs(0, nums, now, res);
        return res;
    }
};
