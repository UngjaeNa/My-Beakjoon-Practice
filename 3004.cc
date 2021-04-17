#include <iostream>

using namespace std;

int main()
{
	int N, res = 0, add = 2, count = -1;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		res += add;
		count++;
		if(count == 2){
			add++;
			count = 0;
		}
	}
	
	cout << res;
	return 0;
}