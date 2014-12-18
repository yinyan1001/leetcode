// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		const int size = numbers.size();
		map<int, int> index_table;

		for (int i = 0; i < size; i++)
			index_table[numbers[i]] = i;

		vector<int> pair(2);
		for (int i = 0; i < size; i++) {
			map<int, int>::iterator itr =
				index_table.find(target - numbers[i]);
			if (itr != index_table.end() && itr->second != i) {
				pair[0] = i + 1;
				pair[1] = itr->second + 1;
				return (pair);
			}
		}
		return (pair);
	}
};
