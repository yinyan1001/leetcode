
using namespace std;

class Solution {

public:

	int maxProfit(vector<int> &prices) {
		int maxprofit = 0;

		const int size = prices.size();
		int i, j;
		/*
		 * 对所有递增子段（不是不降子段）求和
		 */
		for (i = 0; i < size - 1;) {
			if (prices[i] > prices[i+1]) {
				i++;
				continue;
			}
			for (j = i + 2; j < size; j++) {
				if (prices[j-1] >= prices[j]) {
					maxprofit += prices[j-1] - prices[i];
					// leetcode使用标准输出判断测试数据
					// 明明有类了，还这样好SB。
					i = j;
					break;
				}
			}
			if (i != j) {
				maxprofit += prices[size-1] - prices[i];
				break;
			}
		}

		return (maxprofit);
	}
};

