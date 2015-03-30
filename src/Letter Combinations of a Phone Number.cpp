class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        queue<string> q;
        if (!digits.size()) return res;
        vector<string> m = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        q.push("");
        for (int i = 0; i < digits.size(); i++) {
            int len = q.size();
            while (len--) {
                string t = q.front();
                q.pop();
                for (int j = 0; j < m[digits[i]-'0'].size(); j++) {
                    q.push(t + m[digits[i]-'0'][j]);
                }
            }
        }
        while (!q.empty()) {
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};