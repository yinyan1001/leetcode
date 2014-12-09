// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>
#include <cstdio>

struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

#include "solution1.h"

int main(void)
{
	TreeLinkNode node1(1), node2(2), node3(3), node4(4), node5(5);
	TreeLinkNode *root = &node1;

	/*
	 *      1
	 *     / \
	 *    2   3
	 *   /   /
	 *  4   5
	 */
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node3.left = &node5;

	Solution s;
	s.connect(root);

#define print(node) do {\
	printf("%s = %p", #node, node); \
	if (node != NULL) \
		printf(" (val=%d)", node->val); \
	printf("\n"); \
} while (0)

	print(node1.next);
	print(node2.next);
	print(node3.next);
	print(node4.next);
	print(node5.next);

	return (0);
}
