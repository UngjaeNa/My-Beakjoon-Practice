#include <stdio.h>

int main()
{
	int n1, k1, n2, k2;
	int res;
	
	scanf("%d%d%d%d", &n1, &k1, &n2, &k2);
	
	res = n1 * k1 + n2 * k2;
	
	printf("%d", res);
	return 0;
}