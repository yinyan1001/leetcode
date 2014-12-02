// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	int searchInsert(int A[], int n, int target) {
		int index;

		index = 0;
		while (A[index] < target && index < n)
			index++;
		return (index);
	}
};
