#include <iostream>
#include <vector>
#include <algorithm>

int largestPerimeter(std::vector<int>& nums) {

	std::sort(nums.begin(), nums.end());

	int numsSize = nums.size();

	int x = nums[numsSize - 3];
	int y = nums[numsSize - 2];
	int z = nums[numsSize - 1];

	if ( z < (x + y)) {
	
		return x + y + z;
	
	}

	return 0;

}

int main() {

	std::vector<int> nums = { 6, 4, 3 };

	std::cout << largestPerimeter(nums);

}