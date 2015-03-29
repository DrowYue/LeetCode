class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if (!triangle.size())   return 0;
        vector<int> t(triangle.size(), INT_MAX);
        t[0] = triangle[0][0];
        for (int i = 1; i < triangle.size(); i++) {
            for (int j = triangle[i].size() - 1; j > 0; j--)
                t[j] = triangle[i][j] + min(t[j], t[j-1]);
            t[0] += triangle[i][0];
        }
        int res = INT_MAX;
        for (int i = 0; i < triangle.size(); i++)
            res = min(res, t[i]);
        return res;
    }
};