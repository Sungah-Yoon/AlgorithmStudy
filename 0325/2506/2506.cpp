#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 0;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		int score; cin >> score;

		if (score == 0)
		{
			flag = false;
			count = 0;
		}

		if (flag)
		{
			count++;
			sum += count;
		}
	}

	cout << sum << '\n';

	return 0;
}