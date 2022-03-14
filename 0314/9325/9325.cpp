#include <iostream>
using namespace std;

int main()
{
	int testcase; cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int sum = 0;

		int s; cin >> s;
		sum += s;

		int n; cin >> n;
		for(int j = 0; j < n; j++)
		{
			int q, p;
			cin >> q >> p;
			sum += q * p;
		}

		cout << sum << '\n';
	}

	return 0;
}