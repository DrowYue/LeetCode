class Solution:
    # @param num, a list of integer
    # @return an integer
    def findMin(self, num):
        if len(num) == 1:
            return num[0]
        left = 0
        right = len(num) - 1
        flg = num[right]
        mid = (left + right) / 2
        while left < right:
            if num[mid] < num[mid-1]:
                return num[mid]
            if num[mid] < flg:
                right = mid - 1
            elif num[mid] > flg:
                left = mid + 1
            elif num[mid] == flg:
                if num[0] > flg:
                    right = mid - 1
                elif num[0] < flg:
                    return num[0]
                else:
                    res = 0x7FFFF
                    for k in num:
                        if k < res:
                            res = k
                    return res
            mid = (left + right) / 2
        return num[mid]