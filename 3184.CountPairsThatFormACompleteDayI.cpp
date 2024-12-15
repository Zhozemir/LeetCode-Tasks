#include <iostream>
#include <vector>
#include <unordered_map>

// O(n)

int countCompleteDayPairs(std::vector<int>& hours){

	std::unordered_map<int, int> remainderCount;

	int count = 0;

	for (const auto& h : hours) {
	
		int remainder = h % 24;

		int complement = (24 - remainder) % 24;

		if (remainderCount.find(complement) != remainderCount.end())
			count += remainderCount[complement];

		remainderCount[remainder]++;
	
	}

	return count;

}

// O(n^2)

int countCompleteDayPairs(std::vector<int>& hours) {

	int count = 0;

	for (int i = 0; i < hours.size(); i++) {
	
		for (int j = i + 1; j < hours.size(); j++) {
		
			if ((hours[i] + hours[j]) % 24 == 0)
				count++;
		
		}
	
	}

	return count;

}