#include <iostream>

using namespace std;

int main() {

	int k; cin >> k;

	for (int i = 0; i < k; i++) {
		int p, m;
		cin >> p >> m;

		int arr[501] = {0};
		int ans = 0;

		for (int i = 0; i < p; i++) {
			int seat; cin >> seat;
			arr[seat]++;
		}


		for (int i = 1; i <= m; i++) {
			if (arr[i] != 0)
				ans++;
		}

		cout << p - ans << endl;
	}

	return 0;
}