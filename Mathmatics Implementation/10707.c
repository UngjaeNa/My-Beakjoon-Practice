#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A, B, C, D, P;
	int resX, resY;
	
	scanf("%d%d%d%d%d", &A, &B, &C, &D, &P);
	
	resX = A * P;
	
	if(P <= C) resY = B;
	else resY = B + (P - C) * D;
	
	if(resX < resY) printf("%d", resX);
	else printf("%d", resY);
	return 0; 
}
