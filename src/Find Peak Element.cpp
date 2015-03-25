class Solution {
public:
	int findPeakElement(const vector<int> &num) {
    	int l = 0, r = (int)num.size() - 1, m;
    	while (l < r) {
    		m = (l + r) / 2;
    		if (num[m] < num[m+1])	l = m + 1;
    		else					r = m;
    	}
    	return r;
    }
};