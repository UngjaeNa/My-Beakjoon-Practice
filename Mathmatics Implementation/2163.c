#include <stdio.h>

int main()
{
	int M, N, res;
	scanf("%d%d", &M, &N);
	
	res = (N - 1) + N * (M - 1);
	
	printf("%d", res);
	return 0;
}
