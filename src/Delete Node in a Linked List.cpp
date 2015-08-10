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

    void deleteNode(ListNode* node) {

        ListNode *t = node->next;

        std::swap(node->val, t->val);

        node->next = t->next;

        free(t);

    }

};
