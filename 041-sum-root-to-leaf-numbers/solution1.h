// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {

public:
	int sumNumbers(TreeNode *root) {
		vector<int> dummy;
		sum = 0;
		dfs(root, dummy);
		return (sum);
	}

private:
	int sum;

	void dfs(TreeNode *root, vector<int> &levels) {
		if (root == NULL)
			return;
		if (root->left == NULL && root->right == 0) {
			sum += root->val;
			levels.push_back(1);
			return;
		}
		vector<int> child_levels;

		if (root->left != NULL) {
			dfs(root->left, child_levels);
			const int size = child_levels.size();
			for (int i = 0; i < size; i++) {
				child_levels[i] *= 10;
				sum += root->val * child_levels[i];
			}
			levels.insert(levels.end(), child_levels.begin(),
				      child_levels.end());
			child_levels.clear();
		}

		if (root->right != NULL) {
			dfs(root->right, child_levels);
			const int size = child_levels.size();
			for (int i = 0; i < size; i++) {
				child_levels[i] *= 10;
				sum += root->val * child_levels[i];
			}
			levels.insert(levels.end(), child_levels.begin(),
				      child_levels.end());
		}
	}
};
