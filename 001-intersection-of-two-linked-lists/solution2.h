// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <stack>
using namespace std;

class Solution {

public:

	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		int lenA = getListLength(headA);
		int lenB = getListLength(headB);

		// 保证listA小于等于ListB
		if (lenA > lenB) {
			swap(headA, headB);
			swap(lenA, lenB);
		}

		// 让ListA与ListB一样长
		while (lenA < lenB) {
			headB = headB->next;
			lenB--;
		}

		ListNode *p = NULL;

		// 找到ListA与ListB相同的第一个元素
		while (headA != NULL && headA->val != headB->val) {
			headA = headA->next;
			headB = headB->next;
		}

		if (headA != NULL)
			p = headA;

		// 只要出现不相同，就把p指向next
		while (headA != NULL) {
			if (headA->val != headB->val)
				p = headA->next;
			headA = headA->next;
			headB = headB->next;
		}

		return (p);
	}

private:

	int getListLength(ListNode *head) {
		int len = 0;
		while (head != NULL) {
			len++;
			head = head->next;
		}
		return (len);
	}
};

