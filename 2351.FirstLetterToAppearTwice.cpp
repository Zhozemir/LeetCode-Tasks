#include <iostream>
#include <unordered_map>

char repeatedCharacter(std::string s) {

	std::unordered_map<char, int> hm;

	for (const auto& el : s) {
		
		hm[el]++;

		if (hm[el] == 2)
			return el;
	
	}

	return ' ';

}