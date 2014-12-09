// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	bool searchMatrix(vector<vector<int> > &matrix, int target) {
		return (binsearch(matrix, target, 0, matrix.size()-1));
	}

private:
	bool binsearch(vector<vector<int> > &matrix, int target,
		       int begin, int end) {

		if (begin > end)
			return (false);

		int middle = (begin + end) / 2;

		if (begin == end)
			goto find_it;

		if (matrix[middle][0] > target)
			return (binsearch(matrix, target, begin, middle-1));
		if (matrix[middle][matrix[middle].size()-1] < target)
			return (binsearch(matrix, target, middle+1, end));

find_it:
		// This part can be optimized by binary search too.
		for (vector<int>::iterator itr = matrix[middle].begin();
		     itr != matrix[middle].end(); itr++)
			if (*itr == target)
				return (true);
		return (false);
	}
};
