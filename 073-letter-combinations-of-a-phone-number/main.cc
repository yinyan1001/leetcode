// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;
	vector<string> combinations = s.letterCombinations("23");

	for (auto str: combinations)
		cout << str << endl;

	return (0);
}
