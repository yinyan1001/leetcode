// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	// 记录之前的最小值
	int maxProfit(vector<int> &prices) {
		int maxprofit = 0;
		const int size = prices.size();

		if (size <= 1)
			return (0);

		int minprice = prices[0];
		for (int i = 1; i < size; i++) {
			int profit = prices[i] - minprice;
			if (maxprofit < profit)
				maxprofit = profit;
			if (minprice > prices[i])
				minprice = prices[i];
		}

		return (maxprofit);
	}

};
