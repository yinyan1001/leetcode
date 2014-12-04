// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <stack>
#include <string>

using namespace std;

class Solution {

public:

	string intToRoman(int num) {
		stack<string> digits;
		string roman;
		int unit = 0;

		// 罗马数字是按照每个十进制位分别表示的
		while (num != 0) {
			int n = num % 10;
			num /= 10;
			if (n != 0)
				digits.push(toRoman(n, unit));
			unit++;
		}

		while (!digits.empty()) {
			roman += digits.top();
			digits.pop();
		}

		return (roman);
	}

private:

	const struct {
		char one, five;
	} table[4] = {
		// 1    5
		{ 'I', 'V' },
		{ 'X', 'L' },
		{ 'C', 'D' },
		{ 'M',     }
	};

	/*
	 * num > 0 && num <= 9
	 */
	string toRoman(int num, int unit) {
		string digit;

		// 个位数举例
		//
		// 1 I    4 IV   5 V      9 IX
		// 2 II          6 VI
		// 3 III         7 VII
		//               8 VIII
		if (num <= 3) {
			digit.append(num, table[unit].one);
		} else if (num == 4) {
			digit.append(1, table[unit].one);
			digit.append(1, table[unit].five);
		} else if (num <= 8) {
			digit.append(1, table[unit].five);
			digit.append(num-5, table[unit].one);
		} else if (num == 9) {
			digit.append(1, table[unit].one);
			digit.append(1, table[unit+1].one);
		}

		return (digit);
	}
};
