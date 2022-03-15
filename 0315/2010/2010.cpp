#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 1;

	for (int i = 0; i < n; i++)
	{
		sum -= 1;

		int num; cin >> num;
		sum += num;
	}

	cout << sum << '\n';

	return 0;
}