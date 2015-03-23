# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @param head, a ListNode
    # @return a list node
    def detectCycle(self, head):
        if head is None or head.next is None:
            return None
        a = b = head
        while True:
            if b.next is None or b.next.next is None:
                return None
            b = b.next.next
            a = a.next
            if a == b:
                break
        b = head
        while a != b:
            b = b.next
            a = a.next
        return a

if __name__ == "__main__":
    a = ListNode(3)
    b = ListNode(2)
    c = ListNode(0)
    d = ListNode(-4)
    a.next = b
    b.next = c
    c.next = d
    d.next = b
    s = Solution()
    print s.detectCycle(a).val