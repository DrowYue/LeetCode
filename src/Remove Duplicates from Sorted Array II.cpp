class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n < 3)  return n;
        int cnt = 1, w = 0;
        for (int i = 1; i < n; i++) {            
            if (A[i] == A[i-1]) {
                cnt++;
                if (cnt >= 3)   w++;
            }
            else    cnt = 1;
            A[i-w] = A[i];
        }
        return n - w;
    }
};