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

    bool findTreeNode(TreeNode *root, TreeNode *p) {

        if (root == NULL)  return false;

        if (root == p)  return true;

        return (findTreeNode(root->left, p) || findTreeNode(root->right, p));

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == p || root == q) return root;

        int sum = (findTreeNode(root->left, p) ? 1 : 2) + (findTreeNode(root->left, q) ? 1 : 2);

        if (sum == 3)

            return root;

        else if (sum == 2)   

            return lowestCommonAncestor(root->left, p, q);

        else 

            return lowestCommonAncestor(root->right, p, q);

    }

};
