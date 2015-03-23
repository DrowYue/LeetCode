class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        one, two, three = 0, 0, 0
        if len(A) == 1:
            return A[0]
        for i in A:
            two |= (one & i)
            one ^= i
            three = one & two
            one &= ~three
            two &= ~three
        return one


if __name__ == "__main__":
    a = []
    s = Solution()
    print s.singleNumber([2,2,3,2])