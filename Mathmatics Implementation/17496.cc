#include <iostream>

using namespace std;

int main()
{
	int N, T, C, P;
	int income, day = 0, count = 1;

	cin >> N >> T >> C >> P;
	while (true)
	{
		count += T;
		if (count > N) break;
		day++;
	}
	income = day * C * P;

	cout << income;
	return 0;
}