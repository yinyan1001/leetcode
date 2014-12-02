
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
	TreeNode node1(1), node2(2), node3(3), node4(4);

	TreeNode *root = &node1;

	/*
	 *     1
	 *    / \
	 *   2   3
	 *  /
	 * 4
	 */
	node1.left = &node2;
	node1.right = &node3;

	node2.left = &node4;

	Solution s;
	cout << s.maxDepth(root) << endl;

	return (0);
}
