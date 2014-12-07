// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<vector<int>> grid {
		{ 1, 1, 1 },
		{ 2, 2, 1 },
		{ 3, 3, 1 }
	};

	Solution s;
	cout << s.minPathSum(grid) << endl;

	return (0);
}
