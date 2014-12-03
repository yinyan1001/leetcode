// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	Solution s;
	cout << s.maxSubArray(A, sizeof(A)/sizeof(A[0])) << endl;

	return (0);
}
