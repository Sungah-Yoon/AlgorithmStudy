#include <iostream>

using namespace std;

int main()
{
	int testcase; cin >> testcase;

	for (int i = 1; i <= testcase; i++)
	{
		int x, y;
		cin >> x >> y;

		cout << "Case " << i << ": " << x + y << '\n';
	}

	return 0;
}