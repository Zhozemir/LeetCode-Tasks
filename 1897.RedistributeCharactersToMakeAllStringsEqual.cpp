#include <iostream>
#include <unordered_map>

bool makeEqual(std::vector<std::string>& words) {

	std::unordered_map<char, int> hm;

	for (const std::string& word : words) {
	
		for (const char ch : word) {
		
			hm[ch]++;
		
		}

	}

	const int size = words.size();

	for (const auto& pair : hm) {
	
		if (pair.second % size != 0)
			return false;
	
	}

	return true;
	
}

int main() {

	std::vector<std::string> v = { "abc", "aabc", "bc" };

	std::cout << makeEqual(v);

}