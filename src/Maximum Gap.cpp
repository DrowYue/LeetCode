class Solution {
public:
    int cal(vector<int> &num) {
        int res = -1;
        for (auto it = num.cbegin(); it != num.cend(); it++) {
            int t = *it, d = 0;
            while (t) {
                t /= 10;
                d++;
            }
            if (d > res)    res = d;
        }
        return res;
    }
    int maximumGap(vector<int> &num) {
        int cnt[10], d = cal(num), radix = 1, n = num.size(), res = 0;
        vector<int> tmp(n);
        for (int i = 0; i < d; i++) {
            for (int j = 0; j < 10; j++)
                cnt[j] = 0;
            for (int j = 0; j < n; j++)
                cnt[(num[j] / radix) % 10]++;
            for (int j = 1; j < 10; j++) 
                cnt[j] += cnt[j-1];
            for (int j = n-1; j >=0; j--)
                tmp[--cnt[(num[j] / radix) % 10]] = num[j];
            num = tmp;
            radix *= 10;
        }
        for (int i = 1; i < n; i++)
            res = max(res, num[i] - num[i-1]);
        return res;
    }
};