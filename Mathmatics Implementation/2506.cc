#include <iostream>

using namespace std;

int main()
{
	int N, add = 0, total = 0;
	int prev_input = 0, input;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (input == 1)
		{
			total++;
			if (prev_input == 1)
			{
				add++;
				total += add;
			}
			else
			{
				add = 0;
			}
			prev_input = input;
		}
		else if (input == 0)
		{
			prev_input = input;
		}
	}

	cout << total;
	return 0;
}