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
	TreeNode node1(1), node2(2);

	/*
	 *     1
	 *    /
	 *   2
	 */
	node1.left = &node2;
	TreeNode *root = &node1;

	Solution s;
	cout << s.minDepth(root) << endl;

	return (0);
}
