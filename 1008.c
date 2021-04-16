#include <stdio.h>

int main()
{
	double a, b, res;
	scanf("%lf%lf", &a, &b);
	
	res = a/b;
	
	printf("%.15lf", res);
	return 0;
}