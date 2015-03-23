# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @param head, a ListNode
    # @return a ListNode

    def listLength(self, h):
        len = 0
        while h is not None:
            len += 1
            h = h.next
        return len

    def find(self, h, pos):
        for i in xrange(pos):
            h = h.next
        return h

    def Merge(self, h, len1, p, len2):
        tmp = ListNode(0)
        flag = tmp
        while h is not None and p is not None:
            if h.val < p.val:
                tmp.next = h
                tmp = h
                h = h.next
            else:
                tmp.next = p
                tmp = p
                p = p.next
        while h is not None:
            tmp.next = h
            tmp = h
            h = h.next
        while p is not None:
            tmp.next = p
            tmp = p
            p = p.next
        tmp.next = None
        return flag.next

    def MSort(self, h, len):
        if len == 1:
            return h
        mid = len / 2
        p = self.find(h, mid)
        he = self.find(h, mid-1)
        he.next = None
        pe = self.find(p, len-mid-1)
        pe.next = None
        h = self.MSort(h, mid)
        p = self.MSort(p, len-mid)
        return self.Merge(h, mid, p, len-mid)

    def sortList(self, head):
        len = self.listLength(head)
        if len < 2:
            return head
        else:
            res = self.MSort(head, len)
            return res

if __name__ == "__main__":
    a = ListNode(3)
    b = ListNode(2)
    c = ListNode(1)
    d = ListNode(5)
    a.next = b
    b.next = c
    c.next = d
    s = Solution()
    a = s.sortList(a)
    while a:
        print a.val
        a = a.next