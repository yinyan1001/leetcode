// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {

public:
	vector<vector<int> > subsetsWithDup(vector<int> &S) {

		sort(S.begin(), S.end());
		this->S = S;
		this->size = S.size();

		sets.clear();
		if (this->size == 0)
			return (sets);

		dfs(0);
		return (sets);
	}

private:
	vector<vector<int> > sets;
	vector<int> set;

	vector<int> S;
	int size;

	void dfs(int depth) {
		if (depth == size) {
			sets.push_back(set);
			return;
		}

		int n = 1;
		while (depth + n < size && S[depth] == S[depth+n])
			n++;

		const int orig_size = set.size();
		// 取 0个、1个、... n个
		for (int i = 0; i <= n; i++) {
			set.resize(orig_size);
			for (int h = 0; h < i; h++)
				set.push_back(S[depth]);
			dfs(depth + n);
		}
	}
};
