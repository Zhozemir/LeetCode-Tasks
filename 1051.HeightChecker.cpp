#include <iostream>
#include <vector>
#include <algorithm>

int heightChecker(std::vector<int>& heights) {

	
   /* std::vector<int> expected;
    for (int el : heights) {
    
        expected.push_back(el);
    
    }*/

    std::vector<int> expected = heights; 
    std::sort(expected.begin(), expected.end());

    int counter = 0;

    for (int i = 0; i < heights.size(); i++) {

        if (heights[i] != expected[i])
            counter++;

    }

    return counter++;

}

int main () {

    std::vector<int> vect = { 1, 1, 4, 2, 1, 3 };

    std::cout << heightChecker(vect);

}
