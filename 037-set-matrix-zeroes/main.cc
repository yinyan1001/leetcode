// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<vector<int>> matrix {
		{ 0, 1, 1 },
		{ 1, 0, 1 },
		{ 1, 1, 1 } };

	Solution s;
	s.setZeroes(matrix);

	for (auto v: matrix) {
		for (auto e: v)
			cout << e << " ";
		cout << endl;
	}

	return (0);
}
