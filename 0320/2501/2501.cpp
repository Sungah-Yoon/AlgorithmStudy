#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	bool flag = true;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			k--;
			if (k == 0)
			{
				cout << i << "\n";
				flag = false;
			}
		}
	}

	if (flag)
		cout << "0" << '\n';

	return 0;
}