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
	TreeNode node1(3), node2(9), node3(20), node4(15), node5(7);

	/*
	 *     1
	 *    / \
	 *   2   3
	 *      / \
	 *     4   5
	 */
	node1.left = &node2;
	node1.right = &node3;

	node3.left = &node4;
	node3.right = &node5;

	TreeNode *root = &node1;

	Solution s;
	vector<vector<int>> track = s.levelOrderBottom(root);

	for (auto row: track) {
		for (auto col: row)
			cout << col << " ";
		cout << endl;
	}

	return (0);
}
