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
	//ListNode node1(3), node2(1), node3(2);
	ListNode node1(3), node2(4), node3(1);

	node1.next = &node2;
	node2.next = &node3;

	ListNode *head = &node1;

	Solution s;
	head = s.insertionSortList(head);

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;

	return (0);
}
