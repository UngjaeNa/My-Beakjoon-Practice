#include <stdio.h>

int main()
{
	int a[5];
	int tot = 0;
	int avg, i=0;
	
	while(i<5){
		scanf("%d", &a[i]);
		if(a[i]<40) a[i] = 40;
		tot += a[i];
		i++;
	}
	
	avg = tot / 5;
	
	printf("%d", avg);
	return 0;
}
