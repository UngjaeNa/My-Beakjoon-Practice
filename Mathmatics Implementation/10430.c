#include <stdio.h>

int main()
{
	int a, b, c;
	int r1, r2, r3, r4;
	scanf("%d%d%d", &a, &b, &c);
	
	r1 = (a+b)%c;
	r2 = ((a%c) + (b%c))%c;
	r3 = (a*b)%c;
	r4 = ((a%c) * (b%c))%c;
	printf("%d\n%d\n%d\n%d\n",r1, r2, r3, r4);
	return 0;
}
