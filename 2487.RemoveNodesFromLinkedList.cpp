#include <iostream>

struct ListNode {

	int val;
	ListNode  *next;
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

ListNode* removeNodes(ListNode* head) {

	head = reverseList(head);

	ListNode* newHead = nullptr;
	ListNode* maxNode = nullptr;
	ListNode* cur = head;

	int maxVal = INT_MIN;

	while (cur) {
	
		if (cur->val >= maxVal) {

			maxVal = cur->val;

			if (!newHead) {
			
				newHead = cur;
				maxNode = cur;
			
			}
			else {
			
				maxNode->next = cur;
				maxNode = cur;
			
			}

		}
	
		cur = cur->next;
	
	}

	if (maxNode)
		maxNode->next = nullptr;

	return reverseList(newHead);

}

void printList(ListNode* head) {

	while (head) {

		std::cout << head->val << " ";
		head = head->next;

	}

	std::cout << std::endl;
}


int main() {

	ListNode* head = new ListNode(5);
	head->next = new ListNode(2);
	head->next->next = new ListNode(13);
	head->next->next->next = new ListNode(3);
	head->next->next->next->next = new ListNode(8);

	printList(head);

	ListNode* modifiedHead = removeNodes(head);

	printList(modifiedHead);

}