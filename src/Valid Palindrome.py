class Solution:
    # @param s, a string
    # @return a boolean
    def isPalindrome(self, s):
        str = ""
        for t in s:
            if t.isalpha():
                str += t.lower()
            elif t.isdigit():
                str += t
        i = 0
        j = len(str) - 1
        res = True
        while i < j:
            while not str[i]:
                i += 1
            while not str[j]:
                j -= 1
            if str[i] != str[j]:
                res = False
                break
            i += 1
            j -= 1
        return res
