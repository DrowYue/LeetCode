class Solution {
public:
    string convertToTitle(int n) {
        string res("");
        while (n > 0) {
			res.push_back('A'+(n-1)%26);
			n = (n - 1) / 26;
		}
		std::reverse(res.begin(), res.end());
		return res;
    }
};
