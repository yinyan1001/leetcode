// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <algorithm>
#include <cstring>

using namespace std;

class Solution {

public:

	int maxSubArray(int A[], int n) {
		int dp[n]; // 动态数组只是调整一下栈指针，现在
			   // 编译器一般都默认支持
		int m;

		memset(dp, 0, sizeof(dp));

		dp[0] = A[0];
		m = dp[0];
		for (int i = 1; i < n; i++) {
			dp[i] = max(A[i], dp[i-1] + A[i]);
			if (m < dp[i])
				m = dp[i];
		}

		return (m);
	}
};
