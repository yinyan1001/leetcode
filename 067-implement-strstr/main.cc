// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;
	cout << s.strStr("a", "a") << endl;
	cout << s.strStr("012345world", "world") << endl;
	cout << s.strStr("a", "") << endl;

	return (0);
}
