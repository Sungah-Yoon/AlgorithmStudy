#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int max = 0;
	int scores[1000];

	for (int i = 0; i < n; i++)
	{
		int score; cin >> score;
		scores[i] = score;

		if (score > max)
			max = score;
	}

	float sum = 0;
	float tempScore;
	for (int i = 0; i < n; i++)
	{
		tempScore = (scores[i] / float(max) * 100);
		sum += tempScore;
	}

	cout << sum / n << '\n';

	return 0;
}