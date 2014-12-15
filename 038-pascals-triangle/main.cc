// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<vector<int>> triangle;
	Solution s;

	triangle = s.generate(5);

	for (auto row: triangle) {
		for (auto col: row)
			cout << col << " ";
		cout << endl;
	}

	return (0);
}
