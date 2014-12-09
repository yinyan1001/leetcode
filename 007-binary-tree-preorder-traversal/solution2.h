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

	vector<int> preorderTraversal(TreeNode *root) {
		stack<TreeNode *> stack;

		track.clear();
		if (root == NULL)
			return (track);

		TreeNode *p = root;
push_left:
		// 先一直向左走，遍历路径上的节点，然后push到stack中
		while (p->left != NULL) {
			track.push_back(p->val);
			stack.push(p);
			p = p->left;
		}
		track.push_back(p->val);
		stack.push(p);

		while (!stack.empty()) {
			// 回溯，有右节点时，向右走一步
			// goto push_left 继续
			p = stack.top();
			stack.pop();
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

