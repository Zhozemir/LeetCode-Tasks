#include <iostream>
#include <vector>
#include <algorithm>

bool compare(std::vector<int> v1, std::vector<int> v2) {

    return v1[1] > v2[1];

}

int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize) {

	sort(boxTypes.begin(), boxTypes.end(), compare);

	int maxUnits = 0;

	for (std::vector<int>& box : boxTypes) {
	
		int numberOfBoxes = box[0];
		int unitsPerBox = box[1];

		if (truckSize >= numberOfBoxes) {
		
			maxUnits += numberOfBoxes * unitsPerBox;
			truckSize -= numberOfBoxes;

		}
		else {
		
			maxUnits += truckSize * unitsPerBox;
			break;

		}
	
	}

	return maxUnits;

}

int main() {

	std::vector<std::vector<int>> boxTypes = { {1, 3}, {2, 2}, {3, 1} };
	int truckSize = 4;

	std::cout << maximumUnits(boxTypes, truckSize);

}