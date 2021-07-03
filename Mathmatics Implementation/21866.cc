#include <iostream>

using namespace std;

int main()
{
	int score[9] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	int input[9] = { 0 };
	bool hacker = false;
	int sumInput = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> input[i];
		sumInput += input[i];
		if (score[i] < input[i]) hacker = true;
	}

	if (sumInput < 100) cout << "none";
	else if (hacker == true) cout << "hacker";
	else cout << "draw";

	return 0;
}