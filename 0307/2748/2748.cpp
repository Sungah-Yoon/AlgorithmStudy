#include <iostream>

using namespace std;

// ���� case���� num�� 90 ������ �ڿ��� �̹Ƿ� 90�� �������� ������� �ſ� ū ��
// ���� int �ڷ����� �ƴ� long long�� ���־�� ��
long long Fibonacci(int num)
{
	if (num <= 1) return num;
	return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main()
{
	int n; cin >> n;

	cout << Fibonacci(n) << '\n';

	return 0;
}