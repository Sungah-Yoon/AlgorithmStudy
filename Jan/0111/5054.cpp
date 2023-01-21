#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int t; cin >> t;

	for (int i = 0; i < t; i++) {

		int n; cin >> n;
		int xi;
		vector<int> stores = {};

		for (int i = 0; i < n; i++) {
			cin >> xi;
			stores.push_back(xi);
		}

		sort(stores.begin(), stores.end());


		int distance = 0;
		int temp;

		for (int i = 0; i < n; i++) {

			if (i == (n - 1))
				distance += stores[i] - stores[0];
			else
				distance += stores[i + 1] - stores[i];


		}

		cout << distance << endl;


	}


	return 0;
}