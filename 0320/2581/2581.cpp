#include <iostream>

using namespace std;

bool is_prime(int num)
{
	if (num < 2)
		return false;

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int m, n;
	cin >> m >> n;

	int sum = 0;
	int min = 0;

	for (int i = m; i <= n; i++)
	{
		if (is_prime(i))
		{
			sum += i;
			if (min == 0)
				min = i;
		}
	}

	if (min == 0)
		cout << "-1" << '\n';
	else
		cout << sum << "\n" << min << "\n";


	return 0;
}