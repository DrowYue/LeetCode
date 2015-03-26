class Solution {
public:
    bool isValid(const vector<int> &v, int p, int q) {
        for (int i = 0; i < p; i++) {
            if (v[i] == q || (p-i == q-v[i]) || (p-i == v[i]-q))
                return false;
        }
        return true;
    }

    int dfs(vector<int> &v, int p) {
        int n = v.size(), res = 0;
        if (n == p) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (isValid(v, p, i)) {
                v[p] = i;
                res += dfs(v, p+1);
            }
        }
        return res;
    }

    int totalNQueens(int n) {
        vector<int> v(n, 0);
        return dfs(v, 0);
    }
};
