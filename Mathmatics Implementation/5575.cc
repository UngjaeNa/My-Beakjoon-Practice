#include <iostream>

using namespace std;

void calcTime(int h1, int m1, int s1, int h2, int m2, int s2)
{
	int h, m, s;
	if (s2 - s1 < 0)
	{
		s = s2 + 60 - s1;
		m2--;
	}
	else s = s2 - s1;

	if (m2 - m1 < 0)
	{
		m = m2 + 60 - m1;
		h2--;
	}
	else m = m2 - m1;

	h = h2 - h1;

	cout << h << " " << m << " " << s << endl;
	return;
}

int main()
{
	int AS[3], AF[3];
	int BS[3], BF[3];
	int CS[3], CF[3];

	cin >> AS[0] >> AS[1] >> AS[2] >> AF[0] >> AF[1] >> AF[2];
	cin >> BS[0] >> BS[1] >> BS[2] >> BF[0] >> BF[1] >> BF[2];
	cin >> CS[0] >> CS[1] >> CS[2] >> CF[0] >> CF[1] >> CF[2];

	calcTime(AS[0], AS[1], AS[2], AF[0], AF[1], AF[2]);
	calcTime(BS[0], BS[1], BS[2], BF[0], BF[1], BF[2]);
	calcTime(CS[0], CS[1], CS[2], CF[0], CF[1], CF[2]);
	return 0;
}