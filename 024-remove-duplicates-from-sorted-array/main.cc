// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { 1, 2, 2 };

	Solution s;
	int n = s.removeDuplicates(A, sizeof(A)/sizeof(A[0]));
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;

	return (0);
}
