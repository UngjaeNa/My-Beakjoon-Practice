#include <iostream>

using namespace std;

int main()
{
	int a[6];
	int sum = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	cout << sum * 5;
	return 0;
}