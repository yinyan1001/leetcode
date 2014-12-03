// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <iostream>

//#include "solution1.h"
#include "solution2.h"

int main(void)
{
	Solution s;
	cout << s.climbStairs(1) << " (should be 1)" << endl;
	cout << s.climbStairs(2) << " (should be 2)" << endl;
	cout << s.climbStairs(3) << " (should be 3)" << endl;
	cout << s.climbStairs(7) << " (should be 21)" << endl;
	cout << s.climbStairs(19) << " (should be 6765)" << endl;

	return (0);
}
