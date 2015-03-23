class Solution:
    # @param A, a list of integers
    # @return an integer
    def maxSubArray(self, A):
        t = res = -0x7FFFF
        for i in xrange(len(A)):
            t = max(A[i], A[i]+t)
            if t > res:
                res = t
        return res