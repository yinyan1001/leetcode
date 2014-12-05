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

	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
		ListNode *head;
		ListNode *p;

		if (l1 == NULL)
			return (l2);

		if (l2 == NULL)
			return (l1);

		if (l1->val < l2->val) {
			head = l1;
			l1 = l1->next;
		} else {
			head = l2;
			l2 = l2->next;
		}

		p = head;
		while (l1 != NULL && l2 != NULL) {
			if (l1->val < l2->val) {
				p->next = l1;
				l1 = l1->next;
			} else {
				p->next = l2;
				l2 = l2->next;
			}
			p = p->next;
		}

		p->next = (l1 == NULL) ? l2 : l1;

		return (head);
	}
};

