# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @param head, a ListNode
    # @return nothing

    def reorderList(self, head):
        if head is None or head.next is None or head.next.next is None:
            return
        lg = 0
        p = head
        while p:
            p = p.next
            lg += 1
        ha = lg - (lg / 2)
        p = head
        for i in xrange(ha-1):
            p = p.next
        t = p.next
        p.next = None
        p = t
        t = p.next
        p.next = None
        while t is not None:
            k = t.next
            t.next = p
            p = t
            t = k
        m = head
        n = p
        while n is not None:
            s = m.next
            t = n.next
            m.next = n
            n.next = s
            m = s
            n = t


if __name__ == "__main__":
    a = ListNode(1)
    b = ListNode(2)
    c = ListNode(3)
    d = ListNode(4)
    #e = ListNode(5)
    a.next = b
    b.next = c
    c.next = d
    #d.next = e
    s = Solution()
    s.reorderList(a)
