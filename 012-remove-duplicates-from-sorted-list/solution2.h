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
		if (head == NULL)
			return (NULL);

		ListNode *p1 = head;
		ListNode *p2 = head->next;

		while (p2 != NULL) {
			if (p1->val != p2->val) {
				p1->next = p2;
				p1 = p1->next;
			}
			p2 = p2->next;
		}
		p1->next = NULL;

		return (head);
	}
};
