#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n; cin >> n;

	for (int i = 0; i < n; i++)
	{
		vector<int> price;
		vector<string> name;

		int p; cin >> p;
		for (int i = 0; i < p; i++)
		{
			int pr; cin >> pr;
			string n; cin >> n;
			price.push_back(pr);
			name.push_back(n);
		}

		int maxi = 0;
		for (int i = 0; i < p; i++)
		{
			if (price[maxi] < price[i])
				maxi = i;
		}

		cout << name[maxi] << '\n';

		price.clear();
		name.clear();
	}

	return 0;
}