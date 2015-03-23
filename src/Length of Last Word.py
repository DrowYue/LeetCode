class Solution:
    # @param s, a string
    # @return an integer
    def lengthOfLastWord(self, s):
        res = 0
        flag = True
        for i in xrange(len(s)-1, -1, -1):
            if s[i] != ' ':
                res += 1
                flag = False
            else:
                if flag == False:
                    return res
        if res > 0:
            return res
        else:
            return 0
