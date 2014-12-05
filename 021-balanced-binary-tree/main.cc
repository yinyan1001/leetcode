// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#include "solution1.h"

int main(void)
{
	TreeNode node1(1), node2(2), node3(3), node4(4), node5(5);
	TreeNode *root;

	/*
	 *         1
	 *        / \
	 *       2   3
	 *      /   /
	 *     4   5
	 */
	root = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node3.left = &node5;

	/*
	 * Uncomment to enable case2:
	 *
	 *         1
	 *        / \
	 *       2   3
	 *      /   /
	 *     4   5
	 *        /
	 *       6
	 */
	//TreeNode node6(6);
	//node5.left = &node6;

	Solution s;
	cout << s.isBalanced(root) << endl;

	return (0);
}
