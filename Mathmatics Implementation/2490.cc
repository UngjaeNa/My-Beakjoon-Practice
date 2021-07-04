#include <iostream>

using namespace std;

int main()
{
	int yut[4] = { 0 };
	int count;

	for (int j = 0; j < 3; j++)
	{
		count = 0;

		for (int i = 0; i < 4; i++)
		{
			cin >> yut[i];
			if (yut[i] == 1) count++;
		}

		switch (count)
		{
		case 3:
			cout << 'A' << endl;
			break;

		case 2:
			cout << 'B' << endl;
			break;

		case 1:
			cout << 'C' << endl;
			break;

		case 0:
			cout << 'D' << endl;
			break;

		case 4:
			cout << 'E' << endl;
			break;
		}
	}

	return 0;
}