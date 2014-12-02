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

	ListNode *deleteDuplicates(ListNode *head) {
		ListNode *p;
		ListNode *next;

		p = head;
		next = p;
		while (p != NULL) {
			while (next != NULL && p->val == next->val)
				next = next->next;
			p->next = next;
			p = next;
		}

		return (head);
	}
};
