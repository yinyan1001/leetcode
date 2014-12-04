// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

#include "solution1.h"

int main(void)
{
	Solution s;
	cout << s.intToRoman(1980) << " should be (MCMLXXX)" << endl;
	cout << s.intToRoman(98) << " should be (XCVIII)" << endl;
	cout << s.intToRoman(3999) << " should be (MMMCMXCIX)" << endl;
	cout << s.intToRoman(1899) << " should be (MDCCCXCIX)" << endl;

	return (0);
}
