// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	bool isPalindrome(int x) {

		long long reverse = 0;
		int n = x;

		if (x < 0)
			return (false);

		while (n != 0) {
			reverse = reverse * 10 + n % 10;
			n /= 10;
		}

		return ((long long)x == reverse);
	}

};
