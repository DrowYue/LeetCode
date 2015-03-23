# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of integers
    def traversal(self, root, res):
        res.append(root.val)
        if root.left is not None:
            self.traversal(root.left, res)
        if root.right is not None:
            self.traversal(root.right, res)

    def preorderTraversal(self, root):
        self.res = []
        if root is not None:
            self.traversal(root, self.res)
        return self.res


if __name__ == "__main__":
    a = TreeNode(1)
    b = TreeNode(2)
    a.left = b
    s = Solution()
    print s.preorderTraversal(None)