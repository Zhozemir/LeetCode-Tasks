#include <iostream>
#include <vector>
#include <unordered_map>

int findCentre(std::vector<std::vector<int>>& edges) {

	std::unordered_map<int, int> hm;

	for (auto& row : edges) {
	
		for (auto& el : row) {
		
			hm[el]++;

			if (hm[el] > 1)
				return el;
		
		}
	
	}

	return -1;

	// simple solution: 

	/*int a = edges[0][0];
	int b = edges[0][1];

	if (edges[1][0] == a || edges[1][1] == a)
		return a;

	return b;*/

}