#include <iostream>

using namespace std;

double CalcPrice(double, double);

int main()
{
	double X, Y;
	int N;
	double min, temp;

	cin >> X >> Y;
	cin >> N;

	min = CalcPrice(X, Y);

	for (int i = 0; i < N; i++)
	{
		cin >> X >> Y;
		temp = CalcPrice(X, Y);
		if (min > temp) min = temp;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << min;

	return 0;
}

double CalcPrice(double X, double Y)
{
	return X / Y * 1000;
}