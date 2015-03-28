class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        int res = -1;
        unordered_map<int, int> m;
        for (auto i : num) {
            if (!m[i]) 
                res = max(res, m[i+m[i+1]] = m[i-m[i-1]] = m[i] = m[i-1] + m[i+1] + 1);
        }
        return res;
    }
};