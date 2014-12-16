// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

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

	void flatten(TreeNode *root) {

		prev = NULL;
		dfs(root);
	}

private:
	TreeNode *prev;

	void dfs(TreeNode *root) {
		if (root == NULL)
			return;
		if (prev != NULL) {
			prev->right = root;
			prev->left = NULL;
		}
		prev = root;
		TreeNode *left = root->left;
		TreeNode *right = root->right;
		dfs(left);
		dfs(right);
	}
};
