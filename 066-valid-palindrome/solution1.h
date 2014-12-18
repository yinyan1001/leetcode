// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <cctype>

using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		int begin = 0;
		int end = s.length() - 1;
		while (true) {
			while (begin < end && !isalnum(s[begin]))
				begin++;
			while (begin < end && !isalnum(s[end]))
				end--;
			if (begin >= end)
				break;

			if (toupper(s[begin]) != toupper(s[end]))
				return (false);
			begin++;
			end--;
		}
		return (true);
	}
};
