// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<int> S { 1, 2, 3 };
	Solution s;

	vector<vector<int>> sets = s.subsets(S);

	for (auto set: sets) {
		cout << "[ ";
		for (auto e: set)
			cout << e << " ";
		cout << "]" << endl;
	}

	return (0);
}
