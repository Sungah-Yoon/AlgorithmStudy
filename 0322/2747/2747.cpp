#include <iostream>

using namespace std;

int main()
{
	int arr[46];
	arr[0] = 0;
	arr[1] = 1;

	int n; cin >> n;
	
	for (int i = 2; i <= n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	cout << arr[n] << '\n';

	return 0;
}