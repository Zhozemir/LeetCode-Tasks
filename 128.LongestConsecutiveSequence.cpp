#include <iostream>
#include <vector>
#include <unordered_set>

int longestConsecutive(std::vector<int>& nums) {

	std::unordered_set<int> numSet(nums.begin(), nums.end());

	int longest = 0;

	for (auto& num : numSet) {
	
		if (numSet.find(num - 1) == numSet.end()) {

			int currentNum = num;
			int currentStreak = 1;

			while (numSet.find(currentNum + 1) != numSet.end()) {

				currentNum++;
				currentStreak++;

			}

			longest = std::max(longest, currentStreak);


		}
	
	}

	return longest;

}