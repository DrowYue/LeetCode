class MinStack:
    # @param x, an integer
    # @return an integer
    def __init__(self):
        self.stack = []
        self.minx = []

    def push(self, x):
        self.stack.append(x)
        if not self.minx or x <= self.minx[-1]:
            self.minx.append(x)

    # @return nothing
    def pop(self):
        if self.stack.pop() == self.minx[-1]:
            self.minx.pop()

    # @return an integer
    def top(self):
        return self.stack[-1]

    # @return an integer
    def getMin(self):
        return self.minx[-1]

if __name__ == "__main__":
    s = MinStack()
    #s.push(512)
    #s.push(-1024)
    #s.push(-1024)
    s.push(-1)
    print s.top()
    print s.getMin()
    #s.pop()
    #print s.getMin()
    #s.pop()
    #print s.getMin()