class Solution {
public:
    int maximumGap(vector<int> &num) {
        if (num.size() < 2)     return 0;
        int n = num.size();
        int maxNum = *max_element(num.cbegin(), num.cend());
        int minNum = *min_element(num.cbegin(), num.cend());
        int bucketGap = max(1, (maxNum - minNum) / (n - 1));
        int bucketNum = (maxNum - minNum) / bucketGap + 1;
        vector<int> bucketMax(bucketNum, INT_MIN), bucketMin(bucketNum, INT_MAX);
        for (int i = 0; i < n; i++) {
            int loc = (num[i] - minNum) / bucketGap;
            bucketMax[loc] = max(bucketMax[loc], num[i]);
            bucketMin[loc] = min(bucketMin[loc], num[i]);
        }
        int res = bucketGap, lastMax = INT_MAX;
        for (int i = 0; i < bucketNum; i++)
            if (bucketMin[i] != INT_MAX) {
                res = max(res, bucketMin[i] - lastMax);
                lastMax = bucketMax[i];
            }
        return res;
    }
};