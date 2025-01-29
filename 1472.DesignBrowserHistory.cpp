#include <iostream>
#include <string>

struct Node {

	std::string data;
	Node* prev;
	Node* next;

	Node(std::string data) : data(data), prev(nullptr), next(nullptr) {}

};

class BrowserHistory {

private:

	Node* head;

public:

	BrowserHistory(std::string homepage) {

		head = new Node(homepage);

	}

	void visit(std::string url) {

		Node* temp = head->next;
		while (temp) {
		
			Node* toDelete = temp;
			temp = temp->next;
			delete toDelete;
		
		}

		Node* newNode = new Node(url);
		head->next = newNode;
		newNode->prev = head;

		head = newNode;

	}

	std::string back(int steps) {

			while (steps != 0 && head->prev != nullptr) {

				head = head->prev;

				steps--;

			}

			return head->data;
	
	}

	std::string forward(int steps) {

		while (steps != 0 && head->next != nullptr) {
		
			head = head->next;

			steps--;
		
		}

		return head->data;
	
	}

};