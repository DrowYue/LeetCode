class Solution:
    # @return an integer
    def numTrees(self, n):
        t = [1,1]
        for i in xrange(2,n+1):
            res = 0
            for j in xrange(0, i):
                res = res + t[j]*t[i-1-j]
            t.append(res)
        return t[n]

if __name__ == "__main__":
    s = Solution()
    print s.numTrees(5)