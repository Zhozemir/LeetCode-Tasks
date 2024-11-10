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

void inorder(TreeNode* root, std::vector<int>& res) {

	if (!root)
		return;

	inorder(root->left, res);
	res.push_back(root->val);
	inorder(root->right, res);

}

std::vector<int> inorderTraversal(TreeNode* root) {

	std::vector<int> result;
	inorder(root, result);

	return result;

}