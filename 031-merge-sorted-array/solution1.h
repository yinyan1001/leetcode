// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:
	/*
	 * 从后向前比较，就完全不用考虑数据移动的问题了
	 */
	void merge(int A[], int m, int B[], int n) {
		int *p = &A[m + n - 1];

		m--;
		n--;
		while (m >= 0 && n >= 0) {
			if (A[m] > B[n])
				*p-- = A[m--];
			else
				*p-- = B[n--];
		}
		while (m >= 0)
			*p-- = A[m--];
		while (n >= 0)
			*p-- = B[n--];
	}
};
