class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        std::unordered_map<int, int> m;
        std::vector<std::string> res;
        int len = s.size(), t = 0, i = 0;
        for (int i = 0; i < len; i++) {
            t = t << 3 & 0x3FFFFFFF | s[i] & 7;
            if (m[t]++ == 1)    res.push_back(s.substr(i - 9, 10));
        }
        return res;
    }
};
