#include <iostream>
#include <vector>
#include <queue>

int fillCups(std::vector<int>& amount) {

	std::priority_queue<int> pq;

	for (const int el : amount) {

		if (el > 0)
			pq.push(el);

	}

	int counter = 0;

	while (!pq.empty()) {
	
		if (pq.size() >= 2) {

			int first = pq.top();
			pq.pop();

			int second = pq.top();
			pq.pop();

			first--;
			second--;

			if (first > 0)
				pq.push(first);

			if (second > 0)
				pq.push(second);

			counter++;

		}
		else {
			
			int left = pq.top();
			pq.pop();

			left--;

			if (left > 0)
				pq.push(left);

			counter++;
		
		}
		
	}

	return counter;

}

int main() {

	std::vector<int> amount{ 5, 0, 0 };

	std::cout << fillCups(amount);

}