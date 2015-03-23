class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        k = 0
        res = 0
        for i in xrange(1, len(prices)):
            k = max(prices[i] - prices[i-1] + k, prices[i] - prices[i-1])
            if k > res:
                res = k
        return res

if __name__ == "__main__":
    a = [1]
    s = Solution()
    print s.maxProfit(a)