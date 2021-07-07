#include <iostream>

using namespace std;

int main()
{
	double input, prev_input;
	int count = 0;

	while(1)
	{
		count++;
		cin >> input;

		if (input == 999) break;

		else if (count != 1)
		{
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << input - prev_input << endl;
		}

		prev_input = input;
	}

	return 0;
}