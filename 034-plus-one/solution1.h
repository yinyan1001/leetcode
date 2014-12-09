// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <stack>

using namespace std;

class Solution {

public:

	vector<int> plusOne(vector<int> &digits) {

		stack<int> stack;

		int carry = 1; // 因为要+1，把carry初始化为1
		for (int i = digits.size() - 1; i >= 0; i--) {
			int digit = digits[i] + carry;
			stack.push(digit % 10);
			carry = digit / 10;
		}
		if (carry != 0)
			stack.push(carry);

		result.clear();
		while (!stack.empty()) {
			result.push_back(stack.top());
			stack.pop();
		}

		return (result);
	}

private:
	vector<int> result;
};
