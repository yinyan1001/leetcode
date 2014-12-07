// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	int minPathSum(vector<vector<int> > &grid) {
		vector<vector<int> > dp;
		const int m = grid.size();
		const int n = grid[0].size();

		for (int i = 0; i < m; i++) {
			vector<int> row(n);
			dp.push_back(row);
		}

		dp[0][0] = grid[0][0];
		for (int i = 1; i < m; i++)
			dp[i][0] = dp[i-1][0] + grid[i][0];
		for (int i = 1; i < n; i++)
			dp[0][i] = dp[0][i-1] + grid[0][i];

		for (int i = 1; i < m; i++)
		for (int j = 1; j < n; j++)
			dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];

		return (dp[m-1][n-1]);
	}
};
