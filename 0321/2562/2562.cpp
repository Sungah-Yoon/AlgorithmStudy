#include <iostream>

using namespace std;

int main()
{
	int maxNum = 0;
	int maxIdx = 0;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		int num; cin >> num;
		arr[i] = num;
		if (num > maxNum)
		{
			maxNum = num;
			maxIdx = i;
		}
	}

	cout << maxNum << "\n" << (maxIdx+1) << "\n";

	return 0;
}