#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> w, k;
	int score;
	int w_sum = 0;
	int k_sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> score;
		w.push_back(score);
	}

	for (int i = 0; i < 10; i++) {
		cin >> score;
		k.push_back(score);
	}

	for (int i = 0; i < 3; i++) {
		w_sum += *max_element(w.begin(), w.end());
		w.erase(max_element(w.begin(), w.end()));
	}

	for (int i = 0; i < 3; i++) {
		k_sum += *max_element(k.begin(), k.end());
		k.erase(max_element(k.begin(), k.end()));
	}

	cout << w_sum << " " << k_sum << endl;


	return 0;
}