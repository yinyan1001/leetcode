// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <string>

using namespace std;

class Solution {

public:

	vector<string> generateParenthesis(int n) {
		backtrack(n, n, "");
		return (parentheses);
	}

private:
	vector<string> parentheses;

	// n_left:  还可以继续放的左括号的数目
	// n_right: 还可以继续放的右括号的数目
	void backtrack(int n_left, int n_right, string parenthesis) {
		if (n_left == 0 && n_right == 0) {
			parentheses.push_back(parenthesis);
			return;
		}

		// 只要还有 (，随时都可以放一个
		if (n_left > 0)
			backtrack(n_left - 1, n_right, parenthesis + "(");

		// 只要有未匹配的 (，随时都可以放一个 )
		if (n_left < n_right)
			backtrack(n_left, n_right - 1, parenthesis + ")");
	}
};

