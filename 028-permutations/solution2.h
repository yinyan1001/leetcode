// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

#include <vector>

using namespace std;

class Solution {

public:

	vector<vector<int> > permute(vector<int> &num) {

		vector<vector<int> > permutations;

		sort(num.begin(), num.end());
		do {
			permutations.push_back(num);
		} while (get_next_permu(num, 0, num.size()-1));

		return (permutations);
	}

private:

	bool get_next_permu(vector<int> &num, int begin, int end) {
		int j = end - 1;
		while (num[j] >= num[j+1] && j >= 0) {
			j--;
		}

		if (j < begin) {
			return (false);
		}

		int i = end;
		while (num[j] >= num[i]) {
			i--;
		}

		swap(num[j], num[i]);

		int l = j + 1, r = end;
		while (l < r) {
			swap(num[l], num[r]);
			l++;
			r--;
		}

		return (true);
	}
};

