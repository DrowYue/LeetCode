# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of lists of integers
    def levelOrder(self, root):
        res, q = [], []
        if root is not None:
            q.append(root)
        while q:
            t = []
            for n in q:
                t.append(n.val)
            res.append(t)
            t = q
            q = []
            for n in t:
                if n.left is not None:
                    q.append(n.left)
                if n.right is not None:
                    q.append(n.right)
        return res
