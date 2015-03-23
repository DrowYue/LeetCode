# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of integers
    def func(self, root, res):
        if root is None:
            return
        self.func(root.left, res)
        res.append(root.val)
        self.func(root.right, res)

    def inorderTraversal(self, root):
        res = []
        self.func(root, res)
        return res