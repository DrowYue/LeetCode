# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    ans = 0
    def func(self, root, num):
        if root.right is None and root.left is None:
            self.ans += num*10+root.val
        if root.left:
            self.func(root.left, num*10+root.val)
        if root.right:
            self.func(root.right, num*10+root.val)
    def sumNumbers(self, root):
        if root is None:
            return 0
        self.func(root, 0)
        return self.ans