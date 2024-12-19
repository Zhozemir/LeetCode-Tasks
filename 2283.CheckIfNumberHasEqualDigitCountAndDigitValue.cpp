#include <iostream>
#include <unordered_map>

bool digitCount(std::string num) {

	std::unordered_map<int, int> hm;

	for (const char& ch : num) {
	
		int digit = ch - '0';
		hm[digit]++;
	
	}

	for (size_t i = 0; i < num.size(); i++) {
	
		if (num[i] - '0' != hm[i])
			return false;
	
	}

	return true;

}

int main() {

	std::string num = "1210";

	std::cout << digitCount(num);
	
}