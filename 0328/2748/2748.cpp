#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;

	long long arr[90] = { 0,1, };

	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n] << '\n';

	return 0;
}