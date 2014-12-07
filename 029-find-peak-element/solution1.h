// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	int findPeakElement(const vector<int> &num) {
		const int size = num.size();

		if (size == 1)
			return (0);

		if (num[0] > num[1])
			return (0);

		if (num[size-1] > num[size-2])
			return (size-1);

		return (binsearch(num, 0, size-1));
	}

private:
	int binsearch(const vector<int> &num, int begin, int end) {
		int middle = (begin + end) / 2;

		if (abs(begin - end) <= 1)
			return (num[begin] > num[end] ? begin : end);

		/*
		 * 比较num[middle-1], num[middle+1]与num[middle]的大小
		 * 关系即可:
		 * num[middle-1] > num[middle] 则极值点在左侧
		 * num[middle+1] > num[middle] 则极值点在右侧
		 * 否则，num[middle] 就是极值点
		 */
		if (num[middle] < num[middle+1])
			return (binsearch(num, middle+1, end));
		if (num[middle] < num[middle-1])
			return (binsearch(num, begin, middle-1));
		return (middle);
	}
};
