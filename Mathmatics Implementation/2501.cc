#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> aliquot;

	int N, K, count = 0;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			aliquot.push_back(i);
			count++;
		}
	}

	if (count < K) cout << 0;
	else cout << aliquot[K - 1];

	return 0;
}