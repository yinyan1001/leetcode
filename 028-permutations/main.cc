// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

//#include "solution1.h"
#include "solution2.h"

int main(void)
{
	int A[] = { 1, 2, 3 };
	vector<int> num(A, A + sizeof(A)/sizeof(A[0]));

	Solution s;
	vector<vector<int>> permutations = s.permute(num);
	for (auto p: permutations) {
		for (auto e: p)
			cout << e << " ";
		cout << endl;
	}

	return (0);
}
