#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	for (int i = 1; i <= 5; i++)
	{
		int input; cin >> input;
		sum += input;
	}

	cout << sum << '\n';

	return 0;
}