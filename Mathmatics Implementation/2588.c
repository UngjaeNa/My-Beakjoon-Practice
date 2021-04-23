#include <stdio.h>

int main()
{
	int a, b;
	int cal3, cal4, cal5;
	int res3, res4, res5, res6;
	
	scanf("%d%d", &a, &b);
	
	cal3 = b%10;
	res3 = a * cal3;
	
	cal4 = (b/10)%10;
	res4 = a * cal4;
	
	cal5 = b/100;
	res5 = a * cal5;
	
	res6 = res3 + res4 * 10 + res5 *100;
	
	printf("%d\n%d\n%d\n%d\n", res3, res4, res5, res6); 
	return 0;
}
