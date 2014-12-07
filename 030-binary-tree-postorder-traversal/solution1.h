// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <stack>
#include <cstdbool>

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

	vector<int> postorderTraversal(TreeNode *root) {
		stack<int> done;
		stack<TreeNode *> stack;

		if (root == NULL)
			return (track);

		TreeNode *p = root;
push_left:
		// 先一直向左走，把路径上的节点都push到stack中
		while (p->left != NULL) {
			stack.push(p);
			done.push(false);
			p = p->left;
		}
		stack.push(p);
		done.push(false);

		while (!stack.empty()) {
			// 回溯，有右节点、且未走过时，向右走一步
			// 然后继续向左走
			//
			// XXX 后序遍历，是需要记录右子树是否遍历过的
			//     前序与中序中，根节点比右节点先访问，也
			//     就是先出栈，所以不需要。
			p = stack.top();
			if (p->right != NULL && !done.top()) {
				done.top() = true;
				p = p->right;
				goto push_left;
			}

			// 遍历此节点，将其去除
			track.push_back(p->val);
			stack.pop();
			done.pop();
		}

		return (track);
	}

private:
	// 不能返回函数中定义的vector，函数返回时，vector
	// 的析构函数会被调用
	vector<int> track;
};
