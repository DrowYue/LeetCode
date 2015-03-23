class Solution:
    # @return a string
    def countAndSay(self, n):
        cnt = "1"
        say = "1"
        for i in xrange(1, n):
            p = 0
            say = ""
            for j in xrange(len(cnt)):
                p += 1
                if j == len(cnt)-1 or cnt[j] != cnt[j+1]:
                    say = say + str(p) + cnt[j]
                    p = 0
            cnt = say
        return say

if __name__ == "__main__":
    s = Solution()
    print s.countAndSay(6)