class Solution {
public:
    void dfs(vector<string> &v, int n, int a, int b, string s) {
        if (s.size() == n * 2) {
            v.push_back(s);
            return ;
        }
        if (a < n)  dfs(v, n, a+1, b, s+"(");
        if (b < a)  dfs(v, n, a, b+1, s+")");
    }

    vector<string> generateParenthesis(int n) {
        vector<string> v;
        dfs(v, n, 0, 0, "");
        return v;
    }
};