// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

//#include "solution1.h"
#include "solution2.h"

int main(void)
{
	int A[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };

	Solution s;
	cout << s.singleNumber(A, sizeof(A)/sizeof(A[0])) << endl;

	return (0);
}
