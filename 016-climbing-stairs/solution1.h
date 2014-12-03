// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

// XXX: 这种方法 TLE 了

using namespace std;

class Solution {

public:

	int climbStairs(int n) {
		return (divide_and_conquer(n));
	}

private:

	/*
	 * n个阶梯的情况的走法数是这两种情况的走法数的和：
	 * n - 1 个阶梯 (一次上一个阶梯，然后剩下了n-1个阶梯)
	 * n - 2 个阶梯 (一次上两个阶梯，然后剩下了n-2个阶梯)
	 * 因为一次只能上一个阶梯或两个阶梯，所有只有这两种情况
	 *
	 * 对于一个阶梯，一次上一个阶梯，共一种走法
	 * 对于两个阶梯，一次一个或者一次两个，共两种走法
	 */
	int divide_and_conquer(int n) {
		if (n <= 0) // 正确输入不会出现此情况，
			    // 即最初的参数>0时，不会遇到此情况
			return (0);
		if (n == 1)
			return (1);
		if (n == 2)
			return (2);
		return (divide_and_conquer(n-1) + divide_and_conquer(n-2));
	}
};
