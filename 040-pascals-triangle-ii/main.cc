// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<int> row;
	Solution s;

	row = s.getRow(3);

	for (auto e: row)
		cout << e << " ";
	cout << endl;

	return (0);
}
