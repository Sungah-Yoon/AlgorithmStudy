#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t; cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n; cin >> n;

		int sum = 0;
		double grade = 0.0;

		for (int i = 0; i < n; i++)
		{
			int c;
			double g;
			cin >> c >> g;

			sum += c;
			grade += (c*g);
		}

		cout << sum << " " << round(grade / sum * 10) / 10 << '\n';
	}

	return 0;
}