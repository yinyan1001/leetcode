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
	TreeNode node1(1), node2(2), node3(2), node4(4), node5(4);

	/*
	 *       1(1)
	 *       /  \
	 *     2(2) 3(2)
	 *     /      \
	 *   4(4)     5(4)
	 */
	node1.left = &node2;
	node1.right = &node3;

	node2.left = &node4;
	node3.right = &node5;

	TreeNode *root = &node1;
	Solution s;
	cout << s.isSymmetric(root) << endl;

	return (0);
}
