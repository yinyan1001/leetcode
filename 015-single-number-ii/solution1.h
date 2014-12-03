// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <cstring>

using namespace std;

class Solution {

public:

	// int有32位，统计每个位出现的次数，其它数字都出现三次，
	// 它们的位出现的次数一定是3的倍数，然后mod 3，得到的
	// 就是single number的位(出现的次数)。
	int singleNumber(int A[], int n) {
		int count[32];

		memset(count, 0, sizeof(count));

		for (int i = 0; i < n; i++) {
			for (int bit = 0; bit < 32; bit++)
				count[bit] += (A[i]>>bit) & 1;
		}

		int the_one = 0;
		for (int bit = 0; bit < 32; bit++)
			the_one |= (count[bit]%3) << bit;

		return (the_one);
	}

};
