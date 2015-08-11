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
    bool isValidBST(TreeNode* root) {
        if (root == NULL)   return true;
        TreeNode *lp = root->left, *rp = root->right;
        if(lp) {
            while (lp->right)   lp = lp->right;
        }
        if (rp) {
            while (rp->left)   rp = rp->left;
        }
        if (rp == NULL && lp == NULL)   return true;
        else if (lp == NULL && root->val < rp->val) return isValidBST(root->right);
        else if (rp == NULL && root->val > lp->val) return isValidBST(root->left);
        else if (lp && rp && root->val > lp->val && root->val < rp->val)
            return isValidBST(root->left) && isValidBST(root->right);
        else
            return false;
    }
};
