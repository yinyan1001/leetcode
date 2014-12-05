// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	int removeElement(int A[], int n, int elem) {

		if (n == 0)
			return (0);

		int left = 0, right = n - 1;
		int found = false;
		while (true) {
			if (A[left] == elem) {
				while (A[right] == elem && left < right)
					right--;
				swap(A[left], A[right]);
				found = true;
			}

			if (left == right)
				break;
			left++;
		}

		if (found)
			return (left);
		return (n);
	}
};
