#include <iostream>
#include <vector>
#include <algorithm>

int minimumCost(std::vector<int>& cost) {

	int count = 0;

	std::sort(cost.begin(), cost.end());

	int curCandy = cost.size() - 1;

	while (curCandy >= 0) {
	
		count += cost[curCandy];

		if (curCandy > 0)
			count += cost[curCandy - 1];

		curCandy -= 3;

	}

	return count;

}

int main() {

	std::vector<int> cost = { 6,5,7,9,2,2 };
	std::cout << minimumCost(cost);

}