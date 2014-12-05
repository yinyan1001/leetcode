// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	void rotate(vector<vector<int> > &matrix) {
		vector<vector<int> > rotated_matrix;
		const int size = matrix.size();

		for (int i = 0; i < size; i++) {
			vector<int> row(size);
			rotated_matrix.push_back(row);
		}

		for (int row = 0; row < size; row++) {
			int new_col = size - row - 1;
			for (int col = 0; col < size; col++) {
				int new_row = col;
				rotated_matrix[new_row][new_col] =
					matrix[row][col];
			}
		}

		matrix = rotated_matrix;
	}
};
