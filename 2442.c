#include <stdio.h>

int main()
{
	int i, j, n;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=1; j<=n+i; j++){
			if(j<=n-i-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}