// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <map>
using namespace std;

class Solution {

public:
	bool isValidSudoku(vector<vector<char> > &board) {

		map<char, int> count;

		// test whether each row is vaild
		for (int row = 0; row < 9; row++) {
			reset_counter(count);
			for (int col = 0; col < 9; col++)
				count[board[row][col]]++;
			if (!ok(count))
				return (false);
		}

		// test whether each col is vaild
		for (int col = 0; col < 9; col++) {
			reset_counter(count);
			for (int row = 0; row < 9; row++)
				count[board[row][col]]++;
			if (!ok(count))
				return (false);
		}

		// test whether each box is vaild
		for (int row = 1; row <= 7; row += 3)
		for (int col = 1; col <= 7; col += 3) {
			reset_counter(count);
			for (int r = row - 1; r <= row + 1; r++)
			for (int c = col - 1; c <= col + 1; c++)
				count[board[r][c]]++;
			if (!ok(count))
				return (false);
		}

		return (true);
	}

private:
	void reset_counter(map<char, int> &count) {
		for (int ch = '0'; ch <= '9'; ch++)
			count[ch] = 0;
		count['.'] = 0;
	}

	bool ok(map<char, int> &count) {
		for (int ch = '0'; ch <= '9'; ch++)
			if (count[ch] > 1)
				return (false);
		return (true);
	}
};

