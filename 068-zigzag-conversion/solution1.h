// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string convert(string s, int nRows) {
		vector<string> rows(nRows);
		string plain;

		if (nRows == 1)
			return (s);

		/*
		 * 0123456789 4
		 * 0     6
		 * 1   5 7
		 * 2 4   8
		 * 3     9
		 * c0 c1 c0
		 */
		const int size = s.size();
		int r = 0;
		int c = 0;
		for (int i = 0; i < size; i++) {
			if (r == -1 || r == nRows) {
				c ^= 1;
				if (r == -1)
					r = 1;
				if (r == nRows)
					r = nRows - 2;
			}
			if (c == 0) {
				rows[r].append(1, s[i]);
				r++;
			} else {
				rows[r].append(1, s[i]);
				r--;
			}
		}

		for (int i = 0; i < nRows; i++)
			plain += rows[i];

		return (plain);
	}
};
