// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
	int threeSumClosest(vector<int> &num, int target) {
		const int size = num.size();
		int min_delta = INT_MAX;
		int res = -1;
		for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
		for (int k = j + 1; k < size; k++) {
			int sum = num[i] + num[j] + num[k];
			int delta = abs(sum - target);
			if (delta < min_delta) {
				res = sum;
				min_delta = delta;
			}
			if (min_delta == 0)
				return (res);
		}
		return (res);
	}
};
