tion for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        std::vector<int> res;
        if (root == NULL)   return res;
        s.push(root);
        q.push(root);
        while (!q.empty()) {
            res.push_back(s.top()->val);
            while (!s.empty())  s.pop();
            int num = q.size();
            for (int i = 0; i < num; i++) {
                TreeNode *t = q.front();
                q.pop();
                if (t->left) {
                    q.push(t->left);
                    s.push(t->left);
                }
                if (t->right) {
                    q.push(t->right);
                    s.push(t->right);
                }
            }
        }
        return res;
    }
private:
    std::stack<TreeNode*> s;
    std::queue<TreeNode*> q;
};
