class Solution {
public:
    bool canJump(int A[], int n) {
        if (n == 1) return true;
        int res = 0;
        for (int i = 0; i < n - 1; i++) {
            if (i <= res)
                res = max(res, A[i]+i);
            if (res >= n - 1)   return true;
        }
        return false;
    }
};