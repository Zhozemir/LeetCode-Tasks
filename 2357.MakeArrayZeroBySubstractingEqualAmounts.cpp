#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int minimumOperations(std::vector<int>& nums) {

	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

	for (int num : nums) {

		if (num != 0)
			pq.push(num);

	}

	int operations = 0;

	while (!pq.empty()) {

		int x = pq.top();
		pq.pop();

		while (!pq.empty() && pq.top() == x)
			pq.pop();

		operations++;

	}

	return operations;

}

//void removeZeroes(std::vector<int>& nums) {
//
//	auto it = nums.begin();
//
//	while (it != nums.end()) {
//	
//		if (*it == 0)
//			it = nums.erase(it);
//		else
//			it++;
//	
//	}
//
//}

//int minimumOperations(std::vector<int>& nums) {
//
//	int operations = 0;
//
//	while (nums.size() != 0) {
//
//		removeZeroes(nums);
//
//		if (nums.size() == 0)
//			return operations;
//
//		std::sort(nums.begin(), nums.end());
//
//		int x = nums[0];
//
//		for (int i = 0; i < nums.size(); i++)
//			nums[i] -= x;
//
//		operations++;
//
//	}
//
//	return operations;
//
//	
//
//}

int main() {

	std::vector<int> v { 1,5,0,3,5 };

	std::cout << minimumOperations(v);

}