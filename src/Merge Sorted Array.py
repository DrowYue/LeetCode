class Solution:
    # @param A  a list of integers
    # @param m  an integer, length of A
    # @param B  a list of integers
    # @param n  an integer, length of B
    # @return nothing
    def merge(self, A, m, B, n):
        t = []
        i = j =  0
        while i < m and j < n:
            t.append(min(A[i], B[j]))
            if t[-1] == A[i]:
                i += 1
            else:
                j += 1
        while i < m:
            t.append(A[i])
            i += 1
        while j < n:
            t.append(B[j])
            j += 1
        for k in xrange(len(t)):
            A[k] = t[k]


if __name__ == "__main__":
    s = Solution()
    a = s.merge([1,2,3,0,0,0],3,[2,5,6],3)