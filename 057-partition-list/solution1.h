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
	ListNode *partition(ListNode *head, int x) {
		// 1. 建立两个链表，保存两部分的内容；
		// 2. 把两个链表拼起来；
		ListNode head1(0), head2(0);
		ListNode *p1, *p2;
		ListNode *p;

		p1 = &head1;
		p2 = &head2;

		for (p = head; p != NULL; p = p->next) {
			if (p->val < x) {
				p1->next = p;
				p1 = p1->next;
			} else {
				p2->next = p;
				p2 = p2->next;
			}
		}

		p2->next = NULL;
		p1->next = head2.next;

		return (head1.next);
	}
};

