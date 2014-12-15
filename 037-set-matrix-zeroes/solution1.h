// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	void setZeroes(vector<vector<int> > &matrix) {

		vector<int> pairs;

		const int rows = matrix.size();
		const int cols = matrix[0].size();

		for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] == 0) {
				pairs.push_back(i);
				pairs.push_back(j);
			}
		}

		const int size = pairs.size();
		for (int i = 0; i < size; i += 2) {
			int row = pairs[i];
			int col = pairs[i+1];
			for (int j = 0; j < rows; j++)
				matrix[j][col] = 0;
			for (int j = 0; j < cols; j++)
				matrix[row][j] = 0;
		}
	}
};
