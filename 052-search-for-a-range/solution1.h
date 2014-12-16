// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
using namespace std;

class Solution {

public:
	vector<int> searchRange(int A[], int n, int target) {
		range.resize(2);
		range[0] = -1;
		range[1] = -1;

		binsearch(A, 0, n - 1, target, 0);
		if (range[0] != -1)
			binsearch(A, 0, n - 1, target, 1);

		return (range);
	}

private:
	vector<int> range;

	void binsearch(int A[], int begin, int end, int target, bool index) {
		if (begin > end)
			return;
		if (begin == end && A[begin] == target) {
			range[index] = begin;
			return;
		}
		int middle = (begin + end) / 2;
		if (A[middle] < target)
			return (binsearch(A, middle+1, end, target, index));
		if (A[middle] > target)
			return (binsearch(A, begin, middle-1, target, index));
		if (index == 0)
			return (binsearch(A, begin, middle, target, index));

		// index == 1
		// 因为不会不通过求平均向上收敛，
		// 所以，这里单独处理一下。
		if (middle + 1 == end) {
			range[1] = (A[end] == target) ? end : middle;
			return;
		}

		return (binsearch(A, middle, end, target, index));
	}
};
