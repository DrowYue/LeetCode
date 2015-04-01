class Solution {
public:
    void dfs(vector<int> &num, int s, int e, vector<vector<int> > &res) {
        if (s == e) {
            res.push_back(num);
            return ;
        }
        for (int i = s; i <= e; i++) {
            swap(num[s], num[i]);
            dfs(num, s + 1, e, res);
            swap(num[s], num[i]);
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > res;
        dfs(num, 0, num.size() - 1, res);
        return res;
    }
};
