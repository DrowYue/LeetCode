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

    int countNodes(TreeNode* root) {

        if (root == NULL)   return 0;

        int hl = 0, hr = 0;

        TreeNode *pl = root, *pr = root;

        while (pl)  {++hl;  pl = pl->left;}

        while (pr)  {++hr;  pr = pr->right;}

        if (hl == hr)   return (1<<hl)-1;

        return 1 + countNodes(root->left) + countNodes(root->right);

    }

};
