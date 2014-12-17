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
	ListNode *insertionSortList(ListNode *head) {
	
		for (ListNode **key = &head; (*key) != NULL; ) {
			ListNode **pp = &head;
			while ((*pp)->val < (*key)->val)
				pp = &(*pp)->next;
			if (*pp != *key) {
				// 三个指针要更新
				// (*key)->next要指向(*pp);
				// (*pp)要指向(*key);
				// prevkey->next(即*key)要指向*key的next;
				ListNode *next = (*key)->next;
				(*key)->next = *pp;
				*pp = *key;
				*key = next;
			} else {
				key = &(*key)->next;
			}
		}

		return (head);
	}
};
