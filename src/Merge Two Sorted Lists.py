# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param two ListNodes
    # @return a ListNode
    def mergeTwoLists(self, l1, l2):
        if l1 is None:
            return l2
        elif l2 is None:
            return l1
        if l1.val < l2.val:
            head = l1
            p = l1.next
            q = l2
        else:
            head = l2
            p = l1
            q = l2.next
        now = head
        while p and q:
            if p.val < q.val:
                now.next = p
                now = p
                p = p.next
            else:
                now.next = q
                now = q
                q = q.next
        while p:
            now.next = p
            now = p
            p = p.next
        while q:
            now.next = q
            now = q
            q = q.next
        return head