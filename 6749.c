#include <stdio.h>

int main()
{
	int Y, M, d;
	scanf("%d%d", &Y, &M);
	
	d = M - Y;
	
	printf("%d", d+M);
	return 0;
}