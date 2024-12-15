#include <iostream>
#include <unordered_map>

bool canConstruct(std::string ransomNote, std::string magazine) {

	std::unordered_map<char, int> hMap;

	for (const char& el : magazine)
		hMap[el]++;

	for (const char& el : ransomNote) {
	
		if (hMap[el] == 0)
			return false;

		hMap[el]--;
	
	}

	return true;

}