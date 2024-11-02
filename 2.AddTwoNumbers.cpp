#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {

	ListNode* prev = nullptr;
	ListNode* current = head;

	while (current != nullptr) {

		ListNode* nextTemp = current->next;
		current->next = prev;
		prev = current;
		current = nextTemp;

	}

	return prev;

}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

	int carry = 0;
	ListNode* resultHead = nullptr; 

	
	while (l1 != nullptr || l2 != nullptr || carry != 0) {

		int sum = carry;  

		if (l1 != nullptr) {

			sum += l1->val;  
			l1 = l1->next;

		}
		if (l2 != nullptr) {

			sum += l2->val;  
			l2 = l2->next;

		}

		carry = sum / 10; 
		ListNode* newNode = new ListNode(sum % 10);

		newNode->next = resultHead;  
		resultHead = newNode;       
	}

	return reverseList(resultHead);

}