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
	bool hasPathSum(TreeNode *root, int sum) {
		this->sum = sum;
		return (dfs(root, 0));
	}

private:
	int sum;

	bool dfs(TreeNode *root, int sum) {
		if (root == NULL)
			return (false);
		sum += root->val;
		if (root->left == NULL && root->right == NULL)
			return (this->sum == sum);
		return (dfs(root->left, sum) || dfs(root->right, sum));
	}
};
