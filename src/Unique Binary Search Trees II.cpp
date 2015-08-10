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
    vector<TreeNode*> op(int sta, int end) {
        std::vector<TreeNode*> res, l, r;
        if (sta > end)  res.push_back(NULL);
        else if (sta == end) res.push_back(new TreeNode(sta));
        else {
            for (int i = sta;  i <= end; i++) {
                l = op(sta, i-1);
                r = op(i+1, end);
                for (int j = 0; j < l.size(); j++) {
                    for (int k = 0; k < r.size(); k++) {
                        TreeNode *root = new TreeNode(i);
                        root->left = l[j];
                        root->right = r[k];
                        res.push_back(root);
                    }
                }
            }    
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        return op(1, n);
    }
};
