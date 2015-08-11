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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL)   return head;
        ListNode *p = head, *q = head;
        int len = 0;
        while (p) {
            ++len;
            p = p->next;
        }
        p = head;   k %= len;
        if (k == 0) return head;
        for (int i = 0; i < k && q->next; i++) q = q->next;
        while (q->next) {
            p = p->next;
            q = q->next;
        }
        q->next = head;
        head = p->next;
        p->next = NULL;
        return head;
    }
};
