// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:
	int removeDuplicates(int A[], int n) {

		int count = 1;
		int curr = A[0];
		int m = 1;

		if (n == 0)
			return (0);

		for (int i = 1; i < n; i++) {
			if (A[i] != curr) {
				A[m++] = A[i];
				curr = A[i];
				count = 1;
			} else if (count == 1) {
				A[m++] = A[i];
				count = 2;
			}
		}

		return (m);
	}

};
