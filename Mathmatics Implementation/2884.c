#include <stdio.h>

int main()
{
	int H, M;
	scanf("%d%d", &H, &M);
	
	if(M>=45) printf("%d %d", H, M-45);
	if(H>0 && M<45) printf("%d %d", H-1, 60-(45-M));
	if(H==0 && M<45) printf("%d %d", 23, 60-(45-M));
	return 0;
}
