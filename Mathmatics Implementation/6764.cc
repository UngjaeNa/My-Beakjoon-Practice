#include <iostream>

using namespace std;

bool CheckUp(int a[]);
bool CheckDown(int a[]);
bool CheckSame(int a[]);

int main()
{
	int a[4];
	bool sign = false;

	cin >> a[0] >> a[1] >> a[2] >> a[3];

	sign = CheckUp(a);
	if (sign == true)
	{
		cout << "Fish Rising";
		return 0;
	}

	sign = CheckDown(a);
	if (sign == true)
	{
		cout << "Fish Diving";
		return 0;
	}

	sign = CheckSame(a);
	if (sign == true)
	{
		cout << "Fish At Constant Depth";
		return 0;
	}

	cout << "No Fish";
	return 0;
}

bool CheckUp(int a[])
{
	for (int i = 0; i < 3; i++)
	{
		if (a[i] >= a[i + 1]) return false;
	}

	return true;
}

bool CheckDown(int a[])
{
	for (int i = 0; i < 3; i++)
	{
		if (a[i] <= a[i + 1]) return false;
	}

	return true;
}

bool CheckSame(int a[])
{
	for (int i = 0; i < 3; i++)
	{
		if (a[i] != a[i + 1]) return false;
	}

	return true;
}