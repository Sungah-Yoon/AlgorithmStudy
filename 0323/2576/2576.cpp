#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int min = 0;

	for (int i = 0; i < 7 ; i++)
	{
		int n; cin >> n;

		if (n % 2 == 1)
		{
			sum += n;
			if (min == 0)
				min = n;
			if (n < min)
				min = n;
		}
	}

	if (sum == 0)
		cout << "-1" << "\n";
	else
		cout << sum << "\n" << min << "\n";
	
	return 0;
}