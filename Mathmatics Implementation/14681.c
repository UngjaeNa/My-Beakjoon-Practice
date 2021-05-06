#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if(x>0 && y>0) printf("%d", 1);
	if(x>0 && y<0) printf("%d", 4);
	if(x<0 && y>0) printf("%d", 2);
	if(x<0 && y<0) printf("%d", 3);
	return 0;
}