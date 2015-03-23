class Solution {
public:
    void rotate(int nums[], int n, int k) {
  		k %= n;
  		if (k != 0) {
  			int idx=0, t1=0, t2=nums[0], p=0;
  			for (int i=0; i<n; i++) {
  				idx = (idx + k) % n;  				
				t1 = nums[idx];
  				nums[idx] = t2;
  				t2 = t1;
  				if (idx == p) {
  					idx = ++p;
  					t2 = nums[p];
  				}
  			}
    	}
    }
};
