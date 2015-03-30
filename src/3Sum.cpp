class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        int n = num.size();
        vector<vector<int>> res;
        if (n < 3)  return res;
        sort(num.begin(), num.end());
        for (int i = 0; i < n; i++) {
            int t = -num[i];
            for (int j = i + 1, k = n - 1; j < k;) {
                if (num[j] + num[k] == t) {
                    vector<int> v = {num[i], num[j], num[k]};
                    res.push_back(v);
                    while (j < k && num[j] == v[1]) j++;
                    while (j < k && num[k] == v[2]) k--;
                    v.clear();
                }
                else if (num[j] + num[k] < t) 
                    j++;
                else
                    k--;
            }
            while (i + 1 < n && num[i] == num[i+1]) i++;
        }
        return res;
    }
};