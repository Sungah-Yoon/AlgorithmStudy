#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		int stu, total;
		cin >> stu >> total;

		for (int i = 1;; i++)
		{
			if (stu * i > total)
			{
				sum += total - (stu * (i - 1));
				break;
			}
		}
	}

	cout << sum << '\n';

	return 0;
}