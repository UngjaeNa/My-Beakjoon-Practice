#include <stdio.h>

int main()
{
	int K, D, A;
	char slash[2];
	
	scanf("%d%c%d%c%d", &K, &slash[0], &D, &slash[1], &A);
	
	if( (K + A < D) || D==0) printf("hasu");
	else printf("gosu");
	return 0;
}