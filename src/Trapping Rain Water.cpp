class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() < 3)  return 0;
        int res = 0, m = -1, pos, now = -1;
        for (int i = 0; i < height.size(); i++) 
            if (height[i] > m) {
                pos = i;
                m = height[i];
            }
        now = height[0];
        for (int i = 1; i < pos; i++) {
            if (height[i] < now) res += (now - height[i]);
            if (height[i] > now) now = height[i];
        }
        now = height[height.size()-1];
        for (int i = height.size() - 2; i > pos; i--) {
            if (height[i] < now) res += (now - height[i]);
            if (height[i] > now) now = height[i];
        }
        return res;
    }
};
