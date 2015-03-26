class Solution {
public:
    int maxArea(vector<int> &height) {
        int lp = 0, rp = height.size() - 1, res = -1;
        while (lp < rp) {
            res = max(res, (rp - lp) * min(height[lp], height[rp]));
            if (height[lp] < height[rp])    lp++;
            else                            rp--;
        }
        return res;
    }
};