#include <iostream>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int lowScores[10000];

	for (int i = 0; i < n; i++)
		cin >> lowScores[i];

	for (int i = 0; i < n; i++)
	{
		if (lowScores[i] < x)
			cout << lowScores[i] << " ";
	}

	cout << "\n";

	return 0;
}