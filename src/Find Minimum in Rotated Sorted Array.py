class Solution:
    # @param num, a list of integer
    # @return an integer
    def findMin(self, num):
        left, right = 0, len(num) - 1
        while (right - left) > 1:
            mid = (left + right) / 2
            if num[mid] > num[left] and num[mid] > num[right]:
                left = mid
            else:
                right = mid
        return min(num[left], num[right])

if __name__ == "__main__":
    a = [4,1,2,3]
    s = Solution()
    print s.findMin(a)