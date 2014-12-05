// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	int A[] = { 6, 1, 2, 4, 5 };
	vector<int> prices(A, A + sizeof(A)/sizeof(A[0]));

	Solution s;
	cout << s.maxProfit(prices) << endl;

	return (0);
}
