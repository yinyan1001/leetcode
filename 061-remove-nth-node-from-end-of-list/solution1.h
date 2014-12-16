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
		ListNode *p1, *p2;
		ListNode dummy_head(1);

		dummy_head.next = head;

		p1 = head;
		for (int i = 0; i < n; i++)
			p1 = p1->next;

		for (p2 = &dummy_head; p1 != NULL; ) {
			p1 = p1->next;
			p2 = p2->next;
		}

		p2->next = p2->next->next;
		return (dummy_head.next);
	}
};
