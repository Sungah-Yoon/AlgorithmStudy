#include <iostream>

using namespace std;

int main()
{
	int testcase; cin >> testcase;

	int c, v;
	int mine, dad;

	for (int i = 0; i < testcase; i++)
	{
		cin >> c >> v;

		mine = c / v;
		dad = c % v;

		cout << "You get " << mine << " piece(s) and your dad gets " << dad << " piece(s)." << '\n';
	}

	return 0;
}