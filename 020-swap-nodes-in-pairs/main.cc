// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

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

	head = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;

	Solution s;
	head = s.swapPairs(head);
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;

	return (0);
}
