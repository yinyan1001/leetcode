// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <climits>

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

	int minDepth(TreeNode *root) {

		if (root == NULL)
			return (0);

		mindepth = INT_MAX;
		dfs(root, 1);
		return (mindepth);
	}

private:
	int mindepth;

	/*
	 * 下边的代码有一个低级的错误，就是，只有在一个节点
	 * 没有left和right节点的时候才是leaf，这个时候才能
	 * 更新mindepth。
	 */
	void dfs(TreeNode *root, int depth) {
		if (depth >= mindepth)
			return;
		if (root->left == NULL && root->right == NULL) {
			mindepth = depth;
			return;
		}
		if (root->left != NULL)
			dfs(root->left, depth + 1);
		if (root->right != NULL)
			dfs(root->right, depth + 1);
	}
};
