// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<vector<int>> triangle {
		{ 2 },
		{ 3, 4 },
		{ 6, 5, 7 },
		{ 4, 1, 8, 3 }
	};

	Solution s;
	cout << s.minimumTotal(triangle) << endl;

	return (0);
}
