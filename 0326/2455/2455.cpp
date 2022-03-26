#include <iostream>

using namespace std;
int main()
{
	int max = 0;
	int num = 0;
	for (int i = 0; i < 4; i++)
	{
		int in, out;
		cin >> out >> in;

		num += in;
		num -= out;

		if (num > max)
			max = num;
	}

	cout << max << '\n';

	return 0;
}