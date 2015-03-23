class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0, k = 0;
        while  (n > 0)
        {
            res = (res << 1) + n%2;
            n /= 2;
            k++;
        }
        return res<<(32-k);
    }
};