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
	bool isSymmetric(TreeNode *root) {

		if (root == NULL)
			return (true);

		return (equal(root->left, root->right));
	}

private:
	/* 一直比较两个指针是否相等 */
	bool equal(TreeNode *ltree, TreeNode *rtree) {
		if (ltree == NULL && rtree == NULL)
			return (true);
		if (ltree == NULL || rtree == NULL)
			return (false);

		if (ltree->val != rtree->val)
			return (false);

		if (!equal(ltree->left, rtree->right))
			return (false);
		if (!equal(ltree->right, rtree->left))
			return (false);

		return (true);
	}
};
