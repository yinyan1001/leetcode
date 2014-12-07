// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { 1, 2, 3, 4, 5, 0, 0, 0, 0 };
	int B[] = { 3, 4, 5, 6 };

	Solution s;
	s.merge(A, 5, B, 4);

	for (int i = 0; i < 9; i++)
		cout << A[i] << " ";
	cout << endl;

	return (0);
}
