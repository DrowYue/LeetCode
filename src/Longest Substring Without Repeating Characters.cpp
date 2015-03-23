class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	int res = 1, last = 0;
    	vector<int> v(128, -1);
    	if (s == "")	return 0;
  		for (int i=0; i<s.size(); i++)
  		{
  			if (v[s[i]] != -1) {
  				if (v[s[i]] >= last)
  				{
  					res = max(res, i-last);
  					last = v[s[i]] + 1;
				}
			}
			v[s[i]] = i;
		}
		return max(res, (int)(s.size())-last);
    }
};
