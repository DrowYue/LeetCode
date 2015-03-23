/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode *buildBST(vector<int> &num, int sta, int end) {
		if (sta > end )	return NULL;
		if (sta == end) return new TreeNode(num[sta]);
		int mid = (end + sta) / 2;
  		TreeNode *root = new TreeNode(num[mid]);
  		root->left = buildBST(num, sta, mid-1);
  		root->right = buildBST(num, mid+1, end);
  		return root;
	}
    TreeNode *sortedArrayToBST(vector<int> &num) {
    	return buildBST(num, 0, num.size()-1);
    }
};