#include <iostream>

using namespace std;

int main()
{
	int testcase; cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int v, e;
		cin >> v >> e;

		cout << 2 - v + e << '\n';
	}

	return 0;
}