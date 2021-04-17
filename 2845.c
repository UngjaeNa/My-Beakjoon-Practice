#include <stdio.h>

int main()
{
	int L, P, a1, a2, a3, a4, a5, B;
	scanf("%d%d%d%d%d%d%d", &L, &P, &a1, &a2, &a3, &a4, &a5);
	
	B = L * P;
	
	printf("%d %d %d %d %d", a1-B, a2-B, a3-B, a4-B, a5-B);
	return 0;
}