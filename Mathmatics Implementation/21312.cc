#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int input[3];
	vector<int> odd;
	vector<int> even;
	int countOdd = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];

		if (input[i] % 2 != 0)
		{
			odd.push_back(input[i]);
			countOdd++;
		}

		if (input[i] % 2 == 0)
		{
			even.push_back(input[i]);
		}
	}

	switch (countOdd)
	{
	case 3:
		cout << odd[0] * odd[1] * odd[2];
		break;

	case 2:
		cout << odd[0] * odd[1];
		break;

	case 1:
		cout << odd[0];
		break;

	case 0:
		cout << even[0] * even[1] * even[2];
		break;
	}

	return 0;
}