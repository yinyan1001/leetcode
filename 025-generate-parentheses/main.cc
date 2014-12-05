// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;
	vector<string> parentheses = s.generateParenthesis(3);

	for (auto e: parentheses)
		cout << e << " ";
	cout << endl;

	return (0);
}
