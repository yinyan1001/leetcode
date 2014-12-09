// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<int> digits { 1, 9, 9, 9 };

	Solution s;
	digits = s.plusOne(digits);
	for (auto e: digits)
		cout << e;
	cout << endl;

	return (0);
}
