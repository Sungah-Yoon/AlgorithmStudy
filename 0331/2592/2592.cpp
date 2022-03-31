#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0, max = 0, ans;
	int arr[1001] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		sum += n;
		arr[n]++;
	}

	for (int i = 10; i < 1001; i += 10)
	{
		if (arr[i] && arr[i] > max)
		{
			max = arr[i];
			ans = i;
		}
	}

	cout << sum / 10 << '\n' << ans << '\n';

	return 0;
}