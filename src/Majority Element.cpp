class Solution {
public:
    int majorityElement(vector<int> &num) {
		int t = 1, d = num[0];
        for (int i=1; i<(int)num.size(); i++)
        {
		 	if (num[i] != d)
		 	{
				if (t == 0)
				{
					t = 1;
					d = num[i];
				}
				else
					t--;
	   		}
	   		else
	   			t++;
		}
		return d;
    }
};
