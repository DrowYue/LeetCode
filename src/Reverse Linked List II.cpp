/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        n -= m;
        if (!head || !n)  return head;
        ListNode hhead(0); hhead.next = head;
        ListNode *pre = &hhead, *now = &hhead, *tmp = NULL;
        while (--m) pre = pre->next;
        now = pre->next;
        while (n--) {
            tmp = now->next;
            now->next = tmp->next;
            tmp->next = pre->next;
            pre->next = tmp;
        }
        return hhead.next;
    }
};
