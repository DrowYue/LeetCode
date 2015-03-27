/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root)  return ;
        TreeLinkNode *t = root;
        while (t) {
            TreeLinkNode *p = t, *tr = NULL, *cl = NULL, *cr = NULL;
            t = NULL;
            while (p) {
                cl = p->left ? p->left : p->right;
                cr = p->right ? p->right : p->left;
                if (cl || cr) {
                    if (tr) tr->next = cl;
                    else    t = cl;
                    tr = cr;
                    if (p->left && p->right)    p->left->next = p->right;
                }
                if (p->next == NULL && tr)    tr->next = NULL;
                p = p->next;
            }
        }
    }
};