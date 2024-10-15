#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums){

	std::unordered_set<int> seenNums;

	for (int num : nums) {
	
		if (seenNums.find(num) != seenNums.end()) {
		
			return true;

		}

		seenNums.insert(num);
	
	}

	return false;

}

int main() {

	std::vector<int> nums = { 1, 2, 3, 1 };
	std::cout << containsDuplicate(nums);

}