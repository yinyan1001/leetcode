// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <algorithm>

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

	vector<vector<int> > levelOrderBottom(TreeNode *root) {
		track.clear();
		dfs(root, 0);
		reverse(track.begin(), track.end());
		return (track);
	}

private:
	vector<vector<int>> track;

	void dfs(TreeNode *root, int depth) {
		if (root == NULL)
			 return;
		if (track.size() <= depth) {
			vector<int> level;
			track.push_back(level);
		}

		track[depth].push_back(root->val);
		dfs(root->left, depth+1);
		dfs(root->right, depth+1);
	}
};
