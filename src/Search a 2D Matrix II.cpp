class Solution {
public:
	bool bsearch(const vector<int> &num, int tg) 
	{
		int low = 0, high = num.size()-1;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (num[mid] == tg)	return true;
			else if (num[mid] < tg)	low = mid + 1;
			else if (num[mid] > tg)	high = mid - 1;
		}
		return false;
	}
	bool searchMatrix(vector<vector<int> >& matrix, int target)
	{
		int n = matrix.size() - 1;
		int m = matrix[0].size() - 1;
		if (target < matrix[0][0] || target > matrix[n][m])
			return false;
		int x = 0;
		for (int i = n; i > -1; i--) {
			if (matrix[i][0] == target)
				return true;
			if (matrix[i][0] < target) {
				x = i;
				break;
			}
		}
		for (int i = 0; i <= x; i++) {
			if(bsearch(matrix[i], target))
				return true;
		}
		return false;
	}
};
