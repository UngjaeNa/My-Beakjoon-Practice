#include <stdio.h>

int main()
{
	int a, b, c, res, i;
	int d[10]={0};
	scanf("%d%d%d", &a, &b, &c);
	
	res = a * b * c;
	
	do{
		d[res%10]++;
		res = res / 10;
	}while (res / 10 != 0);
	
	d[res]++;
	
	for(i=0; i<10; i++){
		printf("%d\n", d[i]);
	}
	return 0;
}
