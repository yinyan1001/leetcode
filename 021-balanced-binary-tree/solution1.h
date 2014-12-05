// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <cmath>

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
	bool isBalanced(TreeNode *root) {
		dfs(root);

		return (balance);
	}

private:
	bool balance = true;

	int dfs(TreeNode *root) {
		if (root == NULL)
			return (0);

		int height_left = dfs(root->left);
		if (!balance)
			return (-1);

		int height_right = dfs(root->right);
		if (!balance)
			return (-1);

		if (abs(height_left - height_right) > 1)
			balance = false;

		return (max(height_left, height_right) + 1);
	}
};

