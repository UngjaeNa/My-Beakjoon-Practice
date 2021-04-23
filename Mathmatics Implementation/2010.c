#include <stdio.h>

int main()
{
	int N, tot = 0;
	int M;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &M);
		tot += M;
	}
	
	printf("%d", tot - (N - 1));
	return 0;
}
