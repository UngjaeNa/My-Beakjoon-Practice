#include <stdio.h>

int main()
{
	double N, p1, p2;
	scanf("%lf", &N);
	
	p1 = N * 0.78;
	p2 = N - ((N*0.2)*0.22);
	
	printf("%d %d", (int)p1, (int)p2); 
	return 0;
}