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
	 * 设链表长度为N，第i次迭代，p1的位置是i%N，
	 * p2的位置是(2i)%N。存在i使得p1与p2相遇即
	 * 存在i使得下式成立，即：
	 * i%N = (2i)%N
	 * => (2i)%N - i%N = 0
	 * => i%N = 0
	 * 所以，第N次迭代时，两者就相遇了。(即起点)
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
