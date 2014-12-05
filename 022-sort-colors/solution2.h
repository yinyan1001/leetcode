// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	/*
	 * One pass solution:
	 */
	void sortColors(int A[], int n) {
		int R = 0, W = 0, B = 0;

		for (int i = 0; i < n; i++) {
			switch (A[i]) {
			case 0:
				A[B++] = 2;
				A[W++] = 1;
				A[R++] = 0;
				break;
			case 1:
				A[B++] = 2;
				A[W++] = 1;
				break;
			case 2:
				A[B++] = 2;
				break;
			}
		}
	}
};
