#include <iostream>
#include <vector>
#include <queue>

std::vector<int> numberGame(std::vector<int>& nums) {

	std::priority_queue<int, std::vector<int>, std::greater<int>> pq (nums.begin(), nums.end());

	std::vector<int> result;

	while (!pq.empty()) {
	
		int Alice = pq.top();
		pq.pop();
		int Bob = pq.top();
		pq.pop();

		result.push_back(Bob);
		result.push_back(Alice);
	
	}

	return result;

}