// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
using namespace std;

class Solution {
public:
	int minimumTotal(vector<vector<int> > &triangle) {

		const int size = triangle.size();
		/*
		 * [2],
		 * [3,4],
		 * [6,5,7],
		 * [4,1,8,3]
		 */

		for (int r = size - 2; r >= 0; r--) {
			for (int c = 0; c <= r; c++)
				triangle[r][c] += min(triangle[r+1][c],
						      triangle[r+1][c+1]);
		}
		return (triangle[0][0]);
	}
};
