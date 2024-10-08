//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
////
////	std::vector<int> intersectionVector;
////
////	for (int i = 0; i < nums1.size(); i++) {
////	
////		for (int j = 0; j < nums2.size(); j++) {
////		
////			if (nums1[i] == nums2[j] && std::find(intersectionVector.begin(), intersectionVector.end(), nums1[i]) == intersectionVector.end())
////				intersectionVector.push_back(nums1[i]);
////		
////		}
////	
////	}
////	
////	return intersectionVector;
////
////}
//
//std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
//
//
//	std::vector<int> intersectionVector;
//
//	std::sort(nums1.begin(), nums1.end());
//	std::sort(nums2.begin(), nums2.end());
//
//	int i = 0, j = 0;
//
//	while (i < nums1.size() && j < nums2.size()) {
//
//		if (nums1[i] == nums2[j]) {
//
//			if (intersectionVector.empty() || intersectionVector.back() != nums1[i])
//				intersectionVector.push_back(nums1[i]);
//			i++;
//			j++;
//
//		}
//		else if (nums1[i] < nums2[j])
//			i++;
//		else
//			j++;
//	}
//
//	return intersectionVector;
//	
//}
//
//void printVector(std::vector<int> vect) {
//
//	for (int i = 0; i < vect.size(); i++) {
//	
//		std::cout << vect[i];
//	
//	}
//
//}
//
//int main() {
//
//	std::vector<int> nums1;
//	nums1.push_back(1);
//	nums1.push_back(2);
//	nums1.push_back(3);
//
//	std::vector<int> nums2;
//	nums2.push_back(1);
//	nums2.push_back(5);
//	nums2.push_back(3);
//	nums2.push_back(5);
//	nums2.push_back(1);
//
//	std::vector<int> intersectionVector = intersection(nums1, nums2);
//
//	printVector(intersectionVector);
//
//}