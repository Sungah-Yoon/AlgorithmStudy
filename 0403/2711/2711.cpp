#include <iostream>
#include <string>
using namespace std;

int main()
{
	int testcase; cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int idx; cin >> idx;
		string input; cin >> input;

		for (int i = 0; i < input.size(); i++)
		{
			if (i + 1 != idx)
				cout << input[i];
		}

		cout << '\n';
	}

	return 0;
}