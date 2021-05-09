#include <iostream>

using namespace std;

int main()
{
	long long N, M, tile;
	
	cin >> N >> M;
	tile = (N/2)*M; 
	
	if((N%2)!= 0) tile += M/2;
	
	cout << tile;
	return 0;
}