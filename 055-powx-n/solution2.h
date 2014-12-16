// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:
	double pow(double x, int n) {
		double result = 1.0;
		int sign = 1;

		if (n < 0) {
			sign = -1;
			n = -n;
		}

		result = _pow(x, n);

		if (sign == -1)
			result = 1.0 / result;

		return (result);
	}

private:
	double _pow(double x, int n) {
		if (n == 0)
			return (1.0);
		if (n == 1)
			return (x);
		double half = _pow(x, n/2);
		if (n % 2 == 1)
			return (half * half * x);
		return (half * half);
	}
};
