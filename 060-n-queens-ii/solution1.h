// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	int totalNQueens(int n) {
		this->n = n;
		sum = 0;

		string row;
		row.append(n, '.');
		for (int i = 0; i < n; i++)
			solution.push_back(row);
		backtrack(0);

		return (sum);
	}

private:
	int sum;
	vector<string> solution;
	int n;

	void backtrack(int depth) {
		if (depth == n) {
			sum++;
			return;
		}
		for (int i = 0; i < n; i++) {
			solution[depth][i] = 'Q';
			if (ok(depth, i))
				backtrack(depth+1);
			solution[depth][i] = '.';
		}
	}

	bool ok(int row, int col) {
		int r, c;
		// 检查 竖直方向
		for (r = row - 1; r >= 0; r--) {
			if (solution[r][col] == 'Q')
				return (false);
		}
		// 检查 向下方向
		for (r = row - 1, c = col - 1; r >= 0 && c >= 0; r--, c--) {
			if (solution[r][c] == 'Q')
				return (false);
		}
		// 检查 向上方向
		for (r = row - 1, c = col + 1; r >= 0 && c < n; r--, c++) {
			if (solution[r][c] == 'Q')
				return (false);
		}
		return (true);
	}
};
