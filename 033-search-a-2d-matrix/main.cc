// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<vector<int>> matrix {
		{ 1,   3,  5,  7 },
		{ 10, 11, 16, 20 },
		{ 23, 30, 34, 50 } };

	Solution s;
	cout << s.searchMatrix(matrix, 3) << endl;

	return (0);
}
