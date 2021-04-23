#include <stdio.h>

int main()
{
	int a, b, T, i;
	scanf("%d", &T);
	for(i=0; i<T; i++){
		scanf("%d %d", &a, &b);
	    printf("%d\n", a + b);
	}
	return 0;
}
