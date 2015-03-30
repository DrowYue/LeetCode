class Solution {
public:
    int jump(int A[], int n) {
        if (n < 2)  return 0;
        if (A[0] >= n - 1)   return 1;
        int res = 0, cur = 0, des = n - 1, nx = 0, t, k;
        while (cur < des) {
            t = 0;
            for (int i = 1; i <= A[cur]; i++) {
                k = cur + i + A[cur+i];
                if (k > t) {
                    t = k;
                    nx = cur + i;
                    if (k >= des)   return res + 2;
                }
            }
            cur = nx;
            res++;
        }
    }
};