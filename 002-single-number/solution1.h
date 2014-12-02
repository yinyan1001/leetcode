
using namespace std;

class Solution {

public:

	int singleNumber(int A[], int n) {
		sort(A, A + n);

		for (int i = 0; i < n; i += 2) {
			if (A[i] != A[i+1])
				return (A[i]);
		}

		// Not reachable
		return (-1);
	}

};
