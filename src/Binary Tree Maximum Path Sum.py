# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    maxSum = -0x7FFFF

    def dfs(self, root):
        lpath, rpath = 0, 0
        if root.left is not None:
            lpath = self.dfs(root.left)
        if root.right is not None:
            rpath = self.dfs(root.right)
        if max(root.val, (lpath + root.val + rpath), max(lpath, rpath)+root.val) > self.maxSum:
            self.maxSum = max(root.val, (lpath + root.val + rpath), max(lpath, rpath)+root.val)
        return max(root.val, max(lpath, rpath)+root.val)

    def maxPathSum(self, root):
        if root is None:
            return 0
        else:
            self.dfs(root)
            return self.maxSum

if __name__ == "__main__":
    a = TreeNode(1)
    b = TreeNode(100)
    c = TreeNode(3)
    d = TreeNode(100)
    e = TreeNode(101)
    a.left = b
    a.right = c
    b.left = d
    b.right = e
    s = Solution()
    print s.maxPathSum(a)