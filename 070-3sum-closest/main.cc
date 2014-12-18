// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	vector<int> num { -1, 2, 1, -4 };
	Solution s;

	cout << s.threeSumClosest(num, 1) << endl;

	return (0);
}
