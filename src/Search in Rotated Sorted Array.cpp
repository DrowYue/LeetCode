class Solution {
public:
    int search(int A[], int n, int target) {
        int l = 0, r = n - 1, x = A[0];
        if (target == x)    return 0;
        while (l <= r) {
            int m = (l + r) / 2;
            if (A[m] == target) return m;
            else if ((target > x && x <= A[m] && A[m ]<= target) || (target < x && A[m] >= x) || (target < x && A[m] <= target))
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }
};
