
#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

#include "solution1.h"

int main(void)
{
	ListNode node1(1), node2(2), node3(3), node4(4);
	ListNode *head;

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node1;

	head = &node1;

	Solution s;
	cout << s.hasCycle(head) << endl;

	return (0);
}
