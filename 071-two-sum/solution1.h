// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
using namespace std;

class Solution {
public:
	// 这种方法 TLE
	vector<int> twoSum(vector<int> &numbers, int target) {
		const int size = numbers.size();
		vector<int> pair(2);
		for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++) {
			if (numbers[i] + numbers[j] == target) {
				pair[0] = i + 1;
				pair[1] = j + 1;
				return (pair);
			}
		}
		return (pair);
	}
};
