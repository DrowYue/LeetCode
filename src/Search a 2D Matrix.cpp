class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int l = 0, r = row * col - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            int x = m / col,  y = m % col;
            if (matrix[x][y] == target) return true;
            if (matrix[x][y] < target)  l = m + 1;
            else                        r = m - 1;
        }
        return false;
    }
};