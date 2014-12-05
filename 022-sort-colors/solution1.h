// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	void sortColors(int A[], int n) {
		int R = 0, W = 0, B = 0;
		int i;

		for (i = 0; i < n; i++) {
			switch (A[i]) {
			case 0:
				R++;
				break;
			case 1:
				W++;
				break;
			case 2:
				B++;
				break;
			}
		}

		i = 0;
		while (R > 0) {
			A[i] = 0;
			R--;
			i++;
		}
		while (W > 0) {
			A[i] = 1;
			W--;
			i++;
		}
		while (B > 0) {
			A[i] = 2;
			B--;
			i++;
		}
	}
};
