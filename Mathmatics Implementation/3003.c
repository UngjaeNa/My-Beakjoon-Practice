#include <stdio.h>

int main()
{
	int org[6] = {1, 1, 2, 2, 2, 8};
	int a[6];
	
	for(int i = 0; i < 6; i++){
		scanf("%d", &a[i]);
		org[i] -= a[i];
	}
	
	for(int i = 0; i<6; i++){
		printf("%d ", org[i]);
	}
	return 0;
}
