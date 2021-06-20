#include <stdio.h>

int main()
{
	double n1, n2, n12;
	int N;
	scanf("%lf%lf%lf", &n1, &n2, &n12);
	
	N = (int)((n1+1)*(n2+1)/(n12+1) - 1);
	printf("%d", N); 
	return 0; 
}