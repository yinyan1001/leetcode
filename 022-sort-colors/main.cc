// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

//#include "solution1.h"
#include "solution2.h"

int main(void)
{
	int A[] = { 0, 1, 2, 0, 1, 2 };

	Solution s;
	s.sortColors(A, sizeof(A)/sizeof(A[0]));

	for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
		cout << A[i] << " ";
	cout << endl;

	return (0);
}
