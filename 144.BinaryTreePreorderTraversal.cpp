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

void preorder(TreeNode* root, std::vector<int>& res) {

	if (!root)
		return;

	res.push_back(root->val);
	preorder(root->left, res);
	preorder(root->right, res);

}

std::vector<int> preorderTraversal(TreeNode* root){

	std::vector<int> result;
	preorder(root, result);

	return result;

}