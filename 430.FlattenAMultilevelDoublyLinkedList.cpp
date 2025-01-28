#include <iostream>

class Node {

public:

	int val;
	Node* prev;
	Node* next;
	Node* child;

};

Node* flatten(Node* head) {

	Node* iter = head;

	while (iter) {
	
		if (iter->child) {
		
			Node* tempNext = iter->next;
			Node* tempChildIter = iter->child;

			iter->next = tempChildIter;
			tempChildIter->prev = iter;
			iter->child = nullptr;

			while (tempChildIter && tempChildIter->next)
				tempChildIter = tempChildIter->next;

			if (tempNext) {

				tempChildIter->next = tempNext;
				tempNext->prev = tempChildIter;

			}

		}

		iter = iter->next;
	
	}

	return head;

}