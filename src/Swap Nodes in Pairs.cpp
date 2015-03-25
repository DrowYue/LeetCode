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
    ListNode *swapPairs(ListNode *head) {
    	if (head == NULL)	return NULL;
    	ListNode *p = head, *q = p->next, *pre = NULL;
    	while (p != NULL && q != NULL) {
    		if (pre)	pre->next = q;
    		else		head = q;
    		p->next = q->next;
    		q->next = p;
    		pre = p;
    		p = p->next;
    		if (p)	q = p->next;
    	}
    	return head;
    }
};