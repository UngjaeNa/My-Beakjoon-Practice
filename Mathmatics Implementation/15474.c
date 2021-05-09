#include <stdio.h>

int main()
{
	int N, A, B, C, D;
	int resX = 0, resY = 0;
	int cntX = 0, cntY = 0;
	
	scanf("%d%d%d%d%d", &N, &A, &B, &C, &D);
	
	while(cntX < N){
		resX += B;
		cntX += A;
	}
	while(cntY < N){
		resY += D;
		cntY+= C;
	}
	
	if(resX < resY) printf("%d", resX);
	else printf("%d", resY);
	return 0;
}