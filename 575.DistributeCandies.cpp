#include <iostream>
#include <vector>
#include <unordered_set>

int distributeCandies(std::vector<int>& candyType) {

	std::unordered_set<int> s (candyType.begin(), candyType.end());

	int n = candyType.size();

	if (s.size() <= n / 2)
		return s.size();
	
	return n / 2;

}
 
int  main() {

	std::vector<int> v{ 1,1,2,2,3,3 };

	std::cout << distributeCandies(v);

}