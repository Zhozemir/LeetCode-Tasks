#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>

struct CompareByValue {

	bool operator()(const std::pair<char, int>& a, const std::pair<char, int>& b) const {
	
		return a.second < b.second;
	
	}

};

std::string frequencySort(std::string s){

	std::unordered_map<char, int> hm;

	for (const auto& el : s)
		hm[el]++;

	std::priority_queue<std::pair<char, int>, std::vector<std::pair<char, int>>, CompareByValue> pq;

	for (const auto& pair : hm)
		pq.push(pair);

	std::string result = "";

	while (!pq.empty()) {
	
		auto top = pq.top();

		while (top.second != 0) {
		
			result += pq.top().first;
			top.second--;
		
		}

		pq.pop();
	
	}

	return result;

}


