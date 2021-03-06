// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

//#include "solution1.h"
#include "solution2.h"

int main(void)
{
	ListNode node1(1), node2(2), node3(3), node4(4);

	ListNode *headA;
	ListNode *headB;

	headA = &node1;
	headB = &node2;

	node1.next = &node3;
	node2.next = &node3;
	node3.next = &node4;

	Solution s;
	ListNode *p = s.getIntersectionNode(headA, headB);
	for (; p != NULL; p = p->next)
		cout << p->val << endl;

	return (0);
}
