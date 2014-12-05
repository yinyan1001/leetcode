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
	ListNode node1(1), node2(2);
	ListNode *head;

	Solution s;
	head = s.mergeTwoLists(&node1, &node2);

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;

	return (0);
}
