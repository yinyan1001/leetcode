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

	ListNode *swapPairs(ListNode *head) {

		if (head == NULL || head->next == NULL)
			return (head);

		ListNode *curr = head;
		ListNode *next = head->next;

		curr->next = next->next;
		next->next = curr;
		head = next;

		ListNode **p = &curr->next;
		while (true) {
			if (*p == NULL || (*p)->next == NULL)
				break;

			curr = *p;
			next = (*p)->next;

			// 一共要更新三个指针的值
			curr->next = next->next;
			next->next = curr;
			*p = next;

			p = &curr->next;
		}

		return (head);
	}
};
