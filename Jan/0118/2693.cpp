#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int t; cin >> t;

	for (int i = 0; i < t; i++) {

		vector<int> v;
		int num;

		for (int i = 0; i < 10; i++) {
			cin >> num;
			v.push_back(num);
		}

		sort(v.begin(), v.end(), greater<>());
		cout << v[2] << endl;

	}


	return 0;
}