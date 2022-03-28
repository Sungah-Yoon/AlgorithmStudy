#include <iostream>
using namespace std;

int GCD(int a, int b) {
	while (true)
	{
		int r = a % b;
		if (r == 0)
			return b;

		a = b;
		b = r;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;

	int gcd, lcm; 
	if (a > b)
		gcd = GCD(a, b);
	else
		gcd = GCD(b, a);

	lcm = a * b / gcd;

	cout << gcd << '\n' << lcm << '\n';

	return 0;
}