#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	int gcm = 0;
	int lcm = 0;
	cin >> x >> y;

	if (x < y) z = x;
	else z = y;

	for (int i = 2; i <= z; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			gcm = i;
			lcm = x * y / i;
		}
	}

	cout << gcm << '\n' << lcm << '\n';

	return 0;
}