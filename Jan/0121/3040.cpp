#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;
	vector<int> v;
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		v.push_back(n);
	}

	for (int i : v)
		sum += i;

	int temp = sum - 100;
	bool flag = false;

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (temp == (v[i] + v[j])) {
				v.erase(v.begin() + i);
				v.erase(v.begin() + (j-1));
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}

	for (int i : v)
		cout << i << endl;

	return 0;
}