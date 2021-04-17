#include <stdio.h>

int main()
{
	int GF = 1, BF = 1;
	
	while(1){
		scanf("%d%d", &BF, &GF);
		if(BF == 0 && GF == 0) break;
		printf("%d\n", BF+GF); 
	}
	return 0;
}