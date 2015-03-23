class Solution:
    # @return a string
    def convert(self, s, nRows):
        if nRows == 1:
            return s
        f = 2 * nRows - 2
        res = ""
        for i in xrange(nRows):
            n = i
            k = f
            if n < len(s):
                res += s[n]
            while n + k < len(s):
                n += k
                if k > 0:
                    res += s[n]
                k = 2 * nRows - 2 - k
            f -= 2
        return res

if __name__ == "__main__":
    s = Solution()
    print s.convert("PAYPALISHIRING", 3)
    #PAHNAPLSIIGYIR