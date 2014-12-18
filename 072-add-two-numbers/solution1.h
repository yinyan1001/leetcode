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
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode *result;
		ListNode **p = &result;

		int carry = 0;
		while (l1 != NULL && l2 != NULL) {
			int sum = l1->val + l2->val + carry;
			carry = sum / 10;
			*p = new ListNode(sum % 10);
			p = &(*p)->next;
			l1 = l1->next;
			l2 = l2->next;
		}
		while (l1 != NULL) {
			int sum = l1->val + carry;
			carry = sum / 10;
			*p = new ListNode(sum % 10);
			p = &(*p)->next;
			l1 = l1->next;
		}
		while (l2 != NULL) {
			int sum = l2->val + carry;
			carry = sum / 10;
			*p = new ListNode(sum % 10);
			p = &(*p)->next;
			l2 = l2->next;
		}
		while (carry != 0) {
			*p = new ListNode(carry % 10);
			carry /= 10;
			p = &(*p)->next;
		}

		return (result);
	}
};
