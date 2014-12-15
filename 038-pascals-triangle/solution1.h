// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:
	vector<vector<int> > generate(int numRows) {

		triangle.clear();

		for (int i = 0; i < numRows; i++) {
			vector<int> row;
			row.resize(i+1);
			row[0] = 1;
			row[i] = 1;
			/*
			 * [1],
			 * [1,1],
			 * [1,2,1],
			 * [1,3,3,1],
			 * [1,4,6,4,1]
			 */
			for (int h = 1; h < i; h++)
				row[h] = triangle[i-1][h-1] + triangle[i-1][h];

			triangle.push_back(row);
		}

		return (triangle);
	}

private:
	vector<vector<int>> triangle;
};
