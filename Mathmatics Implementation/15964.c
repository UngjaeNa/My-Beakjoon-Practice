#include <stdio.h>

int main()
{
	long long int a, b;
	long long int res;

	scanf("%lld%lld", &a, &b);
	
	res = (a + b) * (a - b);
	
	printf("%lld", res);
	return 0;
 } 