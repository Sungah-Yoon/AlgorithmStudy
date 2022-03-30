#include <iostream>
using namespace std;

int main()
{
	int total = 0, max = 0;
	for (int i = 0; i < 10; i++)
	{
		int in; int out;
		cin >> out >> in;

		total -= out;
		total += in;

		if (total > max)
			max = total;
	}

	cout << max << '\n';

	return 0;
}