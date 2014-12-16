// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;

	vector<vector<string>> solutions = s.solveNQueens(4);

	for (auto solution: solutions) {
		for (auto r: solution)
			cout << r << endl;
		cout << endl;
	}

	return (0);
}
