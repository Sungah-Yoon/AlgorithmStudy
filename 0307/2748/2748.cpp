#include <iostream>

using namespace std;

// 문제 case에서 num이 90 이하의 자연수 이므로 90에 가까울수록 결과값은 매우 큰 수
// 따라서 int 자료형이 아닌 long long을 써주어야 함
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