// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {

public:

	/*
	 * 从右向左扫描：
	 *
	 * 1. 第一个数一定是正的；
	 * 2. 遇到相同数字，加到当前value中；
	 * 3. 遇到更小的数字，把当前value乘以符号，加到最终value中，
	 *    把符号设置为负，把遇到的这个数字设置为当前value；
	 * 4. 遇到更大的数字，把当前value乘以符号，加到最终value中，
	 *    把符号设置为正，把遇到的这个数字设置为当前value；
	 * 5. 扫描完所有的字符，把当前value乘以符号，加到最终value中；
	 */
	int romanToInt(string s) {
		int value = 0;

		const int size = s.length();
		int pre_num = token_to_int(s[size - 1]);
		int cur_value = pre_num;
		int sign = 1;

		for (int i = size - 2; i >= 0; i--) {
			int cur_num = token_to_int(s[i]);
			if (cur_num == pre_num) {
				cur_value += pre_num;
			} else {
				value += sign * cur_value;
				sign = (cur_num < pre_num) ? -1 : 1;
				cur_value = cur_num;
				pre_num = cur_num;
			}
		}
		value += sign * cur_value;

		return (value);
	}

private:

	int token_to_int(char token) {
		switch (token) {
		case 'I':
			return (1);
		case 'V':
			return (5);
		case 'X':
			return (10);
		case 'L':
			return (50);
		case 'C':
			return (100);
		case 'D':
			return (500);
		case 'M':
			return (1000);
		}
		return (-1);
	}
};
