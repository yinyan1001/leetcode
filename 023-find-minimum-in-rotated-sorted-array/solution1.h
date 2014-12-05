// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	int findMin(vector<int> &num) {
		return binsearch(num, 0, num.size()-1);
	}

private:

	/*
	 * 二分搜索，总是搜索较小的那一半数组
	 */
	int binsearch(vector<int> &num, int begin, int end) {
		if (begin == end)
			return (num[begin]);

		// [begin, end]中没有拐点，第一个元素就是最小的
		if (num[begin] < num[end])
			return (num[begin]);

		int middle = (begin + end) / 2;

		// 拐点在后半段
		if (num[middle] > num[end])
			return (binsearch(num, middle + 1, end));

		return (binsearch(num, begin, middle));
	}

};
