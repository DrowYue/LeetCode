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

    ListNode* reverseList(ListNode *t) {

        ListNode *pre = NULL, *next = NULL;

        while (t != NULL) {

            next = t->next;

            t->next = pre;

            pre = t;

            t = next;

        }

        return pre;

    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL)   return true;

        ListNode *one = head;

        ListNode *two = head;

        while (two->next != NULL && two->next->next != NULL) {

            one = one->next;

            two = two->next->next;

        }

        ListNode *k = one->next;

        ListNode *t = reverseList(k);

        while (t != NULL) {

            if (head->val != t->val)

                return false;

            head = head->next;

            t = t->next;

        }

        return true;

    }

};
