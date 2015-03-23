# Definition for singly-linked list with a random pointer.
class RandomListNode:
    def __init__(self, x):
        self.label = x
        self.next = None
        self.random = None

class Solution:
    # @param head, a RandomListNode
    # @return a RandomListNode
    def copyRandomList(self, head):
        if not head:
            return None
        p = head
        while p is not None:
            t = RandomListNode(p.label)
            t.next = p.next
            p.next = t
            p = t.next
        p = head
        while p is not None:
            if p.random is None:
                p.next.random = None
            else:
                p.next.random = p.random.next
            p = p.next.next
        p = head
        res = q = head.next
        while p is not None:
            p.next = q.next
            p = p.next
            if p is not None:
                q.next = p.next
            q = q.next
        return res
