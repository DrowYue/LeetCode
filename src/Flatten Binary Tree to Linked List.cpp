/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode *t = root;
        while (t) {
            if (t->left) {
                TreeNode *pre = t->left;
                while (pre->right) {
                    pre = pre->right;
                }
                pre->right = t->right;
                t->right = t->left;
                t->left = NULL;
            }
            t = t->right;
        }
    }
};
