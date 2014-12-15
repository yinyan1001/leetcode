// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:
	vector<int> getRow(int rowIndex) {

		// 第k行中，k是从0开始的？
		rowIndex += 1;

		row.clear();
		row.resize(rowIndex);
		row[0] = 1;

		for (int i = 0; i < rowIndex; i++) {
			row[i] = 1;
			int prev = row[0];
			for (int h = 1; h < i; h++) {
				int curr = row[h]; // 保存当前值
				row[h] += prev;    // 更新当前值
				prev = curr;       // 更新前一个
			}
		}

		return (row);
	}

private:
	vector<int> row;
};
