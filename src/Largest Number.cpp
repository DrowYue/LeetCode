class Solution {
public:
	bool cmp(string a, string b)
	{	
		string p = a + b;
		string q = b + a;
		return p > q;
	}
	void Quicksort(vector<string> &num, int s, int e)
	{
		if (s >= e)	return ;
		int l = s, r = e;
		while (l < r)
		{	
			while (++l < e && cmp(num[l],num[s]));
			while (--r > s && !cmp(num[r],num[s]));
			if (l < r)
			std::swap(num[l], num[r]);
		}
		std::swap(num[s], num[r]);
		Quicksort(num, s, r);
		Quicksort(num, l, e);
	}
    string largestNumber(vector<int> &num) {
		string res = "";
		vector<string> s;
		s.clear();
		bool flag = false;
        for (vector<int>::iterator i=num.begin(); i!=num.end(); i++)
        {
			s.push_back(std::to_string(*i));
		}
		Quicksort(s, 0, s.size());
		for (vector<string>::iterator i=s.begin(); i!=s.end(); i++)
		{
			if (!flag && *i == "0")
				continue;
			flag = true;
			res += *i;
		}
		if (!flag)	return "0";
		return res;
    }
};
