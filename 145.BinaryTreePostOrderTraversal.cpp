#include <iostream>
#include <vector>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

void postorder(TreeNode* root, std::vector<int>& res) {

	if (!root)
		return;

	postorder(root->left, res);
	postorder(root->right, res);
	res.push_back(root->val);

}

std::vector<int> postorderTraversal(TreeNode* root) {

	std::vector<int> result;
	
	postorder(root, result);

	return result;

}