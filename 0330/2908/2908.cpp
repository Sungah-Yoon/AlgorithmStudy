#include <iostream>
#include <string>
using namespace std;

int readNum(int num)
{
	string result, temp;
	temp = to_string(num);
	for (int i = 2; i >= 0; i--)
		result += temp[i];

	return stoi(result);
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	num1 = readNum(num1);
	num2 = readNum(num2);

	if (num1 > num2)
		cout << num1 << '\n';
	else
		cout << num2 << '\n';

	return 0;
}