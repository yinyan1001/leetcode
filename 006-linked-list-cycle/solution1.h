// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {

public:

	/*
	 * 设链表循环部分的长度为N，设p1与p2同时进入链表
	 * 循环部分的位置是x1与x2(在循环部分的编号，不是
	 * 整个链表的编号)。
	 *
	 * 此后的第i次迭代，p1的位置是(x1+i)%N，p2的位置
	 * 是(x2+2i)%N。
	 *
	 * 要证明p1与p2会相遇，即只需证存在i使得下式成立：
	 * (x1+i)%N = (x2+2i)%N
	 * => (x2-x1+i)%N = 0
	 * => (x2-x1+i) = k*N (k为整数)
	 * => i = k*N - x2 + x1
	 *
	 * k*N - x2 + x1 是整数，
	 * 所以，i = k*N - x2 + x1 时，p1与p2就会相遇。
	 */
	bool hasCycle(ListNode *head) {
		ListNode *p1;
		ListNode *p2;

		p1 = head;
		p2 = head;
		while (p1 != NULL && p2 != NULL && p2->next != NULL) {
			p1 = p1->next;
			p2 = p2->next->next;
			if (p1 == p2)
				return (true);
		}

		return (false);
	}
};
