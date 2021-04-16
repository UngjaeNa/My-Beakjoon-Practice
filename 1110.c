#include <stdio.h>

int main()
{
	int a, n=0, sum;
	int count = 0;
	scanf("%d", &a);
	if(a>=10) sum = (a/10) + (a%10);
	if(a<10) sum = a*10 + a;
	n = (a%10)*10 + (sum % 10);
	count++;
		
	while(1){
		if(n == a) break;
		sum = (n/10) + (n%10);
		n = (n%10)*10 + (sum % 10);
		count++;
	}
	printf("%d", count);
	return 0;
}