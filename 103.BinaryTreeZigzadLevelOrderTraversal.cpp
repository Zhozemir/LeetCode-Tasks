#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	
};

std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {

	std::vector<std::vector<int>> result;

	if (!root)
		return result;

	std::queue<TreeNode*> q;
	q.push(root);
	bool leftToRight = true;

	while (!q.empty()) {
	
		int levelSize = q.size();
		std::vector<int> level(levelSize);

		for (int i = 0; i < levelSize; i++) {
		
			TreeNode* node = q.front();
			q.pop();
		
			int index = leftToRight ? i : levelSize - 1 - i;
			
			level[index] = node->val;

			if (node->left)
				q.push(node->left);

			if (node->right)
				q.push(node->right);

		}

		leftToRight = !leftToRight;

		result.push_back(level);
	
	}

	return result;

}