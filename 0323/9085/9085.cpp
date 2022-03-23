#include <iostream>
using namespace std;

int main()
{
	int testcase; cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int sum = 0;
		int n; cin >> n;

		for (int j = 0; j < n; j++)
		{
			int num; cin >> num;
			sum += num;
		}

		cout << sum << '\n';
	}

	return 0;
}