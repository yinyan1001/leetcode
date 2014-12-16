// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <string>
#include <stack>

using namespace std;

class Solution {

public:

	bool isValid(string s) {

		stack<char> stack;
		const int size = s.length();

		for (int i = 0; i < size; i++) {
			switch (s[i]) {
			case '(':
			case '{':
			case '[':
				stack.push(s[i]);
				break;

			case ')':
				if (stack.empty())
					return (false);
				if (stack.top() != '(')
					return (false);
				stack.pop();
				break;

			case '}':
				if (stack.empty())
					return (false);
				if (stack.top() != '{')
					return (false);
				stack.pop();
				break;

			case ']':
				if (stack.empty())
					return (false);
				if (stack.top() != '[')
					return (false);
				stack.pop();
				break;
			}
		}
		if (stack.empty())
			return (true);
		return (false);
	}
};
