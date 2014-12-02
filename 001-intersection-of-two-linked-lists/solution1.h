
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
		stack<ListNode*> stackA;
		stack<ListNode*> stackB;

		for (ListNode *p = headA; p != NULL; p = p->next)
			stackA.push(p);

		for (ListNode *p = headB; p != NULL; p = p->next)
			stackB.push(p);

		ListNode *p = NULL;
		while (!stackA.empty() && !stackB.empty() &&
			stackA.top()->val == stackB.top()->val) {
			p = stackA.top();
			stackA.pop();
			stackB.pop();
		}

		return (p);
	}
};

