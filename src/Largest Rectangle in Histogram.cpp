class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        height.push_back(0);
        std::stack<int> s;
        int res = 0;
        for (int i = 0; i < height.size(); i++) {
            if (!s.empty() && height[i] < height[s.top()]) {
                int tmp = s.top();  s.pop();
                res = max(res, height[tmp] * ((s.empty() ? tmp + 1 : tmp - s.top()) + i - tmp - 1));
                i--;
            }
            else    s.push(i);
        }
        return res;
    }
};
