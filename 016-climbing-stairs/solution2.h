// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	// 递归分治TLE了，因为是斐波那契数列，直接递推给结果
	// 具体分析看solution1.h
	int climbStairs(int n) {
		int f[n+1];

		f[0] = 1;
		f[1] = 1;

		for (int i = 2; i <= n; i++)
			f[i] = f[i-1] + f[i-2];

		return (f[n]);
	}
};
