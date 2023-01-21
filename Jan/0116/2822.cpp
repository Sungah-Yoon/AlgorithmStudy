#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;
	vector<int> v_idx;
	int score;
	int answer = 0;

	for (int i = 0; i < 8; i++) {
		cin >> score;
		v.push_back(score);
	}

	for (int i = 0; i < 5; i++) {

		answer += *max_element(v.begin(), v.end());
		int max_idx = max_element(v.begin(), v.end()) - v.begin();
		v_idx.push_back(max_idx);
		v[max_idx] = 0;

	}
	
	cout << answer << endl;
	sort(v_idx.begin(), v_idx.end());
	for (auto i : v_idx)
		cout << i+1 << " ";

}