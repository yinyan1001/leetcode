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
	ListNode node1(1), node2(1), node3(2), node4(3), node5(3);
	ListNode *head = &node1;

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;

	for (ListNode *p = head; p != NULL; p = p->next)
		cout << p->val << " ";
	cout << endl;

	Solution s;
	head = s.deleteDuplicates(head);

	for (ListNode *p = head; p != NULL; p = p->next)
		cout << p->val << " ";
	cout << endl;

	return (0);
}
