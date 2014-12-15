// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:
	int sqrt(int _x) {
		long long x = _x;
		if (x == 0)
			return (0);

		long long i = x;
		while (i * i > x) {
			//i /= 2; // 140 ms
			i = (i*4) / 5; // 168 ms
		}
		for (;; i++)
			if ((i + 1) * (i + 1) > x)
				return (i);
	}
};
