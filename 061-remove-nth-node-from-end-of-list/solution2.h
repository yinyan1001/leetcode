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
	ListNode *removeNthFromEnd(ListNode *head, int n) {
		ListNode *p1, **p2;

		p1 = head;
		for (int i = 0; i < n; i++)
			p1 = p1->next;

		for (p2 = &head; p1 != NULL; ) {
			p1 = p1->next;
			p2 = &(*p2)->next;
		}

		*p2 = (*p2)->next;
		return (head); // head could be modified by *p2;
	}
};
