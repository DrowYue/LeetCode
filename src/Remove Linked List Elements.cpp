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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *now = head, *pre = NULL;
        while (now != NULL) {
            if (now->val == val) {
                if (pre == NULL) {  //head
                    head = now->next;
                    now = head;
                }
                else {
                    pre->next = now->next;
                    free(now);
                    now = pre->next;
                }
                
            }
            else {
                pre = now;
                now = now->next;
            }
        }
        return head;
    }
};
