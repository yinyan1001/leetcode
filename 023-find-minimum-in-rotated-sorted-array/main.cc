// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { 4, 5, 6, 7, 0, 1, 2 };
	vector<int> num(A, A+sizeof(A)/sizeof(A[0]));

	Solution s;
	cout << s.findMin(num) << endl;

	return (0);
}
