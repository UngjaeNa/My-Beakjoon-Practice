#include <stdio.h>

int main()
{
	int a[3], b[2];
	int i;
	int min_a, min_b;
	int sum = 0;
	
	min_a = min_b = 2000; 
	
	for(i=0; i<3; i++){
		scanf("%d", &a[i]);
		if(min_a > a[i]) min_a = a[i];
	}
	
	for(i=0; i<2; i++){
		scanf("%d", &b[i]);
		if(min_b > b[i]) min_b = b[i];
	}
	
	sum = min_a + min_b - 50;
	
	printf("%d", sum);
	return 0;
}