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
    int Listlen(ListNode *t) {
        int res = 0;
        while (t) {
            res++;
            t = t->next;
        }
        return res;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int t = 0, len1 = Listlen(l1), len2 = Listlen(l2);
        ListNode *p, *q, *pre, *res;
        if (len1 >= len2) { p = l1; q = l2; }
        else              { p = l2; q = l1; }
        res = p;
        while (p && q) {
            p->val = p->val + q->val + t;
            if (p->val > 9) {
                t = p->val / 10;
                p->val %= 10;
            }
            else t = 0;
            pre = p;
            p = p->next;
            q = q->next;
        }
        while (p) {
            p->val = p->val + t;
            if (p->val > 9) {
                t = p->val / 10;
                p->val %= 10;
            }
            else t = 0;
            pre = p;
            p = p->next;
        }
        if (t)  pre->next = new ListNode (t);
        return res;
    }
};
