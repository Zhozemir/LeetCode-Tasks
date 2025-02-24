#include <iostream>

struct ListNode {

	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

void pushBack(ListNode*& resultBegin, ListNode*& resultEnd, ListNode* toAdd) {

	if (!resultBegin)
		resultBegin = resultEnd = toAdd;
	else {
	
		resultEnd->next = toAdd;
		resultEnd = toAdd;
	
	}
	
}

ListNode* mergeLists(ListNode* first, ListNode* second) {

	ListNode* resultBegin = nullptr;
	ListNode* resultEnd = nullptr;

	while (first && second) {
	
		if (first->val < second->val) {
		
			pushBack(resultBegin, resultEnd, first);
			first = first->next;
		
		}
		else {
		
			pushBack(resultBegin, resultEnd, second);
			second = second->next;
		
		}
	
	}

	if (!first)
		pushBack(resultBegin, resultEnd, second);
	else
		pushBack(resultBegin, resultEnd, first);

	return resultBegin;

}

ListNode* getMid(ListNode* list) {

	ListNode* slow = list;
	ListNode* fast = list;

	while (fast && fast->next) {
	
		slow = slow->next;
		fast = fast->next->next;
	
	}

	return slow;

}

ListNode* mergeSort(ListNode* list) {

	if (!list || !list->next)
		return list;

	ListNode* mid = getMid(list);

	ListNode* left = list;
	ListNode* right = mid->next;

	mid->next = nullptr;

	left = mergeSort(left);
	right = mergeSort(right);

	return mergeLists(left, right);

}

ListNode* deleteDuplicates(ListNode* head) {

	if (!head)
		return nullptr;

	//head = mergeSort(head);

	ListNode* current = head;

	while (current && current->next) {

		if (current->val == current->next->val) {

			ListNode* toDelete = current->next;
			current->next = current->next->next;
			delete toDelete;

		}
		else
			current = current->next;

	}

	return head;

}

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