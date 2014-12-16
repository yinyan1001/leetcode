// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	//int A[] = { 5, 7, 7, 8, 8, 10 };
	int A[] = { 2, 2 };

	Solution s;
	vector<int> range = s.searchRange(A, sizeof(A)/sizeof(A[0]), 2);
	cout << range[0] << " " << range[1] << endl;

	return (0);
}
