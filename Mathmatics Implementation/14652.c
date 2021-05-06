#include <stdio.h>
#include <string.h>

int main()
{
	int N, M, K;
	scanf("%d%d%d", &N, &M, &K);

	printf("%d %d", K/M, K%M);
	return 0;
}