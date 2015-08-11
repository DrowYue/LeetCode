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
    void op(std::vector<TreeNode*> now, bool flag, std::vector<std::vector<int>> &res) {
        int len = now.size();
        std::vector<int> t;
        std::vector<TreeNode*> next;
        for (int i = 0; i < len; i++) t.push_back(now[i]->val);
        res.push_back(t);
        for (int i = len - 1; i >= 0; i--) {
            if (flag) {
                if (now[i]->right)  next.push_back(now[i]->right);
                if (now[i]->left)   next.push_back(now[i]->left);
            }
            else {
                if (now[i]->left)   next.push_back(now[i]->left);
                if (now[i]->right)  next.push_back(now[i]->right);
            }
        }
        if (next.empty())   return ;
        std::swap(now, next);
        op(now, !flag, res);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool flag = true;
        std::vector<TreeNode*> now = {root};
        std::vector<std::vector<int>> res;
        if (root == NULL)   return res;
        op(now, flag, res);
        return res;
    }
};
