// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<vector<int>> matrix {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 } };
	Solution s;
	s.rotate(matrix);

	for (auto row: matrix) {
		for (auto col: row)
			cout << col << " ";
		cout << endl;
	}

	return (0);
}
