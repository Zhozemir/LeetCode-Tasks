#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b) {

	return (a % 2 == 0) && (b % 2 != 0);

}

std::vector<int> sortArrayByParity(std::vector<int>& nums) {

	std::sort(nums.begin(), nums.end(), compare);
	return nums;

}

int main() {

	std::vector<int> nums = { 3, 5, 1, 4 };
	sortArrayByParity(nums);

	for (int num : nums) {
	
		std::cout << num;
	
	}


}