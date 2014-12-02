// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>
#include <vector>

#include "solution1.h"

int main(void)
{
	int _prices[] = { 3, 1, 2, 6, 7, 5, 6 };
	vector<int> prices(_prices, _prices + sizeof(_prices)/sizeof(_prices[0]));

	Solution s;
	cout << s.maxProfit(prices) << endl;

	return (0);
}
