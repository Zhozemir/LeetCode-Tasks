#include <iostream>
#include <unordered_map>

char findTheDifference(std::string s, std::string t) {

	std::unordered_map<char, int> hm;

	for (const char& el : s)
		hm[el]++;

	for (const char& el : t) {
	
		if (hm.find(el) == hm.end())
			return el;
		else if (hm[el] == 0) 
			return el;
		else
			hm[el]--;
		
	}

	return ' ';

}