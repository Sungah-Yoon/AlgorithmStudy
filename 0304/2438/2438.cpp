#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n; cin >> n;
	string x = "*";

	for (int i = 0; i < n; i++)
	{
		cout << x << '\n';
		x += "*";
	}

	return 0;
}