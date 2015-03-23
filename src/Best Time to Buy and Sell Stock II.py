class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        res = 0
        for i in xrange(1, len(prices)):
            k = prices[i] - prices[i-1]
            if k > 0:
                res += k
        return res

if __name__ == "__main__":
    a = [2,1]
    s = Solution()
    print s.maxProfit(a)