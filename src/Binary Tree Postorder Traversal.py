# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of integers
    def postorderTraversal(self, root):
        stack = [root]
        res = []
        if root is None:
            return res
        while len(stack) > 0:
            # left
            p = stack[len(stack)-1]
            while p.left is not None:
                q = p.left
                p.left = None
                p = q
                stack.append(p)
            p = stack[len(stack)-1]
            if p.left is None and p.right is None:
                p = stack.pop()
                res.append(p.val)
            # right
            if p.right is not None:
                q = p.right
                p.right = None
                p = q
                stack.append(p)
        return res


if __name__ == "__main__":
    a = TreeNode(1)
    b = TreeNode(2)
    a.left = b
    s = Solution()
    print s.postorderTraversal(a)