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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)   return head;
        ListNode hhead(0); hhead.next = head;
        ListNode *last = &hhead, *pre = head, *now = head->next;
        while (now) {
            if (now->val == pre->val) {
                while (now && now->val == pre->val)    now = now->next;
                last->next = now;
                pre = now;
                if(now) now = now->next;
            }
            else {
                last = pre;
                pre = now;
                now = now->next;
            }
        }
        return hhead.next;
    }
};
