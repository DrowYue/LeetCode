class Solution:
    # @return a boolean
    def isValid(self, s):
        l = []
        for c in s:
            if c == '(' or c == '[' or c == '{':
                l.append(c)
            else:
                if l:
                    t = l.pop()
                    if (t == '(' and c != ')') or (t == '[' and c != ']') or (t == '{' and c != '}'):
                        return False
                else:
                    return False
        if l:
            return False
        else:
            return True

if __name__ == "__main__":
    s = Solution()
    print s.isValid("([)]")