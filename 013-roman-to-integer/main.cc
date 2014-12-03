// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;
	cout << s.romanToInt("XI") << " (11)" << endl;
	cout << s.romanToInt("MCMXXC") << " (1980)" << endl;
	cout << s.romanToInt("XIX") << " (19)" << endl;
	cout << s.romanToInt("XCVIII") << " (98)" << endl;
	cout << s.romanToInt("MMMCMXCIX") << " (3999)" << endl;
	cout << s.romanToInt("MDCCCXCIX") << " (1899)" << endl;

	return (0);
}
