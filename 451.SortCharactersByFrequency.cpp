#include <iostream>
#include <unordered_map>
#include <queue>

std::string frequencySort(std::string s) {

	std::unordered_map<char, int> hm;

	std::priority_queue<std::pair<int , char>> pq;

	for (const auto& el : s)	
		hm[el]++;

	for (const auto& pair : hm)
		pq.push({pair.second, pair.first});
	
	std::string newStr;

	while (!pq.empty()) {
	
		auto currentPair = pq.top();

		int count = currentPair.first;
		char ch = currentPair.second;

		while (count != 0) {
		
			newStr.push_back(ch);
			count--;
		
		}

		pq.pop();
	
	}

	return newStr;

}

int main() {

	std::string s = "Aabb";

	std::cout << frequencySort(s);

}