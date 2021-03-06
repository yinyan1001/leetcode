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

	bool isSameTree(TreeNode *p, TreeNode *q) {
		return dfs(p, q);
	}

private:

	bool dfs(TreeNode *p, TreeNode *q) {
		if (p == NULL && q == NULL)
			return (true);
		if (p == NULL)
			return (false);
		if (q == NULL)
			return (false);

		if (p->val != q->val)
			return (false);

		if (dfs(p->left, q->left) && dfs(p->right, q->right))
			return (true);
		return (false);
	}
};

