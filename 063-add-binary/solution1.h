// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		string sum;
		int i = a.size() - 1;
		int j = b.size() - 1;
		int carry = 0;
		for ( ; i >= 0 && j >= 0; i--, j--) {
			int bit = (a[i] + b[j] - '0' * 2) + carry;
			carry = bit >> 1;
			bit = bit & 1;
			sum.append(1, bit + '0');
		}
		for (; i >= 0; i--) {
			int bit = (a[i] - '0') + carry;
			carry = bit >> 1;
			bit = bit & 1;
			sum.append(1, bit + '0');
		}
		for (; j >= 0; j--) {
			int bit = (b[j] - '0') + carry;
			carry = bit >> 1;
			bit = bit & 1;
			sum.append(1, bit + '0');
		}
		while (carry != 0) {
			sum.append(1, (carry & 1) + '0');
			carry >>= 1;
		}
		reverse(sum.begin(), sum.end());
		return (sum);
	}
};
