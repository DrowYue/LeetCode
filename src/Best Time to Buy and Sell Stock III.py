class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        length = len(prices)
        if length == 0:
            return 0
        dp1 = [0]*length
        dp2 = [0]*length
        res = 0
        tmin = prices[0]
        tmax = prices[length-1]
        for i in xrange(1, length):
            if prices[i] < tmin:
                tmin = prices[i]
            dp1[i] = max(dp1[i-1], prices[i]-tmin)
        for j in xrange(length-2, -1, -1):
            if prices[j] > tmax:
                tmax = prices[j]
            dp2[j] = max(dp2[j+1], tmax-prices[j])
            res = max(res, dp1[j]+dp2[j])
        return res

if __name__ == "__main__":
    a = []
    s = Solution()
    print s.maxProfit(a)