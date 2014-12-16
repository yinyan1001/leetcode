// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>
#include <cassert>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#include "solution1.h"

int main(void)
{
	TreeNode node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);

	/*
	 *         1
	 *        / \
	 *       2   5
	 *      / \   \
	 *     3   4   6
	 */
	node1.left = &node2;
	node1.right = &node5;
	node2.left = &node3;
	node2.right = &node4;
	node5.right = &node6;

	TreeNode *root = &node1;

	Solution s;
	s.flatten(root);

	while (root != NULL) {
		cout << root->val << endl;
		assert(root->left == NULL);
		root = root->right;
	}

	return (0);
}
