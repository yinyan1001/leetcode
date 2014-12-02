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

	int maxDepth(TreeNode *root) {

		maxdepth = 0;
		dfs(root, 0);

		return (maxdepth);
	}

private:

	int maxdepth;

	void dfs(TreeNode *node, int depth) {
		if (node == NULL) {
			if (maxdepth < depth)
				maxdepth = depth;
			return;
		}
		dfs(node->left, depth+1);
		dfs(node->right, depth+1);
	}
};

