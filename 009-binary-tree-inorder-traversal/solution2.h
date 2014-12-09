// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <stack>

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
		stack<TreeNode *> stack;

		track.clear();
		if (root == NULL)
			return (track);

		TreeNode *p = root;
push_left:
		// 先一直向左走，把路径上的节点push到stack中
		while (p->left != NULL) {
			stack.push(p);
			p = p->left;
		}
		stack.push(p);

		while (!stack.empty()) {
			// 回溯，遍历此节点，有右节点时，
			// 向右走一步，goto push_left 继续
			p = stack.top();
			stack.pop();
			track.push_back(p->val);
			if (p->right != NULL) {
				p = p->right;
				goto push_left;
			}
		}

		return (track);
	}

private:

	vector<int> track;
};

