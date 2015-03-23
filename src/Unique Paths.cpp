class Solution {
public:
    int uniquePaths(int m, int n) {
    	int d[101][101];
    	for (int i=1; i<101; i++)
    		for (int j=1; j<101; j++) {
    			if (i == 1 || j == 1)	d[i][j] = 1;
    			else {
    				d[i][j] = d[i-1][j] + d[i][j-1];
    			}
    		}
    	return d[m][n];
    }
};