#include <stdio.h>
#include <math.h>

int main()
{
	double n1, n2, n3;
	double k;
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	
	k = sqrt(pow(n1, 2.0)/(pow(n2, 2.0)+pow(n3, 2.0)));
	
	printf("%d %d", (int)(n2*k), (int)(n3*k));
	return 0; 
}