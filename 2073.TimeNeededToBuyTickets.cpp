#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int timeRequiredToBuy(std::vector<int>& tickets, int k) {

	std::queue<std::pair<int, int>> people;

	for (int i = 0; i < tickets.size(); i++) {
	
		people.push({ i, tickets[i] });
	
	}

	int time = 0;

	while (!people.empty()) {
	
		auto current = people.front();
		people.pop();
		time++;

		current.second--;

		if (current.first == k && current.second == 0) {
		
			return time;
		
		}

		if (current.second > 0) {
		
			people.push(current);
		
		}

	}

	return time;

}

int main() {

	std::vector<int> tickets = { 2, 3, 2};
	std::cout << timeRequiredToBuy(tickets, 2);

}