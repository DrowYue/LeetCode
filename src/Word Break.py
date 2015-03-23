class Solution:
    # @param s, a string
    # @param dict, a set of string
    # @return a boolean
    def wordBreak(self, s, dict):
        dp = [True]*(len(s)+1)
        for i in xrange(1,len(s)+1):
            dp[i] = False
        for i in xrange(len(s)):
            flag = False
            for j in xrange(i+1):
                if flag:
                    break
                if(dp[j]):
                    for k in dict:
                        if k == s[j:i+1]:
                            dp[i+1] = flag = True
                            break
        return dp[len(s)]

if __name__ == "__main__":
    s = Solution()
    str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"
    dict = ["a","aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa"]
    print s.wordBreak(str, dict)