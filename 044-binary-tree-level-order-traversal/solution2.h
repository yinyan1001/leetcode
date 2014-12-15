// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <queue>
#include <utility>

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

	vector<vector<int> > levelOrder(TreeNode *root) {
		track.clear();
		bfs(root);
		return (track);
	}

private:
	vector<vector<int>> track;

	void bfs(TreeNode *root) {
		if (root == NULL)
			return;

		queue<pair<TreeNode *, int/*depth*/> > queue;

		queue.push(make_pair(root, 0));
		while (!queue.empty()) {
			TreeNode *node = queue.front().first;
			int depth = queue.front().second;
			queue.pop();

			if (track.size() <= depth) {
				vector<int> level;
				track.push_back(level);
			}

			track[depth].push_back(node->val);

			if (node->left != NULL)
				queue.push(make_pair(node->left, depth+1));
			if (node->right != NULL)
				queue.push(make_pair(node->right, depth+1));
		}
	}
};
