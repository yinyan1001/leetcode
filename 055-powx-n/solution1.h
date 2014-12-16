// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:
	// 这个方法会TLE
	double pow(double x, int n) {
		double result = 1.0;
		int sign = 1;

		if (n < 0) {
			sign = -1;
			n = -n;
		}

		while (n--)
			result *= x;
		if (sign == -1)
			result = 1.0 / result;
		return (result);
	}
};
