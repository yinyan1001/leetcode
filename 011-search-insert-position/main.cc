// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { 0, 1, 2, 3, 4, 6 };

	Solution s;
	cout << s.searchInsert(A, sizeof(A)/sizeof(A[0]), 2) << endl;
	cout << s.searchInsert(A, sizeof(A)/sizeof(A[0]), 5) << endl;

	cout << s.searchInsert(A, 1, 2) << endl;

	return (0);
}
