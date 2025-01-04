#include <iostream>
#include <unordered_map>

int maximumLengthSubstring(std::string s) {
	
	int start = 0;

	std::unordered_map<char, int> hm;

	int maxLength = 0;

	for (int end = 0; end < s.length(); end++) {
	
		char currentChar = s[end];
		hm[currentChar]++;

		while (hm[currentChar] > 2) {
		
			char startChar = s[start];
			hm[startChar]--;

			start++;
		
		}
		
		maxLength = std::max(maxLength, end - start + 1);

	}

	return maxLength;

}