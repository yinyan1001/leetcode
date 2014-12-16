// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<int> S { 1, 2, 2 };
	Solution s;

	vector<vector<int>> sets = s.subsetsWithDup(S);

	for (auto set: sets) {
		cout << "[ ";
		for (auto e: set)
			cout << e << " ";
		cout << "]" << endl;
	}

	return (0);
}
