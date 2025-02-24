#include <iostream>

struct ListNode {

	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

ListNode* deleteDuplicates(ListNode* head) {

	ListNode* res = head;

	while (head && head->next) {
	
		if (head->val == head->next->val)
			head->next = head->next->next;
		else
			head = head->next;
	
	}

	return res;

}
