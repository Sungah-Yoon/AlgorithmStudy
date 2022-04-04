#include <iostream>
using namespace std;

int main()
{
	int max = 0, maxi=0;
	for (int i = 1; i <= 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int num; cin >> num;
			sum += num;
		}

		if (sum > max)
		{
			max = sum;
			maxi = i;
		}
	}

	cout << maxi << " " << max << '\n';

	return 0;
}