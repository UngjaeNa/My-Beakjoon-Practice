#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, double> score;
	string input;

	score["A+"] = 4.3;
	score["A0"] = 4.0;
	score["A-"] = 3.7;
	score["B+"] = 3.3;
	score["B0"] = 3.0;
	score["B-"] = 2.7;
	score["C+"] = 2.3;
	score["C0"] = 2.0;
	score["C-"] = 1.7;
	score["D+"] = 1.3;
	score["D0"] = 1.0;
	score["D-"] = 0.7;
	score["F"] = 0.0;

	cin >> input;

	cout.setf(ios::fixed);
	cout.precision(1);
	cout << score[input];
	return 0;
}