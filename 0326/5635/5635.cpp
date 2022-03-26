#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<pair<pair<int, int>, pair<int, string>>> stu(n);

	for (int i = 0; i < n; i++)
		cin >> stu[i].second.second >> stu[i].second.first >> stu[i].first.second >> stu[i].first.first;

	sort(stu.begin(), stu.end());
	cout << stu[n - 1].second.second << '\n' << stu[0].second.second << '\n';

	return 0;
}