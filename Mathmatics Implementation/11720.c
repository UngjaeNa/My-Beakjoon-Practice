#include <stdio.h>

int main()
{
	int n, sum = 0;
	int i;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		int x;
		scanf("%1d", &x);
		sum += x;
	}
	printf("%d", sum);
	return 0;
}