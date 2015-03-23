class Solution:
    # @param n, an integer
    # @return an integer
    res = {0:0, 1:1, 2:2}
    def climbStairs(self, n):
        if self.res.has_key(n):
            return self.res[n]
        else:
            self.res[n] = self.climbStairs(n-1) + self.climbStairs(n-2)
            return self.res[n]