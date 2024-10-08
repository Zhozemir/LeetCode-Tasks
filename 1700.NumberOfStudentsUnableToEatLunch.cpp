#include <iostream>
#include <vector>
#include <stack>
#include <queue>


//void printQueue(std::queue<int> studentsQueue) {
//
//	while (!studentsQueue.empty()) {
//
//		std::cout << studentsQueue.front() << " ";
//		studentsQueue.pop();
//
//	}
//
//	std::cout << std::endl;
//
//}
//
//void printStack(std::stack<int> studentsQueue) {
//
//	while (!studentsQueue.empty()) {
//
//		std::cout << studentsQueue.top() << " ";
//		studentsQueue.pop();
//
//	}
//
//}

int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {

	std::queue<int> studentsQueue;
	for (int student : students) {

		studentsQueue.push(student);

	}

	std::stack<int> sandwichesStack;
	/*for (int sandwich : sandwiches) {

		sandwichesStack.push(sandwich);

	}*/

	for (int i = sandwiches.size()-1; i >= 0; i--) {
	
		sandwichesStack.push(sandwiches[i]);
	
	}

	//printQueue(studentsQueue);
	//printStack(sandwichesStack);


	int unableToEatCounter = 0;

	while(!sandwichesStack.empty() && unableToEatCounter < studentsQueue.size()) {

		if (studentsQueue.front() == sandwichesStack.top()) {

			sandwichesStack.pop();
			studentsQueue.pop();
			unableToEatCounter = 0;

		}
		else {

			int el = studentsQueue.front();
			studentsQueue.pop();
			studentsQueue.push(el);
			unableToEatCounter++;

		}

	}

	return sandwichesStack.size();

}

int main() {

	std::vector<int> students = { 1, 1, 1, 0, 0, 1 };
	std::vector<int> sandwiches = { 1, 0, 0, 0, 1, 1 };

	std::cout << countStudents(students, sandwiches);

}