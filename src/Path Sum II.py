# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @param sum, an integer
    # @return a list of lists of integers
    def dfs(self, root, sum, t):
        t.append(root.val)
        if root.val == sum and root.left == None and root.right == None:
            self.res.append(t[:])
            return
        if root.left is not None:
            self.dfs(root.left, sum-root.val, t)
            t.pop()
        if root.right is not None:
            self.dfs(root.right, sum-root.val, t)
            t.pop()

    def pathSum(self, root, sum):
        if root is None:
            return []
        self.res = []
        self.dfs(root, sum, [])
        return self.res

if __name__ == "__main__":
    a = TreeNode(1)
    b = TreeNode(-2)
    c = TreeNode(-3)
    d = TreeNode(1)
    e = TreeNode(3)
    f = TreeNode(-1)
    a.left = b
    a.right = c
    b.left = d
    b.right = e
    d.left = f
    s = Solution()
    print s.pathSum(a,2)