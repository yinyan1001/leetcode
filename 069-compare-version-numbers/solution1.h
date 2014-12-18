// Author: Tiwei Bie (btw@mail.ustc.edu.cn)

using namespace std;

class Solution {
public:
	int compareVersion(string version1, string version2) {
		while (true) {
			int v1 = decode(version1);
			int v2 = decode(version2);
			if (v1 < v2)
				return (-1);
			if (v1 > v2)
				return (1);
			if (version1.size() == 0 && version2.size() == 0)
				return (0);
		}
	}

private:
	int decode(string &version) {
		int size = version.size();
		int i = 0;
		while (i < size && version[i] == '.')
			i++;
		if (i == size) {
			version = "";
			return (0);
		}
		version = version.substr(i, size - i);
		size = version.size();

		int v = 0;
		i = 0;
		while (i < size && version[i] != '.') {
			v = v * 10 + (version[i] - '0');
			i++;
		}
		version = (i == size) ? "": version.substr(i, size - i);
		return (v);
	}
};
