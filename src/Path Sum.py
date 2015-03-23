# Definition for a  binary tree node
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None

class Solution:
    # @param root, a tree node
    # @param sum, an integer
    # @return a boolean
    def hasPathSum(self, root, sum):
        if root is None:
            return False
        elif sum == root.val and (root.left is None and root.right is None):
            return True
        else:
            return self.hasPathSum(root.left, sum-root.val) or self.hasPathSum(root.right, sum-root.val)


if __name__ == "__main__":
    a = TreeNode(-2)
    b = TreeNode(-3)
    a.left = None
    a.right = b
    s = Solution()
    print s.hasPathSum(a,-5)