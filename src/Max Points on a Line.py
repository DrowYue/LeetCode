import math
# Definition for a point
#class Point:
#   def __init__(self, a=0, b=0):
#       self.x = a
#       self.y = b

class Solution:
    # @param points, a list of Points
    # @return an integer
    def hashCode(self, p, k):
        return p.x*1000 + p.y*1000 + k*1000 + p.x*p.y

    def maxPoints(self, points):
        dic = {}
        flag = [True]*len(points)
        length = len(points)
        if length < 3: return length
        for i in xrange(length):
            n = 1
            if flag[i]:
                for j in xrange(i+1,length):
                    if (points[j].y == points[i].y) and (points[j].x == points[i].x):
                        flag[j] = False
                        n += 1
                if n > res:
                    res = n
                for j in range(i+1, len(points)):
                    if not flag[j]:
                        continue
                    try:
                        k = 1.0 * (points[j].y - points[i].y) / (points[j].x - points[i].x)
                    except ZeroDivisionError:
                        k = 1e7
                    h = self.hashCode(points[i], k)
                    dic[h] = n + 1 if h not in dic else dic[h] + 1
        return max(dic.values())

if __name__ == "__main__":
    l = []
    s = Solution()
    print s.maxPoints(l)



        