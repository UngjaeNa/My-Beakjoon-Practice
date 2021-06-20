#include <iostream>

using namespace std;

int main()
{
	int J;
	cin >> J;

	if (J < 4) cout << 0;
	else
	{
		cout << (J - 1) * (J - 2) * (J - 3) / 6;
	}

	return 0;
}