#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findDuplicates(std::vector<int>& nums) {

    std::vector<int> res;

    for (int i = 0; i < nums.size(); i++) {
    
        int index = std::abs(nums[i]) - 1;

        if (nums[index] < 0)
            res.push_back(index + 1);
        else
            nums[index] = -nums[index];
    
    }
    
    return res;

}

