#include <stdio.h>

int main()
{
	int L, t;
	scanf("%d", &L);
	
	if(L%5 == 0) t = L/5;
	else t = L/5 + 1;
	
	printf("%d", t);
	return 0;
}