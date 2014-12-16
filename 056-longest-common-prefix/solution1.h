// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string> &strs) {
		string prefix;
		const int size = strs.size();

		if (size == 0)
			return (prefix);
		if (strs[0].length() == 0)
			return (prefix);

		int index = 0;
		char curr_ch = strs[0][0];
		while (true) {
			for (int i = 1; i < size; i++) {
				if (index == strs[i].length())
					goto out;
				if (curr_ch != strs[i][index])
					goto out;
			}
			prefix.append(1, curr_ch);
			index++;
			if (index == strs[0].length())
				goto out;
			curr_ch = strs[0][index];
		}
out:
		return (prefix);
	}
};
