// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<string> letterCombinations(string digits) {
		length = digits.length();
		string c(length, '.');

		combinations.clear();
		dfs(digits, 0, c);

		return (combinations);
	}

	Solution() {
		keyboard['0'] = "";
		keyboard['1'] = "";
		keyboard['2'] = "abc";
		keyboard['3'] = "def";
		keyboard['4'] = "ghi";
		keyboard['5'] = "jkl";
		keyboard['6'] = "mno";
		keyboard['7'] = "pqrs";
		keyboard['8'] = "tuv";
		keyboard['9'] = "wxyz";
	}

private:
	map<char, string> keyboard;
	vector<string> combinations;
	int length;

	void dfs(string digits, int depth, string &c) {
		if (depth == length) {
			combinations.push_back(c);
			return;
		}
		string alphas = keyboard[digits[depth]];
		const int size = alphas.length();
		for (int i = 0; i < size; i++) {
			c[depth] = alphas[i];
			dfs(digits, depth+1, c);
		}
	}
};
