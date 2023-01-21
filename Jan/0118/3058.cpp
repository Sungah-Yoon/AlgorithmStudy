#include <iostream>

using namespace std;

int main() {

	int t; cin >> t;

	for (int i = 0; i < t; i++) {

		int sum = 0;
		int min = 0;

		for (int i = 0; i < 7; i++) {
			int num; cin >> num;

			if (num % 2 == 0) {
				sum += num;
				if (min == 0 || min > num)
					min = num;
			}
		}
		
		cout << sum << " " << min << endl;
	}



	return 0;
}