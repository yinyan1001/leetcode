
using namespace std;

class Solution {

public:

	int singleNumber(int A[], int n) {
		int the_one = 0;

		// 异或
		for (int i = 0; i < n; i++) {
			the_one ^= A[i];
		}

		return (the_one);
	}

};
