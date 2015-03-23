# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None

class Solution:
    # @param root, a tree node
    # @return nothing
    def connect(self, root):
        if root is None:
            return
        q = [root]
        while q:
            t = []
            for i in xrange(len(q)):
                if i < len(q) - 1:
                    q[i].next = q[i+1]
                if q[i].left is not None:
                    t.append(q[i].left)
                if q[i].right is not None:
                    t.append(q[i].right)
            q = t
