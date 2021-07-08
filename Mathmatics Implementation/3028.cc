#include <iostream>
#include <string>

using namespace std;

class cup
{
public:
	bool ball;

	void change();
};

void cup::change()
{
	if (ball) ball = false;
	else ball = true;
}


int main()
{
	cup cup1, cup2, cup3;
	cup1.ball = true;
	cup2.ball = false;
	cup3.ball = false;

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		switch (input[i])
		{
		case 'A':
			if (cup1.ball || cup2.ball)
			{
				cup1.change();
				cup2.change();
			}
			break;
		case 'B':
			if (cup2.ball || cup3.ball)
			{
				cup2.change();
				cup3.change();
			}
			break;
		case 'C':
			if (cup1.ball || cup3.ball)
			{
				cup1.change();
				cup3.change();
			}
			break;
		}
	}

	if (cup1.ball) cout << 1;
	if (cup2.ball) cout << 2;
	if (cup3.ball) cout << 3;

	return 0;
}