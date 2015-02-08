class Solution {
public:
	int cmp(string v1, int s1, int e1, string v2, int s2, int e2)
	{	
		int n1 = 0, n2 = 0, i, j;
		for (i=s1; i<e1; i++)
		{
			if (v1[i] != '.')	n1 = n1*10 + v1[i]-'0';
			else	break;
		}
		for (j=s2; j<e2; j++)
		{	
			if (v2[j] != '.')	n2 = n2*10 + v2[j]-'0';
			else	break;
		}
		if (n1 > n2)	return 1;
		else if (n2 > n1)	return -1;
		else if (n1 == n2)
		{
			if (i>=e1 && j>=e2)	return 0;
			else
				return cmp(v1, i+1, e1, v2, j+1, e2);
		}
	}
    int compareVersion(string version1, string version2) {
		if (version1 == version2)	return 0;
		return cmp(version1, 0, version1.length(), version2, 0, version2.length());
    }
};
