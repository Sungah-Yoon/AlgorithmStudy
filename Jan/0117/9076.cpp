#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int t; cin >> t;

	for (int i = 0; i < t; i++) {

		vector<int> v;
		int score;
		int sum = 0;

		for (int i = 0; i < 5; i++) {
			cin >> score;
			v.push_back(score);
		}

		v.erase(max_element(v.begin(), v.end()));
		v.erase(min_element(v.begin(), v.end()));

		int differ = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
		if (differ >= 4)
			cout << "KIN" << endl;
		else {
			for (int i : v)
				sum += i;
			cout << sum << endl;
		}

	}

	return 0;
}