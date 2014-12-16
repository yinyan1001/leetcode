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
	vector<vector<int> > pathSum(TreeNode *root, int sum) {
		this->sum = sum;
		paths.clear();
		if (root == NULL)
			return (paths);
		vector<int> path;
		dfs(root, path, 1/*depth*/, 0/*sum*/);
		return (paths);
	}

private:
	vector<vector<int> > paths;
	int sum;

	void dfs(TreeNode *root, vector<int> &path, int depth,
		 int sum) {
		path.push_back(root->val);
		sum += root->val;
		if (root->left == NULL && root->right == NULL) {
			if (sum == this->sum)
				paths.push_back(path);
			return;
		}
		if (root->left != NULL)
			dfs(root->left, path, depth+1, sum);
		if (root->right != NULL) {
			path.resize(depth);
			dfs(root->right, path, depth+1, sum);
		}
	}
};
