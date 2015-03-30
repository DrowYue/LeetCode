class Solution {
public:
    vector<int> grayCode(int n) {
        if (!n) return {0};
        int k = 1 << 1;
        vector<int> res = {0, 1};
        for (int i = 1; i < n; i++) {
            for (int j = res.size() - 1; j >= 0; j--) {
                res.push_back(k + res[j]);
            }
            k = k << 1;
        }
        return res;
    }
};