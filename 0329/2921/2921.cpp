#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
            sum += j + i;
    }
    cout << sum << '\n';
}