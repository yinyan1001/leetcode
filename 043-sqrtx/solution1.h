// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:
	// 这个方法超时了
	int sqrt(int x) {
		if (x == 0)
			return (0);
		long long i = 0;
		for (long long i = 0; ; i++)
			if ((i + 1) * (i + 1) > (long long)x)
				return (i);
	}
};
