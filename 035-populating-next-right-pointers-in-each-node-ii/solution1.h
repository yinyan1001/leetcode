// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */

class Solution {

public:

	/*
	 * 后续遍历，把按照深度，把节点存在vector中。
	 * 再次到达此深度时，指向vector中的节点，并更新为
	 * 当前节点。
	 */
	void connect(TreeLinkNode *root) {
		next.clear();
		dfs(root, 1);
	}

private:
	vector<TreeLinkNode *> next;

	void dfs(TreeLinkNode *root, int depth) {
		if (root == NULL)
			return;

		if (next.size() < depth) {
			root->next = NULL;
			next.push_back(root);
		} else {
			root->next = next[depth-1];
			next[depth-1] = root;
		}
		dfs(root->right, depth + 1);
		dfs(root->left, depth + 1);
	}
};
