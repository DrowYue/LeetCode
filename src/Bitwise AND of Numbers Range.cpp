class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int c = 0;
        while (m != n) {
            n >>= 1;
            m >>= 1;
            c++;
        }
        return n << c;
    }
};
