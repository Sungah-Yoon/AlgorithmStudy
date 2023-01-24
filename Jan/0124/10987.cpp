#include <iostream>

using namespace std;

int main() {

	string s; cin >> s;
	int n = 0;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			n++;
	}

	cout << n << endl;


	return 0;
}