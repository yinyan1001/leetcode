
using namespace std;

class Solution {

public:

	int reverse(int x) {
		long long sign = (x < 0) ? -1 : 1;
		long long n = (x < 0) ? -x : x;
		long long m;

		m = 0;
		while (n != 0) {
			m = m * 10 + n % 10;
			n /= 10;
		}

		m *= sign;

		if (m < MIN_INT)
			m = 0;
		if (m > MAX_INT)
			m = 0;

		return ((int)m);
	}

private:

	const int MAX_INT = (int)(((unsigned int)~0)>>1);
	const int MIN_INT = (int)(((signed int)1) << 31);
};
