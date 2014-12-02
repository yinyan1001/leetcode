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

	vector<int> inorderTraversal(TreeNode *root) {
		track.clear();
		dfs(root);
		return (track);
	}

private:

	vector<int> track;

	void dfs(TreeNode *root) {
		if (root == NULL)
			return;
		dfs(root->left);
		track.push_back(root->val);
		dfs(root->right);
	}
};

