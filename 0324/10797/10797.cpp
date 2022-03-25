#include <iostream>
using namespace std;

int main()
{
	int date; cin >> date;
	int count = 0;
	
	for (int i = 0; i < 5; i++)
	{
		int car; cin >> car;

		if (car == date)
			count++;
	}

	cout << count << '\n';

	return 0;
}