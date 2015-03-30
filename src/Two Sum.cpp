class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int s1, s2;
        vector<int> t = numbers, res;
        sort(t.begin(), t.end());
        for (int i = 0, j = t.size() - 1; i < j;) {
            if (t[i] + t[j] == target) {
                s1 = t[i];
                s2 = t[j];
                break;                
            }
            else if (t[i] + t[j] < target)
                i++;
            else
                j--;
        }
        bool f1 = true, f2 = true;
        for (int i = 0; i < numbers.size(); i++) {
            if (f1 && numbers[i] == s1) {
                s1 = i + 1; f1 = false;
            }
            else if (f2 && numbers[i] == s2) {
                s2 = i + 1; f2 = false;
            }
        }
        res.push_back(min(s1, s2));
        res.push_back(max(s1, s2));
        return res;
    }
};