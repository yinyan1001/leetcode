// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>
#include <vector>

#include "solution1.h"

int main(void)
{
	//int A[] = { 1, 2, 3, 1 };
	int A[] = { 1, 2, 3, 1, 2, 3, 4, 5 };
	vector<int> num(A, A + sizeof(A)/sizeof(A[0]));

	Solution s;
	cout << s.findPeakElement(num) << endl;

	return (0);
}
