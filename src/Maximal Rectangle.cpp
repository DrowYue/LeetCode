class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r = matrix.size();  if (!r) return 0;
        int c = matrix[0].size(), res = 0, tmp = 0;
        std::vector<int> height(c, 0);
        std::stack<int> s;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) matrix[i][j] == '1' ? ++height[j] : height[j] = 0;
            while (!s.empty())  s.pop();
            height.push_back(0);
            for (int j = 0; j < c + 1; j++) {
                if (!s.empty() && height[j] < height[s.top()]) {
                    tmp = s.top();  s.pop();
                    res = max(res, height[tmp] * ((s.empty() ? tmp + 1 : tmp - s.top()) + j - tmp - 1));
                    j--;
                }
                else    s.push(j);
            }
        }
        return res;
    }
};
