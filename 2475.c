#include <stdio.h>

int sq(int a){
	return a * a;
}

int main()
{
	int ary[5];
	int sum = 0;
	
	for(int i = 0; i<5; i++){
		scanf("%d", &ary[i]);
		sum += sq(ary[i]);
	}
	
	printf("%d", sum%10);
	return 0;
}