// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

//#include "solution1.h"
#include "solution2.h"

int main(void)
{
	vector<int> numbers { 2, 7, 11, 15 };

	Solution s;
	vector<int> pair = s.twoSum(numbers, 9);
	cout << pair[0] << " " << pair[1] << endl;

	return (0);
}
