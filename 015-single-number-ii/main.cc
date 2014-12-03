// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { 1, 1, 1, 2, 2, 2, 3 };

	Solution s;
	cout << s.singleNumber(A, sizeof(A)/sizeof(A[0])) << endl;

	return (0);
}
