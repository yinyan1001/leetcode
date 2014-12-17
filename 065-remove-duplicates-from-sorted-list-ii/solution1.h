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

		ListNode **pp = &head;
		ListNode *p = head;

		while (p != NULL) {
			int curr = p->val;
			if (p->next != NULL && curr == p->next->val) {
				while (p != NULL && curr == p->val)
					p = p->next;
			} else {
				*pp = p;
				pp = &p->next;
				p = p->next;
			}
		}
		*pp = NULL;

		return (head);
	}
};
