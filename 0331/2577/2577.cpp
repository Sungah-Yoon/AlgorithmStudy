#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[10] = { 0 };
	int a, b, c;
	cin >> a >> b >> c;

	string num = to_string(a * b * c);

	for (int i = 0; i < num.length(); i++)
	{
		int temp = num[i]-48;
		arr[temp]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\n';
	}


	return 0;
}