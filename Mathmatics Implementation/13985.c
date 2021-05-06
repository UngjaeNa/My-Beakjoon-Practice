#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, res;
	char plus, eq;

	scanf("%d %c %d %c %d", &a, &plus, &b, &eq, &c);
	res = a + b;
	
	if(res == c) printf("YES");
	else printf("NO");
	
	return 0; 
}