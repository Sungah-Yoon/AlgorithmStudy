#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		// 앞에 공백 출력
		for (int j = 1; j <= n - i; j++)
			cout << " ";

		// 별 출력
		for (int j = 1; j <= 2*i-1; j++)
		{
			if (j % 2 == 0) cout << " ";
			else cout << "*";
		}
		
		cout << "\n";
	}

	return 0;
}