// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;
	cout << s.compareVersion("1", "2") << endl;
	cout << s.compareVersion("2.1", "2") << endl;
	cout << s.compareVersion("2.00.0", "2") << endl;
	cout << s.compareVersion("2.0.0.1", "2") << endl;

	return (0);
}
