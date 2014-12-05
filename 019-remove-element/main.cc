// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	//int A[] = { 1, 2, 2, 3, 2 };
	//int A[] = { 1, 3, 4, 5 };
	//int A[] = { 2 };
	//int A[] = { 2, 2, 2, 2, 1 };
	int A[] = { };

	Solution s;
	int n = s.removeElement(A, sizeof(A)/sizeof(A[0]), 2);
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;

	return (0);
}
