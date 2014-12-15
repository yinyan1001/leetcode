// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <cstring>

using namespace std;

class Solution {

public:

	int lengthOfLastWord(const char *s) {
		int length = 0;
		int i = strlen(s) - 1;
		while (i >= 0 && s[i] == ' ')
			i--;

		while (i >= 0 && s[i] != ' ') {
			length++;
			i--;
		}

		return (length);
	}
};

