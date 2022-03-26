#include <iostream>

using namespace std;

int main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	int h3, m3, s3;

	if (h1 > h2)
	{
		h2 += 24;
	}
	if (m1 > m2)
	{
		h2 -= 1;
		m2 += 60;
	}
	if (s1 > s2)
	{
		m2 -= 1;
		s2 += 60;
	}

	h3 = h2 - h1;
	m3 = m2 - m1;
	s3 = s2 - s1;

	cout << h3 << m3 << s3;

	return 0;
}