// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	int removeDuplicates(int A[], int n) {
		if (n == 0)
			return (0);

		int *p = A;
		int cnt = 1;

		for (int i = 1; i < n; i++) {
			while (i < n && *p == A[i])
				i++;
			if (i < n) {
				*++p = A[i];
				cnt++;
			}
		}

		return (cnt);
	}
};
