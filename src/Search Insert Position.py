class Solution:
    # @param A, a list of integers
    # @param target, an integer to be inserted
    # @return integer
    def searchInsert(self, A, target):
        if target > A[-1]:
            return len(A)
        if target < A[0]:
            return 0
        l, r = 0, len(A)-1
        while l <= r:
            m = (l + r) / 2
            if target < A[m]:
                r = m - 1
            elif target > A[m]:
                l = m + 1
            else:
                return m
        if A[m] < target:
            return m+1
        else:
            return m

if __name__ == "__main__":
    l = [1,2,5,6,7]
    s = Solution()
    print s.searchInsert(l,4)