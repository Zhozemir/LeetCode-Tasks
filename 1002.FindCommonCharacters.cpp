#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<std::string> commonChars(std::vector<std::string>& words) {

	std::unordered_map<char, int> hm;

	for (const char& ch : words[0])
		hm[ch]++;

	for (size_t i = 1; i < words.size(); i++) {

		std::unordered_map<char, int> currHm;
	
		for (const char& ch : words[i])
			currHm[ch]++;

		for (auto it = hm.begin(); it != hm.end(); ) {

			const char currLetter = it->first;

			if (currHm.count(currLetter)) {

				it->second = std::min(it->second, currHm[currLetter]);
				it++;

			}
			else
				it = hm.erase(it);
		
		}
	
	}

	std::vector<std::string> result;

	for (const auto& pair : hm)	
		result.insert(result.end(), pair.second, std::string(1, pair.first));

	return result;

}