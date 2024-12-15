#include <iostream>
#include <vector>
#include <numeric>

int missingNumber(std::vector<int>& nums) {

	int n = nums.size();

	int expectedSum = n * (n + 1) / 2;

	int actualSum = std::accumulate(nums.begin(), nums.end());

	return expectedSum - actualSum;

}
