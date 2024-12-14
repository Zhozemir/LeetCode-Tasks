#include <iostream>
#include <vector>
#include <unordered_map>

bool matchesPattern(const std::string& word, const std::string& pattern) {

	std::unordered_map<char, char> wordToPattern;
	std::unordered_map<char, char> patternToWord;

	for (int i = 0; i < word.size(); i++) {
	
		char w = word[i];
		char p = pattern[i];

		if (wordToPattern.count(w) && wordToPattern[w] != p)
			return false;

		if (patternToWord.count(p) && patternToWord[p] != w)
			return false;

		wordToPattern[w] = p;
		patternToWord[p] = w;
	
	}

	return true;

}

std::vector<std::string> findAndReplacePattern(std::vector<std::string>& words, std::string& pattern) {

	std::vector<std::string> result;

	for (auto& word : words) {
	
		if (matchesPattern(word, pattern))
			result.push_back(word);
	
	}

	return result;

}