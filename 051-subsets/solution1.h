// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {

public:
	vector<vector<int> > subsets(vector<int> &S) {

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
		const int orig_size = set.size();
		set.push_back(S[depth]);
		dfs(depth + 1);
		set.resize(orig_size); // 回溯搜索(要复原)

		dfs(depth + 1);
	}
};
