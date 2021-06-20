#include <stdio.h>
#define PI 3.141592

int main()
{
	int d1, d2;
	double length;
	
	scanf("%d%d", &d1, &d2);
	
	length = 2 * d1 + 2 * d2 * PI;
	
	printf("%.6lf", length);
	return 0;
}