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
    int countNum(TreeNode *root) {
        if (root == NULL)   return 0;
        else    return 1 + countNum(root->left) + countNum(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cl = countNum(root->left);
        int rl = countNum(root->right);
        if (cl == k - 1)    return root->val;
        else if (cl < k)    return kthSmallest(root->right, k - cl - 1);
        else                return kthSmallest(root->left, k);
    }
};
