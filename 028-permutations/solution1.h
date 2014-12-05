// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	vector<vector<int> > permute(vector<int> &num) {
		vector<int> perm;
		vector<bool> used(num.size(), false);

		backtrack(num, perm, used, num.size());

		return (permutations);
	}

private:
	vector<vector<int> > permutations;

	void backtrack(vector<int> num, vector<int> perm, vector<bool> used,
		       int left) {
		if (left == 0) {
			permutations.push_back(perm);
			return;
		}

		const int size = num.size();
		for (int i = 0; i < size; i++) {
			if (used[i])
				continue;

			used[i] = true;
			perm.push_back(num[i]);

			backtrack(num, perm, used, left-1);

			used[i] = false;
			perm.pop_back();
		}
	}
};
