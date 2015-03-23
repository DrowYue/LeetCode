import math

class Solution:
    # @param points, a list of Points
    # @return an integer
    def maxPoints(self, points):
        length = len(points)
        if length < 3: return length
        res = 0
        for i in xrange(length):
            dic = {'inf':0}
            samePointNum = 1
            for j in xrange(length):
                if i == j:  continue
                if (points[j].y == points[i].y) and (points[j].x == points[i].x):
                    samePointNum += 1
                    continue
                try:
                    k = 1.0 * (points[j].y - points[i].y) / (points[j].x - points[i].x)
                    dic[k] = 1 if k not in dic else dic[k] + 1
                except ZeroDivisionError:
                    dic['inf'] += 1
            print dic
            res = max(res, max(dic.values()) + samePointNum)
        return res

if __name__ == "__main__":
    l = [(1,1),(1,1),(1,1)]
    s = Solution()
    print s.maxPoints(l)